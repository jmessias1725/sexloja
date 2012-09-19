#ifndef TELA_PRINCIPAL_H
#define TELA_PRINCIPAL_H

#include <QMainWindow>
#include <iostream>
#include "tela_clientes.h"
#include "tela_cadastro_cliente.h"
#include "tela_listar_clientes.h"

namespace Ui {
class tela_principal;
}

class tela_principal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_principal(QWidget *parent = 0);
    ~tela_principal();

private slots:

    void on_consultar_clientes_triggered();

    void on_botao_sair_triggered();

    void on_Cadastrar_cliente_triggered();

    void on_buscar_clientes_triggered();

private:
    Ui::tela_principal *ui;
    tela_clientes tl_clientes;
    tela_cadastro_cliente tl_cadastro_clientes;
    tela_listar_clientes tl_listar_clientes;
};

#endif // TELA_PRINCIPAL_H
