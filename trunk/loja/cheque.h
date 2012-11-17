#ifndef CHEQUE_H
#define CHEQUE_H

#include <QString>

class cheque
{
private:
    int id_cheque;
    int id_banco;
    QString agencia;
    QString conta;
    int numero;
    double valor;
    int origem;
    int id_origem;

public:
    cheque();
    cheque(int id_ban,QString age,QString con,int num,double val,int ori,int id_ori);
    cheque(int id_che,int id_ban,QString age,QString con,int num,double val,int ori,int id_ori);
    int retorna_id_cheque(void);
    int retorna_id_banco(void);
    QString retorna_agencia(void);
    QString retorna_conta(void);
    int retorna_numero(void);
    double retorna_valor(void);
    int retorna_origem(void);
    int retorna_id_origem(void);
};

#endif // CHEQUE_H
