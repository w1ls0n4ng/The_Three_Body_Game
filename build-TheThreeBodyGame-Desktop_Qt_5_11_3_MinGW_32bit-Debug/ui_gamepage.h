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
    QLabel *population_label;
    QProgressBar *population;
    QLabel *year_label;
    QLabel *year;
    QLabel *hjy_label;
    QLabel *ljy;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
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
        groupBox->setGeometry(QRect(30, 430, 360, 512));
        groupBox->setStyleSheet(QStringLiteral(""));
        population_label = new QLabel(groupBox);
        population_label->setObjectName(QStringLiteral("population_label"));
        population_label->setGeometry(QRect(30, 90, 55, 21));
        population_label->setAutoFillBackground(false);
        population_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        population_label->setFrameShadow(QFrame::Plain);
        population = new QProgressBar(groupBox);
        population->setObjectName(QStringLiteral("population"));
        population->setGeometry(QRect(90, 90, 181, 23));
        population->setAutoFillBackground(false);
        population->setStyleSheet(QStringLiteral(""));
        population->setValue(24);
        population->setTextVisible(false);
        year_label = new QLabel(groupBox);
        year_label->setObjectName(QStringLiteral("year_label"));
        year_label->setGeometry(QRect(30, 120, 30, 21));
        year_label->setAutoFillBackground(false);
        year_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        year = new QLabel(groupBox);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(60, 120, 191, 21));
        year->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        hjy_label = new QLabel(groupBox);
        hjy_label->setObjectName(QStringLiteral("hjy_label"));
        hjy_label->setGeometry(QRect(30, 150, 100, 21));
        hjy_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        ljy = new QLabel(groupBox);
        ljy->setObjectName(QStringLiteral("ljy"));
        ljy->setGeometry(QRect(30, 180, 100, 21));
        ljy->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 260, 55, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 280, 55, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 320, 55, 16));
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
        population_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" font-size:10pt; color:#00ffff;\">\344\272\272\345\217\243%</span></p></body></html>", nullptr));
        year_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" font-size:10pt; color:#55ffff;\">\345\271\264</span></p></body></html>", nullptr));
        year->setText(QApplication::translate("Gamepage", "200", nullptr));
        hjy_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\346\201\222\347\272\252\345\205\203</span></p></body></html>", nullptr));
        ljy->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\344\271\261\347\272\252\345\205\203</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Gamepage", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("Gamepage", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("Gamepage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamepage: public Ui_Gamepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAGE_H
