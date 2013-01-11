#ifndef TELA_CONTAS_H
#define TELA_CONTAS_H

#include <QMainWindow>

#include <QDate>
#include <iostream>
#include <string>
#include "conexao_bd.h"
#include "funcoes_extras.h"
#include "despesa.h"

namespace Ui {
class tela_contas;
}

class tela_contas : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_contas(QWidget *parent = 0);
    ~tela_contas();
    void definir_icone_janela(QPixmap logo);
    void mostrar_fluxo_caixa(void);
    void busca_lista_movimento_mes(QDate data_consultar);
    void mostrar_lista_despesas(void);
    
private slots:
    void on_btn_buscar_clicked();

    void on_btn_buscar_cp_clicked();

    void on_btn_filtrar_cp_clicked();

    void on_btn_limpar_cp_clicked();

    void on_data_inicial_cp_editingFinished();

private:
    Ui::tela_contas *ui;
    QPixmap logomarca;
    std::vector< double > lista_ganhos_valores;
    std::vector< double > lista_despesas_valores;
    std::vector< despesa* > lista_despesa;
    std::vector< despesa* > aux_lista_despesa;
    QString aux_cons_id_despesa;
    QString aux_cons_status;
    QStandardItemModel *modelo;
};

#endif // TELA_CONTAS_H