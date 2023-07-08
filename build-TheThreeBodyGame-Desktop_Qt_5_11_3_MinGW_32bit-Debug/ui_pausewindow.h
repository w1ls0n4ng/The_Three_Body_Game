/********************************************************************************
** Form generated from reading UI file 'pausewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAUSEWINDOW_H
#define UI_PAUSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PauseWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *PauseWindow)
    {
        if (PauseWindow->objectName().isEmpty())
            PauseWindow->setObjectName(QStringLiteral("PauseWindow"));
        PauseWindow->resize(640, 280);
        QFont font;
        font.setFamily(QStringLiteral("FangSong"));
        font.setPointSize(14);
        PauseWindow->setFont(font);
        pushButton = new QPushButton(PauseWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 170, 101, 41));
        pushButton->setStyleSheet(QStringLiteral("font: 12pt \"FangSong\";"));
        pushButton_2 = new QPushButton(PauseWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 170, 171, 41));
        pushButton_2->setStyleSheet(QStringLiteral("font: 12pt \"FangSong\";"));
        label = new QLabel(PauseWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 50, 101, 41));

        retranslateUi(PauseWindow);

        QMetaObject::connectSlotsByName(PauseWindow);
    } // setupUi

    void retranslateUi(QDialog *PauseWindow)
    {
        PauseWindow->setWindowTitle(QApplication::translate("PauseWindow", "Game Pause", nullptr));
        pushButton->setText(QApplication::translate("PauseWindow", "\347\273\247\347\273\255\346\270\270\346\210\217", nullptr));
        pushButton_2->setText(QApplication::translate("PauseWindow", "\351\200\200\345\207\272\345\271\266\344\277\235\345\255\230\346\270\270\346\210\217", nullptr));
        label->setText(QApplication::translate("PauseWindow", "\346\232\202\345\201\234\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PauseWindow: public Ui_PauseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSEWINDOW_H
