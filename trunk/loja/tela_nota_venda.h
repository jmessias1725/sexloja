#ifndef TELA_NOTA_VENDA_H
#define TELA_NOTA_VENDA_H

#include <QDialog>

#include "venda.h"

namespace Ui {
class tela_nota_venda;
}

class tela_nota_venda : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_nota_venda(QWidget *parent = 0);
    ~tela_nota_venda();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(venda *vend);
    
private:
    Ui::tela_nota_venda *ui;
    QPixmap logomarca;
    venda *venda_atual;
};

#endif // TELA_NOTA_VENDA_H
