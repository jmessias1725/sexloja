#ifndef HIS_ENTRADAS_H
#define HIS_ENTRADAS_H

#include <iostream>
#include <QString>
#include <QDate>
#include <QTime>

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
    his_entradas(int id_pro,int quant, float val_compra, float val_venda);
    int retorna_id_produto(void);
    int retorna_quantidade(void);
    float retorna_valor_compra(void);
    float retorna_valor_venda(void);
    QString retorna_data(void);
    QString retorna_hora(void);
};

#endif // HIS_ENTRADAS_H
