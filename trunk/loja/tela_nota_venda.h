#ifndef TELA_NOTA_VENDA_H
#define TELA_NOTA_VENDA_H

#include <QDialog>

#include "venda.h"
#include "cliente.h"
#include "conexao_bd.h"
#include "lista_venda.h"
#include "funcoes_extras.h"
#include "tela_editar_parcela.h"
#include "tela_vender.h"
#include "ganho.h"
#include "tela_justificativa_cancelamento.h"

namespace Ui {
class tela_nota_venda;
}

class tela_nota_venda : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_nota_venda(QWidget *parent = 0);
    ~tela_nota_venda();    
    void closeEvent( QCloseEvent * event );
    void definir_icone_janela(QPixmap logo);
    void definir_dados(venda *vend);
    void buscar_dados(void);
    void mostrar_dados(void);
    void mostrar_dados_pagamento_ou_justificativa(void);
    
private slots:
    void on_tw_lista_pagamento_doubleClicked(const QModelIndex &index);
    void on_btn_reabrir_clicked();
    void on_btn_confirmar_clicked();
    bool atualizar_dados_parcelamento(void);
    void on_btn_cancelar_clicked();
    void on_btn_cancelar_nota_clicked();

private:
    Ui::tela_nota_venda *ui;
    QPixmap logomarca;
    venda *venda_atual;
    cliente *cliente_atual;
    std::vector< lista_venda* > lt_venda;
    std::vector< ganho* > lt_ganho;
    tela_editar_parcela tl_editar_parcela;
    tela_vender tl_vender;
    tela_justificativa_cancelamento tl_justificativa_cancelamento;
    double valor_total;
    bool editou_dados;
    QFont font5;
    QTextEdit *te_justificativa_cancelamento;
    QTableWidget *tw_lista_pagamento;
};

#endif // TELA_NOTA_VENDA_H
