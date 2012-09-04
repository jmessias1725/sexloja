#ifndef TELA_CADASTRO_CLIENTE_H
#define TELA_CADASTRO_CLIENTE_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QtGui>
#include <QDialog>

#include "cep.h"

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
    void on_tb_menos_email_clicked();

    void on_tb_mais_email_clicked();

    void adicionar_email();

    void cancelar_email();

    void on_tb_mais_telefone_clicked();

    void definir_mascara_telefone();

    void adicionar_telefone();

    void cancelar_telefone();

    void on_le_cpf_editingFinished();

private:
    Ui::tela_cadastro_cliente *ui;
    QDialog* Qdialog_email;
    QDialog *tela_cadastro_telefone;
    QLineEdit *le_email;
    QLineEdit *le_telefone;
    QString cpf_cliente;
    QComboBox *cb_operadora;
    std::vector< std::string > lista_email;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;
    cep *cep_usuario;
};

#endif // TELA_CADASTRO_CLIENTE_H
