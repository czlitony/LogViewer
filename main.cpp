#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QIcon>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(mainwindow);

    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("LogViewer");
    w.setWindowIcon(QIcon(":/resources/images/logo48.png"));
    w.showMaximized();
    w.show();

    return a.exec();
}
