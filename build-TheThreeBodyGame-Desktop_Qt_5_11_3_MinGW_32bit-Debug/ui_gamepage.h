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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gamepage
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gamepage)
    {
        if (Gamepage->objectName().isEmpty())
            Gamepage->setObjectName(QStringLiteral("Gamepage"));
        Gamepage->resize(1920, 1080);
        centralwidget = new QWidget(Gamepage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 610, 251, 401));
        groupBox->setStyleSheet(QStringLiteral(""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 55, 16));
        label->setAutoFillBackground(true);
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(90, 90, 118, 23));
        progressBar->setValue(24);
        Gamepage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gamepage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 26));
        Gamepage->setMenuBar(menubar);
        statusbar = new QStatusBar(Gamepage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Gamepage->setStatusBar(statusbar);

        retranslateUi(Gamepage);

        QMetaObject::connectSlotsByName(Gamepage);
    } // setupUi

    void retranslateUi(QMainWindow *Gamepage)
    {
        Gamepage->setWindowTitle(QApplication::translate("Gamepage", "MainWindow", nullptr));
#ifndef QT_NO_WHATSTHIS
        groupBox->setWhatsThis(QApplication::translate("Gamepage", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        groupBox->setTitle(QApplication::translate("Gamepage", "\350\241\214\346\230\237\346\226\207\346\230\216", nullptr));
        label->setText(QApplication::translate("Gamepage", "\344\272\272\345\217\243%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamepage: public Ui_Gamepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAGE_H
