#ifndef PARCELA_H
#define PARCELA_H

#include <QString>
#include <QDate>

class parcela
{
private:
    QString data;
    double valor;
public:
    parcela();
    parcela(QString dta, double val);
    QString retorna_data(void);
    double retorna_valor(void);
    void altera_data(QString dat);
    void altera_valor(double val);
};

#endif // PARCELA_H
