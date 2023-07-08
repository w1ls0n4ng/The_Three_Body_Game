#include "ending.h"
#include "gamepage.h"
#include "mainwindow.h"
#include "ui_ending.h"

ending::ending(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ending)
{
    ui->setupUi(this);
    ui->label->setText("gamestatus1.");
}

ending::~ending()
{
    delete ui;
}

void ending::on_pushButton_clicked()
{
    close();
    MainWindow * mainwindow = new MainWindow();
    mainwindow -> showMaximized();
}

void ending::on_pushButton_2_clicked()
{
    close();
}
