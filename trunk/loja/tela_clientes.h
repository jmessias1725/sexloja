#ifndef TELA_CLIENTES_H
#define TELA_CLIENTES_H

#include <QMainWindow>
#include "tela_cadastro_cliente.h"

namespace Ui {
class tela_clientes;
}

class tela_clientes : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_clientes(QWidget *parent = 0);
    ~tela_clientes();
    
private slots:
    void on_actionEditar_Contato_triggered();

private:
    Ui::tela_clientes *ui;
    tela_cadastro_cliente tl_cadastro_clientes;
};

#endif // TELA_CLIENTES_H
