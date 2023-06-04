#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class Gamepage;
}

class Gamepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gamepage(QWidget *parent = nullptr);
    ~Gamepage();

<<<<<<< Updated upstream
=======
public slots:
    void myfunction();

>>>>>>> Stashed changes
private:
    Ui::Gamepage *ui;
    QTimer *timer;
};


#endif // GAMEPAGE_H
