#include "dialog.h"
#include "ui_dialog.h"
#include "QDesktopWidget"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->homepage->setPixmap(QPixmap("../Assests/Homepage.png"));
}

Dialog::~Dialog()
{
    delete ui;
}
