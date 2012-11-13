#include "conexao_bd.h"

bool conexao_bd::conetar_bd(const QString hostname,int porta,const QString nome_bd,const QString usuario,const QString senha,const QString nome_conexao){
    if(!bd_loja.isOpen()){
        bd_loja.removeDatabase(bd_loja.connectionName());

        bd_loja = QSqlDatabase::addDatabase("QMYSQL",QDateTime::currentDateTime().toString());

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
