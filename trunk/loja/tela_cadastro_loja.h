#ifndef TELA_CADASTRO_LOJA_H
#define TELA_CADASTRO_LOJA_H

#include <QDialog>
#include <QFileDialog>
#include <iostream>

#include "funcoes_extras.h"
#include "imagem.h"
#include "cep.h"
#include "loja.h"

namespace Ui {
class tela_cadastro_loja;
}

class tela_cadastro_loja : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_cadastro_loja(QWidget *parent = 0);
    ~tela_cadastro_loja();    
    
private slots:
    void on_btn_adicionar_logo_clicked();
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
    Ui::tela_cadastro_loja *ui;
    QString nome_arquivo_imagem;
    QDialog *tela_cadastro_email;
    QDialog *tela_cadastro_telefone;
    QLineEdit *le_telefone;//pertence a tela de cadastro de telefone
    QComboBox *cb_operadora;//pertence a tela de cadastro de email

    int largura;
    int altura;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;
    QString cnpj_loja;
    loja *cad_loja;
    funcoes_extras funcao;
    cep *aux_cep;
};

#endif // TELA_CADASTRO_LOJA_H
