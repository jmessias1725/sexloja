#ifndef TELA_RESTAURAR_PRODUTO_H
#define TELA_RESTAURAR_PRODUTO_H

#include <QDialog>
#include <QtSql>
#include <QString>
#include <iostream>

#include "conexao_bd.h"
#include "funcoes_extras.h"
#include "produto.h"
#include "legenda_estoque.h"

namespace Ui {
class tela_restaurar_produto;
}

class tela_restaurar_produto : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_restaurar_produto(QWidget *parent = 0);
    ~tela_restaurar_produto();
    void definir_icone_janela(QPixmap logo);
    void buscar_produtos(void);

private slots:
    void mostrar_lista_produtos(void);
    void on_cb_tipo_currentIndexChanged(const QString &arg1);
    void on_le_nome_textChanged(const QString &arg1);
    void on_le_codigo_barras_textChanged(const QString &arg1);
    void on_le_fabricante_textChanged(const QString &arg1);
    void on_tw_produtos_doubleClicked(const QModelIndex &index);
    void on_btn_limpar_clicked();
    
    void on_le_codigo_textChanged(const QString &arg1);

private:
    Ui::tela_restaurar_produto *ui;
    QPixmap logomarca;
    legenda_estoque *legenda;
    std::vector< produto* > lista_produtos;
    QString aux_cons_id_produto;
    QString aux_cons_nome;
    QString aux_cons_fabricante;
    QString aux_cons_cod_barras;
    QString aux_cons_tipo;
    std::vector< produto* > aux_lista_produtos;
};

#endif // TELA_RESTAURAR_PRODUTO_H
