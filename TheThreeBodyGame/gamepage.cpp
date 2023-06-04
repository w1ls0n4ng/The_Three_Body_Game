#include "gamepage.h"
#include "ui_gamepage.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QPushButton>
#include <QMediaPlayer>
#include <QMediaPlaylist>


Gamepage::Gamepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Gamepage)
{
    ui->setupUi(this);
    QString backgroundImage = "background-image: url(../Assests/space.png);";
    this->setStyleSheet(backgroundImage);

    // 设置游戏音乐
    QMediaPlayer* mediaPlayer = new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/game_bgm.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    mediaPlayer->setPlaylist(playlist);
    mediaPlayer->play();

    // 设置Groupbox
    QString styleSheet = "QGroupBox {"
                         "    background-image: url(../Assests/border.png);"
                         "    border-radius: 5px;"  // 5像素的圆角边框
                         "}";
    ui->groupBox->setStyleSheet(styleSheet);


    // 设置Groupbox中的progressbar
    styleSheet = "QProgressBar {"
                         "    background-image: url(../Assests/1.png);"
                         "    background-color: rgba(23, 33, 255, 50);"
                         "    border: None;"
                         "}";
    ui->population->setStyleSheet(styleSheet);


    ui->population->setValue(10);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);

    styleSheet = "QGroupBox {"
                         "    background-image: url(../Assests/border2.png);"
                         "    border-radius: 5px;"  // 5像素的圆角边框
                         "    background-color:rgba(7, 4, 30, 200);"
                         "}";
    ui->groupBox_2->setStyleSheet(styleSheet);





}

Gamepage::~Gamepage()
{
    delete ui;
}

void Gamepage::myfunction()
{
    int val = ui->population->value() + 5;
    ui->population->setValue(val);
}


