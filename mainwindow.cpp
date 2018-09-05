#include "mainwindow.h"

#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setMainWindowsTitle();
}

MainWindow::~MainWindow()
{

}

void MainWindow::setMainWindowsTitle()
{
#ifdef Q_OS_OSX
    setUnifiedTitleAndToolBarOnMac(true);
#endif

    setWindowTitle(QCoreApplication::applicationName());
}
