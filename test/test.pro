TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    testing.cpp

HEADERS += \
    header.h

LIBS += -lboost_unit_test_framework
