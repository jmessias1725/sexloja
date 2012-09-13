#ifndef CLIENTE_H
#define CLIENTE_H

#include <QtSql>
#include <QString>
#include <iostream>
#include <QtGui>
#include <QMessageBox>

#include "endereco.h"

class cliente
{
private:
    QString nome;
    float rg;
    QString cpf;
    QString comentario;
    endereco *endereco_cliente;
    std::vector< std::string > lista_email;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;

    //Variáveis que definem o endereço do cliente;
    QString sigla_estado;
    QString nome_estado;
    QString cidade;
    QString bairro;
    QString nome_rua;
    QString numero_cep;
    int numero_residencia;
    QString ponto_referencia;

public:
    cliente();
    QString retornar_nome(void);
    float retornar_rg(void);
    QString retornar_cpf(void);
    QString retornar_comentario(void);
    endereco retorna_endereco(void);
    std::vector< std::string > retorna_lista_email(void);
    std::vector< std::string > retorna_lista_telefone(void);
    std::vector< std::string > retorna_lista_operadora(void);

    void definir_nome(QString nome_cliente);
    void definir_cpf(QString cpf_cliente);
    void definir_comentario(QString comentario_cliente);
    void definir_lista_email(std::vector< std::string > lista_email_cliente);
    void definir_lista_telefone(std::vector< std::string > lista_telefone_cliente);
    void definir_lista_operadora(std::vector< std::string > lista_operadora_cliente);
    void definir_endereco_cliente(QString uf_sigla, QString uf_nome, QString nome_cidade, QString nome_bairro, QString rua, QString cep, int numero, QString pt_referencia);
    bool salvar_cliente();
};

#endif // CLIENTE_H
