#include "his_saidas.h"

his_saidas::his_saidas(int id_sai,int quant, double val_venda, QString dta){
    id_saida = id_sai;
    quantidade = quant;
    valor_venda = val_venda;
    data = dta;
}

int his_saidas::retorna_id_saida(void){
    return id_saida;
}

int his_saidas::retorna_quantidade(void){
    return quantidade;
}

double his_saidas::retorna_valor_venda(void){
    return valor_venda;
}

QString his_saidas::retorna_data(void){
    return data;
}
