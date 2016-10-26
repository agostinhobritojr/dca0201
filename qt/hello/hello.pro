#-------------------------------------------------
#
# Project created by QtCreator 2016-10-14T07:49:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hello
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plotter.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    plotter.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui

RESOURCES += \
    recursos.qrc
