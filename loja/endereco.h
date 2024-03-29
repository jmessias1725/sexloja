#ifndef ENDERECO_H
#define ENDERECO_H

#include <QString>
#include <iostream>
#include <QtGui>

class endereco
{
protected:
    //Vari�veis que definem o endere�o do cliente;
    QString sigla_estado;
    QString nome_estado;
    QString nome_cidade;
    QString nome_bairro;
    QString nome_rua;
    QString numero_cep;
    int numero_residencia;
    QString ponto_referencia;

public:
    endereco();
    endereco(QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
             QString rua, QString cep, int numero);
    endereco(QString uf_sigla, QString uf_nome, QString cidade,
             QString bairro, QString rua, QString cep, int numero,
             QString pt_referencia);

    QString retorna_sigla_estado(void);
    QString retorna_nome_estado(void);
    QString retorna_cidade(void);
    QString retorna_bairro(void);
    QString retorna_nome_rua(void);
    QString retorna_numero_cep(void);
    int retorna_numero_residencia(void);
    QString retorna_ponto_referencia(void);

    void altera_endereco(QString uf_sigla, QString uf_nome, QString cidade,
                         QString bairro, QString rua, QString cep, int numero,
                         QString pt_referencia);
};

#endif // ENDERECO_H
