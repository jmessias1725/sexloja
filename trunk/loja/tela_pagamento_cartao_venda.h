#ifndef TELA_PAGAMENTO_CARTAO_VENDA_H
#define TELA_PAGAMENTO_CARTAO_VENDA_H

#include <QDialog>
#include <QMessageBox>
#include "funcoes_extras.h"
#include "cartao.h"

namespace Ui {
class tela_pagamento_cartao_venda;
}

class tela_pagamento_cartao_venda : public QDialog
{
    Q_OBJECT

public:
    explicit tela_pagamento_cartao_venda(QWidget *parent = 0);
    ~tela_pagamento_cartao_venda();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(double valor);
    cartao *retorna_cartao();

private slots:
    void on_le_valor_editingFinished();
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();
    void closeEvent(QCloseEvent *event);

private:
    Ui::tela_pagamento_cartao_venda *ui;
    QPixmap logomarca;
    double valor_pago;
    cartao *cartao_usado;
};

#endif // TELA_PAGAMENTO_CARTAO_VENDA_H

