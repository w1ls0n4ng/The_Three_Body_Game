#include "nosavegame.h"
#include "ui_nosavegame.h"

NoSaveGame::NoSaveGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NoSaveGame)
{
    ui->setupUi(this);
}

NoSaveGame::~NoSaveGame()
{
    delete ui;
}
