#include "ganho_avulso.h"

ganho_avulso::ganho_avulso()
{
}

ganho_avulso::ganho_avulso(QDate dta,QString des,double val,int sta){
    qdate_data = dta;
    data = dta.toString(Qt::SystemLocaleShortDate);
    descricao = des;
    valor = val;
    status = sta;
}

ganho_avulso::ganho_avulso(int id_ganho_avu,QDate dta,QString des,double val,int sta){
    id_ganho_avulso = id_ganho_avu;
    qdate_data = dta;
    data = dta.toString(Qt::SystemLocaleShortDate);
    descricao = des;
    valor = val;
    status = sta;
}

int ganho_avulso::retorna_id_ganho_avulso(void){
    return id_ganho_avulso;
}

QDate ganho_avulso::retorna_data_QDate(void){
    return qdate_data;
}

QString ganho_avulso::retorna_data(void){
    return data;
}

QString ganho_avulso::retorna_descricao(void){
   return descricao;
}

double ganho_avulso::retorna_valor(void){
    return valor;
}

int ganho_avulso::retorna_status(void){
    return status;
}

void ganho_avulso::alterar_id_ganho_avulso(int id_ganho_avu){
    id_ganho_avulso = id_ganho_avu;
}

void ganho_avulso::alterar_data(QDate dta){
    data = dta.toString(Qt::SystemLocaleShortDate);
}

void ganho_avulso::alterar_descricao(QString des){
    descricao = des;
}

void ganho_avulso::alterar_valor(double val){
    valor = val;
}

void ganho_avulso::alterar_status(int sta){
    status = sta;
}
