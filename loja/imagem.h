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
public:
    imagem(QString nome_arquivo);
    QPixmap retorna_QPixmap_imagem(void);
private:
    QByteArray vetor_bytes_imagem;
    QString extensao;
    funcoes_extras funcao;
};

#endif // IMAGEM_H
