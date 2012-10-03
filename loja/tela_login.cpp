#include "tela_login.h"
#include "ui_tela_login.h"
#include "tela_principal.h"

tela_login::tela_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_login)
{
    ui->setupUi(this);
    usuario_logado = false;
    informacao_loja = new loja;
    informacao_loja->busca_loja();
    this->setWindowIcon(informacao_loja->retorna_QPixmap_imagem());
}

tela_login::~tela_login()
{
    delete ui;
}

void tela_login::on_btn_cancelar_clicked()
{
    if (ui->le_login->text().toStdString() == ""){
        this->close();
        usuario_logado = false;
    }
    else{
        ui->le_senha->clear();
        ui->le_login->clear();
    }
}

void tela_login::on_btn_confrimar_clicked()
{
    user = new usuario;
    QString login, senha;

    usuario_logado = false;
    login = ui->le_login->text();
    senha = ui->le_senha->text();
    if(!user->verifica_login_senha(login,senha)){
        ui->le_senha->clear();
    }
    else{
        usuario_logado = true;
        this->close();
        tl_principal.definir_dados_loja(informacao_loja);
        tl_principal.show();
    }
}
