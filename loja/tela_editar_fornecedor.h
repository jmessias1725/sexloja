#ifndef TELA_EDITAR_FORNECEDOR_H
#define TELA_EDITAR_FORNECEDOR_H

#include <QDialog>

namespace Ui {
class tela_editar_fornecedor;
}

class tela_editar_fornecedor : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_editar_fornecedor(QWidget *parent = 0);
    ~tela_editar_fornecedor();
    
private:
    Ui::tela_editar_fornecedor *ui;
};

#endif // TELA_EDITAR_FORNECEDOR_H
