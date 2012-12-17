#ifndef TELA_VENDER_H
#define TELA_VENDER_H

#include <QDialog>
#include "funcoes_extras.h"

namespace Ui {
class tela_vender;
}

class tela_vender : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_vender(QWidget *parent = 0);
    ~tela_vender();
    void definir_icone_janela(QPixmap logo);
    
private:
    Ui::tela_vender *ui;
    QPixmap logomarca;
};

#endif // TELA_VENDER_H
