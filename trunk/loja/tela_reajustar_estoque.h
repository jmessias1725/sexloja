#ifndef TELA_REAJUSTAR_ESTOQUE_H
#define TELA_REAJUSTAR_ESTOQUE_H

#include <QDialog>
#include <QMessageBox>
#include "produto.h"

namespace Ui {
class tela_reajustar_estoque;
}

class tela_reajustar_estoque : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_reajustar_estoque(QWidget *parent = 0);
    ~tela_reajustar_estoque();
    void definir_icone_janela(QPixmap logo);
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    
private slots:
    void on_btn_cancelar_clicked();
    void on_btn_confirmar_clicked();

private:
    Ui::tela_reajustar_estoque *ui;
    QPixmap logomarca;
};

#endif // TELA_REAJUSTAR_ESTOQUE_H
