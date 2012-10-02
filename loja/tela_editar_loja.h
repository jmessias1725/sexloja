#ifndef TELA_EDITAR_LOJA_H
#define TELA_EDITAR_LOJA_H

#include <QDialog>
#include "funcoes_extras.h"
#include "loja.h"
#include "cep.h"

namespace Ui {
class tela_editar_loja;
}

class tela_editar_loja : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_editar_loja(QWidget *parent = 0);
    ~tela_editar_loja();
    void definir_dados_loja(loja *cad_loja);
    loja * retorna_novo_cadastro(void);

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
    Ui::tela_editar_loja *ui;
    QString nome_arquivo_imagem;
    QDialog *tela_cadastro_email;
    QDialog *tela_cadastro_telefone;
    QLineEdit *le_telefone;//pertence a tela de cadastro de telefone
    QComboBox *cb_operadora;//pertence a tela de cadastro de email

    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;
    std::vector< std::string > lista_telefone_a_remover;
    std::vector< std::string > lista_telefone_a_adicionar;
    std::vector< std::string > lista_operadora_a_adicionar;
    loja *informacao_cad_loja;
    cep *aux_cep;
    funcoes_extras funcao;
    int largura;
    int altura;
};

#endif // TELA_EDITAR_LOJA_H
