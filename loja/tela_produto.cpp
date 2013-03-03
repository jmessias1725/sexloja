#include "tela_produto.h"
#include "ui_tela_produto.h"

tela_produto::tela_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_produto)
{
    ui->setupUi(this);
}

tela_produto::~tela_produto()
{
    delete ui;
}

void tela_produto::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_produto::definir_dados_produto(produto *cad_produto){
    informacoes_produto = cad_produto;

    QGraphicsScene *GS_imagem_produto = new QGraphicsScene;
    imagem_produto = new imagem();

    ui->le_codigo->setText(QString::number(informacoes_produto->retorna_id()));
    ui->le_tipo->setText(informacoes_produto->retorna_tipo());
    ui->le_nome->setText(informacoes_produto->retorna_nome());
    ui->le_fabricante->setText(informacoes_produto->retorna_fabricante());
    ui->le_codigo_barras->setText(informacoes_produto->retorna_cod_barras());
    ui->le_quantidade->setText(QString::number(informacoes_produto->retorna_quantidade_disponivel()));
    ui->le_custo_medio->setText(funcoes.retorna_valor_dinheiro(informacoes_produto->retorna_custo_medio()));
    ui->le_valor_venda->setText(funcoes.retorna_valor_dinheiro(informacoes_produto->retorna_valor_venda()));
    ui->te_des_utilizacao->setText(informacoes_produto->retorna_desc_utilizacao());

    imagem_produto->buscar_imagem(informacoes_produto->retorna_id_imagem());

    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    GS_imagem_produto->addPixmap(imagem_produto->retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(GS_imagem_produto);

    buscar_informacoes_his_estoque_produto(informacoes_produto->retorna_id());
    buscar_informacoes_his_entrada(informacoes_produto->retorna_id());
    buscar_informacoes_his_saida(informacoes_produto->retorna_id());

    this->reject();
}

produto * tela_produto::retorna_novo_cadastro(void){
    return informacoes_produto;
}

void tela_produto::closeEvent(QCloseEvent *event){
    tela_produto::limpar_dados();
}

void tela_produto::limpar_dados(void){
    ui->le_codigo->clear();
    ui->le_tipo->clear();
    ui->le_nome->clear();
    ui->le_fabricante->clear();
    ui->le_codigo_barras->clear();
    ui->le_quantidade->clear();
    ui->le_custo_medio->clear();
    ui->le_valor_venda->clear();
    ui->te_des_utilizacao->clear();
}

void tela_produto::on_btn_editar_produto_clicked()
{
    tl_editar_produto.definir_icone_janela(logomarca);
    tl_editar_produto.definir_dados_produto(informacoes_produto,imagem_produto);
    if(tl_editar_produto.exec()){
        tela_produto::limpar_dados();
        tela_produto::definir_dados_produto(tl_editar_produto.retorna_novo_cadastro());
        this->accept();
    }
}

void tela_produto::on_btn_adicionar_produto_clicked()
{
    tl_cadastro_produto.definir_icone_janela(logomarca);
    if(tl_cadastro_produto.exec()){
        this->accept();
    }
}

void tela_produto::on_btn_remover_produto_clicked()
{
    //Gera mensagem perguntando se é para salvar alterações.
    QPixmap icone_janela(":img/img/produto_pergunta_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Cadastro");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja remover o cadastro do Produto?");
    if(!msg.exec()){
        informacoes_produto->definir_icone_janela(logomarca);
        informacoes_produto->remover_cadastro_produto();
        this->accept();
        this->close();
    }
}

void tela_produto::buscar_informacoes_his_estoque_produto(int id){
    conexao_bd conexao;
    QSqlDatabase bd;

    double valor_compra;
    int total_comprado;
    int total_disponivel;
    int id_balanco;

    std::vector<his_balanco_estoque *> aux_his;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar_his_balanco_estoque(bd);

        //realiza a consulta
        consultar_his_balanco_estoque.exec("SELECT id_balanco,valor_compra,total_comprado,total_disponivel FROM his_balanco_estoque WHERE id_produto = "+QString::number(id)+";");
        while(consultar_his_balanco_estoque.next()){
            id_balanco = consultar_his_balanco_estoque.value(0).toString().toInt();
            valor_compra = consultar_his_balanco_estoque.value(1).toDouble();
            total_comprado = consultar_his_balanco_estoque.value(2).toString().toInt();
            total_disponivel = consultar_his_balanco_estoque.value(3).toString().toInt();
            aux_his.push_back(new his_balanco_estoque(id_balanco,total_comprado,valor_compra,total_disponivel));
        }

        ui->tw_historico_estoque->setRowCount(int(aux_his.size()));
        ui->tw_historico_estoque->setColumnCount(3);
        ui->tw_historico_estoque->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
        ui->tw_historico_estoque->clear();
        ui->tw_historico_estoque->setHorizontalHeaderLabels(QString(" Valor de compra ; Total comprado ; Total disponível ").split(";"));

        for (int i=0;i<int(aux_his.size());i++){
            ui->tw_historico_estoque->setItem(i,0,new QTableWidgetItem(funcoes.retorna_valor_dinheiro(aux_his[i]->retorna_valor_compra())));
            ui->tw_historico_estoque->setItem(i,1,new QTableWidgetItem(QString::number(aux_his[i]->retorna_total_comprado())));
            ui->tw_historico_estoque->setItem(i,2,new QTableWidgetItem(QString::number(aux_his[i]->retorna_total_disponivel())));
            ui->tw_historico_estoque->item(i,0)->setTextAlignment(Qt::AlignHCenter);
            ui->tw_historico_estoque->item(i,1)->setTextAlignment(Qt::AlignHCenter);
            ui->tw_historico_estoque->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        }
        ui->tw_historico_estoque->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tw_historico_estoque->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_historico_estoque->setEditTriggers(QAbstractItemView::NoEditTriggers);

        consultar_his_balanco_estoque.clear();
        bd.close();
        conexao.fechar_conexao();
    }
}

void tela_produto::buscar_informacoes_his_entrada(int id){
    conexao_bd conexao;
    QSqlDatabase bd;

    int id_compra;
    int quantidade;
    double valor_compra_uni;
    double valor_venda_uni;
    QString data;

    std::vector< his_entradas * > aux_his;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT l.`id_compra`, l.`quantidade`, l.`valor_compra_uni`, l.`valor_venda_uni`, c.`data_compra` FROM lista_compra l,compra c WHERE l.id_compra=c.id_compra AND l.id_produto = "+QString::number(id)+";");
        while(consultar.next()){
            id_compra = consultar.value(0).toString().toInt();
            quantidade = consultar.value(1).toString().toInt();
            valor_compra_uni = consultar.value(2).toString().toDouble();
            valor_venda_uni = consultar.value(3).toString().toDouble();
            data = consultar.value(4).toString();
            aux_his.push_back(new his_entradas(id_compra,quantidade,valor_compra_uni,valor_venda_uni,data));
        }
        consultar.clear();
        bd.close();
        conexao.fechar_conexao();
    }
    mostrar_informacoes_his_entrada(aux_his);
}

void tela_produto::mostrar_informacoes_his_entrada(std::vector< his_entradas * > aux_his){

    ui->tw_historico_entradas->setRowCount(int(aux_his.size()));
    ui->tw_historico_entradas->setColumnCount(5);
    ui->tw_historico_entradas->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_historico_entradas->clear();
    ui->tw_historico_entradas->setHorizontalHeaderLabels(QString(" Código da compra ; Quantidade ; Valor de compra ; Valor de venda ; Data da compra ").split(";"));

    for (int i=0;i<int(aux_his.size());i++){
        ui->tw_historico_entradas->setItem(i,0,new QTableWidgetItem(QString::number(aux_his[i]->retorna_id_entrada())));
        ui->tw_historico_entradas->setItem(i,1,new QTableWidgetItem(QString::number(aux_his[i]->retorna_quantidade())));
        ui->tw_historico_entradas->setItem(i,2,new QTableWidgetItem(funcoes.retorna_valor_dinheiro(aux_his[i]->retorna_valor_compra())));
        ui->tw_historico_entradas->setItem(i,3,new QTableWidgetItem(funcoes.retorna_valor_dinheiro(aux_his[i]->retorna_valor_venda())));
        ui->tw_historico_entradas->setItem(i,4,new QTableWidgetItem(aux_his[i]->retorna_data()));
        ui->tw_historico_entradas->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,4)->setTextAlignment(Qt::AlignHCenter);
    }
    ui->tw_historico_entradas->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_historico_entradas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_historico_entradas->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_historico_entradas->resizeColumnsToContents();
}

void tela_produto::buscar_informacoes_his_saida(int id){
    conexao_bd conexao;
    QSqlDatabase bd;

    int id_venda;
    int quantidade;
    double valor_venda_uni;
    QString data;

    std::vector< his_saidas * > aux_his;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT l.`id_venda`, l.`quantidade`, l.`valor_venda_uni`, c.`data_venda` FROM lista_venda l,venda c WHERE l.id_venda=c.id_venda AND l.id_produto = "+QString::number(id)+";");
        while(consultar.next()){
            id_venda = consultar.value(0).toString().toInt();
            quantidade = consultar.value(1).toString().toInt();
            valor_venda_uni = consultar.value(2).toString().toDouble();
            data = consultar.value(3).toString();
            aux_his.push_back(new his_saidas(id_venda,quantidade,valor_venda_uni,data));
        }
        consultar.clear();
        bd.close();
        conexao.fechar_conexao();
    }
    mostrar_informacoes_his_saida(aux_his);
}

void tela_produto::mostrar_informacoes_his_saida(std::vector< his_saidas * > aux_his){

    ui->tw_historico_saidas->setRowCount(int(aux_his.size()));
    ui->tw_historico_saidas->setColumnCount(4);
    ui->tw_historico_saidas->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_historico_saidas->clear();
    ui->tw_historico_saidas->setHorizontalHeaderLabels(QString(" Código da venda ; Quantidade ; Valor de venda ; Data da venda ").split(";"));

    for (int i=0;i<int(aux_his.size());i++){
        ui->tw_historico_saidas->setItem(i,0,new QTableWidgetItem(QString::number(aux_his[i]->retorna_id_saida())));
        ui->tw_historico_saidas->setItem(i,1,new QTableWidgetItem(QString::number(aux_his[i]->retorna_quantidade())));
        ui->tw_historico_saidas->setItem(i,2,new QTableWidgetItem(funcoes.retorna_valor_dinheiro(aux_his[i]->retorna_valor_venda())));
        ui->tw_historico_saidas->setItem(i,3,new QTableWidgetItem(aux_his[i]->retorna_data()));
        ui->tw_historico_saidas->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_saidas->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_saidas->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_saidas->item(i,3)->setTextAlignment(Qt::AlignHCenter);
    }
    ui->tw_historico_saidas->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_historico_saidas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_historico_saidas->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_historico_saidas->resizeColumnsToContents();
}
