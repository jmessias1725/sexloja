#ifndef LISTA_COMPRA_H
#define LISTA_COMPRA_H

#include <QString>

class lista_compra
{
private:
    int id_lista_compra;
    int id_produto;
    int id_compra;
    int id_balanco;
    int quantidade;
    double valor_compra;
    double valor_venda;
    QString nome_produto;

public:
    lista_compra(int id_pro,int id_com,int id_bal,int quant,double valor_comp,double valor_ven);
    lista_compra(int id_lista_com,int id_pro,int id_com,int id_bal,int quant,double valor_comp,double valor_ven);
    lista_compra(int id_lista_com,int id_pro,int id_com,int id_bal,int quant,double valor_comp,double valor_ven,QString nome);
    int retorna_id_lista_compra(void);
    int retorna_id_produto(void);
    int retorna_id_compra(void);
    int retorna_id_balanco(void);
    int retorna_quantidade(void);
    double retorna_valor_compra(void);
    double retorna_valor_venda(void);
    QString retorna_nome_produto(void);
    void alterar_id_balanco(int id_bal);
};

#endif // LISTA_COMPRA_H
