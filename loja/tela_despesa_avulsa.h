#ifndef TELA_DESPESA_AVULSA_H
#define TELA_DESPESA_AVULSA_H

#include <QDialog>

#include "conexao_bd.h"
#include "funcoes_extras.h"
#include "variaveis_globais.h"
#include "despesa_avulsa.h"
#include "tela_pagamento.h"

namespace Ui {
class tela_despesa_avulsa;
}

class tela_despesa_avulsa : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_despesa_avulsa(QWidget *parent = 0);
    ~tela_despesa_avulsa();
    void definir_icone_janela(QPixmap logo);
    void closeEvent( QCloseEvent * event );
    
private slots:
    void on_le_valor_editingFinished();
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();

private:
    Ui::tela_despesa_avulsa *ui;
    QPixmap logomarca;
    despesa_avulsa *despesa;
    tela_pagamento tl_pagamento;
};

#endif // TELA_DESPESA_AVULSA_H
