#include "tela_loja.h"
#include "ui_tela_loja.h"

tela_loja::tela_loja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_loja)
{
    ui->setupUi(this);
}

tela_loja::~tela_loja()
{
    delete ui;
}
