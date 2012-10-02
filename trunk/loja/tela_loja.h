#ifndef TELA_LOJA_H
#define TELA_LOJA_H

#include <QDialog>

namespace Ui {
class tela_loja;
}

class tela_loja : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_loja(QWidget *parent = 0);
    ~tela_loja();
    
private:
    Ui::tela_loja *ui;
};

#endif // TELA_LOJA_H
