#ifndef HIS_ENTRADAS_H
#define HIS_ENTRADAS_H

#include <iostream>
#include <QString>
#include <QDate>
#include <QTime>

#include "conexao_bd.h"

class his_entradas
{
private:
    int id_produto;
    int quantidade;
    float valor_compra;
    float valor_venda;
    QString data;
    QString hora;
public:
    his_entradas();
    bool salvar_his_entradas(int id_pro,int quant, float val_compra, float val_venda);
};

#endif // HIS_ENTRADAS_H
