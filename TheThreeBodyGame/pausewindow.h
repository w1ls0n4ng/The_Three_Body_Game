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

private:
    Ui::PauseWindow *ui;
};

#endif // PAUSEWINDOW_H
