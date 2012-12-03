#include "tela_despesa.h"
#include "ui_tela_despesa.h"

tela_despesa::tela_despesa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_despesa)
{
    ui->setupUi(this);
}

tela_despesa::~tela_despesa()
{
    delete ui;
}
