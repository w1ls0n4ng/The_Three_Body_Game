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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ending
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ending)
    {
        if (ending->objectName().isEmpty())
            ending->setObjectName(QStringLiteral("ending"));
        ending->resize(400, 300);
        textBrowser = new QTextBrowser(ending);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(70, 20, 256, 192));
        pushButton = new QPushButton(ending);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 240, 93, 28));
        pushButton_2 = new QPushButton(ending);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 240, 93, 28));

        retranslateUi(ending);

        QMetaObject::connectSlotsByName(ending);
    } // setupUi

    void retranslateUi(QDialog *ending)
    {
        ending->setWindowTitle(QApplication::translate("ending", "Dialog", nullptr));
        textBrowser->setHtml(QApplication::translate("ending", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1234567890</p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("ending", "\345\233\236\345\210\260\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton_2->setText(QApplication::translate("ending", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ending: public Ui_ending {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDING_H
