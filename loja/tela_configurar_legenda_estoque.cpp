#include "tela_configurar_legenda_estoque.h"
#include "ui_tela_configurar_legenda_estoque.h"

tela_configurar_legenda_estoque::tela_configurar_legenda_estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_configurar_legenda_estoque)
{
    ui->setupUi(this);
    ui->tw_legenda->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

tela_configurar_legenda_estoque::~tela_configurar_legenda_estoque()
{
    delete ui;
}

void tela_configurar_legenda_estoque::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}
