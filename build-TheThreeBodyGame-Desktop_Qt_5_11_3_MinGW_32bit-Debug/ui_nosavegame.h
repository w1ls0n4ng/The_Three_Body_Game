/********************************************************************************
** Form generated from reading UI file 'nosavegame.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSAVEGAME_H
#define UI_NOSAVEGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_NoSaveGame
{
public:
    QLabel *label;

    void setupUi(QDialog *NoSaveGame)
    {
        if (NoSaveGame->objectName().isEmpty())
            NoSaveGame->setObjectName(QStringLiteral("NoSaveGame"));
        NoSaveGame->resize(640, 280);
        label = new QLabel(NoSaveGame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 100, 341, 41));
        QFont font;
        font.setFamily(QStringLiteral("FangSong"));
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(NoSaveGame);

        QMetaObject::connectSlotsByName(NoSaveGame);
    } // setupUi

    void retranslateUi(QDialog *NoSaveGame)
    {
        NoSaveGame->setWindowTitle(QApplication::translate("NoSaveGame", "Dialog", nullptr));
        label->setText(QApplication::translate("NoSaveGame", "\346\234\252\345\217\221\347\216\260\346\234\211\345\255\230\346\241\243\357\274\214\350\257\267\345\274\200\345\247\213\346\226\260\347\232\204\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoSaveGame: public Ui_NoSaveGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSAVEGAME_H
