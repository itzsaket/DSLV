/********************************************************************************
** Form generated from reading UI file 'splittab.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITTAB_H
#define UI_SPLITTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplitTab
{
public:
    QVBoxLayout *mainLayout;
    QVBoxLayout *vehicle1MainLayout;
    QHBoxLayout *vehicle1ControlsLayout;
    QComboBox *portComboBox1;
    QComboBox *baudRateComboBox1;
    QPushButton *connectButton1;
    QPushButton *disconnectButton1;
    QLabel *vehicle1StatusLabel;
    QOpenGLWidget *vehicle1OrientationWidget;
    QVBoxLayout *vehicle2MainLayout;
    QHBoxLayout *vehicle2ControlsLayout;
    QComboBox *portComboBox2;
    QComboBox *baudRateComboBox2;
    QPushButton *connectButton2;
    QPushButton *disconnectButton2;
    QLabel *vehicle2StatusLabel;
    QOpenGLWidget *vehicle2OrientationWidget;

    void setupUi(QWidget *SplitTab)
    {
        if (SplitTab->objectName().isEmpty())
            SplitTab->setObjectName(QString::fromUtf8("SplitTab"));
        SplitTab->resize(800, 600);
        mainLayout = new QVBoxLayout(SplitTab);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        vehicle1MainLayout = new QVBoxLayout();
        vehicle1MainLayout->setObjectName(QString::fromUtf8("vehicle1MainLayout"));
        vehicle1ControlsLayout = new QHBoxLayout();
        vehicle1ControlsLayout->setObjectName(QString::fromUtf8("vehicle1ControlsLayout"));
        portComboBox1 = new QComboBox(SplitTab);
        portComboBox1->setObjectName(QString::fromUtf8("portComboBox1"));

        vehicle1ControlsLayout->addWidget(portComboBox1);

        baudRateComboBox1 = new QComboBox(SplitTab);
        baudRateComboBox1->setObjectName(QString::fromUtf8("baudRateComboBox1"));

        vehicle1ControlsLayout->addWidget(baudRateComboBox1);

        connectButton1 = new QPushButton(SplitTab);
        connectButton1->setObjectName(QString::fromUtf8("connectButton1"));

        vehicle1ControlsLayout->addWidget(connectButton1);

        disconnectButton1 = new QPushButton(SplitTab);
        disconnectButton1->setObjectName(QString::fromUtf8("disconnectButton1"));
        disconnectButton1->setEnabled(false);

        vehicle1ControlsLayout->addWidget(disconnectButton1);

        vehicle1StatusLabel = new QLabel(SplitTab);
        vehicle1StatusLabel->setObjectName(QString::fromUtf8("vehicle1StatusLabel"));

        vehicle1ControlsLayout->addWidget(vehicle1StatusLabel);


        vehicle1MainLayout->addLayout(vehicle1ControlsLayout);

        vehicle1OrientationWidget = new QOpenGLWidget(SplitTab);
        vehicle1OrientationWidget->setObjectName(QString::fromUtf8("vehicle1OrientationWidget"));
        vehicle1OrientationWidget->setMinimumSize(QSize(300, 300));

        vehicle1MainLayout->addWidget(vehicle1OrientationWidget);


        mainLayout->addLayout(vehicle1MainLayout);

        vehicle2MainLayout = new QVBoxLayout();
        vehicle2MainLayout->setObjectName(QString::fromUtf8("vehicle2MainLayout"));
        vehicle2ControlsLayout = new QHBoxLayout();
        vehicle2ControlsLayout->setObjectName(QString::fromUtf8("vehicle2ControlsLayout"));
        portComboBox2 = new QComboBox(SplitTab);
        portComboBox2->setObjectName(QString::fromUtf8("portComboBox2"));

        vehicle2ControlsLayout->addWidget(portComboBox2);

        baudRateComboBox2 = new QComboBox(SplitTab);
        baudRateComboBox2->setObjectName(QString::fromUtf8("baudRateComboBox2"));

        vehicle2ControlsLayout->addWidget(baudRateComboBox2);

        connectButton2 = new QPushButton(SplitTab);
        connectButton2->setObjectName(QString::fromUtf8("connectButton2"));

        vehicle2ControlsLayout->addWidget(connectButton2);

        disconnectButton2 = new QPushButton(SplitTab);
        disconnectButton2->setObjectName(QString::fromUtf8("disconnectButton2"));
        disconnectButton2->setEnabled(false);

        vehicle2ControlsLayout->addWidget(disconnectButton2);

        vehicle2StatusLabel = new QLabel(SplitTab);
        vehicle2StatusLabel->setObjectName(QString::fromUtf8("vehicle2StatusLabel"));

        vehicle2ControlsLayout->addWidget(vehicle2StatusLabel);


        vehicle2MainLayout->addLayout(vehicle2ControlsLayout);

        vehicle2OrientationWidget = new QOpenGLWidget(SplitTab);
        vehicle2OrientationWidget->setObjectName(QString::fromUtf8("vehicle2OrientationWidget"));
        vehicle2OrientationWidget->setMinimumSize(QSize(300, 300));

        vehicle2MainLayout->addWidget(vehicle2OrientationWidget);


        mainLayout->addLayout(vehicle2MainLayout);


        retranslateUi(SplitTab);

        QMetaObject::connectSlotsByName(SplitTab);
    } // setupUi

    void retranslateUi(QWidget *SplitTab)
    {
        connectButton1->setText(QCoreApplication::translate("SplitTab", "Connect 1", nullptr));
        disconnectButton1->setText(QCoreApplication::translate("SplitTab", "Disconnect 1", nullptr));
        vehicle1StatusLabel->setText(QCoreApplication::translate("SplitTab", "Vehicle 1: Disconnected", nullptr));
        connectButton2->setText(QCoreApplication::translate("SplitTab", "Connect 2", nullptr));
        disconnectButton2->setText(QCoreApplication::translate("SplitTab", "Disconnect 2", nullptr));
        vehicle2StatusLabel->setText(QCoreApplication::translate("SplitTab", "Vehicle 2: Disconnected", nullptr));
        (void)SplitTab;
    } // retranslateUi

};

namespace Ui {
    class SplitTab: public Ui_SplitTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITTAB_H
