#ifndef COMPRA_H
#define COMPRA_H

#include <QString>
#include <QDate>

class compra
{
private:
    int id_compra;
    QString data_compra;
    QDate data;
    int id_fornecedor;
    int num_cupom_nota;
    double valor_total;
    double desconto;
    double valor_pago;
public:
    compra();
    compra(QDate data_com,int id_for,int num_cupom_not,double valor_tot,double des);
    compra(int id_com,QDate data_com,int id_for,int num_cupom_not,double valor_tot,double des);
    int retorna_id_compra(void);
    QString retorna_data_compra(void);
    int retorna_id_fornecedor(void);
    int retorna_num_cupom_nota(void);
    double retorna_valor_total(void);
    double retorna_desconto(void);
    double retorna_valor_pago(void);
    void alterar_id_compra(int id_com);
    QDate retorna_data_QDate(void);
};

#endif // COMPRA_H
