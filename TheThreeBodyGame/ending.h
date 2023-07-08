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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ending *ui;
};

#endif // ENDING_H
