#ifndef LISTA_VENDA_H
#define LISTA_VENDA_H

#include <QString>

class lista_venda
{
private:
    int id_lista_venda;
    int id_produto;
    int id_venda;
    int quantidade;
    double valor_venda;
    QString nome_produto;


public:
    lista_venda(int id_pro,int id_ven,int quant,double valor_ven);
    lista_venda(int id_lista_vend,int id_pro,int id_ven,int quant,double valor_ven);
    lista_venda(int id_lista_vend,int id_pro,int id_ven,int quant,double valor_ven,QString nome);
    int retorna_id_lista_venda(void);
    int retorna_id_produto(void);
    int retorna_id_venda(void);
    int retorna_quantidade(void);
    QString retorna_nome_produto(void);
    double retorna_valor_venda(void);
};

#endif // LISTA_VENDA_H
