#include "endereco.h"

void endereco::definir_endereco(QString uf_sigla, QString uf_nome, QString nome_cidade, QString nome_bairro, QString rua, QString cep, int numero){
    sigla_estado = uf_sigla;
    nome_estado = uf_nome;
    cidade = nome_cidade;
    bairro = nome_bairro;
    nome_rua = rua;
    numero_cep = cep;
    numero_residencia = numero;
}
