#ifndef VALOR_PRODUTO_H
#define VALOR_PRODUTO_H

#include <QString>
#include <iostream>
#include <QDate>

class valor_produto
{
protected:
    int id;
    QString data;
    float valor;
    int quantidade;
public:
    valor_produto();
    valor_produto(int id_produto,float valor_pro,int quantidade_produto);
    valor_produto(float valor_pro,int quantidade_produto);
    int retorna_id(void);
    QString retorna_data(void);
    float retorna_valor(void);
    int retorna_quantidade(void);
    void alterar_valor_produto(float valor_pro,int quantidade_produto);
};

#endif // VALOR_PRODUTO_H
