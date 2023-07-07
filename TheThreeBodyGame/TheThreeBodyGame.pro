#-------------------------------------------------
#
# Project created by QtCreator 2023-06-02T20:11:32
#
#-------------------------------------------------

QT       += core gui
QT       += 3dcore 3drender 3dinput
QT       += 3dextras
QT       += multimedia




greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TheThreeBodyGame
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    mainwindow.cpp \
    gamepage.cpp \
    pausewindow.cpp \
    ending.cpp

HEADERS += \
    mainwindow.h \
    gamepage.h \
    sun.h \
    planet.h \
    civilization.h \
    gamestatus.h \
    players.h \
    pausewindow.h \
    ending.h

FORMS += \
    mainwindow.ui \
    gamepage.ui \
    pausewindow.ui \
    ending.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
