#include "tela_pagamento_cheque.h"
#include "ui_tela_pagamento_cheque.h"

tela_pagamento_cheque::tela_pagamento_cheque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_pagamento_cheque)
{
    ui->setupUi(this);
    ui->gb_para->setChecked(false);
}

tela_pagamento_cheque::~tela_pagamento_cheque()
{
    delete ui;
}

void tela_pagamento_cheque::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    ui->data->setDate(QDate::currentDate());
}

void tela_pagamento_cheque::definir_dados(double valor){
    funcoes_extras funcao;
    QRegExp valida_dinheiro("^\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));
    ui->le_valor->setText(funcao.retorna_valor_dinheiro(valor));
}

void tela_pagamento_cheque::on_le_valor_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
}


void tela_pagamento_cheque::on_btn_cancelar_clicked()
{
    this->rect();
    this->close();
}

void tela_pagamento_cheque::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
     valor_pago = funcao.converter_para_double(ui->le_valor->text());
     this->accept();
     this->close();
}

double tela_pagamento_cheque::retorna_valor_pago(){
    return valor_pago;
}

void tela_pagamento_cheque::on_cb_a_vista_clicked()
{
    ui->gb_para->setChecked(false);
}

void tela_pagamento_cheque::on_gb_para_clicked()
{
    ui->cb_a_vista->setChecked(false);
}
