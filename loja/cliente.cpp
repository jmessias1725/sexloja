#include "cliente.h"

cliente::cliente():endereco(){

}

cliente::cliente(int id_cliente,QString cliente_nome,QString cliente_rg,QString cliente_cpf,
                 QString cliente_comentario,std::vector< std::string > lista_email_cliente,
                 std::vector< std::string > lista_telefone_cliente,
                 std::vector< std::string > lista_operadora_cliente,
                 QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                 QString rua, QString cep, int numero, QString pt_referencia)
                 :endereco(uf_sigla,uf_nome,cidade,bairro,rua, cep,numero,pt_referencia){
    id = id_cliente;
    nome =cliente_nome;
    rg =cliente_rg;
    cpf =cliente_cpf;
    comentario =cliente_comentario;
    lista_email =lista_email_cliente;
    lista_telefone =lista_telefone_cliente;
    lista_operadora =lista_operadora_cliente;
}

cliente::cliente(QString cliente_nome,QString cliente_rg,QString cliente_cpf,
                 QString cliente_comentario,std::vector< std::string > lista_email_cliente,
                 std::vector< std::string > lista_telefone_cliente,
                 std::vector< std::string > lista_operadora_cliente,
                 QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                 QString rua, QString cep, int numero, QString pt_referencia)
                 :endereco(uf_sigla,uf_nome,cidade,bairro,rua, cep,numero,pt_referencia){

    nome =cliente_nome;
    rg =cliente_rg;
    cpf =cliente_cpf;
    comentario =cliente_comentario;
    lista_email =lista_email_cliente;
    lista_telefone =lista_telefone_cliente;
    lista_operadora =lista_operadora_cliente;
}

int cliente::retornar_id(){
    return id;
}

QString cliente::retornar_nome(){
    return nome;
}

QString cliente::retornar_rg(void){
    return rg;
}

QString cliente::retornar_cpf(void){
    return cpf;
}

QString cliente::retornar_comentario(void){
    return comentario;
}

std::vector< std::string > cliente::retorna_lista_email(void){
    return lista_email;
}

std::vector< std::string > cliente::retorna_lista_telefone(void){
    return lista_telefone;
}

std::vector< std::string > cliente::retorna_lista_operadora(void){
    return lista_operadora;
}

void cliente::altera_id_cliente(int id_cliente){
    id = id_cliente;
}

void cliente::alterar_dados_cliente(QString cliente_nome,QString cliente_rg,QString cliente_cpf,
                                   QString cliente_comentario,std::vector< std::string > lista_email_cliente,
                                   std::vector< std::string > lista_telefone_cliente,
                                   std::vector< std::string > lista_operadora_cliente,
                                   QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                                   QString rua, QString cep, int numero, QString pt_referencia){
    nome =cliente_nome;
    rg =cliente_rg;
    cpf =cliente_cpf;
    comentario =cliente_comentario;
    lista_email =lista_email_cliente;
    lista_telefone =lista_telefone_cliente;
    lista_operadora =lista_operadora_cliente;
    altera_endereco(uf_sigla,uf_nome,cidade,bairro,rua,cep,numero,pt_referencia);
}

bool cliente::salvar_dados_cliente(void){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    QString id_cliente;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery salvar_dados_cliente(bd);
        QSqlQuery salvar_dados_telefone_cliente(bd);
        QSqlQuery salvar_dados_email_cliente(bd);

        //Declara a variável que irá fazer a consulta para determinar o id do cliente;
        QSqlQuery consultar(bd);

        //Insere os dados no cadastro dos clientes
        salvar_dados_cliente.prepare("INSERT INTO cliente(nome,rg,cpf,comentario,cep,rua,bairro,ponto_referencia,cidade,uf,numero,estado) VALUES(:nome, :rg, :cpf, :comentario, :numero_cep, :nome_rua, :nome_bairro, :ponto_referencia, :nome_cidade,:sigla_estado, :numero_residencia, :nome_estado)");
        salvar_dados_cliente.bindValue(":nome",nome);
        salvar_dados_cliente.bindValue(":rg",rg);
        salvar_dados_cliente.bindValue(":cpf",cpf);
        salvar_dados_cliente.bindValue(":comentario",comentario);
        salvar_dados_cliente.bindValue(":numero_cep",numero_cep);
        salvar_dados_cliente.bindValue(":nome_rua",nome_rua);
        salvar_dados_cliente.bindValue(":nome_bairro",nome_bairro);
        salvar_dados_cliente.bindValue(":ponto_referencia",ponto_referencia);
        salvar_dados_cliente.bindValue(":nome_cidade",nome_cidade);
        salvar_dados_cliente.bindValue(":sigla_estado",sigla_estado);
        salvar_dados_cliente.bindValue(":numero_residencia",numero_residencia);
        salvar_dados_cliente.bindValue(":nome_estado",nome_estado);
        salvar_dados_cliente.exec();

        //realiza a consulta para determinar  o id do cliente.
        consultar.exec("SELECT id_cliente FROM cliente");
        if(consultar.last()){
            id_cliente = consultar.value(0).toString();
        }

        //Insere os números de telefone no cadastro dos clientes
        for (int i=0;i<int(lista_telefone.size());i++){
            salvar_dados_telefone_cliente.prepare("INSERT INTO tel_cliente(id_cliente,telefone,operadora) VALUES(:id_cliente, :telefone, :operadora)");
            salvar_dados_telefone_cliente.bindValue(":id_cliente",id_cliente);
            salvar_dados_telefone_cliente.bindValue(":telefone",QString::fromStdString(lista_telefone[i]));
            salvar_dados_telefone_cliente.bindValue(":operadora",QString::fromStdString(lista_operadora[i]));
            salvar_dados_telefone_cliente.exec();
        }

        //Insere os emails no cadastro dos clientes
        for (int i=0;i<int(lista_email.size());i++){
            salvar_dados_email_cliente.prepare("INSERT INTO email_cliente(id_cliente,e_mail) VALUES(:id_cliente, :e_mail)");
            salvar_dados_email_cliente.bindValue(":id_cliente",id_cliente);
            salvar_dados_email_cliente.bindValue(":e_mail",QString::fromStdString(lista_email[i]));
            salvar_dados_email_cliente.exec();
        }

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((salvar_dados_cliente.lastError().number()<=0)&&(salvar_dados_telefone_cliente.lastError().number()<=0)&&(salvar_dados_email_cliente.lastError().number()<=0)){

            //Finaliza a inserçao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_titulo_janela(":img/img/logo_sex.png");
            QPixmap icone_janela(":img/img/arquivo_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(icone_titulo_janela);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nCadastro efetuado com sucesso!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as alterações no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_titulo_janela(":img/img/logo_sex.png");
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(icone_titulo_janela);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão foi possível efetuar o cadastro do cliente!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}

bool cliente::salvar_alteracao_dados_cliente(std::vector< std::string > lista_telefone_a_remover,
                                             std::vector< std::string > lista_telefone_a_adicionar,
                                             std::vector< std::string > lista_operadora_a_adicionar,
                                             std::vector< std::string > lista_email_a_remover,
                                             std::vector< std::string > lista_email_a_adicionar){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        bd.transaction();

        //Declara as variáves que irão alterar os dados no banco de dados.
        QSqlQuery alterar_dados_cliente(bd);
        QSqlQuery remover_dados_telefone_cliente(bd);
        QSqlQuery salvar_dados_telefone_cliente(bd);
        QSqlQuery salvar_dados_email_cliente(bd);
        QSqlQuery remover_dados_email_cliente(bd);

        //Alterar os dados no cadastro do cliente
        alterar_dados_cliente.prepare("UPDATE cliente SET nome = :nome, rg = :rg, cpf = :cpf, comentario = :comentario, cep = :numero_cep, rua = :nome_rua, bairro = :nome_bairro, ponto_referencia = :ponto_referencia, cidade = :nome_cidade, uf = :sigla_estado, numero = :numero_residencia, estado = :nome_estado WHERE id_cliente = '"+QString::number(id)+"';");

        alterar_dados_cliente.bindValue(":nome",nome);
        alterar_dados_cliente.bindValue(":rg",rg);
        alterar_dados_cliente.bindValue(":cpf",cpf);
        alterar_dados_cliente.bindValue(":comentario",comentario);
        alterar_dados_cliente.bindValue(":numero_cep",numero_cep);
        alterar_dados_cliente.bindValue(":nome_rua",nome_rua);
        alterar_dados_cliente.bindValue(":nome_bairro",nome_bairro);
        alterar_dados_cliente.bindValue(":ponto_referencia",ponto_referencia);
        alterar_dados_cliente.bindValue(":nome_cidade",nome_cidade);
        alterar_dados_cliente.bindValue(":sigla_estado",sigla_estado);
        alterar_dados_cliente.bindValue(":numero_residencia",numero_residencia);
        alterar_dados_cliente.bindValue(":nome_estado",nome_estado);
        alterar_dados_cliente.exec();

        if(int(lista_telefone_a_remover.size())>0){
            //Remover números de telefone do cadastro do cliente
            for (int i=0;i<int(lista_telefone_a_remover.size());i++){
                remover_dados_telefone_cliente.prepare("DELETE FROM tel_cliente WHERE id_cliente = :id_cliente AND telefone = :telefone;");
                remover_dados_telefone_cliente.bindValue(":id_cliente",id);
                remover_dados_telefone_cliente.bindValue(":telefone",QString::fromStdString(lista_telefone_a_remover[i]));
                remover_dados_telefone_cliente.exec();
            }
        }
        //Adicionar números de telefone ao cadastro do cliente
        for (int i=0;i<int(lista_telefone_a_adicionar.size());i++){
            salvar_dados_telefone_cliente.prepare("INSERT INTO tel_cliente(id_cliente,telefone,operadora) VALUES(:id_cliente, :telefone, :operadora)");
            salvar_dados_telefone_cliente.bindValue(":id_cliente",id);
            salvar_dados_telefone_cliente.bindValue(":telefone",QString::fromStdString(lista_telefone_a_adicionar[i]));
            salvar_dados_telefone_cliente.bindValue(":operadora",QString::fromStdString(lista_operadora_a_adicionar[i]));
            salvar_dados_telefone_cliente.exec();
        }

        if(lista_email_a_remover.size()>0){
            //Remover emails do cadastro do cliente
            for (int i=0;i<int(lista_email_a_remover.size());i++){
                remover_dados_email_cliente.prepare("DELETE FROM email_cliente WHERE id_cliente='"+QString::number(id)+"' AND e_mail='"+QString::fromStdString(lista_email_a_remover[i])+"';");
                remover_dados_email_cliente.exec();
            }
        }

        //Insere os emails no cadastro dos clientes
        for (int i=0;i<int(lista_email_a_adicionar.size());i++){
            salvar_dados_email_cliente.prepare("INSERT INTO email_cliente(id_cliente,e_mail) VALUES(:id_cliente, :e_mail)");
            salvar_dados_email_cliente.bindValue(":id_cliente",id);
            salvar_dados_email_cliente.bindValue(":e_mail",QString::fromStdString(lista_email_a_adicionar[i]));
            salvar_dados_email_cliente.exec();
        }


        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((alterar_dados_cliente.lastError().number()<=0)&&
            ((salvar_dados_telefone_cliente.lastError().number()<=0)||(salvar_dados_telefone_cliente.lastError().number()==1062))&&
            ((salvar_dados_email_cliente.lastError().number()<=0)||(salvar_dados_email_cliente.lastError().number()==1062))&&
            (remover_dados_telefone_cliente.lastError().number()<=0)&&
            (remover_dados_email_cliente.lastError().number()<=0)){

            //Finaliza a alteraçao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_titulo_janela(":img/img/logo_sex.png");
            QPixmap icone_janela(":img/img/arquivo_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(icone_titulo_janela);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nCadastro alterado com sucesso!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as alterações no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_titulo_janela(":img/img/logo_sex.png");
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(icone_titulo_janela);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão foi possível alterar o cadastro do Cliente!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}

bool cliente::remover_cadastro_cliente(int id_cliente){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        bd.transaction();

        //Declara as variáves que irão alterar os dados no banco de dados.
        QSqlQuery remover_cadastro_cliente(bd);

        remover_cadastro_cliente.prepare("DELETE FROM cliente WHERE id_cliente = :id_cliente;");
        remover_cadastro_cliente.bindValue(":id_cliente",id_cliente);
        remover_cadastro_cliente.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((remover_cadastro_cliente.lastError().number()<=0)){

            //Finaliza a alteraçao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_titulo_janela(":img/img/logo_sex.png");
            QPixmap icone_janela(":img/img/arquivo_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(icone_titulo_janela);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nCadastro removido com sucesso!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as alterações no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_titulo_janela(":img/img/logo_sex.png");
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(icone_titulo_janela);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão foi possível remover o cadastro do Cliente!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}
