/********************************************************************************
** Form generated from reading UI file 'gamepage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPAGE_H
#define UI_GAMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gamepage
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gamepage)
    {
        if (Gamepage->objectName().isEmpty())
            Gamepage->setObjectName(QStringLiteral("Gamepage"));
        Gamepage->resize(640, 480);
        menubar = new QMenuBar(Gamepage);
        menubar->setObjectName(QStringLiteral("menubar"));
        Gamepage->setMenuBar(menubar);
        centralwidget = new QWidget(Gamepage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Gamepage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Gamepage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Gamepage->setStatusBar(statusbar);

        retranslateUi(Gamepage);

        QMetaObject::connectSlotsByName(Gamepage);
    } // setupUi

    void retranslateUi(QMainWindow *Gamepage)
    {
        Gamepage->setWindowTitle(QApplication::translate("Gamepage", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamepage: public Ui_Gamepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAGE_H
