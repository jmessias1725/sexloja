#ifndef LOJA_H
#define LOJA_H

#include <QtSql>
#include <QString>
#include <iostream>
#include <QtGui>
#include <QMessageBox>
#include <QSqlError>

#include "imagem.h"
#include "endereco.h"
#include "conexao_bd.h"

class loja :public endereco, public imagem
{
private:
    int id;
    QString cnpj;
    QString razao_social;
    QString nome;
    QString comentario;
    //endereco *endereco_loja;
    //imagem *imagem_logomarca;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;

public:
    loja();
    loja(int id_loja,QString loja_cnpj,QString loja_razao_social,QString loja_nome,
        std::vector< std::string > lista_telefone_loja,
        std::vector< std::string > lista_operadora_loja,
        QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
        QString rua, QString cep, int numero, QString nome_arquivo, int altura, int largura);

    loja(QString loja_cnpj,QString loja_razao_social,QString loja_nome,
        std::vector< std::string > lista_telefone_loja,
        std::vector< std::string > lista_operadora_loja,
        QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
        QString rua, QString cep, int numero, QString nome_arquivo, int altura, int largura);

    int retornar_id(void);
    QString retornar_cnpj(void);
    QString retornar_razao_social(void);
    QString retornar_nome(void);
    std::vector< std::string > retorna_lista_telefone(void);
    std::vector< std::string > retorna_lista_operadora(void);
    void alterar_dados_loja(QString loja_cnpj,QString loja_razao_social,QString loja_nome,
                            std::vector< std::string > lista_telefone_loja,
                            std::vector< std::string > lista_operadora_loja,
                            QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                            QString rua, QString cep, int numero, QString nome_arquivo, int altura, int largura);
    bool salvar_dados_loja(void);
    bool salvar_alteracao_dados_loja(std::vector< std::string > lista_telefone_a_remover,
                                    std::vector< std::string > lista_telefone_a_adicionar,
                                    std::vector< std::string > lista_operadora_a_adicionar);
};

#endif // LOJA_H
