#include "tela_vender.h"
#include "ui_tela_vender.h"

tela_vender::tela_vender(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_vender)
{
    ui->setupUi(this);
    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_desconto->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_desconto));
    cliente_atual = new cliente();
    cliente_atual->altera_id_cliente(0);
    eh_estorno = false;
}

tela_vender::~tela_vender()
{
    delete ui;
}

void tela_vender::definir_icone_janela(QPixmap logo){
    funcoes_extras funcao;
    logomarca = logo;
    this->setWindowIcon(logomarca);
    ui->data->setDate(QDate::currentDate());
    ui->le_desconto->setText(funcao.retorna_valor_dinheiro(0));
    tela_vender::mostrar_lista_produtos();
}

void tela_vender::definir_dados(std::vector< lista_venda* > lis_venda, cliente *cli, venda *vend){
    dados_venda = vend;
    for (int i = 0; i<int(lis_venda.size()); i++){
        lista_produtos.push_back(new produto(lis_venda[i]->retorna_id_produto(),
                                             lis_venda[i]->retorna_nome_produto(),
                                             "","","",
                                             lis_venda[i]->retorna_valor_venda(),
                                             0.0,
                                             lis_venda[i]->retorna_quantidade()));
    }
    cliente_atual = cli;
    if(cliente_atual->retornar_id()>0){
        ui->le_codigo->setText(QString::number(cliente_atual->retornar_id()));
        ui->le_nome->setText(cliente_atual->retornar_nome());
        ui->le_cpf->setText(cliente_atual->retornar_cpf());
        ui->le_rg->setText(cliente_atual->retornar_rg());
    }
    ui->data->setDate(vend->retorna_data_QDate());
    eh_estorno = true;
    tela_vender::mostrar_lista_produtos();
}

void tela_vender::on_btn_buscar_cliente_clicked()
{
    cliente_atual->limpar_cliente();
    tl_listar_clientes.definir_icone_janela(logomarca);
    tl_listar_clientes.alterar_editar(false);
    if(tl_listar_clientes.exec()>=0){
        cliente_atual = tl_listar_clientes.retorna_cliente();
    }
    if(cliente_atual->retornar_id()>0){
        ui->le_codigo->setText(QString::number(cliente_atual->retornar_id()));
        ui->le_nome->setText(cliente_atual->retornar_nome());
        ui->le_cpf->setText(cliente_atual->retornar_cpf());
        ui->le_rg->setText(cliente_atual->retornar_rg());
    }
}

void tela_vender::on_btn_adicionar_produto_clicked()
{
    tl_listar_produtos.definir_icone_janela(logomarca,false);
    tl_listar_produtos.buscar_produtos();
    if(!tl_listar_produtos.exec()){
        aux_lista_produtos = tl_listar_produtos.retorna_lista_produtos_desejados();
        for(int i=0;i<int(aux_lista_produtos.size());i++){
            lista_produtos.push_back(new produto());
            lista_produtos[(lista_produtos.size()-1)] = aux_lista_produtos[i];
        }
        tela_vender::mostrar_lista_produtos();
        aux_lista_produtos.clear();
    }
}

void tela_vender::mostrar_lista_produtos(void){
    double aux_valor_total_por_produto = 0.0;
    valor_total = 0.0;
    funcoes_extras funcao;

    ui->tw_lista_produtos->setRowCount(int(lista_produtos.size()));
    ui->tw_lista_produtos->setColumnCount(5);
    ui->tw_lista_produtos->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_lista_produtos->clear();
    ui->tw_lista_produtos->setHorizontalHeaderLabels(QString("Código;Nome;Quantidade;Valor unitário;Total por produto").split(";"));

    for (int i=0;i<int(lista_produtos.size());i++){
        aux_valor_total_por_produto = (lista_produtos[i]->retorna_quantidade_disponivel())*(lista_produtos[i]->retorna_valor_venda());
        ui->tw_lista_produtos->setItem(i,0,new QTableWidgetItem(QString::number(lista_produtos[i]->retorna_id())));
        ui->tw_lista_produtos->setItem(i,1,new QTableWidgetItem(lista_produtos[i]->retorna_nome()));
        ui->tw_lista_produtos->setItem(i,2,new QTableWidgetItem(QString::number(lista_produtos[i]->retorna_quantidade_disponivel())));
        ui->tw_lista_produtos->setItem(i,3,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_produtos[i]->retorna_valor_venda())));
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
    total_a_pagar = valor_total - funcao.converter_para_double(ui->le_desconto->text());
    ui->le_total_a_pagar->setText(funcao.retorna_valor_dinheiro(total_a_pagar));
}

void tela_vender::closeEvent(QCloseEvent *event){
    tela_vender::limpar_dados();
}

void tela_vender::limpar_dados(void){
    ui->le_codigo->clear();
    ui->le_cpf->clear();
    ui->le_nome->clear();
    ui->le_rg->clear();
    ui->le_total->clear();
    ui->tw_lista_produtos->repaint();
    ui->data->setDate(QDate::currentDate());
    tela_vender::mostrar_lista_produtos();
    lista_produtos.clear();
}


void tela_vender::on_tw_lista_produtos_doubleClicked(const QModelIndex &index)
{
    tl_definir_valor_venda.definir_icone_janela(logomarca);
    tl_definir_valor_venda.definir_dados(lista_produtos[index.row()]->retorna_valor_venda(),lista_produtos[index.row()]->retorna_quantidade_disponivel());
    if(tl_definir_valor_venda.exec()){
        lista_produtos[index.row()]->altera_valor_venda(tl_definir_valor_venda.retorna_valor_venda());
        lista_produtos[index.row()]->altera_quantidade(tl_definir_valor_venda.retorna_quantidade());
    }
    mostrar_lista_produtos();
}

void tela_vender::on_btn_remover_produto_clicked()
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

void tela_vender::on_btn_confirmar_clicked()
{
    lt_venda.clear();
    funcoes_extras funcao;
    if(ui->le_codigo->text().toStdString()==""){
        QPixmap icone_janela(":img/img/error_50.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("Dados do Cliente");
        msg.addButton("OK", QMessageBox::AcceptRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("\nFavor, inserir dados sobre o cliente!");
        msg.exec();
    }
    else{
        double valor_tot = funcao.converter_para_double(ui->le_total_a_pagar->text())+funcao.converter_para_double(ui->le_desconto->text());
        if(eh_estorno == false){
            dados_venda = new venda(ui->data->date(),ui->le_codigo->text().toInt(),valor_tot,
                                    funcao.converter_para_double(ui->le_desconto->text()));

            for(int i=0;i<int(lista_produtos.size());i++){
                lt_venda.push_back(new lista_venda(lista_produtos[i]->retorna_id(),0,
                                                   lista_produtos[i]->retorna_quantidade_disponivel(),
                                                   lista_produtos[i]->retorna_valor_venda()));
            }
        }
        else{
            dados_venda->alterar_data(ui->data->date());
            dados_venda->alterar_id_cliente(ui->le_codigo->text().toInt());
            dados_venda->alterar_valor_total(valor_tot);
            dados_venda->alterar_desconto(funcao.converter_para_double(ui->le_desconto->text()));
            dados_venda->alterar_valor_pago(funcao.converter_para_double(ui->le_total_a_pagar->text()));

            for(int i=0;i<int(lista_produtos.size());i++){
                lt_venda.push_back(new lista_venda(lista_produtos[i]->retorna_id(),dados_venda->retorna_id_venda(),
                                                   lista_produtos[i]->retorna_quantidade_disponivel(),
                                                   lista_produtos[i]->retorna_valor_venda()));
            }
        }

        tl_pagamento.definir_icone_janela(logomarca);
        tl_pagamento.definir_dados_venda(dados_venda,lt_venda,eh_estorno);
        if(tl_pagamento.exec()){
            this->close();
        }
    }
}

void tela_vender::on_le_desconto_editingFinished()
{
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_desconto->text()));
    ui->le_desconto->setText(aux);
    total_a_pagar = valor_total - funcao.converter_para_double(ui->le_desconto->text());
    ui->le_total_a_pagar->setText(funcao.retorna_valor_dinheiro(total_a_pagar));
}
