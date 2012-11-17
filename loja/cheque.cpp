#include "cheque.h"

cheque::cheque(){
}

cheque::cheque(int id_ban,QString age,QString con,int num,double val,int ori,int id_ori){
    id_banco = id_ban;
    agencia = age;
    conta = con;
    numero = num;
    valor = val;
    origem = ori;
    id_origem = id_ori;
}

cheque::cheque(int id_che,int id_ban,QString age,QString con,int num,double val,int ori,int id_ori){
    id_cheque = id_che;
    id_banco = id_ban;
    agencia = age;
    conta = con;
    numero = num;
    valor = val;
    origem = ori;
    id_origem = id_ori;
}

int cheque::retorna_id_cheque(void){
    return id_cheque;
}

int cheque::retorna_id_banco(void){
    return id_banco;
}

QString cheque::retorna_agencia(void){
    return agencia;
}

QString cheque::retorna_conta(void){
    return conta;
}

int cheque::retorna_numero(void){
    return numero;
}

double cheque::retorna_valor(void){
    return valor;
}

int cheque::retorna_origem(void){
    return origem;
}

int cheque::retorna_id_origem(void){
    return id_origem;
}
