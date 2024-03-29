QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../Admin.cpp \
    ../Chauffeur.cpp \
    ../Colis.cpp \
    ../Dispatcher.cpp \
    ../Personne.cpp \
    ../Trajet.cpp \
    adminwindow.cpp \
    chauffeurwindow.cpp \
    dispatchwindow.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../Colis.hpp \
    ../Dispatcher.hpp \
    ../Personne.hpp \
    ../Trajet.hpp \
    adminwindow.h \
    chauffeurwindow.h \
    dispatchwindow.h \
    mainwindow.h

FORMS += \
    adminwindow.ui \
    chauffeurwindow.ui \
    dispatchwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
