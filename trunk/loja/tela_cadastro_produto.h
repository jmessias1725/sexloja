#ifndef TELA_CADASTRO_PRODUTO_H
#define TELA_CADASTRO_PRODUTO_H

#include <QDialog>
#include <QFileDialog>
#include <iostream>

#include "funcoes_extras.h"
#include "imagem.h"
#include "produto.h"

namespace Ui {
class tela_cadastro_produto;
}

class tela_cadastro_produto : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_cadastro_produto(QWidget *parent = 0);
    ~tela_cadastro_produto();
    void definir_icone_janela(QPixmap logo);

private slots:
    void on_btn_adicionar_imagem_clicked();
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();
    void closeEvent( QCloseEvent * event );

private:
    Ui::tela_cadastro_produto *ui;
    QString nome_arquivo_imagem;
    int largura;
    int altura;
    QPixmap logomarca;
    produto *cad_produto;
};

#endif // TELA_CADASTRO_PRODUTO_H
