#ifndef TELA_NOTA_VENDA_H
#define TELA_NOTA_VENDA_H

#include <QDialog>

#include "venda.h"
#include "cliente.h"
#include "conexao_bd.h"
#include "lista_venda.h"
#include "funcoes_extras.h"
#include "ganho.h"

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
    void buscar_dados(void);
    void mostrar_dados(void);
    
private:
    Ui::tela_nota_venda *ui;
    QPixmap logomarca;
    venda *venda_atual;
    cliente *cliente_atual;
    std::vector< lista_venda* > lt_venda;
    std::vector< ganho* > lt_ganho;
};

#endif // TELA_NOTA_VENDA_H
