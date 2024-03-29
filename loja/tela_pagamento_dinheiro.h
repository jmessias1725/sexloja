#ifndef TELA_PAGAMENTO_DINHEIRO_H
#define TELA_PAGAMENTO_DINHEIRO_H

#include <QDialog>
#include <QtSql>
#include <QString>
#include <iostream>

#include "funcoes_extras.h"
#include "dinheiro.h"
#include "parcela.h"
#include "tela_ajustar_data_valor.h"

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
    void mostrar_parcelamento(void);
    
private slots:
    void on_le_valor_editingFinished();
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();
    void on_le_valor_avista_editingFinished();
    void on_groupBox_2_clicked(bool checked);
    void on_groupBox_clicked(bool checked);
    void on_sb_num_parcelas_editingFinished();
    void on_data_editingFinished();
    void on_tw_parcelas_doubleClicked(const QModelIndex &index);
    void closeEvent(QCloseEvent *event);

private:
    Ui::tela_pagamento_dinheiro *ui;
    tela_ajustar_data_valor tl_ajustar_data_valor;
    QPixmap logomarca;
    dinheiro *valor_pago;
    double valor_total;
    std::vector< parcela* > parcelamento;
};

#endif // TELA_PAGAMENTO_DINHEIRO_H
