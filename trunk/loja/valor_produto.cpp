#include "valor_produto.h"

valor_produto::valor_produto()
{
}
valor_produto::valor_produto(int id_pro,QString dta,int quantidade_produto,float valor_com,float valor_ven,QString ho){
    id_produto = id_pro;
    data = dta;
    quantidade = quantidade_produto;
    valor_compra = valor_com;
    valor_venda = valor_ven;
    hora = ho;
}

valor_produto::valor_produto(int quantidade_produto,float valor_com,float valor_ven){
    QDate aux_data = QDate::currentDate();
    QTime aux_hora = QTime::currentTime();
    data = aux_data.toString(Qt::SystemLocaleShortDate);
    hora = aux_hora.toString();
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

QString valor_produto::retorna_hora(void){
    return hora;
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
    QDate aux_data = QDate::currentDate();
    QTime aux_hora = QTime::currentTime();
    data = aux_data.toString(Qt::SystemLocaleShortDate);
    hora = aux_hora.toString();
    quantidade = quantidade_produto;
    valor_compra = valor_com;
    valor_venda = valor_ven;
}
