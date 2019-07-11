QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhotoShock
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
        Memento/caretaker.cpp \
        Memento/memento.cpp \
        Memento/originator.cpp \
        blur.cpp \
        controller.cpp \
        flipHorizontal.cpp \
        flipVertical.cpp \
        grayscale.cpp \
        hsl_process.cpp \
        imghandling.cpp \
        main.cpp \
        mainwindow.cpp \
        model.cpp \
        rgb_process.cpp \
        rotation.cpp \
        sepia.cpp \
        sharp.cpp

HEADERS += \
    Memento/caretaker.h \
    Memento/memento.h \
    Memento/originator.h \
    blur.h \
    controller.h \
    flipHorizontal.h \
    flipVertical.h \
    grayscale.h \
    hsl_process.h \
        imghandling.h \
    kernels.h \
        mainwindow.h \
    model.h \
    observer.h \
    process.h \
    rgb_process.h \
    rotation.h \
    sepia.h \
    sharp.h \
    subject.h

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
