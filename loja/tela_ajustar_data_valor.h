#ifndef TELA_AJUSTAR_DATA_VALOR_H
#define TELA_AJUSTAR_DATA_VALOR_H

#include <QDialog>
#include <QDate>

#include "parcela.h"
#include "funcoes_extras.h"

namespace Ui {
class tela_ajustar_data_valor;
}

class tela_ajustar_data_valor : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_ajustar_data_valor(QWidget *parent = 0);
    ~tela_ajustar_data_valor();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(parcela *par_atual);
    parcela * retorna_parcela(void);
    
private slots:
    void on_le_valor_editingFinished();
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();

private:
    Ui::tela_ajustar_data_valor *ui;
    QPixmap logomarca;
    parcela *parcela_atual;
};

#endif // TELA_AJUSTAR_DATA_VALOR_H
