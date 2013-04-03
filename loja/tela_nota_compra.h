#ifndef TELA_NOTA_COMPRA_H
#define TELA_NOTA_COMPRA_H

#include <QDialog>

#include "compra.h"
#include "fornecedor.h"
#include "conexao_bd.h"
#include "lista_compra.h"
#include "funcoes_extras.h"
#include "tela_editar_parcela.h"
#include "tela_comprar.h"
#include "despesa.h"
#include "tela_justificativa_cancelamento.h"
#include "variaveis_globais.h"

namespace Ui {
class tela_nota_compra;
}

class tela_nota_compra : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_nota_compra(QWidget *parent = 0);
    ~tela_nota_compra();
     void closeEvent( QCloseEvent * event );
     void definir_icone_janela(QPixmap logo);
     void definir_dados(compra *compr);
     void buscar_dados(void);
     void mostrar_dados(void);
     void mostrar_dados_pagamento_ou_justificativa(void);

private slots:
    void ajustar_parcelas(const QModelIndex &index);
    void on_btn_reabrir_clicked();
    void on_btn_confirmar_clicked();
    bool atualizar_dados_parcelamento(void);
    void on_btn_cancelar_clicked();
    void on_btn_cancelar_nota_clicked();
    
private:
    Ui::tela_nota_compra *ui;
    QPixmap logomarca;
    compra *compra_atual;
    fornecedor *fornecedor_atual;
    std::vector< lista_compra* > lt_compra;
    std::vector< despesa* > lt_despesas;
    tela_editar_parcela tl_editar_parcela;
    tela_comprar tl_comprar;
    tela_justificativa_cancelamento tl_justificativa_cancelamento;
    double valor_total;
    bool editou_dados;
    QFont font5;
    QTextEdit *te_justificativa_cancelamento;
    QTableWidget *tw_lista_pagamento;
};

#endif // TELA_NOTA_COMPRA_H
