#include "cheque.h"

cheque::cheque(){
}

cheque::cheque(QString nome_ban,QString age,QString con,int num,double val,int ori,int id_ori,
               QString codigo_ban,QString data_pag){
    nome_banco = nome_ban;
    agencia = age;
    conta = con;
    numero = num;
    valor = val;
    origem = ori;
    id_origem = id_ori;
    codigo_banco = codigo_ban;
    data_pagamento = data_pag;
}

cheque::cheque(int id_che,QString nome_ban,QString age,QString con,int num,double val,int ori,
               int id_ori,QString codigo_ban,QString data_pag){
    id_cheque = id_che;
    nome_banco = nome_ban;
    agencia = age;
    conta = con;
    numero = num;
    valor = val;
    origem = ori;
    id_origem = id_ori;
    codigo_banco = codigo_ban;
    data_pagamento = data_pag;
}

int cheque::retorna_id_cheque(void){
    return id_cheque;
}

QString cheque::retorna_nome_banco(void){
    return nome_banco;
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

QString cheque::retorna_codigo_banco(void){
    return codigo_banco;
}


QString cheque::retorna_data_pagamento(void){
    return data_pagamento;
}
