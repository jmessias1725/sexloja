#ifndef TELA_JUSTIFICATIVA_CANCELAMENTO_H
#define TELA_JUSTIFICATIVA_CANCELAMENTO_H

#include <QDialog>

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
    
private:
    Ui::tela_justificativa_cancelamento *ui;
    QPixmap logomarca;
};

#endif // TELA_JUSTIFICATIVA_CANCELAMENTO_H
