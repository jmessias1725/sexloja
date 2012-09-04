#include "cep.h"

cep::cep()
{
}

bool cep::buscar_cep(QString cep_procurado){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    QString UF;
    QString cep5;
    std::string cep_aux;

    cep_procurado = "57040-005";

    cep_aux = cep_procurado.toStdString();

    cep_aux = cep_aux.substr(0,5);

    cep5 = QString::fromStdString(cep_aux);


    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_cep","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT uf FROM cep_log_index WHERE cep5 = '" + cep5 + "'");
        while(consultar.next()){
            UF = consultar.value(0).toString();
        }

        if (UF.size()>0){
            consultar.exec("SELECT * FROM "+UF+" WHERE cep = '" + cep_procurado + "'");
            while(consultar.next()){
                id = consultar.value(0).toInt();
                cidade = consultar.value(1).toString();
                logradouro = consultar.value(2).toString();
                bairro = consultar.value(3).toString();
                numero_cep = consultar.value(4).toString();
                tp_logradouro = consultar.value(5).toString();
            }
            std::cout<<id<<std::endl;
            std::cout<<cidade.toStdString()<<std::endl;
            std::cout<<logradouro.toStdString()<<std::endl;
            std::cout<<bairro.toStdString()<<std::endl;
            std::cout<<numero_cep.toStdString()<<std::endl;
            std::cout<<tp_logradouro.toStdString()<<std::endl;
        }
        conexao.fechar_conexao();
        return true;
        }
    return false;
}
