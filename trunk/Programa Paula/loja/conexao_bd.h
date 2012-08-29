#ifndef CONEXAO_BD_H
#define CONEXAO_BD_H

#include <QtSql>
#include <QString>
#include <iostream>
#include <QtGui>
#include <QMessageBox>

class conexao_bd
{
private:
    QSqlDatabase bd_loja;
public:
    bool conetar_bd(const QString hostname,int porta,const QString nome_bd,const QString usuario,const QString senha);
    void fechar_conexao(void);
    QSqlDatabase retorna_bd();
};

#endif // CONEXAO_BD_H
