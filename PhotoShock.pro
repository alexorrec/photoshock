QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhotoShock
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
        blur.cpp \
        flip.cpp \
        hsl_process.cpp \
        imghandling.cpp \
        kernels.cpp \
        main.cpp \
        mainwindow.cpp \
        matrix_filters.cpp \
        process.cpp \
        rgb_process.cpp \
        rotation.cpp

HEADERS += \
    blur.h \
    flip.h \
    hsl_process.h \
        imghandling.h \
    kernels.h \
        mainwindow.h \
    matrix_filters.h \
    process.h \
    rgb_process.h \
    rotation.h

FORMS += \
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

DISTFILES += \
    test/lib/library.json
