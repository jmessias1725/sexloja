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
    QGraphicsScene *scene = new QGraphicsScene;
    fileName = QFileDialog::getOpenFileName(this,
                                     "Selecione a imagem da logomarca",
                                     ".\\..",
                                     "Imagem JPG (*.jpg)\nImagem JPEG (*.jpeg)\nImagem PNG (*.png)\nImagem BMP (*.bmp)");
    ui->gv_logo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_logo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QPixmap *lPixmap = new QPixmap(fileName);
    QPixmap sized = lPixmap->scaled(QSize(ui->gv_logo->width(),ui->gv_logo->height()), Qt::IgnoreAspectRatio); // This scales the image too all
    QImage sizedImage = QImage(sized.toImage());
    QImage sizedCroppedImage = QImage(sizedImage.copy(0,0,(ui->gv_logo->width()),(ui->gv_logo->height())));
    scene->addPixmap(QPixmap::fromImage(sizedCroppedImage));
    ui->gv_logo->setScene(scene);
}
