#ifndef TELA_PAGAMENTO_DINHEIRO_H
#define TELA_PAGAMENTO_DINHEIRO_H

#include <QDialog>
#include "funcoes_extras.h"
#include "dinheiro.h"

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
    dinheiro* retorna_valor_pago();
    
private slots:
    void on_le_valor_editingFinished();
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();
    void on_le_valor_avista_editingFinished();
    void on_groupBox_2_clicked(bool checked);

    void on_groupBox_clicked(bool checked);

private:
    Ui::tela_pagamento_dinheiro *ui;
    QPixmap logomarca;
    dinheiro *valor_pago;
    double valor_total;
};

#endif // TELA_PAGAMENTO_DINHEIRO_H
