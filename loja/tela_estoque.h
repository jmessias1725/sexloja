#ifndef TELA_ESTOQUE_H
#define TELA_ESTOQUE_H

#include <QMainWindow>

namespace Ui {
class tela_estoque;
}

class tela_estoque : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_estoque(QWidget *parent = 0);
    ~tela_estoque();
    
private:
    Ui::tela_estoque *ui;
};

#endif // TELA_ESTOQUE_H
