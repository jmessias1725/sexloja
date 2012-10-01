#include "tela_editar_loja.h"
#include "ui_tela_editar_loja.h"

tela_editar_loja::tela_editar_loja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_editar_loja)
{
    ui->setupUi(this);
}

tela_editar_loja::~tela_editar_loja()
{
    delete ui;
}
