#ifndef GANHO_AVULSO_H
#define GANHO_AVULSO_H

#include "QString"
#include "QDate"

class ganho_avulso
{
private:
    int id_ganho_avulso;
    QString data;
    QDate qdate_data;
    QString descricao;
    double valor;
    int status;

public:
    ganho_avulso();
    ganho_avulso(QDate dta,QString des,double val,int sta);
    ganho_avulso(int id_ganho_avu,QDate dta,QString des,double val,int sta);
    int retorna_id_ganho_avulso(void);
    QString retorna_data(void);
    QDate retorna_data_QDate(void);
    QString retorna_descricao(void);
    double retorna_valor(void);
    int retorna_status(void);
    void alterar_id_ganho_avulso(int id_ganho_avu);
    void alterar_data(QDate dta);
    void alterar_descricao(QString des);
    void alterar_valor(double val);
    void alterar_status(int sta);
};

#endif // GANHO_AVULSO_H
