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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ending
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *ending)
    {
        if (ending->objectName().isEmpty())
            ending->setObjectName(QStringLiteral("ending"));
        ending->resize(400, 300);
        buttonBox = new QDialogButtonBox(ending);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ending);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 80, 181, 91));

        retranslateUi(ending);
        QObject::connect(buttonBox, SIGNAL(accepted()), ending, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ending, SLOT(reject()));

        QMetaObject::connectSlotsByName(ending);
    } // setupUi

    void retranslateUi(QDialog *ending)
    {
        ending->setWindowTitle(QApplication::translate("ending", "Dialog", nullptr));
        label->setText(QApplication::translate("ending", "\346\270\270\346\210\217\347\273\223\346\235\237\357\274\210\345\276\205\345\274\200\345\217\221\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ending: public Ui_ending {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDING_H
