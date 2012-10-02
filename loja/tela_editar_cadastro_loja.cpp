#include "tela_editar_cadastro_loja.h"
#include "ui_tela_editar_cadastro_loja.h"

tela_editar_cadastro_loja::tela_editar_cadastro_loja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_editar_cadastro_loja)
{
    ui->setupUi(this);
}

tela_editar_cadastro_loja::~tela_editar_cadastro_loja()
{
    delete ui;
}
