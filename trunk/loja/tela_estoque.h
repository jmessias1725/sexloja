#ifndef TELA_ESTOQUE_H
#define TELA_ESTOQUE_H

#include <QMainWindow>
#include <QtSql>
#include <QString>
#include <iostream>

#include "conexao_bd.h"
#include "funcoes_extras.h"
#include "produto.h"
#include "legenda_estoque.h"
#include "tela_configurar_legenda_estoque.h"
#include "tela_cadastro_produto.h"
#include "tela_produto.h"
#include "tela_restaurar_produto.h"
#include "his_balanco_estoque.h"

namespace Ui {
class tela_estoque;
}

class tela_estoque : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_estoque(QWidget *parent = 0);
    ~tela_estoque();
    void definir_icone_janela(QPixmap logo);
    void buscar_produtos(void);
    
private slots:
    void on_pushButton_clicked(void);
    void mostrar_lista_produtos(void);
    void on_btn_adicionar_produto_clicked();
    void on_cb_tipo_currentIndexChanged(const QString &arg1);
    void on_le_nome_textChanged(const QString &arg1);
    void on_le_codigo_barras_textChanged(const QString &arg1);
    void on_le_fabricante_textChanged(const QString &arg1);
    void on_tw_produtos_doubleClicked(const QModelIndex &index);
    void on_btn_limpar_clicked();
    void on_btn_restaurar_produto_clicked();
    void on_le_codigo_textChanged(const QString &arg1);

private:
    Ui::tela_estoque *ui;
    QPixmap logomarca;
    tela_produto tl_produto;
    std::vector< produto* > lista_produtos;
    std::vector< produto* > aux_lista_produtos;
    std::vector< his_balanco_estoque* > lista_his_bal_est;
    std::vector< his_balanco_estoque* > aux_lista_his_bal_est;
    tela_configurar_legenda_estoque tl_configurar_legenda_estoque;
    tela_cadastro_produto tl_cadastro_produto;
    tela_restaurar_produto tl_restaurar_produto;
    legenda_estoque *legenda;
    QString aux_cons_id_produto;
    QString aux_cons_nome;
    QString aux_cons_fabricante;
    QString aux_cons_cod_barras;
    QString aux_cons_tipo;
    QLabel *lb_quantidade_produtos;
    QLabel *lb_data;
    QString data_sistema;
};

#endif // TELA_ESTOQUE_H