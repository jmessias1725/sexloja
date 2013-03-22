#ifndef TELA_CONFIGURAR_LEGENDA_ESTOQUE_H
#define TELA_CONFIGURAR_LEGENDA_ESTOQUE_H

#include <QDialog>
#include <iostream>
#include <QColor>
#include <QColorDialog>

#include "legenda_estoque.h"

namespace Ui {
class tela_configurar_legenda_estoque;
}

class tela_configurar_legenda_estoque : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_configurar_legenda_estoque(QWidget *parent = 0);
    ~tela_configurar_legenda_estoque();
    void definir_icone_janela(QPixmap logo);
    void configuracao_legenda(legenda_estoque *leg);
    legenda_estoque * retorna_nova_configuracao(void);
    
private slots:
    void on_btn_alterar_cor_zerado_clicked();
    void on_btn_alterar_cor_minimo_clicked();
    void on_btn_alterar_cor_normal_clicked();
    void on_btn_alterar_cor_ideal_clicked();
    void on_le_normal_editingFinished();
    void on_btn_voltar_padrao_clicked();
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();
    void on_le_minimo_editingFinished();

private:
    Ui::tela_configurar_legenda_estoque *ui;
    QPixmap logomarca;
    legenda_estoque *legenda;
    legenda_estoque *aux_legenda;

    int zerado_valor;
    int z_cor_vermelho;
    int z_cor_verde;
    int z_cor_azul;

    int minimo_valor;
    int m_cor_vermelho;
    int m_cor_verde;
    int m_cor_azul;

    int normal_valor;
    int n_cor_vermelho;
    int n_cor_verde;
    int n_cor_azul;

    int ideal_valor;
    int i_cor_vermelho;
    int i_cor_verde;
    int i_cor_azul;
};

#endif // TELA_CONFIGURAR_LEGENDA_ESTOQUE_H
