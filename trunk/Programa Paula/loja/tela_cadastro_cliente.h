#ifndef TELA_CADASTRO_CLIENTE_H
#define TELA_CADASTRO_CLIENTE_H

#include <QMainWindow>

namespace Ui {
class tela_cadastro_cliente;
}

class tela_cadastro_cliente : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_cadastro_cliente(QWidget *parent = 0);
    ~tela_cadastro_cliente();
    
private:
    Ui::tela_cadastro_cliente *ui;
};

#endif // TELA_CADASTRO_CLIENTE_H
