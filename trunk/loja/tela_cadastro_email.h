#ifndef TELA_CADASTRO_EMAIL_H
#define TELA_CADASTRO_EMAIL_H

#include <QWidget>
#include <string>
#include <QtGui/QCloseEvent>

namespace Ui {
class tela_cadastro_email;
}

class tela_cadastro_email : public QWidget
{
    Q_OBJECT
    
public:
    explicit tela_cadastro_email(QWidget *parent = 0);
    ~tela_cadastro_email();
    QString retorna_email();

private slots:
    void on_btn_confirmar_clicked();

private:
    Ui::tela_cadastro_email *ui;
    QString novo_email;
};

#endif // TELA_CADASTRO_EMAIL_H
