#include "valor_produto.h"

valor_produto::valor_produto()
{
}
valor_produto::valor_produto(int id_produto,float valor_pro,int quantidade_produto){
    QDate aux_data = QDate::currentDate();
    id = id_produto;
    data = aux_data.toString(Qt::SystemLocaleShortDate);
    valor = valor_pro;
    quantidade = quantidade_produto;
}

valor_produto::valor_produto(float valor_pro,int quantidade_produto){
    QDate aux_data = QDate::currentDate();
    data = aux_data.toString(Qt::SystemLocaleShortDate);
    valor = valor_pro;
    quantidade = quantidade_produto;
}

int valor_produto::retorna_id(void){
    return id;
}

QString valor_produto::retorna_data(void){
    return data;
}

float valor_produto::retorna_valor(void){
    return valor;
}

int valor_produto::retorna_quantidade(void){
    return quantidade;
}

void valor_produto::alterar_valor_produto(float valor_pro,int quantidade_produto){
    valor = valor_pro;
    quantidade = quantidade_produto;
}
