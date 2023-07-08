#ifndef NOSAVEGAME_H
#define NOSAVEGAME_H

#include <QDialog>

namespace Ui {
class NoSaveGame;
}

class NoSaveGame : public QDialog
{
    Q_OBJECT

public:
    explicit NoSaveGame(QWidget *parent = nullptr);
    ~NoSaveGame();

private:
    Ui::NoSaveGame *ui;
};

#endif // NOSAVEGAME_H
