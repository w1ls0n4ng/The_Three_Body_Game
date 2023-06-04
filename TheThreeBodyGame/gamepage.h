#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include "planet.h"
#include "sun.h"
#include "civilization.h"
#include <QMainWindow>
#include <QTimer>
#include <QGraphicsScene>

namespace Ui {
class Gamepage;
}

class Gamepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gamepage(QWidget *parent = nullptr);
    ~Gamepage();


public slots:
    void myfunction();
    void updateUI();
    void updatePosition();
    void updateGameState();

private:
    Ui::Gamepage *ui;
    QTimer *timer;
    QGraphicsScene *scene;
    QGraphicsView* view;
    QGraphicsEllipseItem* circle1;
    QGraphicsEllipseItem* circle2;
    QGraphicsEllipseItem* circle3;
    int game_stop = 0;
    sun sun1, sun2, sun3;
    planet earth;
    civilization threebodyman;
    float time = 0;
    // 设置G值
    double G = 3.1415926 * 3.1415926;
    // 假设更新gap为40ms
    int gap = 40;
};


#endif // GAMEPAGE_H
