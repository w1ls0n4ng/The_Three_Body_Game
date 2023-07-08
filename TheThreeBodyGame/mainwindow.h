#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void saveGame();

private slots:
    void on_startgame_clicked();

    void on_exitgame_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* mediaPlayer;
};

#endif // MAINWINDOW_H
