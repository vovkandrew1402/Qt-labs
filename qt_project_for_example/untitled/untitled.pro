QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AbstractReader.cpp \
    CSVReader.cpp \
    CSVWriter.cpp \
    JsonReader.cpp \
    ReaderException.cpp \
    Staffer.cpp \
    main.cpp \
    mainwindow.cpp \
    msgbox.cpp

HEADERS += \
    ../../../laba_2_widget/untitled/json.hpp \
    ../../../laba_2_widget/untitled/nlohmann/json.hpp \
    AbstractReader.h \
    CSVReader.h \
    CSVWriter.h \
    JsonReader.h \
    ReaderException.h \
    Staffer.h \
    Student.h \
    Teacher.h \
    Worker.h \
    mainwindow.h \
    msgbox.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-untitled-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/lab2.json \
    ../lab2.csv
