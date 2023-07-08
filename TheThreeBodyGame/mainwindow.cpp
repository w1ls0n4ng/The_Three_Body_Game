#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamepage.h"
#include "loadgame.h"
#include "nosavegame.h"
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

    QFile file("savegame.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    QString content;
    QChar currentChar;

    while (!in.atEnd())
    {
        in >> currentChar;
        if (currentChar == ' ' || currentChar == '\n')
        {
            // 停止读入当遇到空格
            break;
        }

        content += currentChar;
    }

    file.close();

    int x = content.toInt();
    if (x)
    {
        LoadGame *load = new LoadGame();
        load->show();
    }
    else {
        // 创建游戏界面
        Gamepage* game = new Gamepage();
        game->showMaximized();
    }
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

void MainWindow::on_loadgame_clicked()
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

    QFile file("savegame.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    QString content;
    QChar currentChar;

    while (!in.atEnd())
    {
        in >> currentChar;
        if (currentChar == ' ' || currentChar == '\n')
        {
            // 停止读入当遇到空格
            break;
        }

        content += currentChar;
    }

    file.close();

    int x = content.toInt();
    if (x)
    {
        // 创建游戏界面
        Gamepage* game = new Gamepage(nullptr, true);
        game->showMaximized();

    }
    else {
        // 创建游戏界面
        NoSaveGame *no = new NoSaveGame();
        if(!no->exec())
        {
            MainWindow *back = new MainWindow();
            back->showMaximized();
        }
    }
}
