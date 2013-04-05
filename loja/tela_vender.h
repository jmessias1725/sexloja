#ifndef TELA_VENDER_H
#define TELA_VENDER_H

#include <QDialog>

#include "tela_listar_clientes.h"
#include "tela_listar_produtos.h"
#include "tela_definir_valor_venda.h"
#include "tela_pagamento.h"
#include "cliente.h"
#include "produto.h"
#include "funcoes_extras.h"
#include "lista_venda.h"
#include "venda.h"

namespace Ui {
class tela_vender;
}

class tela_vender : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_vender(QWidget *parent = 0);
    ~tela_vender();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(std::vector< lista_venda* > lis_venda, cliente *cli ,venda *vend);

private slots:
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    void on_btn_buscar_cliente_clicked();
    void on_btn_adicionar_produto_clicked();
    void mostrar_lista_produtos(void);
    void on_tw_lista_produtos_doubleClicked(const QModelIndex &index);
    void on_btn_remover_produto_clicked();
    void on_btn_confirmar_clicked();
    void on_le_desconto_editingFinished();
    
    void on_btn_cancelar_clicked();

private:
    Ui::tela_vender *ui;
    tela_listar_clientes tl_listar_clientes;
    tela_definir_valor_venda tl_definir_valor_venda;
    tela_pagamento tl_pagamento;
    std::vector< produto* > lista_produtos;
    std::vector< produto* > aux_lista_produtos;
    std::vector< lista_venda* > lt_venda;
    tela_listar_produtos tl_listar_produtos;
    cliente * cliente_atual;
    QPixmap logomarca;
    double total_a_pagar;
    double valor_total;
    venda *dados_venda;
    bool eh_estorno;
};

#endif // TELA_VENDER_H
