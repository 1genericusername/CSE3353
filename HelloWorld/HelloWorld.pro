TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sort.cpp \
    search.cpp \
    bubble.cpp \
    insertion.cpp \
    merge.cpp \
    sortalgorithm.cpp

HEADERS += \
    algorithm.h \
    sort.h \
    search.h \
    bubble.h \
    merge.h \
    insertion.h \
    sortalgorithm.h
