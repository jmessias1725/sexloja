#include "valor_produto.h"

valor_produto::valor_produto()
{
}
valor_produto::valor_produto(int id_pro,QString dta,int quantidade_produto,float valor_com,float valor_ven){
    id_produto = id_pro;
    data = dta;
    quantidade = quantidade_produto;
    valor_compra = valor_com;
    valor_venda = valor_ven;
}

valor_produto::valor_produto(int quantidade_produto,float valor_com,float valor_ven){
    QDate aux_data = QDate::currentDate();
    data = aux_data.toString(Qt::SystemLocaleShortDate);
    quantidade = quantidade_produto;
    valor_compra = valor_com;
    valor_venda = valor_ven;
}

int valor_produto::retorna_id(void){
    return id_produto;
}

QString valor_produto::retorna_data(void){
    return data;
}

int valor_produto::retorna_quantidade(void){
    return quantidade;
}

float valor_produto::retorna_valor_compra(void){
    return valor_compra;
}
float valor_produto::retorna_valor_venda(void){
    return valor_venda;
}

void valor_produto::alterar_valor_produto(int quantidade_produto,float valor_com,float valor_ven){
    quantidade = quantidade_produto;
    valor_compra = valor_com;
    valor_venda = valor_ven;
}
