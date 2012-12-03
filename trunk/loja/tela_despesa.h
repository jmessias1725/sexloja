#ifndef TELA_DESPESA_H
#define TELA_DESPESA_H

#include <QDialog>

namespace Ui {
class tela_despesa;
}

class tela_despesa : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_despesa(QWidget *parent = 0);
    ~tela_despesa();
    
private:
    Ui::tela_despesa *ui;
};

#endif // TELA_DESPESA_H
