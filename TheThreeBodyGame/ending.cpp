#include "ending.h"
#include "ui_ending.h"
#include "gamepage.h"
#include "mainwindow.h"

ending::ending(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ending)
{
    ui->setupUi(this);
}

ending::~ending()
{
    delete ui;
}

void ending::on_pushButton_clicked()
{
    close();
    MainWindow* mainwindow = new MainWindow();
    mainwindow->showMaximized();
}

void ending::on_pushButton_2_clicked()
{
    close();
}
