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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gamepage
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Gamepage)
    {
        if (Gamepage->objectName().isEmpty())
            Gamepage->setObjectName(QStringLiteral("Gamepage"));
        Gamepage->resize(640, 480);
        pushButton = new QPushButton(Gamepage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 370, 93, 28));

        retranslateUi(Gamepage);

        QMetaObject::connectSlotsByName(Gamepage);
    } // setupUi

    void retranslateUi(QWidget *Gamepage)
    {
        Gamepage->setWindowTitle(QApplication::translate("Gamepage", "Form", nullptr));
        pushButton->setText(QApplication::translate("Gamepage", "Show Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamepage: public Ui_Gamepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAGE_H
