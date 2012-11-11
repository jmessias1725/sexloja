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

    valor_em_dinheiro = 0.0;
    valor_em_cartao = 0.0;
    valor_em_cheque = 0.0;
    total_pago = 0.0;
    troco = 0.0;
    total_pagar = funcao.converter_para_double(valor);


    ui->le_dinheiro->setText(funcao.retorna_valor_dinheiro(valor_em_dinheiro));
    ui->le_cartao->setText(funcao.retorna_valor_dinheiro(valor_em_cartao));
    ui->le_cheque->setText(funcao.retorna_valor_dinheiro(valor_em_cheque));

    ui->le_total_pagar->setText(valor);
    ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(0));
    ui->le_troco->setText(funcao.retorna_valor_dinheiro(0));
}

void tela_pagamento::on_btn_dinheiro_clicked()
{
    double restante_a_pagar=0.0;
    total_pago = 0.0;
    funcoes_extras funcao;

    restante_a_pagar = total_pagar - valor_em_cartao - valor_em_cheque;

    tl_pagamento_dinheiro.definir_icone_janela(logomarca);
    tl_pagamento_dinheiro.definir_dados(restante_a_pagar);
    if(tl_pagamento_dinheiro.exec()){
        valor_em_dinheiro = tl_pagamento_dinheiro.retorna_valor_pago();
        valor_em_cartao = funcao.converter_para_double(ui->le_cartao->text());
        valor_em_cheque = funcao.converter_para_double(ui->le_cheque->text());
        total_pago = valor_em_dinheiro+valor_em_cartao+valor_em_cheque;
        troco = total_pago-total_pagar;

        ui->le_troco->setText(funcao.retorna_valor_dinheiro(troco));
        ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(total_pago));
        ui->le_dinheiro->setText(funcao.retorna_valor_dinheiro(valor_em_dinheiro));
    }
}

void tela_pagamento::on_btn_cartao_clicked()
{
    double restante_a_pagar=0.0;
    total_pago = 0.0;
    funcoes_extras funcao;

    restante_a_pagar = total_pagar - valor_em_dinheiro - valor_em_cheque;

    tl_pagamento_cartao.definir_icone_janela(logomarca);
    tl_pagamento_cartao.definir_dados(restante_a_pagar);
    if(tl_pagamento_cartao.exec()){
        valor_em_cartao = tl_pagamento_cartao.retorna_valor_pago();
        valor_em_dinheiro = funcao.converter_para_double(ui->le_dinheiro->text());
        valor_em_cheque = funcao.converter_para_double(ui->le_cheque->text());
        total_pago = valor_em_dinheiro+valor_em_cartao+valor_em_cheque;
        troco = total_pago-total_pagar;

        ui->le_troco->setText(funcao.retorna_valor_dinheiro(troco));
        ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(total_pago));
        ui->le_cartao->setText(funcao.retorna_valor_dinheiro(valor_em_cartao));
    }
}
