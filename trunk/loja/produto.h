#ifndef PRODUTO_H
#define PRODUTO_H

#include <QtSql>
#include <QString>
#include <iostream>
#include <QtGui>
#include <QMessageBox>
#include <QSqlError>

#include "imagem.h"
#include "endereco.h"
#include "conexao_bd.h"
#include "valor_produto.h"

class produto :public imagem, public valor_produto
{
private:
    int id;
    QString nome;
    QString fabricante;
    QString desc_utilizacao;
    int quant_disponivel;
    QString cod_barras;
    QString tipo;
    QPixmap logomarca;
    int id_imagem;

public:
    produto();
    produto(int id_pro,QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
            int quant_disponivel_produto,QString cod_barras_produto,QString tipo_produto,
            QString nome_arquivo_imagem, int altura, int largura,float valor_com,float valor_ven);
    produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
            int quant_disponivel_produto,QString cod_barras_produto,QString tipo_produto,
            QString nome_arquivo_imagem, int altura, int largura,float valor_com,float valor_ven);
    int retorna_id(void);
    QString retorna_nome(void);
    QString retorna_fabricante(void);
    QString retorna_desc_utilizacao(void);
    int retorna_quant_disponivel(void);
    QString retorna_cod_barras(void);
    QString retorna_tipo(void);
    void alterar_dados_produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                               int quant_disponivel_produto,QString cod_barras_produto,QString tipo_produto,
                               QString nome_arquivo_imagem, int altura, int largura,float valor_com,float valor_ven);
    bool salvar_dados_produto(void);
    bool salvar_alteracao_dados_produto(void);
    produto * busca_produto(void);
    void definir_icone_janela(QPixmap logo);
};

#endif // PRODUTO_H
