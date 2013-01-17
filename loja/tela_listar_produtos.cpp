#include "tela_listar_produtos.h"
#include "ui_tela_listar_produtos.h"

tela_listar_produtos::tela_listar_produtos(QWidget *parent) :
    QDialog(parent,Qt::Window),
    ui(new Ui::tela_listar_produtos)
{
    ui->setupUi(this);
}

tela_listar_produtos::~tela_listar_produtos()
{
    delete ui;
}

void tela_listar_produtos::definir_icone_janela(QPixmap logo,bool com){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    compra = com;
}

void tela_listar_produtos::buscar_produtos(void){

    lista_produtos_desejados.clear();

    aux_cons_id_produto = "";
    aux_cons_nome = "";
    aux_cons_fabricante = "";
    aux_cons_cod_barras = "";
    aux_cons_tipo = "";
    ui->le_codigo->setCursorPosition(0);
    ui->le_codigo_barras->setCursorPosition(0);

    conexao_bd conexao;
    QSqlDatabase bd;

    int aux_id;
    QString aux_nome;
    QString aux_fabricante;
    QString aux_cod_barras;
    QString aux_tipo;
    float aux_valor_venda;

    lista_produtos.clear();

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","tela_estoque::buscar_produtos")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT id_produto,nome,fabricante,cod_barras,tipo,valor_venda FROM produto WHERE removido=0 ORDER BY nome;");
        while(consultar.next()){
            aux_id = consultar.value(0).toInt();
            aux_nome = consultar.value(1).toString();
            aux_fabricante = consultar.value(2).toString();
            aux_cod_barras = consultar.value(3).toString();
            aux_tipo = consultar.value(4).toString();
            aux_valor_venda = consultar.value(5).toFloat();
            lista_produtos.push_back(new produto(aux_id,aux_nome,aux_fabricante,aux_cod_barras,aux_tipo,aux_valor_venda,0,0));
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
    ui->tw_produtos->setHorizontalHeaderLabels(QString("Tipo;Código;Nome;Fabricante;Código de barras").split(";"));


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
    //Gera mensagem perguntando se é adicionar a lista o produto produto.
    QPixmap icone_janela(":img/img/produto_pergunta_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Lista de Produtos");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja adicionar o produto a lista?");
    if (compra == true){
        if(!msg.exec()){
            tl_definir_valor.definir_icone_janela(logomarca);
            tl_definir_valor.definir_dados(aux_lista_produtos[index.row()]->retorna_valor_venda(),0,0);
            if(tl_definir_valor.exec()){
                aux_lista_produtos[index.row()]->altera_valor_compra(tl_definir_valor.retorna_custo());
                aux_lista_produtos[index.row()]->altera_valor_venda(tl_definir_valor.retorna_valor_venda());
                aux_lista_produtos[index.row()]->altera_quantidade(tl_definir_valor.retorna_quantidade());
                lista_produtos_desejados.push_back(aux_lista_produtos[index.row()]);
            }
        }
    }
    else{
        if(!msg.exec()){
            tl_definir_valor_venda.definir_icone_janela(logomarca);
            tl_definir_valor_venda.definir_dados(aux_lista_produtos[index.row()]->retorna_valor_venda(),0);
            if(tl_definir_valor_venda.exec()){
                aux_lista_produtos[index.row()]->altera_valor_venda(tl_definir_valor_venda.retorna_valor_venda());
                aux_lista_produtos[index.row()]->altera_quantidade(tl_definir_valor_venda.retorna_quantidade());
                lista_produtos_desejados.push_back(aux_lista_produtos[index.row()]);
            }
        }
    }
}

void tela_listar_produtos::on_btn_limpar_clicked()
{
    ui->cb_tipo->setCurrentIndex(0);
}

std::vector< produto* > tela_listar_produtos::retorna_lista_produtos_desejados(void){
    return lista_produtos_desejados;
}

void tela_listar_produtos::on_btn_adicionar_produto_clicked()
{
    tl_cadastro_produto.definir_icone_janela(logomarca);
    if(tl_cadastro_produto.exec()){
        tela_listar_produtos::buscar_produtos();
    }
}
