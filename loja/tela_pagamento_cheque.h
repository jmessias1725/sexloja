#ifndef TELA_PAGAMENTO_CHEQUE_H
#define TELA_PAGAMENTO_CHEQUE_H

#include <QDialog>
#include "funcoes_extras.h"
#include "conexao_bd.h"
#include "cheque.h"

namespace Ui {
class tela_pagamento_cheque;
}

class tela_pagamento_cheque : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_pagamento_cheque(QWidget *parent = 0);
    ~tela_pagamento_cheque();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(double valor);
    cheque *retorna_cheque();

private slots:
    void on_le_valor_editingFinished();
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();
    void on_cb_a_vista_clicked();
    void on_gb_para_clicked();
    void on_le_codigo_banco_editingFinished();

    void on_cb_inserir_caixa_hoje_toggled(bool checked);

private:
    Ui::tela_pagamento_cheque *ui;
    QPixmap logomarca;
    double valor_pago;
    cheque* cheque_usado;
    bool inserir_caixa_hoje;
};

#endif // TELA_PAGAMENTO_CHEQUE_H