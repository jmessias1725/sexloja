#ifndef TELA_LISTAR_CLIENTES_H
#define TELA_LISTAR_CLIENTES_H

#include <QDialog>
#include <QtSql>
#include <QString>
#include <iostream>

#include "conexao_bd.h"
#include "tela_clientes.h"
#include "cliente.h"
#include "funcoes_extras.h"

namespace Ui {
class tela_listar_clientes;
}

class tela_listar_clientes : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_listar_clientes(QWidget *parent = 0);
    ~tela_listar_clientes();
    void limpar_dados_tela(void);
    void definir_icone_janela(QPixmap logo);
    
private slots:
    void on_le_telefone_editingFinished();
    void on_btn_cancelar_clicked();
    void on_btn_buscar_clicked();
    void on_tv_clientes_doubleClicked(const QModelIndex &index);
    void on_btn_limpar_clicked();
    void closeEvent( QCloseEvent * event );

private:
    Ui::tela_listar_clientes *ui;
    tela_clientes tl_cliente;
    std::vector< cliente * > lista_clientes;
    QStandardItemModel *modelo;
    QPixmap logomarca;
};

#endif // TELA_LISTAR_CLIENTES_H