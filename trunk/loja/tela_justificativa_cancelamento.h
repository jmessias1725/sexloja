#ifndef TELA_JUSTIFICATIVA_CANCELAMENTO_H
#define TELA_JUSTIFICATIVA_CANCELAMENTO_H

#include <QDialog>
#include <QString>

namespace Ui {
class tela_justificativa_cancelamento;
}

class tela_justificativa_cancelamento : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_justificativa_cancelamento(QWidget *parent = 0);
    ~tela_justificativa_cancelamento();
    void definir_icone_janela(QPixmap logo);
    QString retorna_justificativa(void);
    
private slots:
    void on_btn_confirmar_clicked();
    void on_btn_cancelar_clicked();

private:
    Ui::tela_justificativa_cancelamento *ui;
    QPixmap logomarca;
};

#endif // TELA_JUSTIFICATIVA_CANCELAMENTO_H
