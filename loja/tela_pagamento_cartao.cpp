#include "tela_pagamento_cartao.h"
#include "ui_tela_pagamento_cartao.h"

tela_pagamento_cartao::tela_pagamento_cartao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_pagamento_cartao)
{
    ui->setupUi(this);
}

tela_pagamento_cartao::~tela_pagamento_cartao()
{
    delete ui;
}

void tela_pagamento_cartao::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_pagamento_cartao::definir_dados(double valor){
    funcoes_extras funcao;
    QRegExp valida_dinheiro("^\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));
    ui->le_valor->setText(funcao.retorna_valor_dinheiro(valor));
}

void tela_pagamento_cartao::on_le_valor_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
}


void tela_pagamento_cartao::on_btn_cancelar_clicked()
{
    this->rect();
    this->close();
}

void tela_pagamento_cartao::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
     valor_pago = funcao.converter_para_double(ui->le_valor->text());
     this->accept();
     this->close();
}

double tela_pagamento_cartao::retorna_valor_pago(){
    return valor_pago;
}
