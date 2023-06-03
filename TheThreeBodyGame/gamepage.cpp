#include "gamepage.h"
#include "ui_gamepage.h"

Gamepage::Gamepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Gamepage)
{
    ui->setupUi(this);
    QString backgroundImage = "background-image: url(../Assests/space.png);";
    this->setStyleSheet(backgroundImage);
}

Gamepage::~Gamepage()
{
    delete ui;
}
