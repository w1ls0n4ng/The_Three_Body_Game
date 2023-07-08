#include "loadgame.h"
#include "ui_loadgame.h"
#include "gamepage.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>

LoadGame::LoadGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadGame)
{
    ui->setupUi(this);
}

LoadGame::~LoadGame()
{
    delete ui;
}

void LoadGame::on_pushButton_clicked()
{
    // 设置按键音效
    QMediaPlayer* buttonPlayer = new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/button_effect.mp3"));
    buttonPlayer->setPlaylist(playlist);
    buttonPlayer->play();

    // 创建游戏界面
    Gamepage* game = new Gamepage(nullptr, true);
    game->showMaximized();
    close();
}


void LoadGame::on_pushButton_2_clicked()
{
    // 设置按键音效
    QMediaPlayer* buttonPlayer = new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/button_effect.mp3"));
    buttonPlayer->setPlaylist(playlist);
    buttonPlayer->play();

    // 创建游戏界面
    Gamepage* game = new Gamepage();
    game->showMaximized();
    close();
}
