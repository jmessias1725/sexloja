#include "dinheiro.h"

dinheiro::dinheiro()
{
    valor = 0.0;
}

dinheiro::dinheiro(int id_din,double val,int ori,int id_ori,QString data_ini_pag, int numero_par){
    id_dinheiro = id_din;
    valor = val;
    origem = ori;
    id_origem = id_ori;
    data_inical_pagmento = data_ini_pag;
    numero_parcelas = numero_par;
}

dinheiro::dinheiro(double val,int ori,int id_ori,QDate data_ini_pag_Qdate, int numero_par,double valor_avis){
    valor = val;
    origem = ori;
    id_origem = id_ori;
    data_ini_pagmento_Qdate = data_ini_pag_Qdate;
    data_inical_pagmento = data_ini_pagmento_Qdate.toString(Qt::SystemLocaleShortDate);
    numero_parcelas = numero_par;
    valor_avista = valor_avis;
}

dinheiro::dinheiro(double val,int ori,int id_ori,QDate data_ini_pag_Qdate, int numero_par,double valor_avis,
                   std::vector < parcela * > par){
    valor = val;
    origem = ori;
    id_origem = id_ori;
    data_ini_pagmento_Qdate = data_ini_pag_Qdate;
    data_inical_pagmento = data_ini_pagmento_Qdate.toString(Qt::SystemLocaleShortDate);
    numero_parcelas = numero_par;
    valor_avista = valor_avis;
    parcelamento = par;
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

QString dinheiro::retorna_data_ini_pag(void){
    return data_inical_pagmento;
}

QDate dinheiro::retorna_data_ini_pag_Qdate(void){
    return data_ini_pagmento_Qdate;
}

int dinheiro::retorna_num_parcelas(void){
    return numero_parcelas;
}

double dinheiro::retorna_valor_avista(void){
    return valor_avista;
}

std::vector< parcela * > dinheiro::retorna_parcelamento(void){
    return parcelamento;
}
