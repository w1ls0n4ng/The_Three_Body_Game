#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->homepage->setPixmap(QPixmap("../Assests/Homepage.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
