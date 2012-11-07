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
#include "his_entradas.h"
#include "his_balanco_estoque.h"

class produto
{
private:
    int id_produto;
    QString nome;
    QString fabricante;
    QString desc_utilizacao;
    QString cod_barras;
    QString tipo;
    QPixmap logomarca;
    int id_imagem;
    bool removido;
    float valor_venda;
    bool alterou_valores;
    float custo_medio;
    int quantidade_disponivel;

public:
    produto();
    produto(int id_pro, QString nome_produto, QString fabricante_produto,QString cod_barras_produto, QString tipo_produto,
            float valor_ven, float custo_med, int qt_disponivel);
    produto(int id_pro, QString nome_produto, QString fabricante_produto, QString desc_utilizacao_produto,
            QString cod_barras_produto, QString tipo_produto, int id_imag, float valor_ven, float custo_med, int qt_disponivel);

    int retorna_id(void);
    QString retorna_nome(void);
    QString retorna_fabricante(void);
    QString retorna_desc_utilizacao(void);
    QString retorna_cod_barras(void);
    QString retorna_tipo(void);
    int retorna_id_imagem(void);
    float retorna_valor_venda(void);
    float retorna_custo_medio(void);
    int retorna_quantidade_disponivel(void);    
    void altera_quantidade(int quant);
    void altera_valor_venda(float valor_ven);
    void altera_valor_compra(float valor_com);

    bool salvar_dados_produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                              QString cod_barras_produto,QString tipo_produto,QString nome_arquivo_imagem,
                              int altura, int largura,float valor_ven);

    bool salvar_alteracao_dados_produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                                        QString cod_barras_produto,QString tipo_produto,float valor_ven,QString nome_arquivo_imagem,
                                        int altura, int largura,bool alterou_imgem);
    bool remover_cadastro_produto(void);
    bool recuperar_cadastro_produto(void);
    produto * retorna_novo_cadastro_produto(void);
    bool reajustar_valor_venda_produto(int tp, QString porcentagem);
    void definir_icone_janela(QPixmap logo);
};

#endif // PRODUTO_H
