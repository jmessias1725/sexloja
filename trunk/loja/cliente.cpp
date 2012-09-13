#include "cliente.h"

cliente::cliente(QString cliente_nome,float cliente_rg,QString cliente_cpf,
                 QString cliente_comentario,std::vector< std::string > lista_email_cliente,
                 std::vector< std::string > lista_telefone_cliente,
                 std::vector< std::string > lista_operadora_cliente,
                 QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                 QString rua, QString cep, int numero, QString pt_referencia):endereco(uf_sigla,uf_nome,
                                                                                       cidade,bairro,
                                                                                       rua, cep,numero,
                                                                                       pt_referencia){

    nome =cliente_nome;
    rg =cliente_rg;
    cpf =cliente_cpf;
    comentario =cliente_comentario;
    lista_email =lista_email_cliente;
    lista_telefone =lista_telefone_cliente;
    lista_operadora =lista_operadora_cliente;
}

bool cliente::salvar_cliente(void){
    std::cout<<nome.toStdString()<<std::endl;
    std::cout<<rg<<std::endl;
    std::cout<<cpf.toStdString()<<std::endl;
    std::cout<<comentario.toStdString()<<std::endl;
    for(int i = 0; i<lista_email.size();i++){
        std::cout<<lista_email[i]<<std::endl;
    }
    for(int i = 0; i<lista_telefone.size();i++){
        std::cout<<lista_telefone[i]<<" - "<<lista_operadora[i]<<std::endl;
    }
    std::cout<<sigla_estado.toStdString()<<std::endl;
    std::cout<<nome_estado.toStdString()<<std::endl;
    std::cout<<nome_cidade.toStdString()<<std::endl;
    std::cout<<nome_bairro.toStdString()<<std::endl;
    std::cout<<nome_rua.toStdString()<<std::endl;
    std::cout<<numero_cep.toStdString()<<std::endl;
    std::cout<<numero_residencia<<std::endl;
    std::cout<<ponto_referencia.toStdString()<<std::endl;
}

