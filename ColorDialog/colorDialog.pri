CONFIG += c++11

INCLUDEPATH += $$PWD/src $$PWD/include $$PWD/ui

SOURCES += \
    $$PWD/src/BasicColorArea.cpp \
    $$PWD/src/BasicColorItem.cpp \
    $$PWD/src/ColorDialog.cpp \
    $$PWD/src/CustomColorArea.cpp \
    $$PWD/src/HColorArea.cpp \
    $$PWD/src/PreviewColorArea.cpp \
    $$PWD/src/SVColorArea.cpp

HEADERS  += \
    $$PWD/include/BasicColorArea.h \
    $$PWD/include/BasicColorItem.h \
    $$PWD/include/ColorDialog.h \
    $$PWD/include/CustomColorArea.h \
    $$PWD/include/HColorArea.h \
    $$PWD/include/PreviewColorArea.h \
    $$PWD/include/SVColorArea.h

FORMS    += \
    $$PWD/ui/ColorDialog.ui
