#ifndef DINHEIRO_H
#define DINHEIRO_H

#include <QString>
#include <QDate>
#include <vector>
#include "parcela.h"

class dinheiro
{
private:
    int id_dinheiro;
    double valor;
    int origem;
    int id_origem;
    QString data_inical_pagmento;
    QDate data_ini_pagmento_Qdate;
    int numero_parcelas;
    double valor_avista;
    std::vector< parcela * > parcelamento;


public:
    dinheiro();
    dinheiro(int id_din,double val,int ori,int id_ori,QString data_ini_pag, int numero_par);
    dinheiro(double val,int ori,int id_ori,QDate data_ini_pag_Qdate, int numero_par,double valor_avis);
    dinheiro(double val,int ori,int id_ori,QDate data_ini_pag_Qdate, int numero_par,double valor_avis,
             std::vector< parcela * > par);
    int retorna_id_dinheiro(void);
    double retorna_valor(void);
    int retorna_origem(void);
    int retorna_id_origem(void);
    QString retorna_data_ini_pag(void);
    QDate retorna_data_ini_pag_Qdate(void);
    int retorna_num_parcelas(void);
    double retorna_valor_avista(void);
    std::vector< parcela * > retorna_parcelamento(void);
};

#endif // DINHEIRO_H
