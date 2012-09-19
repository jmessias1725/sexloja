#include "tela_editar_cliente.h"
#include "ui_tela_editar_cliente.h"

tela_editar_cliente::tela_editar_cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_editar_cliente)
{
    ui->setupUi(this);
}

tela_editar_cliente::~tela_editar_cliente()
{
    delete ui;
}

void tela_editar_cliente::definir_dados_cliente(cliente *cad_cliente){

}
