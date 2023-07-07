#ifndef ENDING_H
#define ENDING_H

#include <QDialog>

namespace Ui {
class ending;
}

class ending : public QDialog
{
    Q_OBJECT

public:
    explicit ending(QWidget *parent = nullptr);
    ~ending();

private:
    Ui::ending *ui;
};

#endif // ENDING_H
