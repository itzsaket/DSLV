#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->clear();

    // create instances of the tabs

    mainTab = new MainTab(this);
    splitTab = new SplitTab(this);

    // int mainTabIndex = ui->tabWidget->addTab(mainTab, "Main");
    // int splitTabIndex = ui->tabWidget->addTab(splitTab, "Split Function Tab");
    // Ensure you don't add them again if they exist in the .ui

    ui->tabWidget->addTab(mainTab, "Main");
    ui->tabWidget->addTab(splitTab, "Split Function Tab");
    // ui->tabWidget->setTabText(ui->tabWidget->indexOf(ui->MainTab), "Main");
    // ui->tabWidget->setTabText(ui->tabWidget->indexOf(ui->SplitFunctionTab), "Split Function Tab");


    // Optionally, you can set the tab text again:
    // ui->tabWidget->setTabText(mainTabIndex, "Main");
    // ui->tabWidget->setTabText(splitTabIndex, "Split Function Tab");

    // Connect tab change signal to disconnect active connections
    connect(ui->tabWidget, &QTabWidget::currentChanged, this, &MainWindow::onTabSwitched);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::onTabSwitched(int index) {
    if (index != 0 && mainTab->isConnected()) {  // If switching away from MainTab
        qDebug() << "Disconnecting MainTab...";
        mainTab->disconnectFromMavlink();
    }
    if (index != 1 && splitTab->isConnected()) {  // If switching away from SplitTab
        qDebug() << "Disconnecting SplitTab...";
        splitTab->disconnectFromMavlink1();
        splitTab->disconnectFromMavlink2();
    }
}
