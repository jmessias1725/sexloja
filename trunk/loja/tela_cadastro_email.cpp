#include "tela_cadastro_email.h"
#include "ui_tela_cadastro_email.h"

tela_cadastro_email::tela_cadastro_email(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tela_cadastro_email)
{
    ui->setupUi(this);
}

tela_cadastro_email::~tela_cadastro_email()
{
    delete ui;
}

void tela_cadastro_email::on_btn_confirmar_clicked()
{
    novo_email = ui->le_cadastro_email->text();
    ui->le_cadastro_email->clear();
    this->close();
}

QString tela_cadastro_email::retorna_email(){
    return novo_email;
}
