#-------------------------------------------------
#
# Project created by QtCreator 2019-05-11T10:13:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhotoShock
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
        geometrical_process.cpp \
        hsl_dlg.cpp \
        imghandling.cpp \
        imgprocessing.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        geometrical_process.h \
        hsl_dlg.h \
        imghandling.h \
        imgprocessing.h \
        mainwindow.h

FORMS += \
        geometrical_process.ui \
        hsl_dlg.ui \
        mainwindow.ui

LIBS += /usr/local/lib/libopencv_core.3.4.6.dylib
LIBS += /usr/local/lib/libopencv_highgui.3.4.6.dylib

QT_CONFIG -= no-pkg-config
CONFIG  += link_pkgconfig
PKGCONFIG += opencv


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
