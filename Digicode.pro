TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        alarme.cpp \
        archivage.cpp \
        bd.cpp \
        chrono.cpp \
        interface.cpp \
        kbhit.cpp \
        main.cpp \
        porte.cpp

HEADERS += \
    alarme.h \
    archivage.h \
    bd.h \
    chrono.h \
    interface.h \
    kbhit.h \
    objettempo.h \
    porte.h \
    systeme.h
