#ifndef TELA_CONFIGURAR_LEGENDA_ESTOQUE_H
#define TELA_CONFIGURAR_LEGENDA_ESTOQUE_H

#include <QDialog>

namespace Ui {
class tela_configurar_legenda_estoque;
}

class tela_configurar_legenda_estoque : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_configurar_legenda_estoque(QWidget *parent = 0);
    ~tela_configurar_legenda_estoque();
    void definir_icone_janela(QPixmap logo);
    
private:
    Ui::tela_configurar_legenda_estoque *ui;
    QPixmap logomarca;
};

#endif // TELA_CONFIGURAR_LEGENDA_ESTOQUE_H
