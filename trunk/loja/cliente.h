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
    void altera_id_cliente(int id_cliente);
    void alterar_dados_cliente(QString cliente_nome,QString cliente_rg,QString cliente_cpf,
                               QString cliente_comentario,std::vector< std::string > lista_email_cliente,
                               std::vector< std::string > lista_telefone_cliente,
                               std::vector< std::string > lista_operadora_cliente,
                               QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                               QString rua, QString cep, int numero, QString pt_referencia);
    bool salvar_dados_cliente(void);
    bool salvar_alteracao_dados_cliente(std::vector< std::string > lista_telefone_a_remover,
                                      std::vector< std::string > lista_telefone_a_adicionar,
                                      std::vector< std::string > lista_operadora_a_adicionar,
                                      std::vector< std::string > lista_email_a_remover,
                                      std::vector< std::string > lista_email_a_adicionar);
    bool remover_cadastro_cliente(int id_cliente);
};

#endif // CLIENTE_H
