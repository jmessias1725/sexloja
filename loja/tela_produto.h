#ifndef TELA_PRODUTO_H
#define TELA_PRODUTO_H

#include <QDialog>
#include "tela_cadastro_produto.h"
#include "tela_editar_produto.h"
#include "his_entradas.h"
#include "his_saidas.h"
#include "produto.h"
#include "funcoes_extras.h"
#include "imagem.h"

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
    void buscar_informacoes_his_estoque_produto(int id);
    void buscar_informacoes_his_entrada(int id);
    void mostrar_informacoes_his_entrada(std::vector< his_entradas * > aux_his);

    void buscar_informacoes_his_saida(int id);
    void mostrar_informacoes_his_saida(std::vector< his_saidas * > aux_his);

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
    imagem *imagem_produto;
    funcoes_extras funcoes;
    QPixmap logomarca;
    std::vector< his_entradas * > informacoes_his_entrada;
};

#endif // TELA_PRODUTO_H
