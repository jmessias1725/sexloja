#ifndef TELA_PAGAMENTO_H
#define TELA_PAGAMENTO_H

#include <QDialog>
#include "funcoes_extras.h"

namespace Ui {
class tela_pagamento;
}

class tela_pagamento : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_pagamento(QWidget *parent = 0);
    ~tela_pagamento();
    void definir_icone_janela(QPixmap logo);
    void definir_dados(QString valor);
    
private:
    Ui::tela_pagamento *ui;
    QPixmap logomarca;
};

#endif // TELA_PAGAMENTO_H
