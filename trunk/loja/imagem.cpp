#include "imagem.h"

imagem::imagem(QString nome_arquivo)
{
    QPixmap malha_pixels;
    extensao = funcao.retorna_extensao_arquivo(nome_arquivo);
    QBuffer buffer_imagem(&vetor_bytes_imagem);

    malha_pixels = QPixmap(nome_arquivo);
    malha_pixels = malha_pixel.scaled(QSize(ui->gv_logo->width(),ui->gv_logo->height()), Qt::IgnoreAspectRatio);
    buffer_imagem.open(QIODevice::WriteOnly);
    QImage(malha_pixels.toImage()).save(&buffer_imagem,extensao);
}

QPixmap imagem::retorna_QPixmap_imagem(){
    return (QPixmap::fromImage(QImage::loadFromData(vetor_bytes_imagem,extensao)));
}

