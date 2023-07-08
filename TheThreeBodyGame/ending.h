#ifndef ENDING_H
#define ENDING_H

#include <QDialog>
#include "gamestatus.h"
#include "players.h"

namespace Ui {
class ending;
}

class ending : public QDialog
{
    Q_OBJECT

public:
    explicit ending(QWidget *parent = nullptr);
    ~ending();
    void getstatus(gamestatus status);
    void getprediction(players player);
    gamestatus gamestatus2;
    players player2;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ending *ui;
};

#endif // ENDING_H
