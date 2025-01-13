/********************************************************************************
** Form generated from reading UI file 'maintab.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAB_H
#define UI_MAINTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainTab
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *connectionLayout;
    QLabel *portLabel;
    QComboBox *portComboBox;
    QLabel *baudRateLabel;
    QComboBox *baudRateComboBox;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *runTestButton;
    QLabel *statusLabel;
    QTextEdit *messageConsole;
    QHBoxLayout *sendLayout;
    QLineEdit *messageInput;
    QPushButton *sendButton;

    void setupUi(QWidget *MainTab)
    {
        if (MainTab->objectName().isEmpty())
            MainTab->setObjectName(QString::fromUtf8("MainTab"));
        MainTab->resize(800, 600);
        verticalLayout = new QVBoxLayout(MainTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        connectionLayout = new QHBoxLayout();
        connectionLayout->setObjectName(QString::fromUtf8("connectionLayout"));
        portLabel = new QLabel(MainTab);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));

        connectionLayout->addWidget(portLabel);

        portComboBox = new QComboBox(MainTab);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));

        connectionLayout->addWidget(portComboBox);

        baudRateLabel = new QLabel(MainTab);
        baudRateLabel->setObjectName(QString::fromUtf8("baudRateLabel"));

        connectionLayout->addWidget(baudRateLabel);

        baudRateComboBox = new QComboBox(MainTab);
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));

        connectionLayout->addWidget(baudRateComboBox);

        connectButton = new QPushButton(MainTab);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        connectionLayout->addWidget(connectButton);

        disconnectButton = new QPushButton(MainTab);
        disconnectButton->setObjectName(QString::fromUtf8("disconnectButton"));
        disconnectButton->setEnabled(false);

        connectionLayout->addWidget(disconnectButton);


        verticalLayout->addLayout(connectionLayout);

        runTestButton = new QPushButton(MainTab);
        runTestButton->setObjectName(QString::fromUtf8("runTestButton"));

        verticalLayout->addWidget(runTestButton);

        statusLabel = new QLabel(MainTab);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        verticalLayout->addWidget(statusLabel);

        messageConsole = new QTextEdit(MainTab);
        messageConsole->setObjectName(QString::fromUtf8("messageConsole"));
        messageConsole->setReadOnly(true);

        verticalLayout->addWidget(messageConsole);

        sendLayout = new QHBoxLayout();
        sendLayout->setObjectName(QString::fromUtf8("sendLayout"));
        messageInput = new QLineEdit(MainTab);
        messageInput->setObjectName(QString::fromUtf8("messageInput"));

        sendLayout->addWidget(messageInput);

        sendButton = new QPushButton(MainTab);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);

        sendLayout->addWidget(sendButton);


        verticalLayout->addLayout(sendLayout);


        retranslateUi(MainTab);

        QMetaObject::connectSlotsByName(MainTab);
    } // setupUi

    void retranslateUi(QWidget *MainTab)
    {
        MainTab->setWindowTitle(QCoreApplication::translate("MainTab", "MainTab", nullptr));
        portLabel->setText(QCoreApplication::translate("MainTab", "Port:", nullptr));
        baudRateLabel->setText(QCoreApplication::translate("MainTab", "Baud Rate:", nullptr));
        connectButton->setText(QCoreApplication::translate("MainTab", "Connect", nullptr));
        disconnectButton->setText(QCoreApplication::translate("MainTab", "Disconnect", nullptr));
        runTestButton->setText(QCoreApplication::translate("MainTab", "Run Tests", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainTab", "Status: Disconnected", nullptr));
        messageInput->setPlaceholderText(QCoreApplication::translate("MainTab", "Enter message to send...", nullptr));
        sendButton->setText(QCoreApplication::translate("MainTab", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainTab: public Ui_MainTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAB_H
