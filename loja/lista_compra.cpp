#include "lista_compra.h"

lista_compra::lista_compra(int id_pro,int id_com,int id_bal,int quant,double valor_comp,double valor_ven){
    id_produto = id_pro;
    id_compra = id_com;
    id_balanco = id_bal;
    quantidade = quant;
    valor_compra = valor_comp;
    valor_venda = valor_ven;
}

lista_compra::lista_compra(int id_lista_com,int id_pro,int id_com,int id_bal,int quant,double valor_comp,double valor_ven){
    id_lista_compra = id_lista_com;
    id_produto = id_pro;
    id_compra = id_com;
    id_balanco = id_bal;
    quantidade = quant;
    valor_compra = valor_comp;
    valor_venda = valor_ven;
}
lista_compra::lista_compra(int id_lista_com,int id_pro,int id_com,int id_bal,int quant,double valor_comp,double valor_ven,QString nome){
    id_lista_compra = id_lista_com;
    id_produto = id_pro;
    id_compra = id_com;
    id_balanco = id_bal;
    quantidade = quant;
    valor_compra = valor_comp;
    valor_venda = valor_ven;
    nome_produto = nome;
}

int lista_compra::retorna_id_lista_compra(void){
    return id_lista_compra;
}

int lista_compra::retorna_id_produto(void){
    return id_produto;
}

int lista_compra::retorna_id_compra(void){
    return id_compra;
}

int lista_compra::retorna_id_balanco(void){
    return id_balanco;
}

int lista_compra::retorna_quantidade(void){
    return quantidade;
}

double lista_compra::retorna_valor_compra(void){
    return valor_compra;
}

double lista_compra::retorna_valor_venda(void){
    return valor_venda;
}

QString lista_compra::retorna_nome_produto(void){
    return nome_produto;
}

void lista_compra::alterar_id_balanco(int id_bal){
    id_balanco = id_bal;
}
