#include "maintab.h"
#include "ui_maintab.h"
#include <QDebug>
#include <QMessageBox>
#include <libraries/mavlink/include/all/mavlink.h>
#include <QThread>

MainTab::MainTab(QWidget *parent) : QWidget(parent), ui(new Ui::MainTab) {
    ui->setupUi(this);
    serialPort = new QSerialPort(this);
    sendTimer = new QTimer(this);

    // Populate baud rates
    ui->baudRateComboBox->addItems({"57600", "115200", "921600"});
    ui->baudRateComboBox->setCurrentText("115200");

    // Refresh available ports every 2 seconds
    portRefreshTimer = new QTimer(this);
    connect(portRefreshTimer, &QTimer::timeout, this, &MainTab::refreshPorts);
    portRefreshTimer->start(2000);

    // Connect buttons to their respective slots
    connect(ui->connectButton, &QPushButton::clicked, this, &MainTab::connectToMavlink);
    connect(ui->disconnectButton, &QPushButton::clicked, this, &MainTab::disconnectFromMavlink);
    connect(ui->sendButton, &QPushButton::clicked, this, &MainTab::sendMessage);
    connect(serialPort, &QSerialPort::readyRead, this, &MainTab::readMessage);
    connect(ui->runTestButton, &QPushButton::clicked, this, &MainTab::runTests);
    connect(sendTimer, &QTimer::timeout, this, &MainTab::sendRepeatedCommand);



    // Initial refresh of available ports
    refreshPorts();
    ui->disconnectButton->setEnabled(false);  // Disable disconnect button initially
}

MainTab::~MainTab() {
    delete ui;
}

void MainTab::refreshPorts() {
    QString currentPort = ui->portComboBox->currentText();  // Remember the selected port
    ui->portComboBox->clear();  // Clear the combo box

    // Populate with available COM ports
    const auto ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : ports) {
        ui->portComboBox->addItem(info.portName());
    }

    // Reselect the previous port if available
    if (ui->portComboBox->findText(currentPort) != -1) {
        ui->portComboBox->setCurrentText(currentPort);
    }
}

void MainTab::connectToMavlink() {
    QString selectedPort = ui->portComboBox->currentText();
    int baudRate = ui->baudRateComboBox->currentText().toInt();

    if (selectedPort.isEmpty()) {
        QMessageBox::warning(this, "Connection Error", "No port selected!");
        return;
    }

    serialPort->setPortName(selectedPort);
    serialPort->setBaudRate(baudRate);

    if (serialPort->open(QIODevice::ReadWrite)) {
        qDebug() << "Connected to port:" << selectedPort << "at" << baudRate << "baud";
        updateStatus("Connected to " + selectedPort + " at " + QString::number(baudRate) + " baud.");
        ui->connectButton->setEnabled(false);
        ui->disconnectButton->setEnabled(true);
        ui->sendButton->setEnabled(true);
    } else {
        QMessageBox::critical(this, "Connection Error", "Failed to open serial port.");
        updateStatus("Failed to connect.");
    }
}

void MainTab::disconnectFromMavlink() {
    if (serialPort->isOpen()) {
        serialPort->close();
        updateStatus("Disconnected");
        ui->connectButton->setEnabled(true);
        ui->disconnectButton->setEnabled(false);
        ui->sendButton->setEnabled(false);
    }
}

void MainTab::sendMessage() {

    QString message = ui->messageInput->text().trimmed();
    if (message.isEmpty()) {
        QMessageBox::warning(this, "Error", "Cannot send an empty message.");
        return;
    }

    mavlink_message_t msg;
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    mavlink_statustext_t statustext;



    QByteArray messageBytes = message.toUtf8();  // Send message with newline
    strncpy(statustext.text, messageBytes.data(), sizeof(statustext.text) - 1);
    statustext.text[sizeof(statustext.text) - 1] = '\0';
    statustext.severity = MAV_SEVERITY_CRITICAL;
    mavlink_msg_statustext_encode(1, 200, &msg, &statustext);

    // Pack the message into a buffer
    int len = mavlink_msg_to_send_buffer(buffer, &msg);




    // Send the buffer over the serial port
    if (serialPort->isOpen()) {
        serialPort->write(reinterpret_cast<const char *>(buffer), len);
        ui->messageConsole->append("Sent: " + message);  // Log the sent message
        ui->messageInput->clear();  // Clear the input after sending
    } else {
        QMessageBox::critical(this, "Error", "Serial port is not open. Unable to send message.");
    }
}

void MainTab::readMessage() {
    QByteArray data = serialPort->readAll();  // Read all available data
    mavlink_message_t msg;
    mavlink_status_t status;

    // Parse the MAVLink data
    for (const unsigned char byte : data) {
        if (mavlink_parse_char(MAVLINK_COMM_0, byte, &msg, &status)) {
            if (msg.msgid == MAVLINK_MSG_ID_STATUSTEXT) {
                mavlink_statustext_t statustext;
                mavlink_msg_statustext_decode(&msg, &statustext);

                // Convert the text to a QString and display in the message console
                QString responseText = QString::fromUtf8(statustext.text);
                ui->messageConsole->append("Received: " + responseText);
                qDebug() << "Received STATUSTEXT:" << responseText;

                if (currentState == UNDER_TEST) {
                    if (responseText.contains(expectedResponse)) {
                        ui->messageConsole->append("Test Passed: " + currentCommand);
                        sendTimer->stop();
                        currentState = PASSED;

                        // Move to the next test based on the current test type
                        switch (currentTest) {
                        case TEST_UART:
                            currentTest = TEST_CAN;
                            sendCommandForCurrentTest(currentTest);
                            break;
                        case TEST_CAN:
                            currentTest = TEST_PWM;
                            sendCommandForCurrentTest(currentTest);
                            break;
                        case TEST_PWM:
                            ui->messageConsole->append("All tests completed successfully!");
                            resetUI();  // All tests done
                            break;
                        }
                    } else if (responseText.contains(failureResponse)) {
                        ui->messageConsole->append("Test Failed: " + currentCommand);
                        sendTimer->stop();
                        currentState = FAILED;
                        resetUI();
                        return;
                    }
                }
            }
        }
    }
}

void MainTab::resetUI() {
    currentState = IDLE;
    ui->connectButton->setEnabled(true);
    ui->disconnectButton->setEnabled(true);
    ui->runTestButton->setEnabled(true);
    ui->messageConsole->append("Test sequence completed.");
}


void MainTab::updateStatus(const QString &status) {
    ui->statusLabel->setText("Status: " + status);
    qDebug() << status;
}


void MainTab::runTests() {
    if (!serialPort->isOpen()) {
        QMessageBox::warning(this, "Error", "No active connection. Please connect to a port first.");
        return;
    }

    ui->messageConsole->append("Starting Test Sequence...");

    currentState = RUNNING;

    // Disable buttons during test
    ui->connectButton->setEnabled(false);
    ui->disconnectButton->setEnabled(false);
    ui->runTestButton->setEnabled(false);

    currentTest = TEST_UART;
    sendCommandForCurrentTest(currentTest);

    // currentTest = TEST_CAN;
    // sendCommandForCurrentTest(TEST_CAN);

    // currentTest = TEST_PWM;
    // sendCommandForCurrentTest(TEST_PWM);
}



void MainTab::sendCommandForCurrentTest(TestType testType) {
    mavlink_message_t msg;
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    mavlink_statustext_t statustext;

    switch (testType) {
    case TEST_UART:
        currentCommand = "TEST UART";
        expectedResponse = "UART TEST OK";
        failureResponse = "UART TEST FAILED";
        break;
    case TEST_CAN:
        currentCommand = "TEST CAN";
        expectedResponse = "CAN TEST OK";
        failureResponse = "CAN TEST FAILED";
        break;
    case TEST_PWM:
        currentCommand = "TEST PWM";
        expectedResponse = "PWM TEST OK";
        failureResponse = "PWM TEST FAILED";
        break;
    }

    ui->messageConsole->append("Sending: " + currentCommand);
    sendTimer->start(500);  // Start sending the command at 2 Hz (every 500 ms)

}

void MainTab::sendRepeatedCommand() {
    mavlink_message_t msg;
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    mavlink_statustext_t statustext;

    QByteArray commandBytes = currentCommand.toUtf8();
    strncpy(statustext.text, commandBytes.data(), sizeof(statustext.text) - 1);
    statustext.text[sizeof(statustext.text) - 1] = '\0';  // Null-terminate
    statustext.severity = MAV_SEVERITY_INFO;

    mavlink_msg_statustext_encode(1, 200, &msg, &statustext);
    int len = mavlink_msg_to_send_buffer(buffer, &msg);
    serialPort->write(reinterpret_cast<const char *>(buffer), len);
    ui->messageConsole->append("Sent: " + currentCommand);
}

bool MainTab::isConnected() const {
    return serialPort && serialPort->isOpen();
}

