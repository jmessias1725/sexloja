#ifndef HIS_BALANCO_ESTOQUE_H
#define HIS_BALANCO_ESTOQUE_H

class his_balanco_estoque
{
private:
    int id_balanco;
    int id_produto;
    float valor_compra;
    float valor_venda;
    int total_comprado;
    int total_disponivel;

public:
    his_balanco_estoque(int id_pro,float valor_com,float valor_ven,int total_com,int total_dis);
    int retorna_id_balanco(void);
    int retorna_id_produto(void);
    float retorna_valor_compra(void);
    float retorna_valor_venda(void);
    int retorna_total_comprado(void);
    int retorna_total_disponivel(void);
};

#endif // HIS_BALANCO_ESTOQUE_H
