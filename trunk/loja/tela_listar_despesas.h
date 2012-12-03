#ifndef TELA_LISTAR_DESPESAS_H
#define TELA_LISTAR_DESPESAS_H

#include <QDialog>
#include <QtSql>
#include <QString>
#include <iostream>
#include <QStandardItemModel>

#include "conexao_bd.h"
#include "funcoes_extras.h"
#include "despesa.h"

namespace Ui {
class tela_listar_despesas;
}

class tela_listar_despesas : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_listar_despesas(QWidget *parent = 0);
    ~tela_listar_despesas();
    void limpar_dados_tela(void);
    void definir_icone_janela(QPixmap logo);

private slots:
    void mostrar_lista_despesas();
    void on_btn_cancelar_clicked();
    void on_btn_buscar_clicked();
    void on_btn_limpar_clicked();
    void closeEvent( QCloseEvent * event );
    
    void on_data_inicial_editingFinished();

private:
    Ui::tela_listar_despesas *ui;
    std::vector< despesa* > lista_despesa;
    std::vector< despesa* > aux_lista_despesa;
    QString aux_cons_id_despesa;
    QStandardItemModel *modelo;
    QPixmap logomarca;
};

#endif // TELA_LISTAR_DESPESAS_H
