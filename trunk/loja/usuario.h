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
    QString rg;
    QString login;
    QString senha;
    QPixmap logomarca;

public:
    bool verifica_login_senha( QString login, QString senha);
    void definir_icone_janela(QPixmap logo);
    int retorna_id_usuario(void);
    QString retorna_nome(void);
    QString retorna_cpf(void);
    QString retorna_rg(void);
    QString retorna_login(void);
    QString retorna_senha(void);
};

#endif // USUARIO_H
