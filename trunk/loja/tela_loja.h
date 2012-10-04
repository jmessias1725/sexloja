#ifndef TELA_LOJA_H
#define TELA_LOJA_H

#include <QDialog>
#include "imagem.h"
#include "funcoes_extras.h"
#include "loja.h"
#include "tela_editar_loja.h"

namespace Ui {
class tela_loja;
}

class tela_loja : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_loja(QWidget *parent = 0);
    ~tela_loja();
    void definir_dados_loja(loja *cad_loja);
    loja * retorna_novo_cadastro(void);
    void definir_icone_janela(QPixmap logo);

private slots:
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    void on_btn_editar_loja_clicked();
    
private:
    Ui::tela_loja *ui;
    tela_editar_loja tl_editar_loja;
    QString nome_arquivo_imagem;
    loja *informacao_cad_loja;
    funcoes_extras funcoes;
    std::vector< std::string > lista_telefone;
    std::vector< std::string > lista_operadora;
    QPixmap logomarca;
};

#endif // TELA_LOJA_H
