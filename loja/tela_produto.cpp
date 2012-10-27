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

    buscar_informacoes_his_estoque_produto(informacoes_produto->retorna_id());
    informacoes_his_entrada = buscar_informacoes_his_entrada(informacoes_produto->retorna_id());
    mostrar_informacoes_his_entrada(informacoes_his_entrada);

    imagem_produto->buscar_imagem(informacoes_produto->retorna_id_imagem());
    ui->le_codigo->setText(QString::number(informacoes_produto->retorna_id()));
    ui->le_tipo->setText(informacoes_produto->retorna_tipo());
    ui->le_nome->setText(informacoes_produto->retorna_nome());
    ui->le_fabricante->setText(informacoes_produto->retorna_fabricante());
    ui->le_codigo_barras->setText(informacoes_produto->retorna_cod_barras());
    ui->le_quantidade->setText(QString::number(informacoes_produto->retorna_quantidade_disponivel()));
    ui->le_custo_medio->setText(funcoes.retorna_valor_dinheiro(QString::number(informacoes_produto->retorna_custo_medio())));
    ui->le_valor_venda->setText(funcoes.retorna_valor_dinheiro(QString::number(informacoes_produto->retorna_valor_venda())));
    ui->te_des_utilizacao->setText(informacoes_produto->retorna_desc_utilizacao());

    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    GS_imagem_produto->addPixmap(imagem_produto->retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(GS_imagem_produto);
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
    if(!tl_editar_produto.exec()){
        tela_produto::limpar_dados();
        tela_produto::definir_dados_produto(tl_editar_produto.retorna_novo_cadastro());
    }
}

void tela_produto::on_btn_adicionar_produto_clicked()
{
    tl_cadastro_produto.definir_icone_janela(logomarca);
    tl_cadastro_produto.exec();
}

void tela_produto::on_btn_remover_produto_clicked()
{
    //Gera mensagem perguntando se � para salvar altera��es.
    QPixmap icone_janela(":img/img/produto_pergunta_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Cadastro");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("N�o", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja remover o cadastro do Produto?");
    if(!msg.exec()){
        informacoes_produto->definir_icone_janela(logomarca);
        informacoes_produto->remover_cadastro_produto();
        this->close();
    }
}

void tela_produto::buscar_informacoes_his_estoque_produto(int id){
    conexao_bd conexao;
    QSqlDatabase bd;

    float valor_compra;
    int total_comprado;
    int total_disponivel;
    int id_balanco;

    std::vector<his_balanco_estoque *> aux_his;

    //realiza conex�o ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","his_balanco_estoque::buscar_his_estoque_produto")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a vari�vel que ir� fazer a consulta
        QSqlQuery consultar_his_balanco_estoque(bd);

        //realiza a consulta
        consultar_his_balanco_estoque.exec("SELECT id_balanco,valor_compra,total_comprado,total_disponivel FROM his_balanco_estoque WHERE id_produto = "+QString::number(id)+";");
        while(consultar_his_balanco_estoque.next()){
            id_balanco = consultar_his_balanco_estoque.value(0).toString().toInt();
            valor_compra = consultar_his_balanco_estoque.value(1).toFloat();
            total_comprado = consultar_his_balanco_estoque.value(2).toString().toInt();
            total_disponivel = consultar_his_balanco_estoque.value(3).toString().toInt();
            aux_his.push_back(new his_balanco_estoque(id_balanco,total_comprado,valor_compra,total_disponivel));
        }

        ui->tw_historico_estoque->setRowCount(int(aux_his.size()));
        ui->tw_historico_estoque->setColumnCount(3);
        ui->tw_historico_estoque->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
        ui->tw_historico_estoque->clear();
        ui->tw_historico_estoque->setHorizontalHeaderLabels(QString("Valor de compra;Total comprado;Total dispon�vel").split(";"));

        for (int i=0;i<int(aux_his.size());i++){
            ui->tw_historico_estoque->setItem(i,0,new QTableWidgetItem(funcoes.retorna_valor_dinheiro(QString::number(aux_his[i]->retorna_valor_compra()))));
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

std::vector< his_entradas * > tela_produto::buscar_informacoes_his_entrada(int id){
    conexao_bd conexao;
    QSqlDatabase bd;

    int id_entrada;
    int quantidade;
    float valor_compra;
    float valor_venda;
    QString data;
    QString hora;
    int origem;
    int id_balanco;

    std::vector< his_entradas * > aux_his;

    //realiza conex�o ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","tela_produto::buscar_his_entrada")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a vari�vel que ir� fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT id_entrada,quantidade,valor_compra,valor_venda,data,hora,origem,id_balanco FROM his_entradas WHERE id_produto = "+QString::number(id)+";");
        while(consultar.next()){
            id_entrada = consultar.value(0).toString().toInt();
            quantidade = consultar.value(1).toString().toInt();
            valor_compra = consultar.value(2).toString().toFloat();
            valor_venda = consultar.value(3).toString().toFloat();
            data = consultar.value(4).toString();
            hora = consultar.value(5).toString();
            origem = consultar.value(6).toString().toInt();
            id_balanco = consultar.value(7).toString().toInt();
            aux_his.push_back(new his_entradas(id_entrada,quantidade,valor_compra,valor_venda,data,hora,origem,id_balanco));
        }
        consultar.clear();
        bd.close();
        conexao.fechar_conexao();
    }
    return aux_his;
}

void tela_produto::mostrar_informacoes_his_entrada(std::vector< his_entradas * > aux_his){

    ui->tw_historico_entradas->setRowCount(int(aux_his.size()));
    ui->tw_historico_entradas->setColumnCount(6);
    ui->tw_historico_entradas->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_historico_entradas->clear();
    ui->tw_historico_entradas->setHorizontalHeaderLabels(QString(" Origem ; Quantidade ; Valor de compra ; Valor de venda ; Data do registro ; Hora do registro ").split(";"));

    for (int i=0;i<int(aux_his.size());i++){
        ui->tw_historico_entradas->setItem(i,0,new QTableWidgetItem(funcoes.converte_numero_origem_nome(aux_his[i]->retorna_origem())));
        ui->tw_historico_entradas->setItem(i,1,new QTableWidgetItem(QString::number(aux_his[i]->retorna_quantidade())));
        ui->tw_historico_entradas->setItem(i,2,new QTableWidgetItem(funcoes.retorna_valor_dinheiro(QString::number(aux_his[i]->retorna_valor_compra()))));
        ui->tw_historico_entradas->setItem(i,3,new QTableWidgetItem(funcoes.retorna_valor_dinheiro(QString::number(aux_his[i]->retorna_valor_venda()))));
        ui->tw_historico_entradas->setItem(i,4,new QTableWidgetItem(aux_his[i]->retorna_data()));
        ui->tw_historico_entradas->setItem(i,5,new QTableWidgetItem(aux_his[i]->retorna_hora()));
        ui->tw_historico_entradas->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,4)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_entradas->item(i,5)->setTextAlignment(Qt::AlignHCenter);
    }
    ui->tw_historico_entradas->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_historico_entradas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_historico_entradas->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_historico_entradas->resizeColumnsToContents();
}
