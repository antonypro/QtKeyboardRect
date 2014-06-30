#-------------------------------------------------
#
# Project created by QtCreator 2014-06-29T17:31:03
#
#-------------------------------------------------

QT       += core gui quick androidextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources

TARGET = Demo2
TEMPLATE = app


SOURCES += \
    main.cpp \
    keyboardinterface.cpp

HEADERS  += \
    keyboardinterface.h

OTHER_FILES += \
    android-sources/AndroidManifest.xml \
    android-sources/src/org/qtproject/example/Demo2/JavaInterface.java

RESOURCES += \
    qml.qrc
