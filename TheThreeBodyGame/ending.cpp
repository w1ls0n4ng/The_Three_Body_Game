#include "ending.h"
#include "ui_ending.h"

ending::ending(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ending)
{
    ui->setupUi(this);
}

ending::~ending()
{
    delete ui;
}
