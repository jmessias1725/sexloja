#ifndef TELA_DEFINIR_VALOR_VENDA_H
#define TELA_DEFINIR_VALOR_VENDA_H

#include <QDialog>
#include "funcoes_extras.h"

namespace Ui {
class tela_definir_valor_venda;
}

class tela_definir_valor_venda : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_definir_valor_venda(QWidget *parent = 0);
    ~tela_definir_valor_venda();
    void definir_dados(double valor_ven, int quan);
    void definir_icone_janela(QPixmap logo);
    int retorna_quantidade(void);
    double retorna_valor_venda(void);

private slots:
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    void on_btn_cancelar_clicked();
    void on_le_valor_venda_editingFinished();
    void on_btn_confirmar_clicked();

private:
    Ui::tela_definir_valor_venda *ui;
    QPixmap logomarca;
    int quantidade;
    double valor_venda;
};

#endif // TELA_DEFINIR_VALOR_VENDA_H
