#include "cliente.h"

cliente::cliente()
{
    endereco_cliente = new(endereco);
}

void cliente::definir_nome(QString nome_cliente){
    nome = nome_cliente;
}

void cliente::definir_cpf(QString cpf_cliente){
    cpf = cpf_cliente;
}

void cliente::definir_comentario(QString comentario_cliente){
    comentario = comentario_cliente;
}

void cliente::definir_lista_email(std::vector< std::string > lista_email_cliente){
    lista_email = lista_email_cliente;
}

void cliente::definir_lista_telefone(std::vector< std::string > lista_telefone_cliente){
    lista_telefone = lista_telefone_cliente;
}

void cliente::definir_lista_operadora(std::vector< std::string > lista_operadora_cliente){
    lista_operadora = lista_operadora_cliente;
}

void cliente::definir_endereco_cliente(QString uf_sigla, QString uf_nome, QString nome_cidade, QString nome_bairro, QString rua, QString cep, int numero, QString pt_referencia){
    sigla_estado = uf_sigla;
    nome_estado = uf_nome;
    cidade = nome_cidade;
    bairro = nome_bairro;
    nome_rua = rua;
    numero_cep = cep;
    numero_residencia = numero;
    ponto_referencia = pt_referencia;
}
