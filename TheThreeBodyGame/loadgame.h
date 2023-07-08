#ifndef LOADGAME_H
#define LOADGAME_H

#include <QDialog>

namespace Ui {
class LoadGame;
}

class LoadGame : public QDialog
{
    Q_OBJECT

public:
    explicit LoadGame(QWidget *parent = nullptr);
    ~LoadGame();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::LoadGame *ui;
};

#endif // LOADGAME_H
