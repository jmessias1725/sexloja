#ifndef TELA_PRINCIPAL_H
#define TELA_PRINCIPAL_H

#include <QMainWindow>
#include <iostream>
#include "tela_clientes.h"
#include "tela_cadastro_cliente.h"
#include "tela_listar_clientes.h"
#include "tela_cadastro_fornecedor.h"
#include "tela_listar_fornecedores.h"
#include "tela_loja.h"
#include "loja.h"

namespace Ui {
class tela_principal;
}

class tela_principal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_principal(QWidget *parent = 0);
    ~tela_principal();
    void definir_dados_loja(loja *info_loja);

private slots:
    void on_consultar_clientes_triggered();
    void on_buscar_clientes_triggered();
    void on_botao_sair_triggered();
    void on_Cadastrar_cliente_triggered();
    void on_cadastrar_forncecedor_triggered();
    void on_buscar_fornecedores_triggered();
    void on_consultar_fornecedores_triggered();
    void on_Cadastro_da_Loja_triggered();

private:
    Ui::tela_principal *ui;
    tela_cadastro_cliente tl_cadastro_clientes;
    tela_listar_clientes tl_listar_clientes;
    tela_cadastro_fornecedor tl_cadastro_fornecedor;
    tela_listar_fornecedores tl_listar_fornecedores;
    tela_loja tl_loja;
    loja *informacao_loja;
    QPixmap logomarca;
};

#endif // TELA_PRINCIPAL_H
