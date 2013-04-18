#ifndef TELA_RECEITA_AVULSA_H
#define TELA_RECEITA_AVULSA_H

#include <QDialog>

#include "conexao_bd.h"
#include "funcoes_extras.h"
#include "variaveis_globais.h"
#include "ganho_avulso.h"
#include "tela_pagamento.h"

namespace Ui {
class tela_receita_avulsa;
}

class tela_receita_avulsa : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_receita_avulsa(QWidget *parent = 0);
    ~tela_receita_avulsa();
    void definir_icone_janela(QPixmap logo);
    void closeEvent( QCloseEvent * event );
    
private slots:
    void on_le_valor_editingFinished();
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();

private:
    Ui::tela_receita_avulsa *ui;
    QPixmap logomarca;    
    ganho_avulso *receita;
    tela_pagamento tl_pagamento;
};

#endif // TELA_RECEITA_AVULSA_H
