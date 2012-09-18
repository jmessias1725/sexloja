#ifndef FUNCOES_EXTRAS_H
#define FUNCOES_EXTRAS_H

#include <iostream>
#include <QString>
#include <QIcon>

class funcoes_extras
{
public:
    int converter_para_inteiro(std::string numero);
    int retorna_id_estado(std::string estado);
    QString retorna_nome_imagem_estado(std::string uf);
    QIcon retorna_icone_operadora(std::string operadora);
};

#endif // FUNCOES_EXTRAS_H
