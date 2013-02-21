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
    valor_total = valor;
    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));
    ui->le_valor_avista->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor_avista));
    ui->data->setDate(QDate::currentDate());
}

void tela_pagamento_dinheiro::on_le_valor_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    double aux_valor;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
    aux_valor = funcao.converter_para_double(ui->le_valor->text());
    aux_valor = valor_total - aux_valor;
    aux =  funcao.retorna_valor_dinheiro(aux_valor);
    ui->le_valor_avista->setText(aux);
}

void tela_pagamento_dinheiro::on_btn_cancelar_clicked(){
    this->rect();
    this->close();
}

void tela_pagamento_dinheiro::on_btn_confirmar_clicked(){
    funcoes_extras funcao;
    double aux_valor;
    double aux_valor_avista;

    if(ui->groupBox->isChecked()){
        aux_valor = funcao.converter_para_double(ui->le_valor->text());
    }
    else{
        aux_valor = 0.0;
    }

    if(ui->groupBox_2->isChecked()){
        aux_valor_avista = funcao.converter_para_double(ui->le_valor_avista->text());
    }
    else{
        aux_valor_avista = 0.0;
    }

    valor_pago = new dinheiro(aux_valor,-1,0,
                              ui->data->date(),ui->sb_num_parcelas->text().toInt(),
                              aux_valor_avista);
    ui->le_valor->clear();
    this->accept();
    this->close();
}

dinheiro* tela_pagamento_dinheiro::retorna_valor_pago(){
    return valor_pago;
}

void tela_pagamento_dinheiro::on_le_valor_avista_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    double aux_valor;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor_avista->text()));
    ui->le_valor_avista->setText(aux);
    aux_valor = funcao.converter_para_double(ui->le_valor_avista->text());
    aux_valor = valor_total - aux_valor;
    aux =  funcao.retorna_valor_dinheiro(aux_valor);
    ui->le_valor->setText(aux);

}

void tela_pagamento_dinheiro::on_groupBox_2_clicked(bool checked){
    funcoes_extras funcao;
    double aux_valor;
    if (checked)
    {
        aux_valor = valor_total - funcao.converter_para_double(ui->le_valor->text());
        ui->le_valor_avista->setText(funcao.retorna_valor_dinheiro(aux_valor));
    }
    else{
        aux_valor = 0.0;
        ui->le_valor_avista->setText(funcao.retorna_valor_dinheiro(aux_valor));
    }
}

void tela_pagamento_dinheiro::on_groupBox_clicked(bool checked)
{
    funcoes_extras funcao;
    double aux_valor;
    if (checked)
    {
        aux_valor = valor_total - funcao.converter_para_double(ui->le_valor_avista->text());
        ui->le_valor->setText(funcao.retorna_valor_dinheiro(aux_valor));
    }
    else{
        aux_valor = 0.0;
        ui->le_valor->setText(funcao.retorna_valor_dinheiro(aux_valor));
    }
}

void tela_pagamento_dinheiro::on_sb_num_parcelas_editingFinished()
{
    funcoes_extras funcao;
    parcelamento = funcao.calcula_parcelas(ui->data->date(),
                                           0,
                                           ui->sb_num_parcelas->text().toInt(),
                                           funcao.converter_para_double(ui->le_valor->text()));
    mostrar_parcelamento();
}

void tela_pagamento_dinheiro::mostrar_parcelamento(){
    funcoes_extras funcao;
    ui->tw_parcelas->setRowCount(ui->sb_num_parcelas->text().toInt());
    ui->tw_parcelas->setColumnCount(2);
    ui->tw_parcelas->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_parcelas->clear();
    ui->tw_parcelas->setHorizontalHeaderLabels(QString("Data;Valor").split(";"));
    for (int i=0;i<int(parcelamento.size());i++){
        ui->tw_parcelas->setItem(i,0,new QTableWidgetItem(parcelamento[i]->retorna_data()));
        ui->tw_parcelas->setItem(i,1,new QTableWidgetItem(funcao.retorna_valor_dinheiro(parcelamento[i]->retorna_valor())));
    }
    ui->tw_parcelas->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_parcelas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_parcelas->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_parcelas->resizeColumnToContents(0);
    ui->tw_parcelas->resizeColumnToContents(1);
}

void tela_pagamento_dinheiro::on_data_editingFinished()
{
    funcoes_extras funcao;
    parcelamento = funcao.calcula_parcelas(ui->data->date(),
                                           0,
                                           ui->sb_num_parcelas->text().toInt(),
                                           funcao.converter_para_double(ui->le_valor->text()));
    mostrar_parcelamento();
}
