#include "tela_nota_venda.h"
#include "ui_tela_nota_venda.h"

tela_nota_venda::tela_nota_venda(QWidget *parent) :
    QDialog(parent,Qt::Window),
    ui(new Ui::tela_nota_venda)
{
    ui->setupUi(this);
}

tela_nota_venda::~tela_nota_venda()
{
    delete ui;
}

void tela_nota_venda::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_nota_venda::definir_dados(venda *vend){
    venda_atual = vend;
    this->setWindowTitle("Venda de Código = "+QString::number(venda_atual->retorna_id_venda()));
    buscar_dados();
    mostrar_dados_pagamento();
    mostrar_dados();
}

void tela_nota_venda::buscar_dados(){
    lt_venda.clear();
    lt_ganho.clear();
    valor_total = 0;

    conexao_bd conexao;
    QSqlDatabase bd;

    int aux_id_cliente;
    QString aux_nome;
    QString aux_rg;
    QString aux_cpf;

    int aux_id_lista_venda;
    int aux_id_produto;
    double valor_venda_uni;
    int quantidade;
    QString aux_nome_produto;

    int aux_id_ganho;
    QString data_pagamento;
    QString aux_descricao;
    double valor;
    int aux_status;
    int aux_origem;
    int aux_id_origem;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta sobre os dados da venda;
        consultar.exec("SELECT c.`id_cliente`, c.`nome`, c.`rg`, c.`cpf` FROM cliente c WHERE c.id_cliente = '"+QString::number(venda_atual->retorna_id_cliente())+"';");
        if(consultar.last()){
            aux_id_cliente = consultar.value(0).toInt();
            aux_nome = consultar.value(1).toString();
            aux_rg = consultar.value(2).toString();
            aux_cpf = consultar.value(3).toString();
            cliente_atual = new cliente(aux_id_cliente,aux_nome,aux_rg,aux_cpf);
        }
        consultar.clear();

        //realiza a consulta sobre a lista de compra
        consultar.exec("SELECT l.id_lista_venda, l.id_produto, l.valor_venda_uni, l.quantidade, p.nome FROM lista_venda l, produto p WHERE l.id_venda = '"+QString::number(venda_atual->retorna_id_venda())+"' AND p.id_produto=l.id_produto;");
        while(consultar.next()){
            aux_id_lista_venda = consultar.value(0).toInt();
            aux_id_produto = consultar.value(1).toInt();
            valor_venda_uni = consultar.value(2).toFloat();
            quantidade = consultar.value(3).toInt();
            aux_nome_produto = consultar.value(4).toString();
            lt_venda.push_back(new lista_venda(aux_id_lista_venda,aux_id_produto,venda_atual->retorna_id_venda(),quantidade,valor_venda_uni,aux_nome_produto));
        }
        consultar.clear();

        //realiza a consulta sobre a lista dados de pagamento
        consultar.exec("SELECT * FROM ganhos g WHERE id_origem='"+QString::number(venda_atual->retorna_id_venda())+"';");
        while(consultar.next()){
            aux_id_ganho = consultar.value(0).toInt();
            data_pagamento = consultar.value(1).toString();
            aux_descricao = consultar.value(2).toString();
            valor = consultar.value(3).toFloat();
            aux_status = consultar.value(4).toInt();
            aux_origem = consultar.value(5).toInt();
            aux_id_origem = consultar.value(6).toInt();
            lt_ganho.push_back(new ganho(aux_id_ganho,data_pagamento,aux_descricao,valor,aux_status,aux_origem,aux_id_origem));
            if(aux_origem==2){
                valor_total = valor_total+valor;
            }
        }
        consultar.clear();

        bd.close();
        conexao.fechar_conexao();
    }
}

void tela_nota_venda::mostrar_dados(){
    funcoes_extras funcao;

    double aux_valor_total_por_produto = 0.0;

    ui->le_codigo->setText(QString::number(cliente_atual->retornar_id()));
    ui->le_nome->setText(cliente_atual->retornar_nome());
    ui->le_cpf->setText(cliente_atual->retornar_cpf());
    ui->le_rg->setText(cliente_atual->retornar_rg());
    ui->le_data->setText(venda_atual->retorna_data_venda());

    ui->tw_lista_produtos->setRowCount(int(lt_venda.size()));
    ui->tw_lista_produtos->setColumnCount(5);
    ui->tw_lista_produtos->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_lista_produtos->clear();
    ui->tw_lista_produtos->setHorizontalHeaderLabels(QString("Código;Nome;Quantidade;Valor unitário;Total por produto").split(";"));
    for (int i=0;i<int(lt_venda.size());i++){
        aux_valor_total_por_produto = (lt_venda[i]->retorna_quantidade())*(lt_venda[i]->retorna_valor_venda());
        ui->tw_lista_produtos->setItem(i,0,new QTableWidgetItem(QString::number(lt_venda[i]->retorna_id_produto())));
        ui->tw_lista_produtos->setItem(i,1,new QTableWidgetItem(lt_venda[i]->retorna_nome_produto()));
        ui->tw_lista_produtos->setItem(i,2,new QTableWidgetItem(QString::number(lt_venda[i]->retorna_quantidade())));
        ui->tw_lista_produtos->setItem(i,3,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lt_venda[i]->retorna_valor_venda())));
        ui->tw_lista_produtos->setItem(i,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(aux_valor_total_por_produto)));
        ui->tw_lista_produtos->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,4)->setTextAlignment(Qt::AlignHCenter);
        aux_valor_total_por_produto = 0.0;
    }
    ui->tw_lista_produtos->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_lista_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_lista_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_lista_produtos->resizeColumnToContents(0);
    ui->tw_lista_produtos->resizeColumnToContents(2);
    ui->tw_lista_produtos->resizeColumnToContents(3);
    ui->tw_lista_produtos->resizeColumnToContents(4);
}

void tela_nota_venda::mostrar_dados_pagamento(void){
    funcoes_extras funcao;
    ui->le_total->setText(funcao.retorna_valor_dinheiro(venda_atual->retorna_valor_total()));
    ui->le_total_a_pagar->setText(funcao.retorna_valor_dinheiro(venda_atual->retorna_valor_pago()));
    ui->le_desconto->setText(funcao.retorna_valor_dinheiro(venda_atual->retorna_valor_total()-venda_atual->retorna_valor_pago()));

    ui->tw_lista_pagamento->setRowCount(int(lt_ganho.size()));
    ui->tw_lista_pagamento->setColumnCount(4);
    ui->tw_lista_pagamento->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_lista_pagamento->clear();
    ui->tw_lista_pagamento->setHorizontalHeaderLabels(QString("Data;Descrição;valor;Status").split(";"));
    for (int i=0;i<int(lt_ganho.size());i++){
        ui->tw_lista_pagamento->setItem(i,0,new QTableWidgetItem(lt_ganho[i]->retorna_data()));
        ui->tw_lista_pagamento->setItem(i,1,new QTableWidgetItem(lt_ganho[i]->retorna_descricao()));
        ui->tw_lista_pagamento->setItem(i,2,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lt_ganho[i]->retorna_valor())));
        ui->tw_lista_pagamento->setItem(i,3,new QTableWidgetItem(funcao.converte_despesa_numero_status_nome(lt_ganho[i]->retorna_status())));
        ui->tw_lista_pagamento->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_pagamento->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_pagamento->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_pagamento->item(i,3)->setTextAlignment(Qt::AlignHCenter);
    }
    ui->tw_lista_pagamento->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_lista_pagamento->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_lista_pagamento->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_lista_pagamento->resizeColumnToContents(0);
    ui->tw_lista_pagamento->resizeColumnToContents(1);
    ui->tw_lista_pagamento->resizeColumnToContents(2);
    ui->tw_lista_pagamento->resizeColumnToContents(3);
}

void tela_nota_venda::on_tw_lista_pagamento_doubleClicked(const QModelIndex &index){
    if(lt_ganho[index.row()]->retorna_origem()==2){
        funcoes_extras funcao;
        double total_parcial = 0;
        double total_a_parcelar = 0;
        double valor_parcelas = 0;
        double ultima_parcela = 0;
        int numero_parcelas_restantes = 0;
        double valor_anterior = lt_ganho[index.row()]->retorna_valor();
        std::vector< int > indice_parcelas;

        tl_editar_parcela.definir_icone_janela(logomarca);
        tl_editar_parcela.definir_dados(lt_ganho[index.row()]);
        if(tl_editar_parcela.exec()){
            lt_ganho[index.row()]  = tl_editar_parcela.retorna_parcela();
            if(valor_anterior!=lt_ganho[index.row()]->retorna_valor()){
                for (int i=0; i < int(lt_ganho.size()); i++){
                    if((lt_ganho[i]->retorna_origem()==2)){
                        if(i <= int(index.row())){
                            total_parcial  = total_parcial + lt_ganho[i]->retorna_valor();
                        }
                        else{
                            if(lt_ganho[i]->retorna_status()==1){
                                total_parcial = total_parcial + lt_ganho[i]->retorna_valor();
                            }
                            else{
                                numero_parcelas_restantes = numero_parcelas_restantes+1;
                                indice_parcelas.push_back(i);
                            }
                        }
                    }
                }
                total_a_parcelar = valor_total - total_parcial;

                valor_parcelas = total_a_parcelar/numero_parcelas_restantes;
                valor_parcelas = funcao.arredonda_para_duas_casas_decimais(valor_parcelas);
                ultima_parcela = total_a_parcelar - valor_parcelas*(numero_parcelas_restantes-1);

                for (int i = 0; i<int(indice_parcelas.size()-1);i++){
                    lt_ganho[indice_parcelas[i]]->alterar_valor(valor_parcelas);
                }

                lt_ganho[indice_parcelas[int(indice_parcelas.size()-1)]]->alterar_valor(ultima_parcela);
            }
            mostrar_dados_pagamento();
        }
    }
}
