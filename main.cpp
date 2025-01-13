#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // QSurfaceFormat format;
    // format.setVersion(3, 3);  // OpenGL 3.3
    // format.setProfile(QSurfaceFormat::CoreProfile);  // Core Profile

    // QSurfaceFormat::setDefaultFormat(format);

    MainWindow w;
    w.show();
    QSurfaceFormat format;
    format.setProfile(QSurfaceFormat::CoreProfile);
    format.setVersion(3, 3);  // Set OpenGL version 3.3
    QSurfaceFormat::setDefaultFormat(format);

    return a.exec();
}
