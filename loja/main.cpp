#include <QtGui/QApplication>
#include <QtSql>
#include <QString>
#include <iostream>
#include "tela_login.h"
#include "endereco.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    tela_login tl_login;

    tl_login.show();

    return a.exec();
}
