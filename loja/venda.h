#ifndef VENDA_H
#define VENDA_H

#include <QString>
#include <QDate>

class venda
{
private:
    int id_venda;
    QString data_venda;
    int id_cliente;
    double valor_total;
    double desconto;
    double valor_pago;
    QDate data;
    int status;

public:
    venda();
    venda(QDate data_ven,int id_cli,double valor_tot,double des,int sta);
    venda(int id_ven,QDate data_ven,int id_cli,double valor_tot,double des, int sta);
    int retorna_id_venda(void);
    QString retorna_data_venda(void);
    int retorna_id_cliente(void);
    double retorna_valor_total(void);
    double retorna_desconto(void);
    double retorna_valor_pago(void);
    int retorna_status(void);
    void alterar_id_venda(int id_com);
    QDate retorna_data_QDate(void);
    void alterar_id_cliente(int id_cli);
    void alterar_valor_total(double valor_tot);
    void alterar_desconto(double des);
    void alterar_valor_pago(double valor_pag);
    void alterar_data(QDate dta);
    void alterar_status(int sta);
};

#endif // VENDA_H
