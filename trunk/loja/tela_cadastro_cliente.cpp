#include "tela_cadastro_cliente.h"
#include "ui_tela_cadastro_cliente.h"

tela_cadastro_cliente::tela_cadastro_cliente(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_cadastro_cliente)
{
    ui->setupUi(this);
}

tela_cadastro_cliente::~tela_cadastro_cliente()
{
    delete ui;
}

void tela_cadastro_cliente::on_le_cep_editingFinished()
{

}


void tela_cadastro_cliente::on_tb_menos_email_clicked()
{
    ui->cb_email->removeItem(ui->cb_email->currentIndex());
}

void tela_cadastro_cliente::on_tb_mais_email_clicked()
{
    tl_email.show();
    if (!tl_email.novo_email.isEmpty())
    {
        ui->cb_email->addItem(tl_email.novo_email);
    }
}
