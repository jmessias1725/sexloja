#ifndef TL_CADASTRAR_EMAIL_H
#define TL_CADASTRAR_EMAIL_H

#include <QWidget>

namespace Ui {
class tl_cadastrar_email;
}

class tl_cadastrar_email : public QWidget
{
    Q_OBJECT
    
public:
    explicit tl_cadastrar_email(QWidget *parent = 0);
    ~tl_cadastrar_email();
    
private:
    Ui::tl_cadastrar_email *ui;
};

#endif // TL_CADASTRAR_EMAIL_H
