/********************************************************************************
** Form generated from reading UI file 'ending.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDING_H
#define UI_ENDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ending
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *ending)
    {
        if (ending->objectName().isEmpty())
            ending->setObjectName(QStringLiteral("ending"));
        ending->resize(400, 300);
        pushButton = new QPushButton(ending);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 240, 93, 28));
        pushButton_2 = new QPushButton(ending);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 240, 93, 28));
        label = new QLabel(ending);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(31, 54, 331, 141));

        retranslateUi(ending);

        QMetaObject::connectSlotsByName(ending);
    } // setupUi

    void retranslateUi(QDialog *ending)
    {
        ending->setWindowTitle(QApplication::translate("ending", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("ending", "\345\233\236\345\210\260\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton_2->setText(QApplication::translate("ending", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        label->setText(QApplication::translate("ending", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ending: public Ui_ending {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDING_H
