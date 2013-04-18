#include "tela_receita_avulsa.h"
#include "ui_tela_receita_avulsa.h"

tela_receita_avulsa::tela_receita_avulsa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_receita_avulsa)
{
    ui->setupUi(this);
}

tela_receita_avulsa::~tela_receita_avulsa()
{
    delete ui;
}

void tela_receita_avulsa::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));
    ui->data->setDate(QDate::currentDate());
}

void tela_receita_avulsa::on_le_valor_editingFinished()
{
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
}

void tela_receita_avulsa::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
    QPixmap icone_janela(":img/img/perguntar.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("AVISO!!!");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja adicionar a nova receita?");
    if(msg.exec()==QMessageBox::AcceptRole){
        receita = new ganho_avulso(ui->data->date(),ui->te_descricao->toPlainText(),funcao.converter_para_double(ui->le_valor->text()),ui->cb_status->currentIndex());
        tl_pagamento.definir_icone_janela(logomarca);
        tl_pagamento.definir_dados_ganho_avulso(receita);
        if(tl_pagamento.exec()){
            this->accept();
            this->close();
        }
        else{
            this->rect();
        }
    }
}

void tela_receita_avulsa::on_btn_cancelar_clicked()
{
    this->rect();
    this->close();
}

void tela_receita_avulsa::closeEvent(QCloseEvent *event){
    ui->le_valor->clear();
    ui->te_descricao->clear();
    ui->data->setDate(QDate::currentDate());
    ui->cb_status->setCurrentIndex(0);
}
