#include "dinheiro.h"

dinheiro::dinheiro()
{
    valor = 0.0;
}

/*dinheiro::dinheiro(double val,int ori,int id_ori)
{
    valor = val;
    origem = ori;
    id_origem = id_ori;
}

dinheiro::dinheiro(int id_din,double val,int ori,int id_ori)
{
    id_dinheiro = id_din;
    valor = val;
    origem = ori;
    id_origem = id_ori;
}*/

dinheiro::dinheiro(double val,int ori,int id_ori,QDate data_ini_pag_Qdate, int numero_par)
{
    valor = val;
    origem = ori;
    id_origem = id_ori;
    data_ini_pagmento_Qdate = data_ini_pag_Qdate;
    data_inical_pagmento = data_ini_pagmento_Qdate.toString(Qt::SystemLocaleShortDate);
    numero_parcelas = numero_par;
}

dinheiro::dinheiro(int id_din,double val,int ori,int id_ori,QString data_ini_pag, int numero_par)
{
    id_dinheiro = id_din;
    valor = val;
    origem = ori;
    id_origem = id_ori;
    data_inical_pagmento = data_ini_pag;
    numero_parcelas = numero_par;
}

int dinheiro::retorna_id_dinheiro(void){
    return id_dinheiro;
}

double dinheiro::retorna_valor(void){
    return valor;
}

int dinheiro::retorna_origem(void){
    return origem;
}

int dinheiro::retorna_id_origem(void){
    return id_origem;
}

QString dinheiro::retorna_data_inical_pagmento(void){
    return data_inical_pagmento;
}

QDate dinheiro::retorna_data_ini_pagmento_Qdate(void){
    return data_ini_pagmento_Qdate;
}

int dinheiro::retorna_numero_parcelas(void){
    return numero_parcelas;
}
