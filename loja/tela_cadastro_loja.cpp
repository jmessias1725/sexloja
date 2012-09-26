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
    QGraphicsScene *cena_logomarca = new QGraphicsScene;
    QString nome_arquivo = QFileDialog::getOpenFileName(this,
                                     "Selecione a imagem da logomarca",
                                     ".\\..",
                                     "Imagem JPG (*.jpg)\nImagem JPEG (*.jpeg)\nImagem PNG (*.png)\nImagem BMP (*.bmp)");
    ui->gv_logo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_logo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QPixmap malha_pixel = QPixmap(nome_arquivo);
    malha_pixel = malha_pixel.scaled(QSize(ui->gv_logo->width(),ui->gv_logo->height()), Qt::IgnoreAspectRatio);
    logo_imagem = QImage(malha_pixel.toImage());
    cena_logomarca->addPixmap(QPixmap::fromImage(logo_imagem));
    ui->gv_logo->setScene(cena_logomarca);

    QByteArray vetor_bytes;
    QBuffer buffer(&vetor_bytes);
    buffer.open(QIODevice::WriteOnly);
    logo_imagem.save(&buffer,funcao.retorna_extensao_arquivo(nome_arquivo));

    std::cout<<buffer.size()<<std::endl;
}
