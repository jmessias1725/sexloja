#include "ganho.h"

ganho::ganho()
{

}

ganho::ganho(QString dat,QString des,double val,int sta,int ori,int id_ori){
    data = dat;
    descricao = des;
    valor = val;
    status = sta;
    origem = ori;
    id_origem = id_ori;
}

ganho::ganho(int id,QString dat,QString des,double val,int sta,int ori,int id_ori){
    id_ganho = id;
    data = dat;
    descricao = des;
    valor = val;
    status = sta;
    origem = ori;
    id_origem = id_ori;
}

int ganho::retorna_id(void){
    return id_ganho;
}

QString ganho::retorna_data(void){
    return data;
}

QString ganho::retorna_descricao(void){
    return descricao;
}

double ganho::retorna_valor(void){
    return valor;
}

int ganho::retorna_status(void){
    return status;
}

int ganho::retorna_origem(void){
    return origem;
}

int ganho::retorna_id_origem(void){
    return id_origem;
}

