#include "tela_cadastro_produto.h"
#include "ui_tela_cadastro_produto.h"

tela_cadastro_produto::tela_cadastro_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_cadastro_produto)
{
    ui->setupUi(this);
}

tela_cadastro_produto::~tela_cadastro_produto()
{
    delete ui;
}
