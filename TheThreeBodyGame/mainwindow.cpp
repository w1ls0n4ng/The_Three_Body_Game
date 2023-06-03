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

    // Get the screen geometry
    QRect screenGeometry = QApplication::desktop()->screenGeometry();

    // Calculate the desired x and y coordinates
    int x = (screenGeometry.width() / 3) * 2;    // X position at the center of the screen
    int y = (screenGeometry.height() / 3);   // Y position at the center of the screen

    qDebug() << screenGeometry.width() << screenGeometry.height();

    // Set the position of the label
    ui->startgame->move(x, y);
    ui->startgame->setStyleSheet("color: white; background-color: black; border: 2px solid white;");

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
