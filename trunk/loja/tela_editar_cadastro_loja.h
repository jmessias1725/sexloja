#ifndef TELA_EDITAR_CADASTRO_LOJA_H
#define TELA_EDITAR_CADASTRO_LOJA_H

#include <QDialog>

namespace Ui {
class tela_editar_cadastro_loja;
}

class tela_editar_cadastro_loja : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_editar_cadastro_loja(QWidget *parent = 0);
    ~tela_editar_cadastro_loja();
    
private:
    Ui::tela_editar_cadastro_loja *ui;
};

#endif // TELA_EDITAR_CADASTRO_LOJA_H
