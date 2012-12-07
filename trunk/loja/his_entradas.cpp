#include "his_entradas.h"

his_entradas::his_entradas(int id_ent,int quant, double val_compra, double val_venda, QString dta){
    id_entrada = id_ent;
    quantidade = quant;
    valor_compra = val_compra;
    valor_venda = val_venda;
    data = dta;
}

int his_entradas::retorna_id_entrada(void){
    return id_entrada;
}

int his_entradas::retorna_quantidade(void){
    return quantidade;
}

double his_entradas::retorna_valor_compra(void){
    return valor_compra;
}

double his_entradas::retorna_valor_venda(void){
    return valor_venda;
}

QString his_entradas::retorna_data(void){
    return data;
}
