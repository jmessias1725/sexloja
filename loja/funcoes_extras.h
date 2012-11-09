#ifndef FUNCOES_EXTRAS_H
#define FUNCOES_EXTRAS_H

#include <iostream>
#include <sstream>
#include <string>
#include <QString>
#include <QIcon>
#include <stdio.h>
#include <math.h>

class funcoes_extras
{
public:
    int converter_para_inteiro(std::string numero);
    int retorna_id_estado(std::string estado);
    QString retorna_nome_imagem_estado(std::string uf);
    QIcon retorna_icone_operadora(std::string operadora);
    int determinar_posicao_caractere(std::string palavra,const char *caractere);
    bool verifica_cpf(std::string cpf);
    bool verifica_cnpj(std::string cnpj);
    const char* retorna_extensao_arquivo(QString nome_arquivo);
    QString retorna_valor_dinheiro(double valor);
    double converter_para_double(QString numero);
    int retorna_id_tipo(std::string tipo);
    QString converte_numero_origem_nome(int ori);
};

#endif // FUNCOES_EXTRAS_H
