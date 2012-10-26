#include "cep.h"

bool cep::buscar_cep(QString cep_procurado){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;

    std::string cep_aux;
    QString id_bairro;
    QString id_cidade;
    QString id_uf;

    numero_cep = cep_procurado;

    cep_aux = cep_procurado.toStdString();
    cep_aux = cep_aux.substr(0,5)+cep_aux.substr(6,3);
    cep_procurado = QString::fromStdString(cep_aux);

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_cep","root","tiger270807","buscar_cep");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        /* realiza a consulta para verirficar se o CEP existe na base de dados,
        se existir pega nome da rua, o id_cidade e id_bairro. */
        consultar.exec("SELECT id_cidade,id_bairro,nome_endereco FROM endereco WHERE cep = '" + cep_procurado + "'");
        while(consultar.next()){
            id_cidade = consultar.value(0).toString();
            if(!id_cidade.toStdString().empty())
            {
                id_bairro = consultar.value(1).toString();
                nome_rua = consultar.value(2).toString();
                consultar.finish();
            }
        }
        if(!id_cidade.toStdString().empty())
        {
            //realiza a consulta para pegar o nome do bairro;
            consultar.exec("SELECT nome_bairro FROM bairro WHERE id_bairro = '" + id_bairro + "'");
            while(consultar.next()){
                bairro = consultar.value(0).toString();
                consultar.finish();
            }
            //realiza a consulta para pegar o nome da cidade, e o id_uf;
            consultar.exec("SELECT nome_cidade,id_uf FROM cidade WHERE id_cidade = '" + id_cidade + "'");
            while(consultar.next()){
                cidade = consultar.value(0).toString();
                id_uf = consultar.value(1).toString();
                consultar.finish();
            }
            identificador_uf = id_uf.toInt();

            //realiza a consulta para determinar a uf;
            consultar.exec("SELECT uf_sigla,uf_descricao FROM uf WHERE id_uf = '" + id_uf + "'");
            while(consultar.next()){
                sigla_estado = consultar.value(0).toString();
                nome_estado = consultar.value(1).toString();
                consultar.finish();
            }
            conexao.fechar_conexao("buscar_cep");
            return true;
        }
        else{
            conexao.fechar_conexao("buscar_cep");
            return false;
        }
    }
    else{
        conexao.fechar_conexao("buscar_cep");
        return false;
    }
}

QString cep::retorna_sigla_estado(void){
    return sigla_estado;
}

QString cep::retorna_nome_estado(void){
    return nome_estado;
}

QString cep::retorna_cidade(void){
    return cidade;
}

QString cep::retorna_bairro(void){
    return bairro;
}

QString cep::retorna_nome_rua(void){
    return nome_rua;
}

QString cep::retorna_numero_cep(void){
    return numero_cep;
}

int cep::retorna_id_uf(void){
    return identificador_uf;
}
