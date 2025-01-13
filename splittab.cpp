#include "splittab.h"
#include "ui_splittab.h"
#include <libraries/mavlink/include/all/mavlink.h>
#include <cmath>  // For M_PI
#include <QSerialPortInfo>  // For available serial ports

SplitTab::SplitTab(QWidget *parent) : QWidget(parent), ui(new Ui::SplitTab) {
    ui->setupUi(this);

    // Initialize 3D models
    vehicle1Model = new Vehicle3DModel(ui->vehicle1OrientationWidget);
    vehicle2Model = new Vehicle3DModel(ui->vehicle2OrientationWidget);

    serialPort1 = new QSerialPort(this);
    serialPort2 = new QSerialPort(this);

    // Populate baud rates
    ui->baudRateComboBox1->addItems({"57600", "115200", "921600"});
    ui->baudRateComboBox2->addItems({"57600", "115200", "921600"});

    // Connect UI signals to slots
    connect(serialPort1, &QSerialPort::readyRead, this, &SplitTab::readMessage1);
    connect(serialPort2, &QSerialPort::readyRead, this, &SplitTab::readMessage2);

    connect(ui->connectButton1, &QPushButton::clicked, this, &SplitTab::connectToMavlink1);
    connect(ui->disconnectButton1, &QPushButton::clicked, this, &SplitTab::disconnectFromMavlink1);
    connect(ui->connectButton2, &QPushButton::clicked, this, &SplitTab::connectToMavlink2);
    connect(ui->disconnectButton2, &QPushButton::clicked, this, &SplitTab::disconnectFromMavlink2);

    // Timer for refreshing available ports
    portRefreshTimer = new QTimer(this);
    connect(portRefreshTimer, &QTimer::timeout, this, &SplitTab::refreshPorts);
    portRefreshTimer->start(2000);  // Refresh every 2 seconds
}

SplitTab::~SplitTab() {
    delete ui;
}

void SplitTab::connectToMavlink1() {
    QString portName = ui->portComboBox1->currentText();
    int baudRate = ui->baudRateComboBox1->currentText().toInt();
    serialPort1->setPortName(portName);
    serialPort1->setBaudRate(baudRate);
    if (serialPort1->open(QIODevice::ReadWrite)) {
        ui->vehicle1StatusLabel->setText("Vehicle 1: Connected");
    } else {
        ui->vehicle1StatusLabel->setText("Vehicle 1: Connection Failed");
    }
}

void SplitTab::disconnectFromMavlink1() {
    if (serialPort1->isOpen()) {
        serialPort1->close();
        ui->vehicle1StatusLabel->setText("Vehicle 1: Disconnected");
        ui->disconnectButton1->setEnabled(false);
        ui->connectButton1->setEnabled(true);
    }
}

void SplitTab::connectToMavlink2() {
    QString portName = ui->portComboBox2->currentText();
    int baudRate = ui->baudRateComboBox2->currentText().toInt();
    serialPort2->setPortName(portName);
    serialPort2->setBaudRate(baudRate);
    if (serialPort2->open(QIODevice::ReadWrite)) {
        ui->vehicle2StatusLabel->setText("Vehicle 2: Connected");
    } else {
        ui->vehicle2StatusLabel->setText("Vehicle 2: Connection Failed");
    }
}

void SplitTab::disconnectFromMavlink2() {
    if (serialPort2->isOpen()) {
        serialPort2->close();
        ui->vehicle2StatusLabel->setText("Vehicle 2: Disconnected");
        ui->disconnectButton2->setEnabled(false);
        ui->connectButton2->setEnabled(true);
    }
}

void SplitTab::refreshPorts() {
    QString currentPort1 = ui->portComboBox1->currentText();  // Save the current selection
    QString currentPort2 = ui->portComboBox2->currentText();  // Save the current selection

    ui->portComboBox1->blockSignals(true);  // Prevent selection change signals during refresh
    ui->portComboBox2->blockSignals(true);

    ui->portComboBox1->clear();
    ui->portComboBox2->clear();

    for (const QSerialPortInfo &port : QSerialPortInfo::availablePorts()) {
        ui->portComboBox1->addItem(port.portName());
        ui->portComboBox2->addItem(port.portName());
    }

    int index1 = ui->portComboBox1->findText(currentPort1);
    int index2 = ui->portComboBox2->findText(currentPort2);

    if (index1 != -1) {
        ui->portComboBox1->setCurrentIndex(index1);  // Restore previous selection
    }
    if (index2 != -1) {
        ui->portComboBox2->setCurrentIndex(index2);
    }

    ui->portComboBox1->blockSignals(false);  // Re-enable signals
    ui->portComboBox2->blockSignals(false);
}

void SplitTab::readMessage1() {
    QByteArray data = serialPort1->readAll();
    mavlink_message_t msg;
    mavlink_status_t status;

    for (const unsigned char byte : data) {
        if (mavlink_parse_char(MAVLINK_COMM_0, byte, &msg, &status)) {
            if (msg.msgid == MAVLINK_MSG_ID_ATTITUDE) {
                mavlink_attitude_t attitude;
                mavlink_msg_attitude_decode(&msg, &attitude);
                updateOrientation(vehicle1Model, attitude.roll, attitude.pitch, attitude.yaw);
            }
        }
    }
}

void SplitTab::readMessage2() {
    QByteArray data = serialPort2->readAll();
    mavlink_message_t msg;
    mavlink_status_t status;

    for (const unsigned char byte : data) {
        if (mavlink_parse_char(MAVLINK_COMM_1, byte, &msg, &status)) {
            if (msg.msgid == MAVLINK_MSG_ID_ATTITUDE) {
                mavlink_attitude_t attitude;
                mavlink_msg_attitude_decode(&msg, &attitude);
                updateOrientation(vehicle2Model, attitude.roll, attitude.pitch, attitude.yaw);
            }
        }
    }
}

void SplitTab::updateOrientation(Vehicle3DModel *vehicleModel, float roll, float pitch, float yaw) {
    vehicleModel->setRotation(roll * 180 / M_PI, pitch * 180 / M_PI, yaw * 180 / M_PI);
}


bool SplitTab::isConnected() const {
    return (serialPort1 && serialPort1->isOpen()) || (serialPort2 && serialPort2->isOpen());
}
