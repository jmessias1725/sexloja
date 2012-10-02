#ifndef FORNECEDOR_H
#define FORNECEDOR_H

#include <QtSql>
#include <QString>
#include <iostream>
#include <QtGui>
#include <QMessageBox>
#include <QSqlError>

#include "endereco.h"
#include "conexao_bd.h"

class fornecedor :public endereco
{
private:
    int id;
    QString cnpj;
    QString razao_social;
    QString nome;
    QString comentario;
    //endereco *endereco_fornecedor;
    std::vector< std::string > lista_email;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;
public:
    fornecedor();

    fornecedor(int id_fornecedor,QString fornecedor_cnpj,QString fornecedor_razao_social,QString fornecedor_nome,
            QString fornecedor_comentario,std::vector< std::string > lista_email_fornecedor,
            std::vector< std::string > lista_telefone_fornecedor,
            std::vector< std::string > lista_operadora_fornecedor,
            QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
            QString rua, QString cep, int numero, QString pt_referencia);

    fornecedor(QString fornecedor_cnpj,QString fornecedor_razao_social,QString fornecedor_nome,
            QString fornecedor_comentario,std::vector< std::string > lista_email_fornecedor,
            std::vector< std::string > lista_telefone_fornecedor,
            std::vector< std::string > lista_operadora_fornecedor,
            QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
            QString rua, QString cep, int numero, QString pt_referencia);

    int retornar_id(void);
    QString retornar_cnpj(void);
    QString retornar_razao_social(void);
    QString retornar_nome(void);
    QString retornar_comentario(void);
    std::vector< std::string > retorna_lista_email(void);
    std::vector< std::string > retorna_lista_telefone(void);
    std::vector< std::string > retorna_lista_operadora(void);
    void altera_id_fornecedor(int id_fornecedor);
    void alterar_dados_fornecedor(QString fornecedor_cnpj,QString fornecedor_razao_social,QString fornecedor_nome,
                                  QString fornecedor_comentario,std::vector< std::string > lista_email_fornecedor,
                                  std::vector< std::string > lista_telefone_fornecedor,
                                  std::vector< std::string > lista_operadora_fornecedor,
                                  QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                                  QString rua, QString cep, int numero, QString pt_referencia);
    bool salvar_dados_fornecedor(void);
    bool salvar_alteracao_dados_fornecedor(std::vector< std::string > lista_telefone_a_remover,
                                           std::vector< std::string > lista_telefone_a_adicionar,
                                           std::vector< std::string > lista_operadora_a_adicionar,
                                           std::vector< std::string > lista_email_a_remover,
                                           std::vector< std::string > lista_email_a_adicionar);
    bool remover_cadastro_fornecedor(int id_fornecedor);
};

#endif // FORNECEDOR_H
