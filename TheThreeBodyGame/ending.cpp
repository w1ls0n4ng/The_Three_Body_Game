#include "ending.h"
#include "ui_ending.h"
#include "gamepage.h"
#include "gamestatus.h"
#include "players.h"
#include "mainwindow.h"

ending::ending(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ending)
{
    ui->setupUi(this);
    string s;
    int n=getscore;
    s = gamestopinformation + "\n";
    s = s + "游戏结束，";
    s = s + "玩家得分：" + to_string(n);
    ui->label->setText(QString::fromStdString(s));
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

void ending::getstatus(gamestatus status){
    gamestatus2 = status;
}

void ending::getprediction(players player){
    player2 = player;
}
