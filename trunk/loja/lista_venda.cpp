#include "lista_venda.h"

lista_venda::lista_venda(int id_pro,int id_ven,int id_bal,int quant,double valor_ven){
    id_produto = id_pro;
    id_venda = id_ven;
    id_balanco = id_bal;
    quantidade = quant;
    valor_venda = valor_ven;
}

lista_venda::lista_venda(int id_lista_vend,int id_pro,int id_ven,int id_bal,int quant,double valor_ven){
    id_lista_venda = id_lista_vend;
    id_produto = id_pro;
    id_venda = id_ven;
    id_balanco = id_bal;
    quantidade = quant;
    valor_venda = valor_ven;
}

int lista_venda::retorna_id_lista_venda(void){
    return id_lista_venda;
}

int lista_venda::retorna_id_produto(void){
    return id_produto;
}

int lista_venda::retorna_id_venda(void){
    return id_venda;
}

int lista_venda::retorna_id_balanco(void){
    return id_balanco;
}

int lista_venda::retorna_quantidade(void){
    return quantidade;
}

double lista_venda::retorna_valor_venda(void){
    return valor_venda;
}

void lista_venda::alterar_id_balanco(int id_bal){
    id_balanco = id_bal;
}
