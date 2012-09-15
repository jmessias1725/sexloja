#include "tela_listar_clientes.h"
#include "ui_tela_listar_clientes.h"

tela_listar_clientes::tela_listar_clientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_listar_clientes)
{
    ui->setupUi(this);
}

tela_listar_clientes::~tela_listar_clientes()
{
    delete ui;
}
