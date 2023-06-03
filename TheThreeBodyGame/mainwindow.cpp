#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QRect rect = QApplication::desktop()->availableGeometry(this);
    int width = rect.width();
    int height = rect.height();

    QPixmap pixmap("../Assests/Homepage.png");
    ui->homepage->setPixmap(pixmap);
}


MainWindow::~MainWindow()
{
    delete ui;
}
