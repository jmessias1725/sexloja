#include "tela_pagamento.h"
#include "ui_tela_pagamento.h"

tela_pagamento::tela_pagamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_pagamento)
{
    ui->setupUi(this);
}

tela_pagamento::~tela_pagamento()
{
    delete ui;
}

void tela_pagamento::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_pagamento::definir_dados(QString valor){
    funcoes_extras funcao;
    ui->le_total_pagar->setText(valor);
    ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(QString::number(0)));
    ui->le_troco->setText(funcao.retorna_valor_dinheiro(QString::number(0)));
}
