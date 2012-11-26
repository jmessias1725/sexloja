#include "his_balanco_estoque.h"

his_balanco_estoque::his_balanco_estoque(int id_bal,double valor_com,int somatorio_quan){
    id_balanco = id_bal;
    valor_compra = valor_com;
    somatorio_quantidade = somatorio_quan;
}

his_balanco_estoque::his_balanco_estoque(int id_bal,int total_com,double valor_com,int total_dis){
    id_balanco = id_bal;
    valor_compra = valor_com;
    total_comprado = total_com;
    total_disponivel = total_dis;
}

his_balanco_estoque::his_balanco_estoque(int id_pro,double valor_com,int total_com,int total_dis){
    id_produto = id_pro;
    valor_compra = valor_com;
    total_comprado = total_com;
    total_disponivel = total_dis;
}
int his_balanco_estoque::retorna_id_balanco(void){
    return id_balanco;
}

int his_balanco_estoque::retorna_id_produto(void){
    return id_produto;
}

double his_balanco_estoque::retorna_valor_compra(void){
    return valor_compra;
}

int his_balanco_estoque::retorna_total_comprado(void){
    return total_comprado;
}

int his_balanco_estoque::retorna_total_disponivel(void){
    return total_disponivel;
}

int his_balanco_estoque::retorna_somatorio_quantidade(void){
    return somatorio_quantidade;
}

