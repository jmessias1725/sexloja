#ifndef TELA_PAGAMENTO_DINHEIRO_H
#define TELA_PAGAMENTO_DINHEIRO_H

#include <QDialog>
#include "funcoes_extras.h"

namespace Ui {
class tela_pagamento_dinheiro;
}

class tela_pagamento_dinheiro : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_pagamento_dinheiro(QWidget *parent = 0);
    ~tela_pagamento_dinheiro();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(double valor);
    double retorna_valor_pago();
    
private slots:
    void on_le_valor_editingFinished();
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();

private:
    Ui::tela_pagamento_dinheiro *ui;
    QPixmap logomarca;
    double valor_pago;
};

#endif // TELA_PAGAMENTO_DINHEIRO_H
