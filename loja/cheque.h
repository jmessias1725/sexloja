#ifndef CHEQUE_H
#define CHEQUE_H

#include <QString>

class cheque
{
private:
    int id_cheque;
    QString nome_banco;
    QString agencia;
    QString conta;
    int numero;
    double valor;
    int origem;
    int id_origem;
    QString codigo_banco;
    QString data_pagamento;
    bool inserir_caixa_hoje;

public:
    cheque();

    cheque(QString nome_ban,QString age,QString con,int num,double val,int ori,int id_ori,
           QString codigo_ban,QString data_pag);

    cheque(int id_che,QString nome_ban,QString age,QString con,int num,double val,int ori,
           int id_ori,QString codigo_ban,QString data_pag);

    int retorna_id_cheque(void);
    QString retorna_nome_banco(void);
    QString retorna_agencia(void);
    QString retorna_conta(void);
    int retorna_numero(void);
    double retorna_valor(void);
    int retorna_origem(void);
    int retorna_id_origem(void);
    QString retorna_codigo_banco(void);
    QString retorna_data_pagamento(void);
    void inserir_no_caixa_de_hoje(bool decisao);
    bool retorna_se_insere_caixa_hoje(void);
};

#endif // CHEQUE_H
