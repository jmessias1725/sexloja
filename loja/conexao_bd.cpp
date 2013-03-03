#include "conexao_bd.h"

bool conexao_bd::conetar_bd(){
    const QString hostname = "localhost";
    int porta = 3306;
    const QString nome_bd = "bd_loja";
    const QString usuario = "root";
    const QString senha = "tiger270807";
    if(!bd_loja.isOpen()){
        int num_radon = rand( );
        QString aux=QDateTime::currentDateTime().toString();
        aux = aux + QString::number(num_radon);

        bd_loja.removeDatabase(bd_loja.connectionName());
        bd_loja = QSqlDatabase::addDatabase("QMYSQL",aux);

        bd_loja.setHostName(hostname);
        bd_loja.setPort(porta);
        bd_loja.setDatabaseName(nome_bd);
        bd_loja.setUserName(usuario);
        bd_loja.setPassword(senha);
        bd_loja.open();
        if (bd_loja.isOpen()==false){
            QMessageBox::critical( 0, "Erro no programa", QString("\nNão foi possível conectar ao banco de dados:  ")+ nome_bd);
            return false;
    }
    else
        return true;
    }
    else{
        return true;
    }
}

bool conexao_bd::conetar_bd(const QString hostname,int porta,const QString nome_bd,const QString usuario,const QString senha){
    if(!bd_loja.isOpen()){
        int num_radon = rand( );
        QString aux=QDateTime::currentDateTime().toString();
        aux = aux + QString::number(num_radon);

        bd_loja.removeDatabase(bd_loja.connectionName());
        bd_loja = QSqlDatabase::addDatabase("QMYSQL",aux);

        bd_loja.setHostName(hostname);
        bd_loja.setPort(porta);
        bd_loja.setDatabaseName(nome_bd);
        bd_loja.setUserName(usuario);
        bd_loja.setPassword(senha);
        bd_loja.open();
        if (bd_loja.isOpen()==false){
            QMessageBox::critical( 0, "Erro no programa", QString("\nNão foi possível conectar ao banco de dados:  ")+ nome_bd);
            return false;
    }
    else
        return true;
    }
    else{
        return true;
    }
}

void conexao_bd::fechar_conexao(){
    bd_loja.connectionNames().removeAll(bd_loja.connectionName());
    bd_loja.close();
}

QSqlDatabase conexao_bd::retorna_bd(){
    return bd_loja;
}
