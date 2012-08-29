#ifndef TELA_CADASTRO_CLIENTE_H
#define TELA_CADASTRO_CLIENTE_H

#include <QMainWindow>
#include <iostream>
#include <string>

#include "tela_cadastro_email.h"


namespace Ui {
class tela_cadastro_cliente;
}

class tela_cadastro_cliente : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_cadastro_cliente(QWidget *parent = 0);
    ~tela_cadastro_cliente();
    
private slots:
    void on_le_cep_editingFinished();

    void on_tb_menos_email_clicked();

    void on_tb_mais_email_clicked();

private:
    Ui::tela_cadastro_cliente *ui;
    tela_cadastro_email tl_email;
};

#endif // TELA_CADASTRO_CLIENTE_H
