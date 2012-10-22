#ifndef IMAGEM_H
#define IMAGEM_H

#include <iostream>
#include <QString>
#include <QFileInfo>
#include <QByteArray>
#include <QBuffer>
#include <QFile>
#include <QImage>

#include "funcoes_extras.h"

class imagem
{
private:
    funcoes_extras funcao;

protected:
    QByteArray vetor_bytes_imagem;
    std::string extensao;
    QString nome_imagem;

public:
    imagem();
    imagem(QString nome_arquivo, int largura, int altura);
    imagem(QByteArray vetor_bytes_img, std::string img_extensao);
    QPixmap retorna_QPixmap_imagem(void);
    void alterar_imagem(QString nome_arquivo, int largura, int altura);
};

#endif // IMAGEM_H