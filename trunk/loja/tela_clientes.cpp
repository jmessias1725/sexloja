#include "tela_clientes.h"
#include "ui_tela_clientes.h"

tela_clientes::tela_clientes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_clientes)
{
    ui->setupUi(this);
}

tela_clientes::~tela_clientes()
{
    delete ui;
}

void tela_clientes::on_actionEditar_Contato_triggered()
{

}

void tela_clientes::on_actionAdicionar_Contato_triggered()
{
    tl_cadastro_clientes.show();
}
