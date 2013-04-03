#include "compra.h"

compra::compra()
{

}

compra::compra(QDate data_com,int id_for,int num_cupom_not,double valor_tot,double des,int sta){
    data = data_com;
    data_compra =data.toString(Qt::SystemLocaleShortDate);
    id_fornecedor = id_for;
    num_cupom_nota = num_cupom_not;
    valor_total = valor_tot;
    desconto = des;
    valor_pago = valor_tot-des;
    status = sta;
}

compra::compra(int id_com,QDate data_com,int id_for,int num_cupom_not,double valor_tot,double des,int sta){
    id_compra = id_com;
    data = data_com;
    data_compra =data.toString(Qt::SystemLocaleShortDate);
    id_fornecedor = id_for;
    num_cupom_nota = num_cupom_not;
    valor_total = valor_tot;
    desconto = des;
    valor_pago = valor_tot-des;
    status = sta;
}

int compra::retorna_id_compra(void){
    return id_compra;
}

QString compra::retorna_data_compra(void){
    return data_compra;
}

int compra::retorna_id_fornecedor(void){
    return id_fornecedor;
}

int compra::retorna_num_cupom_nota(void){
    return num_cupom_nota;
}

double compra::retorna_valor_total(void){
    return valor_total;
}

double compra::retorna_desconto(void){
    return desconto;
}

double compra::retorna_valor_pago(void){
    return valor_pago;
}

QDate compra::retorna_data_QDate(void){
    return data;
}

int compra::retorna_status(void){
    return status;
}

void compra::alterar_id_compra(int id_com){
    id_compra = id_com;
}

void compra::alterar_data(QDate dta){
    data = dta;
    data_compra =data.toString(Qt::SystemLocaleShortDate);
}

void compra::alterar_id_fornecedor(int id_for){
    id_fornecedor = id_for;
}

void compra::alterar_num_cupom_nota(int num_cupom_not){
    num_cupom_nota = num_cupom_not;
}

void compra::alterar_valor_total(double valor_tot){
    valor_total = valor_tot;
}

void compra::alterar_desconto(double des){
    desconto = des;
}

void compra::alterar_valor_pago(double valor_pag){
    valor_pago = valor_pag;
}

void compra::alterar_status(int sta){
    status = sta;
}
