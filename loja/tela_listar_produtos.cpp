#include "tela_listar_produtos.h"
#include "ui_tela_listar_produtos.h"

tela_listar_produtos::tela_listar_produtos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_listar_produtos)
{
    ui->setupUi(this);
    legenda = new legenda_estoque();
    aux_cons_id_produto = "";
    aux_cons_nome = "";
    aux_cons_fabricante = "";
    aux_cons_cod_barras = "";
    aux_cons_tipo = "";
    ui->le_codigo->setCursorPosition(0);
    ui->le_codigo_barras->setCursorPosition(0);
}

tela_listar_produtos::~tela_listar_produtos()
{
    delete ui;
}

void tela_listar_produtos::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_listar_produtos::buscar_produtos(void){
    conexao_bd conexao;
    QSqlDatabase bd;

    custo_total = 0;

    int aux_id;
    QString aux_nome;
    QString aux_fabricante;
    QString aux_desc_utilizacao;
    QString aux_cod_barras;
    QString aux_tipo;
    int aux_id_imagem;
    int aux_soma_total = 0;
    float aux_valor_venda;
    float aux_valor_compra;
    float aux_total_disponivel;
    float custo_medio_cada_produto = 0;

    lista_produtos.clear();

    //realiza conex�o ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","tela_estoque::buscar_produtos")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a vari�vel que ir� fazer a consulta
        QSqlQuery consultar(bd);
        QSqlQuery consultar_his_balanco_estoque(bd);

        //realiza a consulta
        consultar.exec("SELECT id_produto,nome,fabricante,desc_utilizacao,cod_barras,tipo,id_imagem,valor_venda FROM produto WHERE removido=0 ORDER BY nome;");
        while(consultar.next()){
            aux_id = consultar.value(0).toInt();
            aux_nome = consultar.value(1).toString();
            aux_fabricante = consultar.value(2).toString();
            aux_desc_utilizacao = consultar.value(3).toString();
            aux_cod_barras = consultar.value(4).toString();
            aux_tipo = consultar.value(5).toString();
            aux_id_imagem = consultar.value(6).toInt();
            aux_valor_venda = consultar.value(7).toInt();

            //realiza a consulta
            consultar_his_balanco_estoque.exec("SELECT valor_compra,total_disponivel FROM his_balanco_estoque WHERE id_produto = "+QString::number(aux_id)+";");
            while(consultar_his_balanco_estoque.next()){
                aux_valor_compra = consultar_his_balanco_estoque.value(0).toFloat();
                aux_total_disponivel = consultar_his_balanco_estoque.value(1).toString().toInt();
                custo_medio_cada_produto = custo_medio_cada_produto+(aux_valor_compra*aux_total_disponivel);
                aux_soma_total = aux_soma_total+aux_total_disponivel;
            }

            custo_total = custo_total+custo_medio_cada_produto;
            custo_medio_cada_produto = custo_medio_cada_produto/aux_soma_total;
            lista_produtos.push_back(new produto(aux_id,aux_nome,aux_fabricante,aux_desc_utilizacao,aux_cod_barras,aux_tipo,aux_id_imagem,aux_valor_venda,custo_medio_cada_produto,aux_soma_total));
            aux_soma_total=0;
            custo_medio_cada_produto = 0;
        }
        consultar.clear();
        tela_listar_produtos::mostrar_lista_produtos();
        bd.close();
        conexao.fechar_conexao();
    }
}

void tela_listar_produtos::mostrar_lista_produtos(void){
    aux_lista_produtos.clear();

    for (int i=0;i<int(lista_produtos.size());i++){
        if((QString::number(lista_produtos[i]->retorna_id()).contains(aux_cons_id_produto))&&
           (lista_produtos[i]->retorna_tipo().contains(aux_cons_tipo))&&
           (lista_produtos[i]->retorna_nome().contains(aux_cons_nome))&&
           (lista_produtos[i]->retorna_fabricante().contains(aux_cons_fabricante))&&
           (lista_produtos[i]->retorna_cod_barras().contains(aux_cons_cod_barras))){
            aux_lista_produtos.push_back(lista_produtos[i]);
        }
    }
    ui->tw_produtos->setRowCount(int(aux_lista_produtos.size()));
    ui->tw_produtos->setColumnCount(5);
    ui->tw_produtos->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_produtos->clear();
    ui->tw_produtos->setHorizontalHeaderLabels(QString("Tipo;C�digo;Nome;Fabricante;C�digo de barras").split(";"));


    for (int i=0;i<int(aux_lista_produtos.size());i++){
        ui->tw_produtos->setItem(i,0,new QTableWidgetItem(aux_lista_produtos[i]->retorna_tipo()));
        ui->tw_produtos->setItem(i,1,new QTableWidgetItem(QString::number(aux_lista_produtos[i]->retorna_id())));
        ui->tw_produtos->setItem(i,2,new QTableWidgetItem(aux_lista_produtos[i]->retorna_nome()));
        ui->tw_produtos->setItem(i,3,new QTableWidgetItem(aux_lista_produtos[i]->retorna_fabricante()));
        ui->tw_produtos->setItem(i,4,new QTableWidgetItem(aux_lista_produtos[i]->retorna_cod_barras()));
        ui->tw_produtos->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,4)->setTextAlignment(Qt::AlignHCenter);
    }

    ui->tw_produtos->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_produtos->resizeColumnToContents(0);
    ui->tw_produtos->resizeColumnToContents(1);
    ui->tw_produtos->resizeColumnToContents(4);
}


void tela_listar_produtos::on_cb_tipo_currentIndexChanged(const QString &arg1)
{
    if(arg1.toStdString() == "Todos")
    {
        aux_cons_tipo = "";
    }
    else{
        aux_cons_tipo = arg1;
    }
    tela_listar_produtos::mostrar_lista_produtos();
}

void tela_listar_produtos::on_le_nome_textChanged(const QString &arg1)
{
    ui->le_nome->setText(ui->le_nome->text().toUpper());
    aux_cons_nome = ui->le_nome->text();
    tela_listar_produtos::mostrar_lista_produtos();
}

void tela_listar_produtos::on_le_codigo_barras_textChanged(const QString &arg1)
{
    std::string aux;
    if(arg1.toStdString() == "  "){
        aux_cons_cod_barras = "";
    }
    else{
        aux_cons_cod_barras = arg1;
        if(int(aux_cons_cod_barras.size())<9){
            aux = aux_cons_cod_barras.toStdString();
            aux = aux.substr(0,(aux_cons_cod_barras.size()-2));
            aux_cons_cod_barras = QString::fromStdString(aux);
        }
    }
    tela_listar_produtos::mostrar_lista_produtos();
}

void tela_listar_produtos::on_le_fabricante_textChanged(const QString &arg1)
{
    ui->le_fabricante->setText(ui->le_fabricante->text().toUpper());
    aux_cons_fabricante = ui->le_fabricante->text();
    tela_listar_produtos::mostrar_lista_produtos();
}

void tela_listar_produtos::on_le_codigo_textChanged(const QString &arg1)
{
    aux_cons_id_produto = ui->le_codigo->text();
    tela_listar_produtos::mostrar_lista_produtos();
}

void tela_listar_produtos::on_tw_produtos_doubleClicked(const QModelIndex &index)
{
    //Gera mensagem perguntando se � para restaurar produto.
    QPixmap icone_janela(":img/img/produto_pergunta_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Cadastro");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("N�o", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja restaurar o cadastro do Produto?");
    if(!msg.exec()){
        lista_produtos[index.row()]->definir_icone_janela(logomarca);
        lista_produtos[index.row()]->recuperar_cadastro_produto();
        tela_listar_produtos::buscar_produtos();
    }
}

void tela_listar_produtos::on_btn_limpar_clicked()
{
    ui->cb_tipo->setCurrentIndex(0);
}
