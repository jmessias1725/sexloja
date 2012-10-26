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

    QGraphicsScene *imagem_produto = new QGraphicsScene;

    ui->le_codigo->setText(QString::number(informacoes_produto->retorna_id()));
    ui->le_tipo->setText(informacoes_produto->retorna_tipo());
    ui->le_nome->setText(informacoes_produto->retorna_nome());
    ui->le_fabricante->setText(informacoes_produto->retorna_fabricante());
    ui->le_codigo_barras->setText(informacoes_produto->retorna_cod_barras());
    ui->le_quantidade->setText(QString::number(informacoes_produto->retorna_quant_disponivel()));
    //ui->le_valor_compra->setText(funcoes.retorna_valor_dinheiro(QString::number(informacoes_produto->retorna_valor_compra())));
    //ui->le_valor_venda->setText(funcoes.retorna_valor_dinheiro(QString::number(informacoes_produto->retorna_valor_venda())));
    ui->te_des_utilizacao->setText(informacoes_produto->retorna_desc_utilizacao());

    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //imagem_produto->addPixmap(informacoes_produto->retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(imagem_produto);
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
    tl_editar_produto.definir_dados_produto(informacoes_produto);
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
