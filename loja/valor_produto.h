#ifndef VALOR_PRODUTO_H
#define VALOR_PRODUTO_H

#include <QString>
#include <iostream>
#include <QDate>

class valor_produto
{
protected:
    int id_produto;
    QString data;
    int quantidade;
    float valor_compra;
    float valor_venda;
public:
    valor_produto();
    valor_produto(int id_pro,QString dta,int quantidade_produto,float valor_com,float valor_ven);
    valor_produto(int quantidade_produto,float valor_com,float valor_ven);
    int retorna_id(void);
    QString retorna_data(void);
    int retorna_quantidade(void);
    float retorna_valor_compra(void);
    float retorna_valor_venda(void);
    void alterar_valor_produto(int quantidade_produto,float valor_com,float valor_ven);
};

#endif // VALOR_PRODUTO_H
