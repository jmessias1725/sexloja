#ifndef DESPESA_AVULSA_H
#define DESPESA_AVULSA_H

#include "QString"
#include "QDate"

class despesa_avulsa
{
private:
    int id_despesa_avulsa;
    QString data;
    QDate qdate_data;
    QString descricao;
    double valor;
    int status;

public:
    despesa_avulsa();
    despesa_avulsa(QDate dta,QString des,double val,int sta);
    despesa_avulsa(int id_despesa_avu,QDate dta,QString des,double val,int sta);
    int retorna_id_despesa_avulsa(void);
    QString retorna_data(void);
    QDate retorna_data_QDate(void);
    QString retorna_descricao(void);
    double retorna_valor(void);
    int retorna_status(void);
    void alterar_id_despesa_avulsa(int id_despesa_avu);
    void alterar_data(QDate dta);
    void alterar_descricao(QString des);
    void alterar_valor(double val);
    void alterar_status(int sta);
};

#endif // DESPESA_AVULSA_H
