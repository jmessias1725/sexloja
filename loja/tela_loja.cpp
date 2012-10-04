#include "tela_loja.h"
#include "ui_tela_loja.h"

tela_loja::tela_loja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_loja)
{
    ui->setupUi(this);
}

void tela_loja::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_loja::definir_dados_loja(loja *cad_loja){
    informacao_cad_loja = cad_loja;
    QGraphicsScene *cena_logo = new QGraphicsScene;
    QGraphicsScene *cena_estado = new QGraphicsScene;

    logomarca = informacao_cad_loja->retorna_QPixmap_imagem();
    lista_telefone = informacao_cad_loja->retorna_lista_telefone();
    lista_operadora = informacao_cad_loja->retorna_lista_operadora();

    funcoes_extras icone_operadora;

    ui->le_nome->setText(informacao_cad_loja->retornar_nome());
    ui->le_razao_social->setText(informacao_cad_loja->retornar_razao_social());
    ui->le_cnpj->setText(informacao_cad_loja->retornar_cnpj());
    ui->le_cep->setText(informacao_cad_loja->retorna_numero_cep());
    ui->le_rua->setText(informacao_cad_loja->retorna_nome_rua());
    ui->le_bairro->setText(informacao_cad_loja->retorna_bairro());
    ui->le_cidade->setText(informacao_cad_loja->retorna_cidade());
    ui->le_estado->setText(informacao_cad_loja->retorna_nome_estado());
    ui->le_uf->setText(informacao_cad_loja->retorna_sigla_estado());
    ui->le_numero->setText(QString::number(informacao_cad_loja->retorna_numero_residencia()));

    int i = lista_telefone.size();
    for (i = i-1; i>=0 ;i--){
        ui->cb_telefone->addItem(icone_operadora.retorna_icone_operadora(lista_operadora[i]),QString::fromStdString(lista_telefone[i]+" "+lista_operadora[i]));
    }

    ui->gv_logo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_logo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    cena_logo->addPixmap(logomarca);
    ui->gv_logo->setScene(cena_logo);

    imagem * imagem_estado;
    imagem_estado = new imagem(funcoes.retorna_nome_imagem_estado(informacao_cad_loja->retorna_sigla_estado().toStdString()),ui->gv_estado->width(),ui->gv_estado->height());
    ui->gv_estado->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_estado->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    cena_estado->addPixmap(imagem_estado->retorna_QPixmap_imagem());
    ui->gv_estado->setScene(cena_estado);
}

tela_loja::~tela_loja()
{
    delete ui;
}

void tela_loja::closeEvent(QCloseEvent *event){
    ui->le_nome->clear();
    ui->le_razao_social->clear();
    ui->lb_cnpj->clear();
    ui->le_cep->clear();
    ui->le_rua->clear();
    ui->le_bairro->clear();
    ui->le_cidade->clear();
    ui->le_estado->clear();
    ui->le_uf->clear();
    ui->le_numero->clear();
    ui->cb_telefone->clear();
}

void tela_loja::limpar_dados(){
    ui->le_nome->clear();
    ui->le_razao_social->clear();
    ui->lb_cnpj->clear();
    ui->le_cep->clear();
    ui->le_rua->clear();
    ui->le_bairro->clear();
    ui->le_cidade->clear();
    ui->le_estado->clear();
    ui->le_uf->clear();
    ui->le_numero->clear();
    ui->cb_telefone->clear();
}

void tela_loja::on_btn_editar_loja_clicked()
{
    tl_editar_loja.definir_icone_janela(logomarca);
    tl_editar_loja.definir_dados_loja(informacao_cad_loja);
    if(!tl_editar_loja.exec()){
        informacao_cad_loja = tl_editar_loja.retorna_novo_cadastro();
        tela_loja::limpar_dados();
        tela_loja::definir_dados_loja(informacao_cad_loja);
        this->setWindowIcon(logomarca);
    }
}

loja * tela_loja::retorna_novo_cadastro(void){
    return informacao_cad_loja;
}
