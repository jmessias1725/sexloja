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

void tela_produto::definir_dados_produto(produto *cad_produto, his_balanco_estoque *cad_his_balanco){
    informacoes_produto = cad_produto;
    informacoes_his_balanco_estoque = cad_his_balanco;

    //std::vector< his_balanco_estoque *> his_bal_esto;

    QGraphicsScene *GS_imagem_produto = new QGraphicsScene;

    ui->le_codigo->setText(QString::number(informacoes_produto->retorna_id()));
    ui->le_tipo->setText(informacoes_produto->retorna_tipo());
    ui->le_nome->setText(informacoes_produto->retorna_nome());
    ui->le_fabricante->setText(informacoes_produto->retorna_fabricante());
    ui->le_codigo_barras->setText(informacoes_produto->retorna_cod_barras());
    ui->le_quantidade->setText(QString::number(informacoes_his_balanco_estoque->retorna_somatorio_quantidade()));
    ui->le_valor_compra->setText(funcoes.retorna_valor_dinheiro(QString::number(informacoes_his_balanco_estoque->retorna_valor_compra())));
    ui->le_valor_venda->setText(funcoes.retorna_valor_dinheiro(QString::number(informacoes_produto->retorna_valor_venda())));
    ui->te_des_utilizacao->setText(informacoes_produto->retorna_desc_utilizacao());

    imagem_produto = new imagem();
    imagem_produto->buscar_imagem(informacoes_produto->retorna_id_imagem());

    //his_bal_esto = buscar_his_estoque_produto(informacoes_produto->retorna_id());
    tela_produto::mostrar_lista_his_estoque(buscar_his_estoque_produto(informacoes_produto->retorna_id()));

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
    ui->le_valor_compra->clear();
    ui->le_valor_venda->clear();
    ui->te_des_utilizacao->clear();
}

void tela_produto::on_btn_editar_produto_clicked()
{
    tl_editar_produto.definir_icone_janela(logomarca);
    tl_editar_produto.definir_dados_produto(informacoes_produto,imagem_produto);
    if(!tl_editar_produto.exec()){
        tela_produto::limpar_dados();
        tela_produto::definir_dados_produto(tl_editar_produto.retorna_novo_cadastro(),informacoes_his_balanco_estoque);
    }
}

void tela_produto::on_btn_adicionar_produto_clicked()
{
    tl_cadastro_produto.definir_icone_janela(logomarca);
    tl_cadastro_produto.exec();
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
        this->close();
    }
}

std::vector< his_balanco_estoque * > tela_produto::buscar_his_estoque_produto(int id){
    conexao_bd conexao;
    QSqlDatabase bd;

    float valor_compra;
    int total_comprado;
    int total_disponivel;
    int id_balanco;

    std::vector< his_balanco_estoque * > aux_his;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","his_balanco_estoque::buscar_his_estoque_produto")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar_imagem(bd);

        //realiza a consulta
        consultar_imagem.exec("SELECT id_balanco,valor_compra,total_comprado,total_disponivel FROM his_balanco_estoque WHERE id_produto = "+QString::number(id)+";");
        while(consultar_imagem.next()){
            id_balanco = consultar_imagem.value(0).toString().toInt();
            valor_compra = consultar_imagem.value(1).toFloat();
            total_comprado = consultar_imagem.value(2).toString().toInt();
            total_disponivel = consultar_imagem.value(3).toString().toInt();
            aux_his.push_back(new his_balanco_estoque(id_balanco,total_comprado,valor_compra,total_disponivel));
        }
        consultar_imagem.clear();
        bd.close();
        conexao.fechar_conexao();
    }
    return aux_his;
}

void tela_produto::mostrar_lista_his_estoque(std::vector< his_balanco_estoque * > aux_his){
    funcoes_extras funcao;

    ui->tw_historico_estoque->setRowCount(int(aux_his.size()));
    ui->tw_historico_estoque->setColumnCount(3);
    ui->tw_historico_estoque->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_historico_estoque->clear();
    ui->tw_historico_estoque->setHorizontalHeaderLabels(QString("Valor de compra;Total comprado;Total disponível").split(";"));

    for (int i=0;i<int(aux_his.size());i++){
        ui->tw_historico_estoque->setItem(i,0,new QTableWidgetItem(funcao.retorna_valor_dinheiro(QString::number(aux_his[i]->retorna_valor_compra()))));
        ui->tw_historico_estoque->setItem(i,1,new QTableWidgetItem(QString::number(aux_his[i]->retorna_total_comprado())));
        ui->tw_historico_estoque->setItem(i,2,new QTableWidgetItem(QString::number(aux_his[i]->retorna_total_disponivel())));
        ui->tw_historico_estoque->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_estoque->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_historico_estoque->item(i,2)->setTextAlignment(Qt::AlignHCenter);
    }
    ui->tw_historico_estoque->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_historico_estoque->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_historico_estoque->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
