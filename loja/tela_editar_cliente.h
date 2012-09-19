#ifndef TELA_EDITAR_CLIENTE_H
#define TELA_EDITAR_CLIENTE_H

#include <QDialog>
#include "funcoes_extras.h"
#include "cliente.h"

namespace Ui {
class tela_editar_cliente;
}

class tela_editar_cliente : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_editar_cliente(QWidget *parent = 0);
    ~tela_editar_cliente();
    void definir_dados_cliente(cliente *cad_cliente);
    
private:
    Ui::tela_editar_cliente *ui;
};

#endif // TELA_EDITAR_CLIENTE_H
