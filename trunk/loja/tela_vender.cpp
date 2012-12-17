#include "tela_vender.h"
#include "ui_tela_vender.h"

tela_vender::tela_vender(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_vender)
{
    ui->setupUi(this);
}

tela_vender::~tela_vender()
{
    delete ui;
}

void tela_vender::definir_icone_janela(QPixmap logo){
    funcoes_extras funcao;
    logomarca = logo;
    this->setWindowIcon(logomarca);
    ui->data->setDate(QDate::currentDate());
    ui->le_desconto->setText(funcao.retorna_valor_dinheiro(0));
}
