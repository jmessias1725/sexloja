#include "tela_comprar.h"
#include "ui_tela_comprar.h"

tela_comprar::tela_comprar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_comprar)
{
    ui->setupUi(this);
}

tela_comprar::~tela_comprar()
{
    delete ui;
}
