#ifndef GANHO_H
#define GANHO_H

#include <QString>

class ganho
{
private:
    int id_ganho;
    QString data;
    QString descricao;
    double valor;
    int status;
    int origem;
    int id_origem;

public:
    ganho();
    ganho(QString dat,QString des,double val,int sta,int ori,int id_ori);
    ganho(int id,QString dat,QString des,double val,int sta,int ori,int id_ori);
    int retorna_id(void);
    QString retorna_data(void);
    QString retorna_descricao(void);
    double retorna_valor(void);
    int retorna_status(void);
    int retorna_origem(void);
    int retorna_id_origem(void);
};

#endif // GANHO_H
