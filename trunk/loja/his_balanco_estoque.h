#ifndef HIS_BALANCO_ESTOQUE_H
#define HIS_BALANCO_ESTOQUE_H

#include <iostream>
#include <vector>

#include "conexao_bd.h"

class his_balanco_estoque
{
private:
    int id_balanco;
    int id_produto;
    float valor_compra;
    int total_comprado;
    int total_disponivel;
    int somatorio_quantidade;

public:
    his_balanco_estoque(int id_bal,float valor_com,int somatorio_quan);
    his_balanco_estoque(int id_bal,int total_com,float valor_com,int total_dis);
    his_balanco_estoque(int id_pro,float valor_com,int total_com,int total_dis);
    int retorna_id_balanco(void);
    int retorna_id_produto(void);
    float retorna_valor_compra(void);
    int retorna_total_comprado(void);
    int retorna_total_disponivel(void);
    int retorna_somatorio_quantidade(void);
    int retorna_custo_medio(void);
};

#endif // HIS_BALANCO_ESTOQUE_H
