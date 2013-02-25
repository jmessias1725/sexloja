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

void tela_pagamento_dinheiro::on_tw_parcelas_doubleClicked(const QModelIndex &index)
{
    funcoes_extras funcao;
    double total_parcial = 0;
    double total_a_parcelar = 0;
    double valor_parcelas = 0;
    double ultima_parcela = 0;
    int numero_parcelas_restantes;

    tl_ajustar_data_valor.definir_icone_janela(logomarca);
    tl_ajustar_data_valor.definir_dados(parcelamento[index.row()]);
    if(tl_ajustar_data_valor.exec()){
        parcelamento[index.row()] = tl_ajustar_data_valor.retorna_parcela();
        for (int i = 0; i < int(index.row())+1;i++){
            total_parcial  = total_parcial+parcelamento[i]->retorna_valor();
        }
        total_a_parcelar = valor_total - total_parcial;
        numero_parcelas_restantes = (int(parcelamento.size())-(index.row()+1));

        valor_parcelas = total_a_parcelar/numero_parcelas_restantes;
        valor_parcelas = funcao.arredonda_para_duas_casas_decimais(valor_parcelas);
        ultima_parcela = total_a_parcelar - valor_parcelas*(numero_parcelas_restantes-1);

        for (int i = index.row()+1; i<int(parcelamento.size()-1);i++){
            parcelamento[i]->altera_valor(valor_parcelas);
        }
        parcelamento[int(parcelamento.size()-1)]->altera_valor(ultima_parcela);
        mostrar_parcelamento();
    }
}
