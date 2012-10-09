#include "tela_cadastro_produto.h"
#include "ui_tela_cadastro_produto.h"

tela_cadastro_produto::tela_cadastro_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_cadastro_produto)
{
    ui->setupUi(this);
    imagem imagem_produto;
    QGraphicsScene *cena = new QGraphicsScene;
    nome_arquivo_imagem =":/img/img/produto.png";
    largura = ui->gv_imagem_produto->width();
    altura = ui->gv_imagem_produto->height();
    imagem_produto = imagem(nome_arquivo_imagem,largura,altura);
    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    cena->addPixmap(imagem_produto.retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(cena);
}

tela_cadastro_produto::~tela_cadastro_produto()
{
    delete ui;
}

void tela_cadastro_produto::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_cadastro_produto::on_btn_adicionar_imagem_clicked()
{
    imagem imagem_produto;
    QGraphicsScene *cena = new QGraphicsScene;
    nome_arquivo_imagem = QFileDialog::getOpenFileName(this,
                                     "Selecione a imagem do produto",".\\..",
                                     "Imagem JPG (*.jpg)\nImagem JPEG (*.jpeg)\nImagem PNG (*.png)\nImagem BMP (*.bmp)");
    largura = ui->gv_imagem_produto->width();
    altura = ui->gv_imagem_produto->height();
    imagem_produto = imagem(nome_arquivo_imagem,largura,altura);
    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    cena->addPixmap(imagem_produto.retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(cena);
}
