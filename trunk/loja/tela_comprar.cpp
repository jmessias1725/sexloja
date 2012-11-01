#include "tela_comprar.h"
#include "ui_tela_comprar.h"

tela_comprar::tela_comprar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_comprar)
{
    ui->setupUi(this);
    ui->tw_lista_produtos->resizeColumnToContents(0);
    ui->tw_lista_produtos->resizeColumnToContents(2);
    ui->tw_lista_produtos->resizeColumnToContents(3);
    ui->tw_lista_produtos->resizeColumnToContents(4);
    ui->data->setDate(QDate::currentDate());
}

tela_comprar::~tela_comprar()
{
    delete ui;
}

void tela_comprar::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_comprar::on_btn_buscar_fornecedor_clicked()
{
    tl_listar_fornecedores.definir_icone_janela(logomarca);
    tl_listar_fornecedores.alterar_editar(false);
    if(tl_listar_fornecedores.exec()>=0){
        fornecedor_atual = tl_listar_fornecedores.retorna_fornecedor();
    }
    if(fornecedor_atual->retornar_id()>0){
        ui->le_codigo->setText(QString::number(fornecedor_atual->retornar_id()));
        ui->le_nome->setText(fornecedor_atual->retornar_nome());
        ui->le_razao_social->setText(fornecedor_atual->retornar_razao_social());
        ui->le_cnpj->setText(fornecedor_atual->retornar_cnpj());
    }
}
