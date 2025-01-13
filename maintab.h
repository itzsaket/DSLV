#ifndef MAINTAB_H
#define MAINTAB_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>

namespace Ui {
class MainTab;
}

class MainTab : public QWidget {
    Q_OBJECT

public:
    explicit MainTab(QWidget *parent = nullptr);
    ~MainTab();
public slots:
    void disconnectFromMavlink();   // Disconnect from the port
    bool isConnected() const;

private slots:
    void refreshPorts();           // Auto-refresh available COM ports
    void connectToMavlink();        // Connect to the selected port
    // void disconnectFromMavlink();   // Disconnect from the port
    void sendMessage();             // Send message to MAVLink
    void readMessage();             // Read incoming message
    void updateStatus(const QString &status);  // Update status label
    void runTests();
    void sendRepeatedCommand();

private:
    Ui::MainTab *ui;
    QSerialPort *serialPort;
    QTimer *portRefreshTimer;  // Timer for auto-refreshing the ports
    QTimer *sendTimer;
    bool waitingForResponse;


    enum TestState { IDLE, RUNNING, UNDER_TEST, PASSED, FAILED };
    enum TestType { TEST_UART, TEST_CAN, TEST_PWM };  // Test type

    void sendCommandForCurrentTest(TestType testType);  // Send command for specific test
    void resetUI();

    TestState currentState;
    TestType currentTest;

    QString currentCommand;
    QString expectedResponse;
    QString failureResponse;

};

#endif // MAINTAB_H
