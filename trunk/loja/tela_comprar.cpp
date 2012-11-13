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

void tela_comprar::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    ui->data->setDate(QDate::currentDate());
    tela_comprar::mostrar_lista_produtos();
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

void tela_comprar::on_btn_adicionar_produto_clicked()
{
    tl_listar_produtos.definir_icone_janela(logomarca);
    tl_listar_produtos.buscar_produtos();
    if(!tl_listar_produtos.exec()){
        aux_lista_produtos = tl_listar_produtos.retorna_lista_produtos_desejados();
        for(int i=0;i<int(aux_lista_produtos.size());i++){
            lista_produtos.push_back(new produto());
            lista_produtos[(lista_produtos.size()-1)] = aux_lista_produtos[i];
        }
        tela_comprar::mostrar_lista_produtos();
        aux_lista_produtos.clear();
    }
}

void tela_comprar::mostrar_lista_produtos(void){
    double aux_valor_total_por_produto = 0.0;
    double valor_total = 0.0;
    funcoes_extras funcao;

    ui->tw_lista_produtos->setRowCount(int(lista_produtos.size()));
    ui->tw_lista_produtos->setColumnCount(5);
    ui->tw_lista_produtos->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_lista_produtos->clear();
    ui->tw_lista_produtos->setHorizontalHeaderLabels(QString("Código;Nome;Quantidade;Valor unitário;Total por produto").split(";"));

    for (int i=0;i<int(lista_produtos.size());i++){
        aux_valor_total_por_produto = (lista_produtos[i]->retorna_quantidade_disponivel())*(lista_produtos[i]->retorna_custo_medio());
        ui->tw_lista_produtos->setItem(i,0,new QTableWidgetItem(QString::number(lista_produtos[i]->retorna_id())));
        ui->tw_lista_produtos->setItem(i,1,new QTableWidgetItem(lista_produtos[i]->retorna_nome()));
        ui->tw_lista_produtos->setItem(i,2,new QTableWidgetItem(QString::number(lista_produtos[i]->retorna_quantidade_disponivel())));
        ui->tw_lista_produtos->setItem(i,3,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_produtos[i]->retorna_custo_medio())));
        ui->tw_lista_produtos->setItem(i,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(aux_valor_total_por_produto)));
        ui->tw_lista_produtos->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,4)->setTextAlignment(Qt::AlignHCenter);

        valor_total=valor_total+aux_valor_total_por_produto;
        aux_valor_total_por_produto = 0.0;

        //Define o íten como não editável
        //ui->tw_lista_produtos->item(i,0)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        //ui->tw_lista_produtos->item(i,1)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    }

    ui->tw_lista_produtos->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_lista_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_lista_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_lista_produtos->resizeColumnToContents(0);
    ui->tw_lista_produtos->resizeColumnToContents(2);
    ui->tw_lista_produtos->resizeColumnToContents(3);
    ui->tw_lista_produtos->resizeColumnToContents(4);

    ui->le_total->setText(funcao.retorna_valor_dinheiro(valor_total));
}

void tela_comprar::closeEvent(QCloseEvent *event){
    tela_comprar::limpar_dados();
}

void tela_comprar::limpar_dados(void){
    ui->le_codigo->clear();
    ui->le_cnpj->clear();
    ui->le_nome->clear();
    ui->le_numero_cupom_nota->clear();
    ui->le_razao_social->clear();
    ui->le_total->clear();
    ui->tw_lista_produtos->repaint();
    ui->data->setDate(QDate::currentDate());
    lista_produtos.clear();
    tela_comprar::mostrar_lista_produtos();
}


void tela_comprar::on_tw_lista_produtos_doubleClicked(const QModelIndex &index)
{
    tl_definir_valor.definir_icone_janela(logomarca);
    tl_definir_valor.definir_dados(lista_produtos[index.row()]->retorna_valor_venda(),lista_produtos[index.row()]->retorna_custo_medio(),lista_produtos[index.row()]->retorna_quantidade_disponivel());
    if(tl_definir_valor.exec()){
        lista_produtos[index.row()]->altera_valor_compra(tl_definir_valor.retorna_custo());
        lista_produtos[index.row()]->altera_valor_venda(tl_definir_valor.retorna_valor_venda());
        lista_produtos[index.row()]->altera_quantidade(tl_definir_valor.retorna_quantidade());
    }
    mostrar_lista_produtos();
}

void tela_comprar::on_btn_remover_produto_clicked()
{
    int posicao_remover;
    posicao_remover = -1;

    posicao_remover = ui->tw_lista_produtos->currentIndex().row();

    if(posicao_remover!=-1){
        for (int j = posicao_remover; j<(int(lista_produtos.size())); j++){
            if ((j+1)>=(int(lista_produtos.size())))
                lista_produtos.pop_back();
            else{
                lista_produtos[j]=lista_produtos[j+1];
            }
        }
    }
    mostrar_lista_produtos();
}

void tela_comprar::on_btn_confirmar_clicked()
{
    tl_pagamento.definir_icone_janela(logomarca);
    tl_pagamento.definir_dados(ui->le_total->text());
    tl_pagamento.exec();
}
