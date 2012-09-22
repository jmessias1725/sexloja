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
    tela_cadastro_cliente.cpp \
    cliente.cpp \
    cep.cpp \
    endereco.cpp \
    funcoes_extras.cpp \
    tela_listar_clientes.cpp \
    tela_editar_cliente.cpp \
    tela_clientes.cpp \
    tela_cadastro_fornecedor.cpp

HEADERS  += \
    conexao_bd.h \
    usuario.h \
    tela_login.h \
    tela_principal.h \
    tela_cadastro_cliente.h \
    cliente.h \
    cep.h \
    endereco.h \
    funcoes_extras.h \
    tela_listar_clientes.h \
    tela_editar_cliente.h \
    tela_clientes.h \
    tela_cadastro_fornecedor.h

FORMS    += \
    tela_login.ui \
    tela_principal.ui \
    tela_cadastro_cliente.ui \
    tela_cadastro_telefone.ui \
    tela_listar_clientes.ui \
    tela_editar_cliente.ui \
    tela_clientes.ui \
    tela_cadastro_fornecedor.ui

RESOURCES += \
    imagens.qrc
