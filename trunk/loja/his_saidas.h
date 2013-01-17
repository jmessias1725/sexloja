#ifndef HIS_SAIDAS_H
#define HIS_SAIDAS_H

#include <QString>

class his_saidas
{
private:
    int id_saida;
    int quantidade;
    double valor_venda;
    QString data;

public:
    his_saidas(int id_sai,int quant, double val_venda, QString dta);
    int retorna_id_saida(void);
    int retorna_quantidade(void);
    double retorna_valor_venda(void);
    QString retorna_data(void);
};

#endif // HIS_SAIDAS_H
