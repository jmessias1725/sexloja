#include <QtGui/QApplication>
#include <QtSql>
#include <QString>
#include <iostream>
#include "tela_login.h"
#include "cep.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    tela_login tl_login;

    cep *cep_usuario;
    bool teste;

    cep_usuario = new cep;

    teste=cep_usuario->buscar_cep("57040-005");


    //tl_login.show();

    return a.exec();
}
