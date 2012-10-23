#ifndef TELA_EDITAR_PRODUTO_H
#define TELA_EDITAR_PRODUTO_H

#include <QDialog>
#include <QFileDialog>
#include <iostream>

#include "funcoes_extras.h"
#include "imagem.h"
#include "produto.h"

namespace Ui {
class tela_editar_produto;
}

class tela_editar_produto : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_editar_produto(QWidget *parent = 0);
    ~tela_editar_produto();
    void definir_icone_janela(QPixmap logo);
    void definir_dados_produto(produto *cad_produto);
    produto * retorna_novo_cadastro(void);

private slots:
    void on_btn_adicionar_imagem_clicked();
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();
    void closeEvent( QCloseEvent * event );
    void on_le_nome_textChanged(const QString &arg1);
    void on_le_fabricante_textChanged(const QString &arg1);
    void on_le_valor_compra_editingFinished();
    void on_le_valor_venda_editingFinished();
    void limpar_tela(void);
    
private:
    Ui::tela_editar_produto *ui;
    QString nome_arquivo_imagem;
    int largura;
    int altura;
    QPixmap logomarca;
    funcoes_extras funcao;
    produto *informacoes_produto;
    bool alterou_imgem;
};

#endif // TELA_EDITAR_PRODUTO_H
