/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startgame;
    QPushButton *loadgame;
    QPushButton *exitgame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("FangSong"));
        font.setPointSize(18);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        startgame = new QPushButton(centralwidget);
        startgame->setObjectName(QStringLiteral("startgame"));
        startgame->setGeometry(QRect(1630, 680, 151, 51));
        sizePolicy.setHeightForWidth(startgame->sizePolicy().hasHeightForWidth());
        startgame->setSizePolicy(sizePolicy);
        startgame->setFont(font);
        startgame->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));
        loadgame = new QPushButton(centralwidget);
        loadgame->setObjectName(QStringLiteral("loadgame"));
        loadgame->setGeometry(QRect(1630, 750, 151, 51));
        sizePolicy.setHeightForWidth(loadgame->sizePolicy().hasHeightForWidth());
        loadgame->setSizePolicy(sizePolicy);
        loadgame->setFont(font);
        loadgame->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));
        exitgame = new QPushButton(centralwidget);
        exitgame->setObjectName(QStringLiteral("exitgame"));
        exitgame->setGeometry(QRect(1630, 820, 151, 51));
        sizePolicy.setHeightForWidth(exitgame->sizePolicy().hasHeightForWidth());
        exitgame->setSizePolicy(sizePolicy);
        exitgame->setFont(font);
        exitgame->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\211\344\275\223\346\270\270\346\210\217 Three Body Game", Q_NULLPTR));
        startgame->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\270\270\346\210\217", Q_NULLPTR));
        loadgame->setText(QApplication::translate("MainWindow", "\347\273\247\347\273\255\346\270\270\346\210\217", Q_NULLPTR));
        exitgame->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
