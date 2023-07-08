/********************************************************************************
** Form generated from reading UI file 'loadgame.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADGAME_H
#define UI_LOADGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoadGame
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *LoadGame)
    {
        if (LoadGame->objectName().isEmpty())
            LoadGame->setObjectName(QStringLiteral("LoadGame"));
        LoadGame->resize(640, 280);
        pushButton = new QPushButton(LoadGame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 170, 101, 41));
        pushButton->setStyleSheet(QStringLiteral("font: 12pt \"FangSong\";"));
        pushButton_2 = new QPushButton(LoadGame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 170, 131, 41));
        pushButton_2->setStyleSheet(QStringLiteral("font: 12pt \"FangSong\";"));
        label = new QLabel(LoadGame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 80, 311, 41));
        QFont font;
        font.setFamily(QStringLiteral("FangSong"));
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(LoadGame);

        QMetaObject::connectSlotsByName(LoadGame);
    } // setupUi

    void retranslateUi(QDialog *LoadGame)
    {
        LoadGame->setWindowTitle(QApplication::translate("LoadGame", "LoadGame", nullptr));
        pushButton->setText(QApplication::translate("LoadGame", "\347\273\247\347\273\255\346\270\270\346\210\217", nullptr));
        pushButton_2->setText(QApplication::translate("LoadGame", "\345\274\200\345\247\213\346\226\260\347\232\204\346\270\270\346\210\217", nullptr));
        label->setText(QApplication::translate("LoadGame", "\345\217\221\347\216\260\346\234\211\345\255\230\346\241\243\357\274\214\346\230\257\345\220\246\347\273\247\347\273\255\346\270\270\346\210\217\357\274\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadGame: public Ui_LoadGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADGAME_H
