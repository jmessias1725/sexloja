#ifndef ENDERECO_H
#define ENDERECO_H

#include <QString>
#include <iostream>

class endereco
{
    private:
        int id;
        QString sigla_estado;
        QString nome_estado;
        QString cidade;
        QString bairro;
        QString nome_rua;
        QString numero_cep;
        int numero_residencia;

    public:
        void definir_endereco(QString uf_sigla, QString uf_nome,QString nome_cidade,QString nome_bairro,QString rua,QString cep, int numero);
};

#endif // ENDERECO_H
