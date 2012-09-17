#include "tela_clientes.h"
#include "ui_tela_clientes.h"

tela_clientes::tela_clientes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_clientes)
{
    ui->setupUi(this);
}

tela_clientes::~tela_clientes()
{
    delete ui;
}

void tela_clientes::on_actionEditar_Contato_triggered()
{

}

void tela_clientes::on_actionAdicionar_Contato_triggered()
{
    tl_cadastro_clientes.show();
}

void tela_clientes::definir_dados_cliente(std::string id_cliente,std::string nome_cliente,std::string rg_cliente,std::string cpf_cliente,
                                          std::string comentario_cliente,std::string cep_cliente,std::string rua_cliente,
                                          std::string bairro_cliente,std::string ponto_referencia_cliente,std::string cidade_cliente,
                                          std::string uf,std::string numero,std::string estado){
    std::cout<<id_cliente<<std::endl;
    ui->le_numero_cadastro->setText(QString::fromStdString(id_cliente));
    ui->le_nome->setText(QString::fromStdString(nome_cliente));
    ui->le_rg->setText(QString::fromStdString(rg_cliente));
    ui->le_cpf->setText(QString::fromStdString(cpf_cliente));
    ui->te_comentario->setText(QString::fromStdString(comentario_cliente));
    ui->le_cep->setText(QString::fromStdString(cep_cliente));
    ui->le_rua->setText(QString::fromStdString(rua_cliente));
    ui->le_bairro->setText(QString::fromStdString(bairro_cliente));
    ui->te_ponto_referencia->setText(QString::fromStdString(ponto_referencia_cliente));
    ui->le_cidade->setText(QString::fromStdString(cidade_cliente));
    ui->le_estado->setText(QString::fromStdString(estado));
    ui->le_numero->setText(QString::fromStdString(numero));
}
