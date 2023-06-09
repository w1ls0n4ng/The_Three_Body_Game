#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include "planet.h"
#include "sun.h"
#include "civilization.h"
#include "gamestatus.h"
#include "players.h"
#include <QMainWindow>
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsScene>
#include <QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
class Gamepage;
}

class Gamepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gamepage(QWidget *parent = nullptr, bool loadgame = false);
    ~Gamepage();
    gamestatus gamestatus1;


public slots:
    void myfunction();
    void updateUI();
    void updatePosition();
    void updateGameState();
    void saveGame();
    void loadGame();

protected:
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::Gamepage *ui;
    QMediaPlayer* mediaPlayer;
    QMediaPlaylist* playlist;
    QTimer *timer;
    QGraphicsScene *scene;
    QGraphicsView* view;
    QGraphicsEllipseItem* circle1;
    QGraphicsEllipseItem* circle2;
    QGraphicsEllipseItem* circle3;
    QGraphicsEllipseItem* circle4;
    QGraphicsEllipseItem* ball1;
    QGraphicsEllipseItem* ball2;
    QGraphicsEllipseItem* ball3;
    QGraphicsEllipseItem* ball4;
    QGraphicsEllipseItem* ball1_1;
    QGraphicsEllipseItem* ball2_1;
    QGraphicsEllipseItem* ball3_1;
    QGraphicsEllipseItem* ball4_1;
    sun sun1, sun2, sun3;
    planet earth;
    civilization threebodyman;
    players player1;
    float time = 0;
    // 设置G值
    double G = 3.1415926 * 3.1415926;
    // 每次更新0.025游戏年
    int gap = 25;

private slots:
    void on_radioButton_2_pressed();
    void on_pushButton_clicked();
    void on_radioButton_clicked();
};

extern int getscore;
extern string gamestopinformation;

#endif // GAMEPAGE_H
