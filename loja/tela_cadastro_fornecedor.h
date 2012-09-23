#ifndef TELA_CADASTRO_FORNECEDOR_H
#define TELA_CADASTRO_FORNECEDOR_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QtGui>
#include <QDialog>
#include <sstream>
#include <vector>

#include "fornecedor.h"
#include "cep.h"
#include "funcoes_extras.h"

namespace Ui {
class tela_cadastro_fornecedor;
}

class tela_cadastro_fornecedor : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_cadastro_fornecedor(QWidget *parent = 0);
    ~tela_cadastro_fornecedor();

private slots:
    void on_tb_menos_email_clicked();
    void on_tb_mais_email_clicked();
    void adicionar_email();
    void cancelar_email();
    void on_tb_mais_telefone_clicked();
    void on_tb_menos_telefone_clicked();
    void definir_mascara_telefone();
    void adicionar_telefone();
    void cancelar_telefone();
    void on_le_cnpj_editingFinished();
    void on_le_cep_editingFinished();
    void on_cb_estado_currentIndexChanged(int index);
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();
    void closeEvent( QCloseEvent * event );

private:
    Ui::tela_cadastro_fornecedor *ui;
    QDialog *tela_cadastro_email;
    QDialog *tela_cadastro_telefone;
    QLineEdit *le_email;//pertence a tela de cadastro de e-mail
    QLineEdit *le_telefone;//pertence a tela de cadastro de telefone
    QComboBox *cb_operadora;//pertence a tela de cadastro de email

    std::vector< std::string > lista_email;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;
    QString cnpj_forncecedor;
    fornecedor *cad_fornecedor;
    funcoes_extras funcao;
    cep *aux_cep;
};

#endif // TELA_CADASTRO_FORNECEDOR_H
