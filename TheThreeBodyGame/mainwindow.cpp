#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set a background image
    QString backgroundImage = "background-image: url(../Assests/edit.png);";
    this->setStyleSheet(backgroundImage);


    QRect rect = QApplication::desktop()->availableGeometry(this);
    int width = rect.width();
    int height = rect.height();

//    QPixmap pixmap("../Assests/edit.png");
//    pixmap = pixmap.scaled(width + 80, height + 80, Qt::KeepAspectRatio);
//    ui->homepage->setPixmap(pixmap);
//    ui->homepage->resize(width, height);
}


MainWindow::~MainWindow()
{
    delete ui;
}
