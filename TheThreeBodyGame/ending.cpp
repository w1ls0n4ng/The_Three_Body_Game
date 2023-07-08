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
    s = "行星第" + to_string(gamestatus2.current_civilization_num) + "号文明" ;
    if (gamestatus2.current_civilization_state==1){
        s = s + "胜利!\n";
    }
    if (gamestatus2.current_civilization_state==-1){
        s = s + "失败!\n";
    }
    s = s + "原因：" + gamestatus2.gamestop_information + "\n";
    s = s + "玩家得分：" ;
    int score = 0;
    for (int i=0;i<3;++i){
        if (player2.guess_num[i]==gamestatus2.current_civilization_num & player2.guess_status[i]==gamestatus2.current_civilization_state){
            score += (1+player2.guess_num[i]-player2.guess_current_num[i]) * (1+player2.guess_num[i]-player2.guess_current_num[i]);
        }
    }
    s = s + to_string(score);
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
