#ifndef HIS_BALANCO_ESTOQUE_H
#define HIS_BALANCO_ESTOQUE_H

class his_balanco_estoque
{
private:
    int id_balanco;
    int id_produto;
    float valor_compra;
    float valor_venda;
    int total_comprado;
    int total_disponivel;

public:
    his_balanco_estoque();
    bool salvar_his_balanco_estoque();
};

#endif // HIS_BALANCO_ESTOQUE_H
