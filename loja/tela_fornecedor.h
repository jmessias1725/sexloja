#ifndef TELA_FORNECEDOR_H
#define TELA_FORNECEDOR_H

#include <QDialog>
#include "tela_cadastro_fornecedor.h"
#include "funcoes_extras.h"
#include "fornecedor.h"
#include "tela_editar_fornecedor.h"

namespace Ui {
class tela_fornecedor;
}

class tela_fornecedor : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_fornecedor(QWidget *parent = 0);
    ~tela_fornecedor();
    void definir_dados_fornecedor(fornecedor *cad_fornecedor);
    fornecedor * retorna_novo_cadastro(void);
    void definir_icone_janela(QPixmap logo);

private slots:
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    void on_btn_editar_fornecedor_clicked();
    void on_btn_adicionar_fornecedor_clicked();
    void on_btn_remover_fornecedor_clicked();

private:
    Ui::tela_fornecedor *ui;
    tela_cadastro_fornecedor tl_cadastro_fornecedor;
    tela_editar_fornecedor tl_editar_fornecedor;
    fornecedor *informacoes_fornecedor;
    funcoes_extras funcoes;
    QPixmap logomarca;
};

#endif // TELA_FORNECEDOR_H
