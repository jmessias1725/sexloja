#ifndef LEGENDA_ESTOQUE_H
#define LEGENDA_ESTOQUE_H

#include "iostream"
#include "vector"
#include "conexao_bd.h"

class legenda_estoque
{
private:
    int id_zerado;
    int zerado_valor;
    int z_cor_vermelho;
    int z_cor_verde;
    int z_cor_azul;

    int id_minimo;
    int minimo_valor;
    int m_cor_vermelho;
    int m_cor_verde;
    int m_cor_azul;

    int id_normal;
    int normal_valor;
    int n_cor_vermelho;
    int n_cor_verde;
    int n_cor_azul;

    int id_ideal;
    int ideal_valor;
    int i_cor_vermelho;
    int i_cor_verde;
    int i_cor_azul;

    QPixmap logomarca;

public:
    legenda_estoque();
    int retorna_zerado_valor(void);
    int retorna_z_cor_vermelho(void);
    int retorna_z_cor_verde(void);
    int retorna_z_cor_azul(void);
    int retorna_minimo_valor(void);
    int retorna_m_cor_vermelho(void);
    int retorna_m_cor_verde(void);
    int retorna_m_cor_azul(void);
    int retorna_normal_valor(void);
    int retorna_n_cor_vermelho(void);
    int retorna_n_cor_verde(void);
    int retorna_n_cor_azul(void);
    int retorna_ideal_valor(void);
    int retorna_i_cor_vermelho(void);
    int retorna_i_cor_verde(void);
    int retorna_i_cor_azul(void);
    void alterar_configuracao_estoque(int zer_valor,int z_cor_verm,int z_cor_ver,int z_cor_az,
                                    int min_valor,int m_cor_verm,int m_cor_ver,int m_cor_az,
                                    int nor_valor,int n_cor_verm,int n_cor_ver,int n_cor_az,
                                    int ide_valor,int i_cor_verm,int i_cor_ver,int i_cor_az);
    bool salvar_alteracao_configuracao_estoque(void);
    void definir_icone_janela(QPixmap logo);
};

#endif // LEGENDA_ESTOQUE_H
