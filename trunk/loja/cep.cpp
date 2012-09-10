#include "cep.h"

cep::cep()
{
}

bool cep::buscar_cep(QString cep_procurado){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;

    std::string cep_aux;
    QString id_bairro;


    cep_procurado = "59075-901";

    cep_aux = cep_procurado.toStdString();

    cep_aux = cep_aux.substr(0,5)+cep_aux.substr(6,3);

    cep_procurado = QString::fromStdString(cep_aux);

    std::cout<<cep_procurado.toStdString()<<std::endl;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_cep","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT bairro_codigo FROM endereco WHERE endereco_cep = '" + cep_procurado + "'");
        while(consultar.next()){
            id_bairro = consultar.value(0).toString();
        }
        if(!id_bairro.toStdString().empty())
        {
            std::cout<<"tem cep "<<id_bairro.toStdString()<<std::endl;
            return true;
        }
        else{
            std::cout<<"Não tem cep "<<id_bairro.toStdString()<<std::endl;
            return false;
        }

        /*if (UF.size()>0){
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

        return true;*/
        }
    conexao.fechar_conexao();
    return false;
}
