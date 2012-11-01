#ifndef TELA_COMPRAR_H
#define TELA_COMPRAR_H

#include <QDialog>
#include "tela_listar_fornecedores.h"
#include "fornecedor.h"

namespace Ui {
class tela_comprar;
}

class tela_comprar : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_comprar(QWidget *parent = 0);
    ~tela_comprar();
    void definir_icone_janela(QPixmap logo);
    
private slots:
    void on_btn_buscar_fornecedor_clicked();

private:
    Ui::tela_comprar *ui;
    tela_listar_fornecedores tl_listar_fornecedores;
    fornecedor * fornecedor_atual;
    QPixmap logomarca;
};

#endif // TELA_COMPRAR_H
