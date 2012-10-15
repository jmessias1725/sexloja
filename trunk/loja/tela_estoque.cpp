#include "tela_estoque.h"
#include "ui_tela_estoque.h"

tela_estoque::tela_estoque(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_estoque)
{
    ui->setupUi(this);
}

tela_estoque::~tela_estoque()
{
    delete ui;
}

void tela_estoque::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_estoque::listar_produtos(void){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    funcoes_extras funcao;

    int aux_id;
    QString aux_nome;
    QString aux_fabricante;
    QString aux_desc_utilizacao;
    int aux_quant_disponivel;
    QString aux_cod_barras;
    QString aux_tipo;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");
    if (verifica_conexao){

        campos_consulta = "p.`id_produto`, p.`nome`, p.`fabricante`, p.`desc_utilizacao`, p.`quant_disponivel`, p.`cod_barras`, p.`tipo`";

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT "+campos_consulta+" FROM produto p;");
        while(consultar.next()){
            aux_id = consultar.value(0).toInt();
            aux_nome = consultar.value(0).toString();
            aux_fabricante = consultar.value(0).toString();
            aux_desc_utilizacao = consultar.value(0).toString();
            aux_quant_disponivel = consultar.value(0).toInt();
            aux_cod_barras = consultar.value(0).toString();
            aux_tipo = consultar.value(0).toString();
        }

        modelo = new QStandardItemModel(int(lista_id.size()),5,this);
        modelo->clear();
        modelo->setHorizontalHeaderItem(0, new QStandardItem(QString("Tipo:")));
        modelo->setHorizontalHeaderItem(1, new QStandardItem(QString("Código:")));
        modelo->setHorizontalHeaderItem(2, new QStandardItem(QString("Nome:")));
        modelo->setHorizontalHeaderItem(3, new QStandardItem(QString("Fabricante:")));
        modelo->setHorizontalHeaderItem(4, new QStandardItem(QString("Quantidade:")));
        modelo->setHorizontalHeaderItem(5, new QStandardItem(QString("Código de barras:")));
        for (int i=0;i<int(lista_id.size());i++){
            consultar.exec("SELECT telefone,operadora FROM tel_fornecedor WHERE id_fornecedor = "+QString::fromStdString(lista_id[i])+";");
            while(consultar.next()){
                aux_lista_telefone.push_back(consultar.value(0).toString().toStdString());
                aux_lista_operadora.push_back(consultar.value(1).toString().toStdString());
            }
            consultar.exec("SELECT e_mail FROM email_fornecedor WHERE id_fornecedor = "+QString::fromStdString(lista_id[i])+";");
            while(consultar.next()){
                aux_lista_email.push_back(consultar.value(0).toString().toStdString());
            }

            lista_fornecedores.push_back(new fornecedor(QString::fromStdString(lista_id[i]).toInt(),QString::fromStdString(lista_cnpj[i]),
                                                        QString::fromStdString(lista_razao_social[i]),QString::fromStdString(lista_nome[i]),
                                                        QString::fromStdString(lista_comentario[i]),aux_lista_email,aux_lista_telefone,
                                                        aux_lista_operadora,QString::fromStdString(lista_uf[i]),QString::fromStdString(lista_estado[i]),
                                                        QString::fromStdString(lista_cidade[i]),QString::fromStdString(lista_bairro[i]),
                                                        QString::fromStdString(lista_rua[i]),QString::fromStdString(lista_cep[i]),
                                                        QString::fromStdString(lista_numero[i]).toInt(),QString::fromStdString(lista_ponto_referencia[i])));

            modelo->setItem(i,0,new QStandardItem(QString::number(lista_fornecedores[i]->retornar_id())));
            modelo->setItem(i,1,new QStandardItem(lista_fornecedores[i]->retornar_nome()));
            modelo->setItem(i,2,new QStandardItem(lista_fornecedores[i]->retornar_razao_social()));
            modelo->setItem(i,3,new QStandardItem(lista_fornecedores[i]->retornar_cnpj()));
            modelo->setItem(i,4,new QStandardItem(QString::fromStdString(aux_lista_telefone[aux_lista_telefone.size()-1]+" "+aux_lista_operadora[aux_lista_operadora.size()-1])));

            aux_lista_telefone.clear();
            aux_lista_operadora.clear();
            aux_lista_email.clear();
        }
        ui->tv_fornecedores->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tv_fornecedores->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tv_fornecedores->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tv_fornecedores->setModel(modelo);
        ui->tv_fornecedores->resizeColumnToContents(0);
        ui->tv_fornecedores->resizeColumnToContents(3);
        ui->tv_fornecedores->resizeColumnToContents(4);
    conexao.fechar_conexao();
}
