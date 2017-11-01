#-------------------------------------------------
#
# Project created by QtCreator 2017-10-18T16:52:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
       bcm2835_stub.cpp \
    pin.cpp \
    pwm.cpp

HEADERS  += mainwindow.h\
            bcm2835.h \
    pin.h \
    pwm.h

FORMS    += mainwindow.ui
