#ifndef TELA_CONTAS_H
#define TELA_CONTAS_H

#include <QMainWindow>

#include <QDate>
#include <iostream>
#include <string>

namespace Ui {
class tela_contas;
}

class tela_contas : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_contas(QWidget *parent = 0);
    ~tela_contas();
    void definir_icone_janela(QPixmap logo);
    void mostrar_fluxo_caixa(void);
    
private:
    Ui::tela_contas *ui;
    QPixmap logomarca;
};

#endif // TELA_CONTAS_H
