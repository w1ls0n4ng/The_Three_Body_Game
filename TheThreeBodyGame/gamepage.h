#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include <QMainWindow>

namespace Ui {
class Gamepage;
}

class Gamepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gamepage(QWidget *parent = nullptr);
    ~Gamepage();

private:
    Ui::Gamepage *ui;
};

#endif // GAMEPAGE_H
