#include "tela_aviso_alterar_dados.h"
#include "ui_tela_aviso_alterar_dados.h"

tela_aviso_alterar_dados::tela_aviso_alterar_dados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_aviso_alterar_dados)
{
    ui->setupUi(this);
}

tela_aviso_alterar_dados::~tela_aviso_alterar_dados()
{
    delete ui;
}
