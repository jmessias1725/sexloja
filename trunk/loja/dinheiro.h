#ifndef DINHEIRO_H
#define DINHEIRO_H

class dinheiro
{
private:
    int id_dinheiro;
    double valor;
    int origem;
    int id_origem;

public:
    dinheiro();
    dinheiro(double val,int ori,int id_ori);
    dinheiro(int id_din,double val,int ori,int id_ori);
    int retorna_id_dinheiro(void);
    double retorna_valor(void);
    int retorna_origem(void);
    int retorna_id_origem(void);
};

#endif // DINHEIRO_H
