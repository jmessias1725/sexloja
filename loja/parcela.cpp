#include "parcela.h"

parcela::parcela()
{
}

parcela::parcela(QString dta, double val){
    data = dta;
    valor = val;
}

QString parcela::retorna_data(void){
    return data;
}

double parcela::retorna_valor(void){
    return valor;
}

void parcela::altera_data(QString dta){
    data = dta;
}

void parcela::altera_valor(double val){
    valor = val;
}
