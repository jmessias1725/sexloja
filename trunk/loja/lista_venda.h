#ifndef LISTA_VENDA_H
#define LISTA_VENDA_H

class lista_venda
{
private:
    int id_lista_venda;
    int id_produto;
    int id_venda;
    int id_balanco;
    int quantidade;
    double valor_venda;

public:
    lista_venda(int id_pro,int id_ven,int id_bal,int quant,double valor_ven);
    lista_venda(int id_lista_vend,int id_pro,int id_ven,int id_bal,int quant,double valor_ven);
    int retorna_id_lista_venda(void);
    int retorna_id_produto(void);
    int retorna_id_venda(void);
    int retorna_id_balanco(void);
    int retorna_quantidade(void);
    double retorna_valor_venda(void);
    void alterar_id_balanco(int id_bal);
};

#endif // LISTA_VENDA_H
