#ifndef TELA_CLIENTES_H
#define TELA_CLIENTES_H

#include <QDialog>
#include "tela_cadastro_cliente.h"
#include "funcoes_extras.h"
#include "cliente.h"
#include "tela_editar_cliente.h"

namespace Ui {
class tela_clientes;
}

class tela_clientes : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_clientes(QWidget *parent = 0);
    ~tela_clientes();
    void definir_dados_cliente(cliente *cad_cliente);
    cliente * retorna_novo_cadastro(void);

private slots:
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    void on_btn_editar_cliente_clicked();
    void on_btn_adicionar_cliente_clicked();

    void on_btn_remover_cliente_clicked();

private:
    Ui::tela_clientes *ui;
    tela_cadastro_cliente tl_cadastro_clientes;
    tela_editar_cliente tl_editar_cliente;
    cliente *informacoes_cliente;
    funcoes_extras funcoes;
};

#endif // TELA_CLIENTES_H
