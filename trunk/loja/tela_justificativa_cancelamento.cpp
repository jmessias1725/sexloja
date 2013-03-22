#include "tela_justificativa_cancelamento.h"
#include "ui_tela_justificativa_cancelamento.h"

tela_justificativa_cancelamento::tela_justificativa_cancelamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_justificativa_cancelamento)
{
    ui->setupUi(this);
}

tela_justificativa_cancelamento::~tela_justificativa_cancelamento()
{
    delete ui;
}

void tela_justificativa_cancelamento::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}
