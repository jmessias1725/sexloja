#ifndef TELA_COMPRAR_H
#define TELA_COMPRAR_H

#include <QDialog>

#include "tela_listar_fornecedores.h"
#include "tela_listar_produtos.h"
#include "tela_definir_valor.h"
#include "tela_pagamento.h"
#include "fornecedor.h"
#include "produto.h"
#include "funcoes_extras.h"
#include "lista_compra.h"
#include "compra.h"
#include "variaveis_globais.h"

namespace Ui {
class tela_comprar;
}

class tela_comprar : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_comprar(QWidget *parent = 0);
    ~tela_comprar();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(std::vector< lista_compra* > lis_compra, fornecedor *forn, compra *comp);
    
private slots:
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    void on_btn_buscar_fornecedor_clicked();
    void on_btn_adicionar_produto_clicked();
    void mostrar_lista_produtos(void);
    void on_tw_lista_produtos_doubleClicked(const QModelIndex &index);
    void on_btn_remover_produto_clicked();
    void on_btn_confirmar_clicked();
    void on_le_desconto_editingFinished();

    void on_btn_cancelar_clicked();

private:
    Ui::tela_comprar *ui;
    tela_listar_fornecedores tl_listar_fornecedores;
    tela_definir_valor tl_definir_valor;
    tela_pagamento tl_pagamento;
    std::vector< produto* > lista_produtos;
    std::vector< produto* > aux_lista_produtos;
    std::vector< lista_compra* > lt_compra;
    tela_listar_produtos tl_listar_produtos;
    fornecedor * fornecedor_atual;
    QPixmap logomarca;
    double total_a_pagar;
    double valor_total;
    compra *dados_compra;
    bool eh_estorno;
};

#endif // TELA_COMPRAR_H
