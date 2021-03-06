#-------------------------------------------------
#
# Project created by QtCreator 2018-05-02T17:13:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZJHCaptionWidget
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#include(Qt-Color-Widgets-master/color_widgets.pri)
#include(ColorDialog/colorDialog.pri)

INCLUDEPATH += $$PWD/ColorDialogDll/include
LIBS += -L$$PWD/ColorDialogDll/lib -lColorWidgetDll

message($$PWD/ColorDialogDll/include)


SOURCES += \
        main.cpp \
        src/widget.cpp \
        src/zjhcustommenu.cpp \
        src/zjhmenumanager.cpp \
    src/KSubColorDialog.cpp

HEADERS += \
        src/widget.h \
        src/zjhcustommenu.h \
        src/zjhmenumanager.h \
        src/zjhsingle.h \
        src/actiondefine.h \
    src/KSubColorDialog.h

FORMS += \
        src/widget.ui
