#ifndef TELA_LISTAR_CLIENTES_H
#define TELA_LISTAR_CLIENTES_H

#include <QDialog>

namespace Ui {
class tela_listar_clientes;
}

class tela_listar_clientes : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_listar_clientes(QWidget *parent = 0);
    ~tela_listar_clientes();
    
private:
    Ui::tela_listar_clientes *ui;
};

#endif // TELA_LISTAR_CLIENTES_H
