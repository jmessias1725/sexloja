#ifndef TELA_AVISO_ALTERAR_DADOS_H
#define TELA_AVISO_ALTERAR_DADOS_H

#include <QDialog>

namespace Ui {
class tela_aviso_alterar_dados;
}

class tela_aviso_alterar_dados : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_aviso_alterar_dados(QWidget *parent = 0);
    ~tela_aviso_alterar_dados();
    
private:
    Ui::tela_aviso_alterar_dados *ui;
};

#endif // TELA_AVISO_ALTERAR_DADOS_H
