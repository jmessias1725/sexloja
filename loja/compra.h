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
    int status;

public:
    compra();
    compra(QDate data_com,int id_for,int num_cupom_not,double valor_tot,double des,int sta);
    compra(int id_com,QDate data_com,int id_for,int num_cupom_not,double valor_tot,double des,int sta);
    int retorna_id_compra(void);
    QString retorna_data_compra(void);
    int retorna_id_fornecedor(void);
    int retorna_num_cupom_nota(void);
    double retorna_valor_total(void);
    double retorna_desconto(void);
    double retorna_valor_pago(void);
    QDate retorna_data_QDate(void);
    int retorna_status(void);
    void alterar_id_compra(int id_com);
    void alterar_data(QDate dta);
    void alterar_id_fornecedor(int id_for);
    void alterar_num_cupom_nota(int num_cupom_not);
    void alterar_valor_total(double valor_tot);
    void alterar_desconto(double des);
    void alterar_valor_pago(double valor_pag);
    void alterar_status(int sta);
};

#endif // COMPRA_H
