#include "conexao_bd.h"

bool conexao_bd::conetar_bd(const QString hostname,int porta,const QString nome_bd,const QString usuario,const QString senha,const QString nome_conexao){

    bd_loja = QSqlDatabase::addDatabase("QMYSQL",nome_conexao);

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

void conexao_bd::fechar_conexao(const QString nome_conexao){
    bd_loja.removeDatabase(nome_conexao);
    bd_loja.close();
}

QSqlDatabase conexao_bd::retorna_bd(){
    return bd_loja;
}
