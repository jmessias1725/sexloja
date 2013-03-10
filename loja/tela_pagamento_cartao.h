#ifndef TELA_PAGAMENTO_CARTAO_H
#define TELA_PAGAMENTO_CARTAO_H

#include <QDialog>
#include <QMessageBox>
#include "funcoes_extras.h"
#include "cartao.h"

namespace Ui {
class tela_pagamento_cartao;
}

class tela_pagamento_cartao : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_pagamento_cartao(QWidget *parent = 0);
    ~tela_pagamento_cartao();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(double valor);
    cartao *retorna_cartao();

private slots:
    void on_le_valor_editingFinished();
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();

private:
    Ui::tela_pagamento_cartao *ui;
    QPixmap logomarca;
    double valor_pago;
    cartao *cartao_usado;
};

#endif // TELA_PAGAMENTO_CARTAO_H