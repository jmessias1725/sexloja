#ifndef CLIENTE_H
#define CLIENTE_H

#include <QtSql>
#include <QString>
#include <iostream>
#include <QtGui>
#include <QMessageBox>

#include "endereco.h"

class cliente
{
private:
    endereco *endereco_usuario;
public:
    cliente();
    void definir_cep(QString cep);

};

#endif // CLIENTE_H
