#include "despesa.h"

despesa::despesa()
{

}

despesa::despesa(QString dat,QString des,double val,int sta,int ori,int id_ori){
    data = dat;
    descricao = des;
    valor = val;
    status = sta;
    origem = ori;
    id_origem = id_ori;
}

despesa::despesa(int id,QString dat,QString des,double val,int sta,int ori,int id_ori){
    id_despesa = id;
    data = dat;
    descricao = des;
    valor = val;
    status = sta;
    origem = ori;
    id_origem = id_ori;
}

int despesa::retorna_id(void){
    return id_despesa;
}

QString despesa::retorna_data(void){
    return data;
}

QString despesa::retorna_descricao(void){
    return descricao;
}

double despesa::retorna_valor(void){
    return valor;
}

int despesa::retorna_status(void){
    return status;
}

int despesa::retorna_origem(void){
    return origem;
}

int despesa::retorna_id_origem(void){
    return id_origem;
}

void despesa::alterar_data(QString dat){
    data = dat;
}

void despesa::alterar_valor(double val){
    valor = val;
}

void despesa::alterar_status(int sta){
    status = sta;
}
