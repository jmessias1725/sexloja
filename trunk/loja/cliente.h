#ifndef CLIENTE_H
#define CLIENTE_H

#include <QtSql>
#include <QString>
#include <iostream>
#include <QtGui>
#include <QMessageBox>
#include <QSqlError>

#include "endereco.h"
#include "conexao_bd.h"

class cliente :public endereco
{
private:
    int id;
    QString nome;
    QString rg;
    QString cpf;
    QString comentario;
    endereco *endereco_cliente;
    std::vector< std::string > lista_email;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;

public:
    cliente();

    cliente(int id_cliente,QString cliente_nome,QString cliente_rg,QString cliente_cpf,
            QString cliente_comentario,std::vector< std::string > lista_email_cliente,
            std::vector< std::string > lista_telefone_cliente,
            std::vector< std::string > lista_operadora_cliente,
            QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
            QString rua, QString cep, int numero, QString pt_referencia);

    cliente(QString cliente_nome,QString cliente_rg,QString cliente_cpf,
            QString cliente_comentario,std::vector< std::string > lista_email_cliente,
            std::vector< std::string > lista_telefone_cliente,
            std::vector< std::string > lista_operadora_cliente,
            QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
            QString rua, QString cep, int numero, QString pt_referencia);

    int retornar_id(void);
    QString retornar_nome(void);
    QString retornar_rg(void);
    QString retornar_cpf(void);
    QString retornar_comentario(void);
    std::vector< std::string > retorna_lista_email(void);
    std::vector< std::string > retorna_lista_telefone(void);
    std::vector< std::string > retorna_lista_operadora(void);
    bool salvar_cliente(void);
};

#endif // CLIENTE_H
