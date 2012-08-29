#-------------------------------------------------
#
# Project created by QtCreator 2012-08-21T16:03:47
#
#-------------------------------------------------

QT       += core gui
QT       += sql

TARGET = loja
TEMPLATE = app


SOURCES += main.cpp\
    conexao_bd.cpp \
    usuario.cpp \
    tela_login.cpp \
    tela_principal.cpp \
    tela_clientes.cpp \
    tela_cadastro_cliente.cpp

HEADERS  += \
    conexao_bd.h \
    usuario.h \
    tela_login.h \
    tela_principal.h \
    tela_clientes.h \
    tela_cadastro_cliente.h

FORMS    += \
    tela_login.ui \
    tela_principal.ui \
    tela_clientes.ui \
    tela_cadastro_cliente.ui

RESOURCES += \
    imagens.qrc
