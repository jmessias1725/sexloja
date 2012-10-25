#include "his_entradas.h"

his_entradas::his_entradas(int id_pro,int quant, float val_compra, float val_venda)
{
    QDate aux_data = QDate::currentDate();
    QTime aux_hora = QTime::currentTime();

    id_produto = id_pro;
    quantidade = quant;
    valor_compra = val_compra;
    valor_venda = val_venda;
    data = aux_data.toString(Qt::SystemLocaleShortDate);;
    hora = aux_hora.toString();
}

int his_entradas::retorna_id_produto(void){
    return id_produto;
}

int his_entradas::retorna_quantidade(void){
    return quantidade;
}

float his_entradas::retorna_valor_compra(void){
    return valor_compra;
}

float his_entradas::retorna_valor_venda(void){
    return valor_venda;
}

QString his_entradas::retorna_data(void){
    return data;
}

QString his_entradas::retorna_hora(void){
    return hora;
}
