/********************************************************************************
** Form generated from reading UI file 'gamepage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPAGE_H
#define UI_GAMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
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
    QLabel *constant_era_label;
    QLabel *chaotic_era_label;
    QLabel *civilization_label;
    QLabel *civilization_state_label;
    QLabel *deadly_temp_label;
    QLabel *disastor_temp_label;
    QLabel *constant_era;
    QLabel *continue_constant_era_label;
    QLabel *continue_constant_era;
    QLabel *chaotic_era;
    QLabel *civilization;
    QLabel *civilization_state;
    QLabel *deadly_temp;
    QLabel *disastor_temp;
    QLabel *ave_temp;
    QLabel *ave_temp_label;
    QGroupBox *groupBox_2;
    QLabel *unit;
    QLabel *red_label;
    QLabel *green_label;
    QLabel *blue_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
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
        groupBox->setGeometry(QRect(20, 460, 360, 512));
        groupBox->setStyleSheet(QStringLiteral(""));
        population_label = new QLabel(groupBox);
        population_label->setObjectName(QStringLiteral("population_label"));
        population_label->setGeometry(QRect(25, 90, 55, 21));
        population_label->setAutoFillBackground(false);
        population_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        population_label->setFrameShadow(QFrame::Plain);
        population = new QProgressBar(groupBox);
        population->setObjectName(QStringLiteral("population"));
        population->setGeometry(QRect(80, 90, 181, 23));
        population->setAutoFillBackground(false);
        population->setStyleSheet(QStringLiteral(""));
        population->setValue(24);
        population->setTextVisible(false);
        year_label = new QLabel(groupBox);
        year_label->setObjectName(QStringLiteral("year_label"));
        year_label->setGeometry(QRect(25, 120, 30, 21));
        year_label->setAutoFillBackground(false);
        year_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        year = new QLabel(groupBox);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(45, 120, 191, 21));
        year->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        constant_era_label = new QLabel(groupBox);
        constant_era_label->setObjectName(QStringLiteral("constant_era_label"));
        constant_era_label->setGeometry(QRect(25, 150, 100, 21));
        constant_era_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        chaotic_era_label = new QLabel(groupBox);
        chaotic_era_label->setObjectName(QStringLiteral("chaotic_era_label"));
        chaotic_era_label->setGeometry(QRect(25, 180, 100, 21));
        chaotic_era_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        civilization_label = new QLabel(groupBox);
        civilization_label->setObjectName(QStringLiteral("civilization_label"));
        civilization_label->setGeometry(QRect(25, 210, 100, 21));
        civilization_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        civilization_state_label = new QLabel(groupBox);
        civilization_state_label->setObjectName(QStringLiteral("civilization_state_label"));
        civilization_state_label->setGeometry(QRect(25, 240, 80, 21));
        civilization_state_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        deadly_temp_label = new QLabel(groupBox);
        deadly_temp_label->setObjectName(QStringLiteral("deadly_temp_label"));
        deadly_temp_label->setGeometry(QRect(25, 270, 80, 21));
        deadly_temp_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        disastor_temp_label = new QLabel(groupBox);
        disastor_temp_label->setObjectName(QStringLiteral("disastor_temp_label"));
        disastor_temp_label->setGeometry(QRect(25, 300, 80, 21));
        disastor_temp_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        constant_era = new QLabel(groupBox);
        constant_era->setObjectName(QStringLiteral("constant_era"));
        constant_era->setGeometry(QRect(115, 150, 71, 21));
        constant_era->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        continue_constant_era_label = new QLabel(groupBox);
        continue_constant_era_label->setObjectName(QStringLiteral("continue_constant_era_label"));
        continue_constant_era_label->setGeometry(QRect(190, 150, 100, 21));
        continue_constant_era_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        continue_constant_era = new QLabel(groupBox);
        continue_constant_era->setObjectName(QStringLiteral("continue_constant_era"));
        continue_constant_era->setGeometry(QRect(280, 150, 71, 21));
        continue_constant_era->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        chaotic_era = new QLabel(groupBox);
        chaotic_era->setObjectName(QStringLiteral("chaotic_era"));
        chaotic_era->setGeometry(QRect(115, 180, 71, 21));
        chaotic_era->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        civilization = new QLabel(groupBox);
        civilization->setObjectName(QStringLiteral("civilization"));
        civilization->setGeometry(QRect(100, 210, 71, 21));
        civilization->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        civilization_state = new QLabel(groupBox);
        civilization_state->setObjectName(QStringLiteral("civilization_state"));
        civilization_state->setGeometry(QRect(100, 240, 71, 21));
        civilization_state->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        deadly_temp = new QLabel(groupBox);
        deadly_temp->setObjectName(QStringLiteral("deadly_temp"));
        deadly_temp->setGeometry(QRect(100, 270, 191, 21));
        deadly_temp->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        disastor_temp = new QLabel(groupBox);
        disastor_temp->setObjectName(QStringLiteral("disastor_temp"));
        disastor_temp->setGeometry(QRect(100, 300, 71, 21));
        disastor_temp->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        ave_temp = new QLabel(groupBox);
        ave_temp->setObjectName(QStringLiteral("ave_temp"));
        ave_temp->setGeometry(QRect(265, 180, 71, 21));
        ave_temp->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        ave_temp_label = new QLabel(groupBox);
        ave_temp_label->setObjectName(QStringLiteral("ave_temp_label"));
        ave_temp_label->setGeometry(QRect(190, 180, 100, 21));
        ave_temp_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(1600, 360, 290, 172));
        unit = new QLabel(groupBox_2);
        unit->setObjectName(QStringLiteral("unit"));
        unit->setGeometry(QRect(40, 25, 221, 21));
        unit->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 8pt \"Microsoft YaHei UI\";\n"
""));
        unit->setScaledContents(false);
        red_label = new QLabel(groupBox_2);
        red_label->setObjectName(QStringLiteral("red_label"));
        red_label->setGeometry(QRect(40, 75, 55, 21));
        red_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 8pt \"Microsoft YaHei UI\";\n"
""));
        green_label = new QLabel(groupBox_2);
        green_label->setObjectName(QStringLiteral("green_label"));
        green_label->setGeometry(QRect(40, 100, 55, 21));
        green_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 8pt \"Microsoft YaHei UI\";\n"
""));
        blue_label = new QLabel(groupBox_2);
        blue_label->setObjectName(QStringLiteral("blue_label"));
        blue_label->setGeometry(QRect(40, 125, 55, 21));
        blue_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 8pt \"Microsoft YaHei UI\";\n"
""));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 75, 211, 21));
        label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 211, 21));
        label_2->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 125, 211, 21));
        label_3->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 50, 201, 21));
        label_4->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 8pt \"Microsoft YaHei UI\";"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1600, 10, 291, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 10, 361, 331));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
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
        Gamepage->setWindowTitle(QApplication::translate("Gamepage", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        groupBox->setWhatsThis(QApplication::translate("Gamepage", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        population_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" font-size:10pt; color:#00ffff;\">\344\272\272\345\217\243%</span></p></body></html>", Q_NULLPTR));
        year_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" font-size:10pt; color:#55ffff;\">\345\271\264</span></p></body></html>", Q_NULLPTR));
        year->setText(QApplication::translate("Gamepage", "200", Q_NULLPTR));
        constant_era_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\346\201\222\347\272\252\345\205\203</span></p></body></html>", Q_NULLPTR));
        chaotic_era_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\344\271\261\347\272\252\345\205\203</span></p></body></html>", Q_NULLPTR));
        civilization_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\345\255\225\350\202\262\344\270\255</span></p></body></html>", Q_NULLPTR));
        civilization_state_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\347\212\266\346\200\201</span></p></body></html>", Q_NULLPTR));
        deadly_temp_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\350\207\264\345\221\275\346\270\251\345\272\246</span></p></body></html>", Q_NULLPTR));
        disastor_temp_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\347\201\276\351\232\276\346\270\251\345\272\246</span></p></body></html>", Q_NULLPTR));
        constant_era->setText(QApplication::translate("Gamepage", "200", Q_NULLPTR));
        continue_constant_era_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\350\277\236\347\273\255\346\201\222\347\272\252\345\205\203</span></p></body></html>", Q_NULLPTR));
        continue_constant_era->setText(QApplication::translate("Gamepage", "200", Q_NULLPTR));
        chaotic_era->setText(QApplication::translate("Gamepage", "200", Q_NULLPTR));
        civilization->setText(QApplication::translate("Gamepage", "200", Q_NULLPTR));
        civilization_state->setText(QApplication::translate("Gamepage", "200", Q_NULLPTR));
        deadly_temp->setText(QApplication::translate("Gamepage", "200", Q_NULLPTR));
        disastor_temp->setText(QString());
        ave_temp->setText(QApplication::translate("Gamepage", "200", Q_NULLPTR));
        ave_temp_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\345\271\263\345\235\207\346\270\251\345\272\246</span></p></body></html>", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        unit->setText(QApplication::translate("Gamepage", "<html><head/><body><p align=\"justify\"><span style=\" color:#55ffff;\">\345\215\225\344\275\215</span><span style=\" color:#9fb3c3;\"> A.U.</span><span style=\" color:#55ffff;\">/</span><span style=\" color:#9fb3c3;\">10^30kg</span><span style=\" color:#55ffff;\">/</span><span style=\" color:#9fb3c3;\">A.U./\345\215\201\345\271\264</span><span style=\" color:#55ffff;\">/</span><span style=\" color:#9fb3c3;\">\345\271\264</span></p></body></html>", Q_NULLPTR));
        red_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#ff0000;\">\347\272\242\357\274\232</span></p></body></html>", Q_NULLPTR));
        green_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#00aa7f;\">\347\273\277\357\274\232</span></p></body></html>", Q_NULLPTR));
        blue_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#0055ff;\">\350\223\235\357\274\232</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Gamepage", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("Gamepage", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("Gamepage", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#9fb3c3;\">\344\270\216\350\241\214\346\230\237\350\267\235\347\246\273/\350\264\250\351\207\217/\351\200\237\347\216\207/\350\241\214\346\230\237\345\271\264</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Gamepage: public Ui_Gamepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAGE_H
