#ifndef CARTAO_H
#define CARTAO_H

class cartao
{
private:
    int id_cartao;
    int dia_vencimento;
    int num_parcelas;
    double valor;
    int origem;
    int id_origem;

public:
    cartao();
    cartao(int dia_ven,int num_par,double val,int ori,int id_ori);
    cartao(int id_car,int dia_ven,int num_par,double val,int ori,int id_ori);
    int retorna_id_cartao(void);
    int retorna_dia_vencimento(void);
    int retorna_num_parcelas(void);
    double retorna_valor(void);
    int retorna_origem(void);
    int retorna_id_origem(void);
};

#endif // CARTAO_H
