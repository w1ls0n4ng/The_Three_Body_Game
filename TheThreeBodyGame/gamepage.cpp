#include "gamepage.h"
#include "ui_gamepage.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QPushButton>

Gamepage::Gamepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Gamepage)
{
    ui->setupUi(this);
    QString backgroundImage = "background-image: url(../Assests/space.png);";
    this->setStyleSheet(backgroundImage);

    QString styleSheet = "QGroupBox {"
                         "    background-color: blue;"
                         "    border: 2px solid red;"
                         "}";
    ui->groupBox->setStyleSheet(styleSheet);


}

Gamepage::~Gamepage()
{
    delete ui;
}
