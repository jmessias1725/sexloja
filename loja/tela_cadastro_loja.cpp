#include "tela_cadastro_loja.h"
#include "ui_tela_cadastro_loja.h"

tela_cadastro_loja::tela_cadastro_loja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_cadastro_loja)
{
    ui->setupUi(this);
}

tela_cadastro_loja::~tela_cadastro_loja()
{
    delete ui;
}

void tela_cadastro_loja::on_btn_adicionar_logo_clicked()
{
    if(vetor_bytes.size()>0)
        vetor_bytes.clear();



    QString nome_arquivo = QFileDialog::getOpenFileName(this,
                                     "Selecione a imagem da logomarca",".\\..",
                                     "Imagem JPG (*.jpg)\nImagem JPEG (*.jpeg)\nImagem PNG (*.png)\nImagem BMP (*.bmp)");
    ui->gv_logo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_logo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_logo->setScene(QGraphicsScene::addPixmap(malha_pixel));
}
