#ifndef TELA_CADASTRO_PRODUTO_H
#define TELA_CADASTRO_PRODUTO_H

#include <QDialog>

namespace Ui {
class tela_cadastro_produto;
}

class tela_cadastro_produto : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_cadastro_produto(QWidget *parent = 0);
    ~tela_cadastro_produto();
    
private:
    Ui::tela_cadastro_produto *ui;
};

#endif // TELA_CADASTRO_PRODUTO_H
