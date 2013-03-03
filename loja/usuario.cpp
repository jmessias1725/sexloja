#include "usuario.h"

int usuario::retorna_id_usuario(void){
    return id_usuario;
}

QString usuario::retorna_nome(void){
    return nome;
}

QString usuario::retorna_cpf(void){
    return cpf;
}

QString usuario::retorna_rg(void){
    return rg;
}

QString usuario::retorna_login(void){
    return login;
}

QString usuario::retorna_senha(void){
    return senha;
}

bool usuario::verifica_login_senha(QString login_teclado, QString senha_teclado){
    conexao_bd conexao;
    QSqlDatabase bd;
    QString senha_bd;

    //realiza conexão ao banco de dados

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807")){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT senha FROM usuario WHERE login = '" + login_teclado + "'");
        while(consultar.next()){
            senha_bd = consultar.value(0).toString();
        }

        //verifica se o login é válido.
        if (senha_bd.isEmpty()){
            QPixmap icone_titulo_janela(":img/img/logo_sex.png");
            QPixmap icone_janela(":img/img/login_40.png");

            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(icone_titulo_janela);
            msg.setWindowTitle("Erro de login.");
            msg.addButton("OK", QMessageBox::RejectRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nLogin inválido!");
            msg.exec();
            bd.close();
            conexao.fechar_conexao();
            return false;
        }
        else{

            //verifica se a senha bate com o que está no banco de dados.
            if(senha_teclado == senha_bd){
                //realiza a consulta
                consultar.exec("SELECT * FROM usuario WHERE login = '" + login_teclado + "'");
                while(consultar.next()){
                    id_usuario = consultar.value(0).toInt();
                    id_loja = consultar.value(1).toInt();
                    nome = consultar.value(2).toString();
                    cpf = consultar.value(3).toString();
                    rg = consultar.value(4).toString();
                }
                login = login_teclado;
                senha = senha_teclado;
                bd.close();
                conexao.fechar_conexao();
                return true;
            }
            else{
                QPixmap icone_titulo_janela(":img/img/logo_sex.png");
                QPixmap icone_janela(":img/img/senha_cad_x_40.png");

                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(icone_titulo_janela);
                msg.setWindowTitle("Erro de senha.");
                msg.addButton("OK", QMessageBox::RejectRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nSenha inválida!");
                msg.exec();
                bd.close();
                conexao.fechar_conexao();
                return false;
                }
            }
    }
    conexao.fechar_conexao();
    return false;
}
