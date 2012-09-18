#ifndef TELA_LISTAR_CLIENTES_H
#define TELA_LISTAR_CLIENTES_H

#include <QtSql>
#include <QString>
#include <iostream>
#include <QDialog>

#include "conexao_bd.h"
#include "tela_clientes.h"
#include "cliente.h"

namespace Ui {
class tela_listar_clientes;
}

class tela_listar_clientes : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_listar_clientes(QWidget *parent = 0);
    ~tela_listar_clientes();
    
private slots:
    void on_le_telefone_editingFinished();

    void on_btn_cancelar_clicked();

    void on_btn_buscar_clicked();

    void on_tv_clientes_doubleClicked(const QModelIndex &index);

private:
    Ui::tela_listar_clientes *ui;
    tela_clientes tl_cliente;
    QStandardItemModel *modelo;
    QStandardItem *nomes;
    std::vector< cliente * > lista_clientes;
    std::vector< std::string > lista_id;
    std::vector< std::string > lista_nomes;
    std::vector< std::string > lista_cpfs;
    std::vector< std::string > lista_rgs;
    std::vector< std::string > lista_comentario;
    std::vector< std::string > lista_cep;
    std::vector< std::string > lista_rua;
    std::vector< std::string > lista_bairro;
    std::vector< std::string > lista_ponto_referencia;
    std::vector< std::string > lista_cidade;
    std::vector< std::string > lista_uf;
    std::vector< std::string > lista_numero;
    std::vector< std::string > lista_estado;
};

#endif // TELA_LISTAR_CLIENTES_H
