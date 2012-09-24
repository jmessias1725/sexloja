#include "tela_editar_fornecedor.h"
#include "ui_tela_editar_fornecedor.h"

tela_editar_fornecedor::tela_editar_fornecedor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_editar_fornecedor)
{
    ui->setupUi(this);
}

tela_editar_fornecedor::~tela_editar_fornecedor()
{
    delete ui;
}
