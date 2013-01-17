#ifndef TELA_LISTAR_FORNECEDORES_H
#define TELA_LISTAR_FORNECEDORES_H

#include <QDialog>
#include <QtSql>
#include <QString>
#include <iostream>

#include "conexao_bd.h"
#include "tela_fornecedor.h"
#include "fornecedor.h"
#include "funcoes_extras.h"
#include "tela_cadastro_fornecedor.h"

namespace Ui {
class tela_listar_fornecedores;
}

class tela_listar_fornecedores : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_listar_fornecedores(QWidget *parent = 0);
    ~tela_listar_fornecedores();
    void limpar_dados_tela(void);
    void definir_icone_janela(QPixmap logo);
    void alterar_editar(bool edit);
    fornecedor * retorna_fornecedor(void);

private slots:
    void on_le_telefone_editingFinished();
    void on_btn_cancelar_clicked();
    void on_btn_buscar_clicked();
    void on_tv_fornecedores_doubleClicked(const QModelIndex &index);
    void on_btn_limpar_clicked();
    void closeEvent( QCloseEvent * event );
    void on_btn_adicionar_fornecedor_clicked();

private:
    Ui::tela_listar_fornecedores *ui;
    std::vector< fornecedor * > lista_fornecedores;
    tela_cadastro_fornecedor tl_cadastro_fornecedor;
    fornecedor *fornecedor_atual;
    tela_fornecedor tl_fornecedor;
    QStandardItemModel *modelo;
    QPixmap logomarca;
    bool editar;
};

#endif // TELA_LISTAR_FORNECEDORES_H
