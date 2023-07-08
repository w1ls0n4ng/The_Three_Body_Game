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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QLabel *constant_era_label;
    QLabel *chaotic_era_label;
    QLabel *civilization_label;
    QLabel *civilization_state_label;
    QLabel *deadly_temp_label;
    QLabel *constant_era;
    QLabel *continue_constant_era_label;
    QLabel *continue_constant_era;
    QLabel *chaotic_era;
    QLabel *civilization;
    QLabel *civilization_state;
    QLabel *deadly_temp;
    QLabel *ave_temp;
    QLabel *ave_temp_label;
    QLabel *civilization_no;
    QLabel *planet_no;
    QGroupBox *groupBox_2;
    QLabel *unit;
    QLabel *red_label;
    QLabel *green_label;
    QLabel *blue_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QLabel *label1_3;
    QLabel *label2_3;
    QLabel *label3_3;
    QLabel *title_label;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_4;
    QLabel *label_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit;
    QWidget *upperRightwidget;
    QWidget *upperLeftwidget;
    QPushButton *pushButton;
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
        population_label->setGeometry(QRect(25, 130, 55, 21));
        population_label->setAutoFillBackground(false);
        population_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        population_label->setFrameShadow(QFrame::Plain);
        population = new QProgressBar(groupBox);
        population->setObjectName(QStringLiteral("population"));
        population->setGeometry(QRect(80, 130, 181, 23));
        population->setAutoFillBackground(false);
        population->setStyleSheet(QStringLiteral(""));
        population->setValue(24);
        population->setTextVisible(false);
        year_label = new QLabel(groupBox);
        year_label->setObjectName(QStringLiteral("year_label"));
        year_label->setGeometry(QRect(25, 160, 30, 21));
        year_label->setAutoFillBackground(false);
        year_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        year = new QLabel(groupBox);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(45, 160, 191, 21));
        year->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        constant_era_label = new QLabel(groupBox);
        constant_era_label->setObjectName(QStringLiteral("constant_era_label"));
        constant_era_label->setGeometry(QRect(25, 190, 100, 21));
        constant_era_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        chaotic_era_label = new QLabel(groupBox);
        chaotic_era_label->setObjectName(QStringLiteral("chaotic_era_label"));
        chaotic_era_label->setGeometry(QRect(25, 220, 100, 21));
        chaotic_era_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        civilization_label = new QLabel(groupBox);
        civilization_label->setObjectName(QStringLiteral("civilization_label"));
        civilization_label->setGeometry(QRect(25, 250, 100, 21));
        civilization_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        civilization_state_label = new QLabel(groupBox);
        civilization_state_label->setObjectName(QStringLiteral("civilization_state_label"));
        civilization_state_label->setGeometry(QRect(25, 280, 80, 21));
        civilization_state_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        deadly_temp_label = new QLabel(groupBox);
        deadly_temp_label->setObjectName(QStringLiteral("deadly_temp_label"));
        deadly_temp_label->setGeometry(QRect(25, 310, 80, 21));
        deadly_temp_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 10pt \"Microsoft YaHei UI\";"));
        constant_era = new QLabel(groupBox);
        constant_era->setObjectName(QStringLiteral("constant_era"));
        constant_era->setGeometry(QRect(115, 190, 71, 21));
        constant_era->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        continue_constant_era_label = new QLabel(groupBox);
        continue_constant_era_label->setObjectName(QStringLiteral("continue_constant_era_label"));
        continue_constant_era_label->setGeometry(QRect(190, 190, 100, 21));
        continue_constant_era_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        continue_constant_era = new QLabel(groupBox);
        continue_constant_era->setObjectName(QStringLiteral("continue_constant_era"));
        continue_constant_era->setGeometry(QRect(280, 190, 71, 21));
        continue_constant_era->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        chaotic_era = new QLabel(groupBox);
        chaotic_era->setObjectName(QStringLiteral("chaotic_era"));
        chaotic_era->setGeometry(QRect(115, 220, 71, 21));
        chaotic_era->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        civilization = new QLabel(groupBox);
        civilization->setObjectName(QStringLiteral("civilization"));
        civilization->setGeometry(QRect(100, 250, 71, 21));
        civilization->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        civilization_state = new QLabel(groupBox);
        civilization_state->setObjectName(QStringLiteral("civilization_state"));
        civilization_state->setGeometry(QRect(100, 280, 71, 21));
        civilization_state->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        deadly_temp = new QLabel(groupBox);
        deadly_temp->setObjectName(QStringLiteral("deadly_temp"));
        deadly_temp->setGeometry(QRect(100, 310, 191, 21));
        deadly_temp->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        ave_temp = new QLabel(groupBox);
        ave_temp->setObjectName(QStringLiteral("ave_temp"));
        ave_temp->setGeometry(QRect(265, 220, 71, 21));
        ave_temp->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 0);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"color: rgb(210, 238, 255);"));
        ave_temp_label = new QLabel(groupBox);
        ave_temp_label->setObjectName(QStringLiteral("ave_temp_label"));
        ave_temp_label->setGeometry(QRect(190, 220, 100, 21));
        ave_temp_label->setStyleSheet(QLatin1String("font: 75 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        civilization_no = new QLabel(groupBox);
        civilization_no->setObjectName(QStringLiteral("civilization_no"));
        civilization_no->setGeometry(QRect(80, 80, 181, 31));
        civilization_no->setStyleSheet(QLatin1String("color: rgb(85, 255, 255);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"background: transparent;"));
        planet_no = new QLabel(groupBox);
        planet_no->setObjectName(QStringLiteral("planet_no"));
        planet_no->setGeometry(QRect(80, 50, 121, 16));
        planet_no->setStyleSheet(QLatin1String("color: rgb(85, 255, 255);\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
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
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(1600, 540, 291, 431));
        label1_3 = new QLabel(groupBox_3);
        label1_3->setObjectName(QStringLiteral("label1_3"));
        label1_3->setGeometry(QRect(20, 60, 241, 31));
        label1_3->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 255);"));
        label2_3 = new QLabel(groupBox_3);
        label2_3->setObjectName(QStringLiteral("label2_3"));
        label2_3->setGeometry(QRect(20, 90, 241, 31));
        label2_3->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 255);"));
        label3_3 = new QLabel(groupBox_3);
        label3_3->setObjectName(QStringLiteral("label3_3"));
        label3_3->setGeometry(QRect(20, 120, 241, 31));
        label3_3->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 255);"));
        title_label = new QLabel(groupBox_3);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(30, 15, 101, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(119, 143, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(66, 98, 247, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(6, 27, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(8, 36, 160, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(134, 154, 247, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        QBrush brush10(QColor(13, 54, 240, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        title_label->setPalette(palette);
        title_label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 255);"));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(1030, 650, 120, 80));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(800, 840, 611, 141));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 101, 41));
        label_5->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 255);"));
        radioButton = new QRadioButton(groupBox_4);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(130, 40, 81, 19));
        radioButton->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 0, 0);"));
        radioButton->setChecked(false);
        radioButton_2 = new QRadioButton(groupBox_4);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(130, 90, 81, 19));
        radioButton_2->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 255, 0);"));
        radioButton_2->setCheckable(true);
        radioButton_2->setChecked(false);
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(242, 40, 191, 41));
        upperRightwidget = new QWidget(centralwidget);
        upperRightwidget->setObjectName(QStringLiteral("upperRightwidget"));
        upperRightwidget->setGeometry(QRect(1600, 20, 290, 330));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(upperRightwidget->sizePolicy().hasHeightForWidth());
        upperRightwidget->setSizePolicy(sizePolicy);
        upperRightwidget->setStyleSheet(QStringLiteral(""));
        upperLeftwidget = new QWidget(centralwidget);
        upperLeftwidget->setObjectName(QStringLiteral("upperLeftwidget"));
        upperLeftwidget->setGeometry(QRect(20, 20, 360, 410));
        lineEdit->setGeometry(QRect(240, 50, 191, 41));
        lineEdit->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 60, 93, 28));
        pushButton->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);"));
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
        constant_era_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\346\201\222\347\272\252\345\205\203</span></p></body></html>", nullptr));
        chaotic_era_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\344\271\261\347\272\252\345\205\203</span></p></body></html>", nullptr));
        civilization_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\345\255\225\350\202\262\344\270\255</span></p></body></html>", nullptr));
        civilization_state_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\346\226\207\346\230\216\347\212\266\346\200\201</span></p></body></html>", nullptr));
        deadly_temp_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\350\207\264\345\221\275\346\270\251\345\272\246</span></p></body></html>", nullptr));
        constant_era->setText(QApplication::translate("Gamepage", "200", nullptr));
        continue_constant_era_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\350\277\236\347\273\255\346\201\222\347\272\252\345\205\203</span></p></body></html>", nullptr));
        continue_constant_era->setText(QApplication::translate("Gamepage", "200", nullptr));
        chaotic_era->setText(QApplication::translate("Gamepage", "200", nullptr));
        civilization->setText(QApplication::translate("Gamepage", "200", nullptr));
        civilization_state->setText(QApplication::translate("Gamepage", "200", nullptr));
        deadly_temp->setText(QApplication::translate("Gamepage", "200", nullptr));
        ave_temp->setText(QApplication::translate("Gamepage", "200", nullptr));
        ave_temp_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#55ffff;\">\345\271\263\345\235\207\346\270\251\345\272\246</span></p></body></html>", nullptr));
        civilization_no->setText(QApplication::translate("Gamepage", "<html><head/><body><p>\347\254\254\345\207\240\345\217\267\346\226\207\346\230\216</p></body></html>", nullptr));
        planet_no->setText(QApplication::translate("Gamepage", "\350\241\214\346\230\237520\345\217\267", nullptr));
        groupBox_2->setTitle(QString());
        unit->setText(QApplication::translate("Gamepage", "<html><head/><body><p align=\"justify\"><span style=\" color:#55ffff;\">\345\215\225\344\275\215</span><span style=\" color:#9fb3c3;\"> A.U.</span><span style=\" color:#55ffff;\">/</span><span style=\" color:#9fb3c3;\">10^30kg</span><span style=\" color:#55ffff;\">/</span><span style=\" color:#9fb3c3;\">A.U./\345\215\201\345\271\264</span><span style=\" color:#55ffff;\">/</span><span style=\" color:#9fb3c3;\">\345\271\264</span></p></body></html>", nullptr));
        red_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#ff0000;\">\347\272\242\357\274\232</span></p></body></html>", nullptr));
        green_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#00aa7f;\">\347\273\277\357\274\232</span></p></body></html>", nullptr));
        blue_label->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#0055ff;\">\350\223\235\357\274\232</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("Gamepage", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Gamepage", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("Gamepage", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("Gamepage", "<html><head/><body><p><span style=\" color:#9fb3c3;\">\344\270\216\350\241\214\346\230\237\350\267\235\347\246\273/\350\264\250\351\207\217/\351\200\237\347\216\207/\350\241\214\346\230\237\345\271\264</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        label1_3->setText(QString());
        label2_3->setText(QString());
        label3_3->setText(QString());
        title_label->setText(QApplication::translate("Gamepage", "\351\242\204\350\250\200\345\261\225\347\244\272\357\274\232", nullptr));
        groupBox_5->setTitle(QApplication::translate("Gamepage", "GroupBox", nullptr));
        label_5->setText(QApplication::translate("Gamepage", "\347\216\251\345\256\266\351\242\204\350\250\200\357\274\232", nullptr));
        radioButton->setText(QApplication::translate("Gamepage", "\350\203\234\345\210\251", nullptr));
        radioButton_2->setText(QApplication::translate("Gamepage", "\345\244\261\350\264\245", nullptr));
        lineEdit->setText(QApplication::translate("Gamepage", "68", nullptr));
        pushButton->setText(QApplication::translate("Gamepage", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamepage: public Ui_Gamepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAGE_H
