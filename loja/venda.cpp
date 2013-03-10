#include "venda.h"

venda::venda()
{
}

venda::venda(QDate data_ven,int id_cli,double valor_tot,double des){
    data = data_ven;
    data_venda =data.toString(Qt::SystemLocaleShortDate);
    id_cliente = id_cli;
    valor_total = valor_tot;
    desconto = des;
    valor_pago = valor_tot-des;
}

venda::venda(int id_ven,QDate data_ven,int id_cli,double valor_tot,double des){
    id_venda = id_ven;
    data = data_ven;
    data_venda =data.toString(Qt::SystemLocaleShortDate);
    id_cliente = id_cli;
    valor_total = valor_tot;
    desconto = des;
    valor_pago = valor_tot-des;
}

int venda::retorna_id_venda(void){
    return id_venda;
}

QString venda::retorna_data_venda(void){
    return data_venda;
}

int venda::retorna_id_cliente(void){
    return id_cliente;
}

double venda::retorna_valor_total(void){
    return valor_total;
}

double venda::retorna_desconto(void){
    return desconto;
}

double venda::retorna_valor_pago(void){
    return valor_pago;
}

void venda::alterar_id_venda(int id_ven){
    id_venda = id_ven;
}

QDate venda::retorna_data_QDate(void){
    return data;
}

void venda::alterar_id_cliente(int id_cli){
    id_cliente = id_cli;
}

void venda::alterar_valor_total(double valor_tot){
    valor_total = valor_tot;
}

void venda::alterar_desconto(double des){
    desconto = des;
}

void venda::alterar_valor_pago(double valor_pag){
    valor_pago = valor_pag;
}

void venda::alterar_data(QDate dta){
    data = dta;
    data_venda =data.toString(Qt::SystemLocaleShortDate);
}
