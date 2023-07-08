#include "mainwindow.h"
#include "gamepage.h"
#include "ending.h"
#include <QApplication>

int getscore;
string gamestopinformation;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

    return a.exec();
}
