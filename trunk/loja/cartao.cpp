#include "cartao.h"

cartao::cartao(){
    id_cartao = 0;
    valor = 0.0;
}

cartao::cartao(int dia_ven,int num_par,double val,int ori,int id_ori){
    dia_vencimento = dia_ven;
    num_parcelas = num_par;
    valor = val;
    origem = ori;
    id_origem = id_ori;
}

cartao::cartao(int id_car,int dia_ven,int num_par,double val,int ori,int id_ori){
    id_cartao = id_car;
    dia_vencimento = dia_ven;
    num_parcelas = num_par;
    valor = val;
    origem = ori;
    id_origem = id_ori;
}

int cartao::retorna_id_cartao(void){
    return id_cartao;
}

int cartao::retorna_dia_vencimento(void){
    return dia_vencimento;
}

int cartao::retorna_num_parcelas(void){
    return num_parcelas;
}

double cartao::retorna_valor(void){
    return valor;
}

int cartao::retorna_origem(void){
    return origem;
}

int cartao::retorna_id_origem(void){
    return id_origem;
}
