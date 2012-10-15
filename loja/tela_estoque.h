#ifndef TELA_ESTOQUE_H
#define TELA_ESTOQUE_H

#include <QMainWindow>
#include <QtSql>
#include <QString>
#include <iostream>

#include "conexao_bd.h"
#include "funcoes_extras.h"
#include "produto.h"

namespace Ui {
class tela_estoque;
}

class tela_estoque : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_estoque(QWidget *parent = 0);
    ~tela_estoque();
    void definir_icone_janela(QPixmap logo);
    void listar_produtos(void);
    
private:
    Ui::tela_estoque *ui;
    QPixmap logomarca;
    std::vector< produto* > lista_produtos;
};

#endif // TELA_ESTOQUE_H
