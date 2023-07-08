#include "pausewindow.h"
#include "ui_pausewindow.h"
#include <QPushButton>
#include <QMediaPlayer>
#include <QMediaPlaylist>

PauseWindow::PauseWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PauseWindow)
{
    ui->setupUi(this);
}

PauseWindow::~PauseWindow()
{
    delete ui;
}

void PauseWindow::on_pushButton_clicked()
{
    // 设置按键音效
    QMediaPlayer* buttonPlayer = new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/button_effect.mp3"));
    buttonPlayer->setPlaylist(playlist);
    buttonPlayer->play();

    accept();
}

void PauseWindow::on_pushButton_2_clicked()
{
    // 设置按键音效
    QMediaPlayer* buttonPlayer = new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/button_effect.mp3"));
    buttonPlayer->setPlaylist(playlist);
    buttonPlayer->play();

    reject();
}
