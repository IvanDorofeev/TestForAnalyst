QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += "D:\Sozvezdiye1\build-Testforlib-Desktop_x86_windows_msys_pe_64bit-Debug\debug\Analyst.dll"

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    tester.cpp

HEADERS += \
    Analyst_global.h \
    analyst.h \
    collectedStatistic.h \
    mainwindow.h \
    someStatistic.h \
    statistic.h \
    tester.h

FORMS += \
    mainwindow.ui
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
