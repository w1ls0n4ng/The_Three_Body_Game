#ifndef PAUSEWINDOW_H
#define PAUSEWINDOW_H

#include <QDialog>

namespace Ui {
class PauseWindow;
}

class PauseWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PauseWindow(QWidget *parent = nullptr);
    ~PauseWindow();
<<<<<<< Updated upstream

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

=======
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
>>>>>>> Stashed changes
private:
    Ui::PauseWindow *ui;
};

#endif // PAUSEWINDOW_H
