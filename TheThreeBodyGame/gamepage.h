#ifndef GAMEPAGE_H
#define GAMEPAGE_H

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


private:
    Ui::Gamepage *ui;
    QTimer *timer;
    QGraphicsScene *scene;
    QGraphicsView* view;
};


#endif // GAMEPAGE_H
