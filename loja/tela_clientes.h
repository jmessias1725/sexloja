#ifndef TELA_CLIENTES_H
#define TELA_CLIENTES_H

#include <QMainWindow>
#include "tela_cadastro_cliente.h"
#include "funcoes_extras.h"
#include "cliente.h"
#include "tela_editar_cliente.h"

namespace Ui {
class tela_clientes;
}

class tela_clientes : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_clientes(QWidget *parent = 0);
    ~tela_clientes();

    void definir_dados_cliente(cliente *cad_cliente);

    void closeEvent( QCloseEvent * event );
    
private slots:
    void on_actionEditar_Contato_triggered();

    void on_actionAdicionar_Contato_triggered();

private:
    Ui::tela_clientes *ui;
    tela_cadastro_cliente tl_cadastro_clientes;
    tela_editar_cliente tl_editar_cliente;
    cliente *informacoes_cliente;
    funcoes_extras funcoes;
};

#endif // TELA_CLIENTES_H
