#ifndef SPLITTAB_H
#define SPLITTAB_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QSerialPort>
#include <QTimer>
#include "3dvehiclemodel.h"

namespace Ui {
class SplitTab;  // Ensure this matches your UI class name
}

class SplitTab : public QWidget {
    Q_OBJECT

public:
    explicit SplitTab(QWidget *parent = nullptr);
    ~SplitTab();
    bool isConnected() const;  // Declaration for checking connection

public slots:
    void connectToMavlink1();  // Slot to connect vehicle 1
    void connectToMavlink2();  // Slot to connect vehicle 2
    void disconnectFromMavlink1();  // Disconnect function for vehicle 1
    void disconnectFromMavlink2();  // Disconnect function for vehicle 2

private slots:
    void refreshPorts();
    void readMessage1();
    void readMessage2();

private:
    Ui::SplitTab *ui;

    QSerialPort *serialPort1;
    QSerialPort *serialPort2;

    QTimer *portRefreshTimer;

    Vehicle3DModel *vehicle1Model;
    Vehicle3DModel *vehicle2Model;

    void updateOrientation(Vehicle3DModel *vehicleModel, float roll, float pitch, float yaw);
};

#endif  // SPLITTAB_H
