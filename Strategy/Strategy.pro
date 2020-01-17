TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        print.cpp \
        printstrategy.cpp \
        printtofile.cpp \
        printtoscreen.cpp

HEADERS += \
    print.h \
    printstrategy.h \
    printtofile.h \
    printtoscreen.h
