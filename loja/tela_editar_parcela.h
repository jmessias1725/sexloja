#ifndef TELA_EDITAR_PARCELA_H
#define TELA_EDITAR_PARCELA_H

#include <QDialog>
#include <QDate>

#include "parcela.h"
#include "funcoes_extras.h"
#include "ganho.h"
#include "despesa.h"

namespace Ui {
class tela_editar_parcela;
}

class tela_editar_parcela : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_editar_parcela(QWidget *parent = 0);
    ~tela_editar_parcela();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(ganho *par_atual);
    void definir_dados_des(despesa *par_atual);
    ganho * retorna_parcela(void);
    despesa * retorna_parcela_des(void);

private slots:
    void on_le_valor_editingFinished();
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();
    
private:
    Ui::tela_editar_parcela *ui;
    QPixmap logomarca;
    ganho *parcela_atual;
    despesa *parcela_atual_des;
    bool eh_despesa;
};

#endif // TELA_EDITAR_PARCELA_H
