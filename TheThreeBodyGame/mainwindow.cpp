#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamepage.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QMediaPlayer>
#include <QMediaPlaylist>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mediaPlayer(new QMediaPlayer(this))
{
    ui->setupUi(this);

    // 设置背景
    QString backgroundImage = "background-image: url(../Assests/homepage.png);";
    this->setStyleSheet(backgroundImage);

    // 设置游戏音乐
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/home_bgm.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    mediaPlayer->setPlaylist(playlist);
    mediaPlayer->play();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startgame_clicked()
{
    close();

    // 设置按键音效
    QMediaPlayer* buttonPlayer = new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/button_effect.mp3"));
    buttonPlayer->setPlaylist(playlist);
    buttonPlayer->play();

    // 关闭主界面面音乐
    mediaPlayer->stop();

    // 创建游戏界面
    Gamepage* game = new Gamepage();
    game->showMaximized();
}

void MainWindow::on_exitgame_clicked()
{
    // 设置按键音效
    QMediaPlayer* buttonPlayer = new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/button_effect.mp3"));
    buttonPlayer->setPlaylist(playlist);
    buttonPlayer->play();

    close();
}
