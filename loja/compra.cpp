#include "compra.h"

compra::compra()
{

}
compra::compra(QString data_com,int id_for,int num_cupom_not,double valor_tot,double des){
    data_compra = data_com;
    id_fornecedor = id_for;
    num_cupom_nota = num_cupom_not;
    valor_total = valor_tot;
    desconto = des;
}

compra::compra(int id_com,QString data_com,int id_for,int num_cupom_not,double valor_tot,double des){
    id_compra = id_com;
    data_compra = data_com;
    id_fornecedor = id_for;
    num_cupom_nota = num_cupom_not;
    valor_total = valor_tot;
    desconto = des;
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
