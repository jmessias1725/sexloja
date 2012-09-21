#ifndef TELA_EDITAR_CLIENTE_H
#define TELA_EDITAR_CLIENTE_H

#include <QDialog>
#include "funcoes_extras.h"
#include "cliente.h"
#include "cep.h"

namespace Ui {
class tela_editar_cliente;
}

class tela_editar_cliente : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_editar_cliente(QWidget *parent = 0);
    ~tela_editar_cliente();
    void definir_dados_cliente(cliente *cad_cliente);
    cliente * retorna_novo_cadastro(void);
    void closeEvent( QCloseEvent * event );

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
    void on_le_cep_editingFinished();
    void on_cb_estado_currentIndexChanged(int index);
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();
    void on_tb_menos_telefone_clicked();

private:
    Ui::tela_editar_cliente *ui;
    QDialog* Qdialog_email;
    QDialog *tela_cadastro_telefone;
    QLineEdit *le_email;
    QLineEdit *le_telefone;
    QString cpf_cliente;
    QComboBox *cb_operadora;
    std::vector< std::string > lista_email;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;
    std::vector< std::string > lista_email_a_remover;
    std::vector< std::string > lista_telefone_a_remover;
    cliente *informacao_cad_cliente;
    cep *aux_cep;
    funcoes_extras funcoes;
};

#endif // TELA_EDITAR_CLIENTE_H
