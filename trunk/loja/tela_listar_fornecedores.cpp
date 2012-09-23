#include "tela_listar_fornecedores.h"
#include "ui_tela_listar_fornecedores.h"

tela_listar_fornecedores::tela_listar_fornecedores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_listar_fornecedores)
{
    ui->setupUi(this);
}

tela_listar_fornecedores::~tela_listar_fornecedores()
{
    delete ui;
}
