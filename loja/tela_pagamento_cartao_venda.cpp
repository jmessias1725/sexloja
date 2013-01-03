#include "tela_pagamento_cartao_venda.h"
#include "ui_tela_pagamento_cartao_venda.h"

tela_pagamento_cartao_venda::tela_pagamento_cartao_venda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_pagamento_cartao_venda)
{
    ui->setupUi(this);
    cartao_usado = new cartao();
}

tela_pagamento_cartao_venda::~tela_pagamento_cartao_venda()
{
    delete ui;
}

void tela_pagamento_cartao_venda::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_pagamento_cartao_venda::definir_dados(double valor){
    funcoes_extras funcao;
    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));
    ui->le_valor->setText(funcao.retorna_valor_dinheiro(valor));
}

void tela_pagamento_cartao_venda::on_le_valor_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
}


void tela_pagamento_cartao_venda::on_btn_cancelar_clicked()
{
    this->rect();
    this->close();
}

void tela_pagamento_cartao_venda::on_btn_confirmar_clicked()
{
    QString parcelas;
    funcoes_extras funcao;
    valor_pago = funcao.converter_para_double(ui->le_valor->text());
    double valor_parcela = 0.0;
    double primeira_parcela = 0.0;
    int numero_pacelas = ui->sb_num_parcelas->text().toInt();

    if((valor_pago!=0.0)){
       valor_parcela = valor_pago/numero_pacelas;
       valor_parcela = funcao.arredonda_para_duas_casas_decimais(valor_parcela);
       primeira_parcela = valor_pago - valor_parcela*(numero_pacelas-1);
    }

    if (primeira_parcela!=valor_parcela){
        parcelas = ",\nsendo a 1ª de "+funcao.retorna_valor_dinheiro(primeira_parcela)+" e "+QString::number(numero_pacelas-1)+" de "+funcao.retorna_valor_dinheiro(valor_parcela);
    }
    else{
        parcelas = " de "+funcao.retorna_valor_dinheiro(valor_parcela);
    }

    QPixmap icone_janela(":img/img/produto_pergunta_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Pagamento no cartão");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("Deseja pagar: "+ui->le_valor->text()+" em "+ui->sb_num_parcelas->text()+" parcela(s) "+parcelas+"\nno cartão de crédito?");
    if(!msg.exec()){
        cartao_usado = new cartao(0,ui->sb_num_parcelas->text().toInt(),
                                  valor_pago,-1,0);
        ui->le_valor->clear();
        ui->sb_num_parcelas->setValue(1);
        this->accept();
        this->close();
    }
}

cartao * tela_pagamento_cartao_venda::retorna_cartao(){
    return cartao_usado;
}
