#ifndef COMPRA_H
#define COMPRA_H

#include <QString>

class compra
{
private:
    int id_compra;
    QString data_compra;
    int id_fornecedor;
    int num_cupom_nota;
    double valor_total;
    double desconto;
public:
    compra();
    compra(QString data_com,int id_for,int num_cupom_not,double valor_tot,double des);
    compra(int id_com,QString data_com,int id_for,int num_cupom_not,double valor_tot,double des);
    int retorna_id_compra(void);
    QString retorna_data_compra(void);
    int retorna_id_fornecedor(void);
    int retorna_num_cupom_nota(void);
    double retorna_valor_total(void);
    double retorna_desconto(void);
    void alterar_id_compra(int id_com);
};

#endif // COMPRA_H
