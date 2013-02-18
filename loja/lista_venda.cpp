#include "lista_venda.h"

lista_venda::lista_venda(int id_pro,int id_ven,int quant,double valor_ven){
    id_produto = id_pro;
    id_venda = id_ven;
    quantidade = quant;
    valor_venda = valor_ven;
}

lista_venda::lista_venda(int id_lista_vend,int id_pro,int id_ven,int quant,double valor_ven){
    id_lista_venda = id_lista_vend;
    id_produto = id_pro;
    id_venda = id_ven;
    quantidade = quant;
    valor_venda = valor_ven;
}

lista_venda::lista_venda(int id_lista_vend,int id_pro,int id_ven,int quant,double valor_ven,QString nome){
    id_lista_venda = id_lista_vend;
    id_produto = id_pro;
    id_venda = id_ven;
    quantidade = quant;
    valor_venda = valor_ven;
    nome_produto = nome;
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

int lista_venda::retorna_quantidade(void){
    return quantidade;
}

double lista_venda::retorna_valor_venda(void){
    return valor_venda;
}

QString lista_venda::retorna_nome_produto(void){
    return nome_produto;
}
