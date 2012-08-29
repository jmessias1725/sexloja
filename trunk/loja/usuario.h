#ifndef USUARIO_H
#define USUARIO_H

#include <QtSql>
#include <QString>
#include <iostream>

#include "conexao_bd.h"

class usuario
{
private:
    int id_usuario;
    int id_loja;
    QString nome;
    QString cpf;
    float rg;
    QString login;
    QString senha;

public:
    bool verifica_login_senha( QString login, QString senha);
};

#endif // USUARIO_H
