#ifndef TELA_PRODUTO_H
#define TELA_PRODUTO_H

#include <QDialog>
#include "tela_cadastro_produto.h"
#include "tela_editar_produto.h"
#include "produto.h"
#include "funcoes_extras.h"

namespace Ui {
class tela_produto;
}

class tela_produto : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_produto(QWidget *parent = 0);
    ~tela_produto();
    void definir_dados_produto(produto *cad_produto);
    produto * retorna_novo_cadastro(void);
    void definir_icone_janela(QPixmap logo);

private slots:
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    
    void on_btn_editar_produto_clicked();

    void on_btn_adicionar_produto_clicked();

    void on_btn_remover_produto_clicked();

private:
    Ui::tela_produto *ui;
    tela_cadastro_produto tl_cadastro_produto;
    tela_editar_produto tl_editar_produto;
    produto *informacoes_produto;
    funcoes_extras funcoes;
    QPixmap logomarca;
};

#endif // TELA_PRODUTO_H
