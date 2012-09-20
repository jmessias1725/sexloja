#include "endereco.h"

endereco::endereco(){

}

endereco::endereco(QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                   QString rua, QString cep, int numero, QString pt_referencia){
    sigla_estado = uf_sigla;
    nome_estado = uf_nome;
    nome_cidade = cidade;
    nome_bairro = bairro;
    nome_rua = rua;
    numero_cep = cep;
    numero_residencia = numero;
    ponto_referencia = pt_referencia;
}

QString endereco::retorna_sigla_estado(void){
    return sigla_estado;
}

QString endereco::retorna_nome_estado(void){
    return nome_estado;
}

QString endereco::retorna_cidade(void){
    return nome_cidade;
}

QString endereco::retorna_bairro(void){
    return nome_bairro;
}

QString endereco::retorna_nome_rua(void){
    return nome_rua;
}

QString endereco::retorna_numero_cep(void){
    return numero_cep;
}

int endereco::retorna_numero_residencia(void){
    return numero_residencia;
}

QString endereco::retorna_ponto_referencia(void){
    return ponto_referencia;
}

void endereco::altera_endereco(QString uf_sigla, QString uf_nome, QString cidade,
                     QString bairro, QString rua, QString cep, int numero,
                     QString pt_referencia){
    sigla_estado = uf_sigla;
    nome_estado = uf_nome;
    nome_cidade = cidade;
    nome_bairro = bairro;
    nome_rua = rua;
    numero_cep = cep;
    numero_residencia = numero;
    ponto_referencia = pt_referencia;
}
