#ifndef DESPESA_H
#define DESPESA_H

#include <QString>

class despesa
{
private:
    int id_despesa;
    QString data;
    QString descricao;
    double valor;
    int status;
    int origem;
    int id_origem;

public:
    despesa();
    despesa(QString dat,QString des,double val,int sta,int ori,int id_ori);
    despesa(int id,QString dat,QString des,double val,int sta,int ori,int id_ori);
    int retorna_id(void);
    QString retorna_data(void);
    QString retorna_descricao(void);
    double retorna_valor(void);
    int retorna_status(void);
    int retorna_origem(void);
    int retorna_id_origem(void);
    void alterar_data(QString dat);
    void alterar_valor(double val);
    void alterar_status(int sta);
};

#endif // DESPESA_H
