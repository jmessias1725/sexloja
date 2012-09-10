#ifndef CEP_H
#define CEP_H

#include <QtSql>
#include <QString>
#include <iostream>

#include "conexao_bd.h"

class cep
{
    private:
        int id;
        QString UF;
        QString cidade;
        QString bairro;
        QString nome_rua;
        QString numero_cep;
public:
    cep();
    bool buscar_cep(QString cep_procurado);
};

#endif // CEP_H
