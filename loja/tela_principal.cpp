#include "tela_principal.h"
#include "ui_tela_principal.h"

tela_principal::tela_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_principal)
{
    ui->setupUi(this);
}

tela_principal::~tela_principal()
{
    delete ui;
}

void tela_principal::on_consultar_clientes_triggered()
{
    tl_clientes.show();
}

void tela_principal::on_botao_sair_triggered()
{
    this->close();
}