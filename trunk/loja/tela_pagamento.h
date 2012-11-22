#ifndef TELA_PAGAMENTO_H
#define TELA_PAGAMENTO_H

#include <QDialog>
#include "funcoes_extras.h"
#include "tela_pagamento_dinheiro.h"
#include "tela_pagamento_cartao.h"
#include "tela_pagamento_cheque.h"
#include "cartao.h"
#include "cheque.h"
#include "compra.h"
#include "conexao_bd.h"
#include "lista_compra.h"

namespace Ui {
class tela_pagamento;
}

class tela_pagamento : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_pagamento(QWidget *parent = 0);
    ~tela_pagamento();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(compra* comp, std::vector< lista_compra* > lt_com);

private slots:
    void on_btn_dinheiro_clicked();
    void on_btn_cartao_clicked();
    void on_btn_cheque_clicked();
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();

private:
    Ui::tela_pagamento *ui;
    QPixmap logomarca;
    tela_pagamento_dinheiro tl_pagamento_dinheiro;
    tela_pagamento_cartao tl_pagamento_cartao;
    tela_pagamento_cheque tl_pagamento_cheque;
    cartao* cartao_usado;
    cheque* cheque_usado;
    compra* dados_compra;
    std::vector< lista_compra* > lt_compra;
    double valor_em_dinheiro;
    double valor_em_cartao;
    double valor_em_cheque;
    double total_pagar;
    double total_pago;
    double troco;
};

#endif // TELA_PAGAMENTO_H