#ifndef CEP_H
#define CEP_H

#include <QtSql>
#include <QString>
#include <iostream>

#include "conexao_bd.h"

class cep
{
private:
    int identificador_uf;
    QString sigla_estado;
    QString nome_estado;
    QString cidade;
    QString bairro;
    QString nome_rua;
    QString numero_cep;

public:
    bool buscar_cep(QString cep_procurado);
    int retorna_id_uf(void);
    QString retorna_sigla_estado(void);
    QString retorna_nome_estado(void);
    QString retorna_cidade(void);
    QString retorna_bairro(void);
    QString retorna_nome_rua(void);
    QString retorna_numero_cep(void);
};

#endif // CEP_H
