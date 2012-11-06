#ifndef TELA_DEFINIR_VALOR_H
#define TELA_DEFINIR_VALOR_H

#include <QDialog>
#include "funcoes_extras.h"

namespace Ui {
class tela_definir_valor;
}

class tela_definir_valor : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_definir_valor(QWidget *parent = 0);
    ~tela_definir_valor();
    void definir_dados(float valor_ven, float cus, int quan);
    void definir_icone_janela(QPixmap logo);
    int retorna_quantidade(void);
    float retorna_valor_venda(void);
    float retorna_custo(void);
    
private slots:
    void closeEvent( QCloseEvent * event );
    void limpar_dados(void);
    void on_btn_cancelar_clicked();
    void on_le_valor_venda_editingFinished();
    void on_le_custo_medio_editingFinished();
    void on_btn_confirmar_clicked();

private:
    Ui::tela_definir_valor *ui;
    QPixmap logomarca;
    int quantidade;
    float valor_venda;
    float custo;
};

#endif // TELA_DEFINIR_VALOR_H
