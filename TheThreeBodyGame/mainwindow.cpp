#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamepage.h"
#include <QDesktopWidget>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set a background image
    QString backgroundImage = "background-image: url(../Assests/homepage.png);";
    this->setStyleSheet(backgroundImage);

    ui->startgame->setStyleSheet("color: white; background-color: black; border: 2px solid white;");
    ui->loadgame->setStyleSheet("color: white; background-color: black; border: 2px solid white;");
    ui->exitgame->setStyleSheet("color: white; background-color: black; border: 2px solid white;");


}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startgame_clicked()
{
    close();
    Gamepage* game = new Gamepage();
    game->showMaximized();
}
