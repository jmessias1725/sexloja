#ifndef TELA_CONTAS_H
#define TELA_CONTAS_H

#include <QMainWindow>

#include <QDate>
#include <iostream>
#include <string>
#include "conexao_bd.h"
#include "funcoes_extras.h"
#include "despesa.h"
#include "ganho.h"
#include "venda.h"
#include "compra.h"
#include "tela_nota_venda.h"

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
    void mostrar_lista_ganhos(void);
    void mostrar_lista_notas_venda(void);
    void mostrar_lista_notas_compra(void);
    void limpar_dados(void);
    void closeEvent( QCloseEvent * event );
    
private slots:
    void on_btn_buscar_clicked();
    void on_btn_buscar_cp_clicked();
    void on_btn_filtrar_cp_clicked();
    void on_btn_limpar_cp_clicked();
    void on_data_inicial_cp_editingFinished();
    void on_btn_buscar_cr_clicked();
    void on_btn_filtrar_cr_clicked();
    void on_btn_limparcr_clicked();
    void on_data_inicial_cr_editingFinished();
    void on_btn_buscar_nota_venda_clicked();
    void on_btn_buscar_nota_compra_clicked();
    void on_tw_lista_notas_venda_doubleClicked(const QModelIndex &index);

private:
    Ui::tela_contas *ui;
    QPixmap logomarca;
    std::vector< double > lista_ganhos_valores;
    std::vector< double > lista_despesas_valores;
    std::vector< despesa* > lista_despesa;
    std::vector< despesa* > aux_lista_despesa;
    std::vector< ganho* > lista_ganho;
    std::vector< ganho* > aux_lista_ganho;
    std::vector< venda* > lista_venda;
    std::vector< compra* > lista_compra;
    std::vector< QString > lista_nome_clientes;
    std::vector< QString > lista_nome_fornecedores;
    QString aux_cons_id_despesa;
    QString aux_cons_id_ganhos;
    QString aux_cons_status;
    QString aux_cons_status_ganhos;
    QStandardItemModel *modelo;
    tela_nota_venda tl_nota_venda;
};

#endif // TELA_CONTAS_H
