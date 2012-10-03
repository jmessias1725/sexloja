#ifndef TELA_EDITAR_FORNECEDOR_H
#define TELA_EDITAR_FORNECEDOR_H

#include <QDialog>
#include "funcoes_extras.h"
#include "fornecedor.h"
#include "cep.h"

namespace Ui {
class tela_editar_fornecedor;
}

class tela_editar_fornecedor : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_editar_fornecedor(QWidget *parent = 0);
    ~tela_editar_fornecedor();
    void definir_dados_fornecedor(fornecedor *cad_fornecedor);
    fornecedor * retorna_novo_cadastro(void);
    void closeEvent( QCloseEvent * event );
    void definir_icone_janela(QPixmap logo);

private slots:
    void on_tb_menos_email_clicked();
    void on_tb_mais_email_clicked();
    void adicionar_email();
    void cancelar_email();
    void on_tb_mais_telefone_clicked();
    void definir_mascara_telefone();
    void adicionar_telefone();
    void cancelar_telefone();
    void on_le_cnpj_editingFinished();
    void on_le_cep_editingFinished();
    void on_cb_estado_currentIndexChanged(int index);
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();
    void on_tb_menos_telefone_clicked();
    
private:
    Ui::tela_editar_fornecedor *ui;
    QDialog* tela_cadastro_email;
    QDialog* tela_cadastro_telefone;
    QLineEdit *le_email;
    QLineEdit *le_telefone;
    QString cnpj_fornecedor;
    QComboBox *cb_operadora;
    std::vector< std::string > lista_email;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;
    std::vector< std::string > lista_email_a_remover;
    std::vector< std::string > lista_email_a_adicionar;
    std::vector< std::string > lista_telefone_a_remover;
    std::vector< std::string > lista_telefone_a_adicionar;
    std::vector< std::string > lista_operadora_a_adicionar;
    fornecedor *informacao_cad_fornecedor;
    cep *aux_cep;
    funcoes_extras funcoes;
    QPixmap logomarca;

};

#endif // TELA_EDITAR_FORNECEDOR_H
