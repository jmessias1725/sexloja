#ifndef TELA_PRINCIPAL_H
#define TELA_PRINCIPAL_H

#include <QMainWindow>
#include <iostream>
#include "tela_clientes.h"
#include "tela_cadastro_cliente.h"
#include "tela_listar_clientes.h"
#include "tela_cadastro_fornecedor.h"
#include "tela_listar_fornecedores.h"
#include "tela_cadastro_produto.h"
#include "tela_loja.h"
#include "tela_estoque.h"
#include "loja.h"
#include "usuario.h"

namespace Ui {
class tela_principal;
}

class tela_principal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_principal(QWidget *parent = 0);
    ~tela_principal();
    void dados_loja(loja *info_loja);
    void dados_usuario(usuario *info_usuario);

private slots:
    void on_consultar_clientes_triggered();
    void on_buscar_clientes_triggered();
    void on_botao_sair_triggered();
    void on_Cadastrar_cliente_triggered();
    void on_cadastrar_forncecedor_triggered();
    void on_buscar_fornecedores_triggered();
    void on_consultar_fornecedores_triggered();
    void on_Cadastro_da_Loja_triggered();
    void on_cadastrar_produto_triggered();
    void on_Estoque_triggered();

private:
    Ui::tela_principal *ui;
    tela_cadastro_cliente tl_cadastro_clientes;
    tela_listar_clientes tl_listar_clientes;
    tela_cadastro_fornecedor tl_cadastro_fornecedor;
    tela_listar_fornecedores tl_listar_fornecedores;
    tela_cadastro_produto tl_cadastro_produto;
    tela_loja tl_loja;
    tela_estoque tl_estoque;
    loja *informacao_loja;
    usuario *informacao_usuario;
    QPixmap logomarca;
    QLabel *lb_dados_usuario;
    QLabel *lb_data;
    QString data_sistema;
};

#endif // TELA_PRINCIPAL_H