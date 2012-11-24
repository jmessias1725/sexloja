#include "tela_pagamento_dinheiro.h"
#include "ui_tela_pagamento_dinheiro.h"

tela_pagamento_dinheiro::tela_pagamento_dinheiro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_pagamento_dinheiro)
{
    ui->setupUi(this);
}

tela_pagamento_dinheiro::~tela_pagamento_dinheiro()
{
    delete ui;
}

void tela_pagamento_dinheiro::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_pagamento_dinheiro::definir_dados(double valor){
    funcoes_extras funcao;
    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));
    ui->le_valor->setText(funcao.retorna_valor_dinheiro(valor));
}

void tela_pagamento_dinheiro::on_le_valor_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
}


void tela_pagamento_dinheiro::on_btn_cancelar_clicked()
{
    this->rect();
    this->close();
}

void tela_pagamento_dinheiro::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
    valor_pago = funcao.converter_para_double(ui->le_valor->text());
    ui->le_valor->clear();
    this->accept();
    this->close();
}

double tela_pagamento_dinheiro::retorna_valor_pago(){
    return valor_pago;
}
