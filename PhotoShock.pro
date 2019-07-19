QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhotoShock
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
        ImgFunctions/blur.cpp \
        ImgFunctions/flipVertical.cpp \
        ImgFunctions/fliphorizontal.cpp \
        ImgFunctions/grayscale.cpp \
        ImgFunctions/hsl_process.cpp \
        ImgFunctions/imghandling.cpp \
        ImgFunctions/rgb_process.cpp \
        ImgFunctions/rotation.cpp \
        ImgFunctions/sepia.cpp \
        ImgFunctions/sharp.cpp \
        Memento/caretaker.cpp \
        Memento/memento.cpp \
        Memento/originator.cpp \
        controller.cpp \
        main.cpp \
        mainwindow.cpp \
        model.cpp

HEADERS += \
    ImgFunctions/blur.h \
    ImgFunctions/flipVertical.h \
    ImgFunctions/fliphorizontal.h \
    ImgFunctions/grayscale.h \
    ImgFunctions/hsl_process.h \
    ImgFunctions/imghandling.h \
    ImgFunctions/kernels.h \
    ImgFunctions/process.h \
    ImgFunctions/rgb_process.h \
    ImgFunctions/rotation.h \
    ImgFunctions/sepia.h \
    ImgFunctions/sharp.h \
    Memento/caretaker.h \
    Memento/memento.h \
    Memento/originator.h \
    controller.h \
        mainwindow.h \
    model.h \
    observer.h \
    subject.h

FORMS += \
        mainwindow.ui

LIBS += /usr/local/lib/libopencv_core.3.4.6.dylib
LIBS += /usr/local/lib/libopencv_highgui.3.4.6.dylib
LIBS += /usr/local/lib/libopencv_imgproc.3.4.6.dylib


QT_CONFIG -= no-pkg-config
CONFIG  += link_pkgconfig
PKGCONFIG += opencv


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    test/lib/library.json
