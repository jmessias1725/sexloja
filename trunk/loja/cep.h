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
        QString cidade;
        QString logradouro;
        QString bairro;
        QString numero_cep;
        QString tp_logradouro;
public:
    cep();
    bool buscar_cep(QString cep_procurado);
};

#endif // CEP_H
