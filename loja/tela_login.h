#ifndef TELA_LOGIN_H
#define TELA_LOGIN_H

#include <QDialog>
#include <iostream>

#include "conexao_bd.h"
#include "usuario.h"
#include "tela_principal.h"
#include "loja.h"

namespace Ui {
class tela_login;
}

class tela_login : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_login(QWidget *parent = 0);
    ~tela_login();

private slots:
    void on_btn_cancelar_clicked();
    void on_btn_confrimar_clicked();

private:
    Ui::tela_login *ui;
    usuario *informacao_usuario;
    loja *informacao_loja;
    bool usuario_logado;
    tela_principal tl_principal;
};

#endif // TELA_LOGIN_H
