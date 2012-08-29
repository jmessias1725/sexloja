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
