#include "despesa_avulsa.h"

despesa_avulsa::despesa_avulsa()
{
}

despesa_avulsa::despesa_avulsa(QDate dta,QString des,double val,int sta){
    qdate_data = dta;
    data = dta.toString(Qt::SystemLocaleShortDate);
    descricao = des;
    valor = val;
    status = sta;
}

despesa_avulsa::despesa_avulsa(int id_despesa_avu,QDate dta,QString des,double val,int sta){
    id_despesa_avulsa = id_despesa_avu;
    qdate_data = dta;
    data = dta.toString(Qt::SystemLocaleShortDate);
    descricao = des;
    valor = val;
    status = sta;
}

int despesa_avulsa::retorna_id_despesa_avulsa(void){
    return id_despesa_avulsa;
}

QDate despesa_avulsa::retorna_data_QDate(void){
    return qdate_data;
}

QString despesa_avulsa::retorna_data(void){
    return data;
}

QString despesa_avulsa::retorna_descricao(void){
   return descricao;
}

double despesa_avulsa::retorna_valor(void){
    return valor;
}

int despesa_avulsa::retorna_status(void){
    return status;
}

void despesa_avulsa::alterar_id_despesa_avulsa(int id_despesa_avu){
    id_despesa_avulsa = id_despesa_avu;
}

void despesa_avulsa::alterar_data(QDate dta){
    data = dta.toString(Qt::SystemLocaleShortDate);
}

void despesa_avulsa::alterar_descricao(QString des){
    descricao = des;
}

void despesa_avulsa::alterar_valor(double val){
    valor = val;
}

void despesa_avulsa::alterar_status(int sta){
    status = sta;
}
