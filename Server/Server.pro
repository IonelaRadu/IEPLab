#-------------------------------------------------
#
# Project created by QtCreator 2017-10-14T18:13:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
       bcm2835_stub.cpp

HEADERS  += mainwindow.h\
            bcm2835.h

FORMS    += mainwindow.ui
