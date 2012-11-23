#include "dinheiro.h"

dinheiro::dinheiro()
{
    valor = 0.0;
}

dinheiro::dinheiro(double val,int ori,int id_ori)
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
