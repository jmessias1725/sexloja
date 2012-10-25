#include "his_balanco_estoque.h"

his_balanco_estoque::his_balanco_estoque(int id_pro,float valor_com,float valor_ven,int total_com,int total_dis)
{
    id_produto = id_pro;
    valor_compra = valor_com;
    valor_venda = valor_ven;
    total_comprado = total_com;
    total_disponivel = total_dis;
}
int his_balanco_estoque::retorna_id_balanco(void){
    return id_balanco;
}

int his_balanco_estoque::retorna_id_produto(void){
    return id_produto;
}

float his_balanco_estoque::retorna_valor_compra(void){
    return valor_compra;
}

float his_balanco_estoque::retorna_valor_venda(void){
    return valor_venda;
}

int his_balanco_estoque::retorna_total_comprado(void){
    return total_comprado;
}

int his_balanco_estoque::retorna_total_disponivel(void){
    return total_disponivel;
}

