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
    int id_produto;
    int quantidade;
    float valor_compra;
    float valor_venda;
    QString data;
    QString hora;
    int origem;
    int id_balanco;

public:
    his_entradas(int id_pro,int quant, float val_compra, float val_venda, int ori,int id_bal);
    his_entradas(int id_ent,int quant, float val_compra, float val_venda, QString dta, QString ho, int ori,int id_bal);
    int retorna_id_produto(void);
    int retorna_quantidade(void);
    float retorna_valor_compra(void);
    float retorna_valor_venda(void);
    QString retorna_data(void);
    QString retorna_hora(void);
    int retorna_origem(void);
    int retorna_id_balanco(void);
};

#endif // HIS_ENTRADAS_H
