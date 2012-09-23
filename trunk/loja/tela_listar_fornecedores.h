#ifndef TELA_LISTAR_FORNECEDORES_H
#define TELA_LISTAR_FORNECEDORES_H

#include <QDialog>

namespace Ui {
class tela_listar_fornecedores;
}

class tela_listar_fornecedores : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_listar_fornecedores(QWidget *parent = 0);
    ~tela_listar_fornecedores();
    
private:
    Ui::tela_listar_fornecedores *ui;
};

#endif // TELA_LISTAR_FORNECEDORES_H
