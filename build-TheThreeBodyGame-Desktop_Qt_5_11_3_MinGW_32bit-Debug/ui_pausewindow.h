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
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_PauseWindow
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PauseWindow)
    {
        if (PauseWindow->objectName().isEmpty())
            PauseWindow->setObjectName(QStringLiteral("PauseWindow"));
        PauseWindow->resize(640, 480);
        buttonBox = new QDialogButtonBox(PauseWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(PauseWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), PauseWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PauseWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(PauseWindow);
    } // setupUi

    void retranslateUi(QDialog *PauseWindow)
    {
        PauseWindow->setWindowTitle(QApplication::translate("PauseWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PauseWindow: public Ui_PauseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSEWINDOW_H
