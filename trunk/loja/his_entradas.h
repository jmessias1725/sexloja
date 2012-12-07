#ifndef HIS_ENTRADAS_H
#define HIS_ENTRADAS_H

#include <iostream>
#include <QString>
#include <QDate>
#include <QTime>

class his_entradas
{
private:
    int id_entrada;
    int quantidade;
    double valor_compra;
    double valor_venda;
    QString data;

public:
    his_entradas(int id_ent,int quant, double val_compra, double val_venda, QString dta);
    int retorna_id_entrada(void);
    int retorna_quantidade(void);
    double retorna_valor_compra(void);
    double retorna_valor_venda(void);
    QString retorna_data(void);
};

#endif // HIS_ENTRADAS_H
