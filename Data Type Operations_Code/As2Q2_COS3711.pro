#-------------------------------------------------
#
# Project created by QtCreator 2019-09-21T10:40:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = As2Q2_COS3711
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    operations.cpp \
    intoperations.cpp \
    stringoperations.cpp \
    stringlistoperations.cpp \
    client.cpp \
    factoryoperations.cpp

HEADERS  += widget.h \
    operations.h \
    intoperations.h \
    stringoperations.h \
    stringlistoperations.h \
    client.h \
    factoryoperations.h

FORMS    += widget.ui
