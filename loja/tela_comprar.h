#ifndef TELA_COMPRAR_H
#define TELA_COMPRAR_H

#include <QDialog>

namespace Ui {
class tela_comprar;
}

class tela_comprar : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_comprar(QWidget *parent = 0);
    ~tela_comprar();
    
private:
    Ui::tela_comprar *ui;
};

#endif // TELA_COMPRAR_H
