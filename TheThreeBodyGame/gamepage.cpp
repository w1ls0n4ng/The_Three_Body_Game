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
                         "    background-image: url(../Assests/border.png);"
                         "    border-radius: 5px;"  // 5像素的圆角边框
                         "}";
    ui->groupBox->setStyleSheet(styleSheet);


    styleSheet = "QProgressBar {"
                         "    background-image: url(../Assests/1.png);"
                         "    background-color: rgba(23, 33, 255, 50);"
                         "    border: None;"
                         "}";
    ui->population->setStyleSheet(styleSheet);
    ui->population->setValue(70);




}

Gamepage::~Gamepage()
{
    delete ui;
}


