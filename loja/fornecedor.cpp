#include "fornecedor.h"

fornecedor::fornecedor()
{
}

fornecedor::fornecedor(int id_fornecedor,QString fornecedor_cnpj,QString fornecedor_razao_social,QString fornecedor_nome,
        QString fornecedor_comentario,std::vector< std::string > lista_email_fornecedor,
        std::vector< std::string > lista_telefone_fornecedor,
        std::vector< std::string > lista_operadora_fornecedor,
        QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
        QString rua, QString cep, int numero, QString pt_referencia)
        :endereco(uf_sigla,uf_nome,cidade,bairro,rua, cep,numero,pt_referencia){

    id = id_fornecedor;
    cnpj =fornecedor_cnpj;
    razao_social =fornecedor_razao_social;
    nome =fornecedor_nome;
    comentario =fornecedor_comentario;
    lista_email =lista_email_fornecedor;
    lista_telefone =lista_telefone_fornecedor;
    lista_operadora =lista_operadora_fornecedor;
}

fornecedor::fornecedor(QString fornecedor_cnpj,QString fornecedor_razao_social,QString fornecedor_nome,
        QString fornecedor_comentario,std::vector< std::string > lista_email_fornecedor,
        std::vector< std::string > lista_telefone_fornecedor,
        std::vector< std::string > lista_operadora_fornecedor,
        QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
        QString rua, QString cep, int numero, QString pt_referencia)
        :endereco(uf_sigla,uf_nome,cidade,bairro,rua, cep,numero,pt_referencia){

    cnpj =fornecedor_cnpj;
    razao_social =fornecedor_razao_social;
    nome =fornecedor_nome;
    comentario =fornecedor_comentario;
    lista_email =lista_email_fornecedor;
    lista_telefone =lista_telefone_fornecedor;
    lista_operadora =lista_operadora_fornecedor;
}

void fornecedor::definir_icone_janela(QPixmap logo){
    logomarca = logo;
}

int fornecedor::retornar_id(){
    return id;
}

QString fornecedor::retornar_cnpj(){
    return cnpj;
}

QString fornecedor::retornar_razao_social(void){
    return razao_social;
}

QString fornecedor::retornar_nome(void){
    return nome;
}

QString fornecedor::retornar_comentario(void){
    return comentario;
}

std::vector< std::string > fornecedor::retorna_lista_email(void){
    return lista_email;
}

std::vector< std::string > fornecedor::retorna_lista_telefone(void){
    return lista_telefone;
}

std::vector< std::string > fornecedor::retorna_lista_operadora(void){
    return lista_operadora;
}

void fornecedor::altera_id_fornecedor(int id_fornecedor){
    id = id_fornecedor;
}

void fornecedor::alterar_dados_fornecedor(QString fornecedor_cnpj,QString fornecedor_razao_social,QString fornecedor_nome,
                                          QString fornecedor_comentario,std::vector< std::string > lista_email_fornecedor,
                                          std::vector< std::string > lista_telefone_fornecedor,
                                          std::vector< std::string > lista_operadora_fornecedor,
                                          QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                                          QString rua, QString cep, int numero, QString pt_referencia){
    cnpj =fornecedor_cnpj;
    razao_social =fornecedor_razao_social;
    nome =fornecedor_nome;
    comentario =fornecedor_comentario;
    lista_email =lista_email_fornecedor;
    lista_telefone =lista_telefone_fornecedor;
    lista_operadora =lista_operadora_fornecedor;
    altera_endereco(uf_sigla,uf_nome,cidade,bairro,rua,cep,numero,pt_referencia);
}

bool fornecedor::salvar_dados_fornecedor(void){
    conexao_bd conexao;
    QSqlDatabase bd;
    QString id_fornecedor;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","fornecedor::salvar_dados_fornecedor")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery salvar_dados_fornecedor(bd);
        QSqlQuery salvar_dados_telefone_fornecedor(bd);
        QSqlQuery salvar_dados_email_fornecedor(bd);

        //Declara a variável que irá fazer a consulta para determinar o id do fornecedor;
        QSqlQuery consultar(bd);

        //Insere os dados no cadastro dos fornecedors
        salvar_dados_fornecedor.prepare("INSERT INTO fornecedor(cnpj,razao_social,nome,comentario,cep,rua,bairro,ponto_referencia,cidade,uf,numero,estado) VALUES(:cnpj, :razao_social, :nome, :comentario, :numero_cep, :nome_rua, :nome_bairro, :ponto_referencia, :nome_cidade,:sigla_estado, :numero_residencia, :nome_estado)");
        salvar_dados_fornecedor.bindValue(":cnpj",cnpj);
        salvar_dados_fornecedor.bindValue(":razao_social",razao_social);
        salvar_dados_fornecedor.bindValue(":nome",nome);
        salvar_dados_fornecedor.bindValue(":comentario",comentario);
        salvar_dados_fornecedor.bindValue(":numero_cep",numero_cep);
        salvar_dados_fornecedor.bindValue(":nome_rua",nome_rua);
        salvar_dados_fornecedor.bindValue(":nome_bairro",nome_bairro);
        salvar_dados_fornecedor.bindValue(":ponto_referencia",ponto_referencia);
        salvar_dados_fornecedor.bindValue(":nome_cidade",nome_cidade);
        salvar_dados_fornecedor.bindValue(":sigla_estado",sigla_estado);
        salvar_dados_fornecedor.bindValue(":numero_residencia",numero_residencia);
        salvar_dados_fornecedor.bindValue(":nome_estado",nome_estado);
        salvar_dados_fornecedor.exec();

        //realiza a consulta para determinar  o id do fornecedor.
        consultar.exec("SELECT id_fornecedor FROM fornecedor");
        if(consultar.last()){
            id_fornecedor = consultar.value(0).toString();
        }

        //Insere os números de telefone no cadastro dos fornecedors
        for (int i=0;i<int(lista_telefone.size());i++){
            salvar_dados_telefone_fornecedor.prepare("INSERT INTO tel_fornecedor(id_fornecedor,telefone,operadora) VALUES(:id_fornecedor, :telefone, :operadora)");
            salvar_dados_telefone_fornecedor.bindValue(":id_fornecedor",id_fornecedor);
            salvar_dados_telefone_fornecedor.bindValue(":telefone",QString::fromStdString(lista_telefone[i]));
            salvar_dados_telefone_fornecedor.bindValue(":operadora",QString::fromStdString(lista_operadora[i]));
            salvar_dados_telefone_fornecedor.exec();
        }

        //Insere os emails no cadastro dos fornecedors
        for (int i=0;i<int(lista_email.size());i++){
            salvar_dados_email_fornecedor.prepare("INSERT INTO email_fornecedor(id_fornecedor,e_mail) VALUES(:id_fornecedor, :email)");
            salvar_dados_email_fornecedor.bindValue(":id_fornecedor",id_fornecedor);
            salvar_dados_email_fornecedor.bindValue(":email",QString::fromStdString(lista_email[i]));
            salvar_dados_email_fornecedor.exec();
        }

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((salvar_dados_fornecedor.lastError().number()<=0)&&(salvar_dados_telefone_fornecedor.lastError().number()<=0)&&(salvar_dados_email_fornecedor.lastError().number()<=0)){

            //Finaliza a inserçao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_janela(":img/img/arquivo_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nCadastro efetuado com sucesso!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            bd.close();
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as alterações no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão foi possível efetuar o cadastro do fornecedor!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            bd.close();
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}

bool fornecedor::salvar_alteracao_dados_fornecedor(std::vector< std::string > lista_telefone_a_remover,
                                                   std::vector< std::string > lista_telefone_a_adicionar,
                                                   std::vector< std::string > lista_operadora_a_adicionar,
                                                   std::vector< std::string > lista_email_a_remover,
                                                   std::vector< std::string > lista_email_a_adicionar){
    conexao_bd conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","fornecedor::salvar_alteracao_dados_fornecedor")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        bd.transaction();

        //Declara as variáves que irão alterar os dados no banco de dados.
        QSqlQuery alterar_dados_fornecedor(bd);
        QSqlQuery remover_dados_telefone_fornecedor(bd);
        QSqlQuery salvar_dados_telefone_fornecedor(bd);
        QSqlQuery salvar_dados_email_fornecedor(bd);
        QSqlQuery remover_dados_email_fornecedor(bd);

        //Alterar os dados no cadastro do fornecedor
        alterar_dados_fornecedor.prepare("UPDATE fornecedor SET cnpj = :cnpj, razao_social = :razao_social, nome = :nome, comentario = :comentario, cep = :numero_cep, rua = :nome_rua, bairro = :nome_bairro, ponto_referencia = :ponto_referencia, cidade = :nome_cidade, uf = :sigla_estado, numero = :numero_residencia, estado = :nome_estado WHERE id_fornecedor = '"+QString::number(id)+"';");
        alterar_dados_fornecedor.bindValue(":cnpj",cnpj);
        alterar_dados_fornecedor.bindValue(":razao_social",razao_social);
        alterar_dados_fornecedor.bindValue(":nome",nome);
        alterar_dados_fornecedor.bindValue(":comentario",comentario);
        alterar_dados_fornecedor.bindValue(":numero_cep",numero_cep);
        alterar_dados_fornecedor.bindValue(":nome_rua",nome_rua);
        alterar_dados_fornecedor.bindValue(":nome_bairro",nome_bairro);
        alterar_dados_fornecedor.bindValue(":ponto_referencia",ponto_referencia);
        alterar_dados_fornecedor.bindValue(":nome_cidade",nome_cidade);
        alterar_dados_fornecedor.bindValue(":sigla_estado",sigla_estado);
        alterar_dados_fornecedor.bindValue(":numero_residencia",numero_residencia);
        alterar_dados_fornecedor.bindValue(":nome_estado",nome_estado);
        alterar_dados_fornecedor.exec();

        if(int(lista_telefone_a_remover.size())>0){
            //Remover números de telefone do cadastro do fornecedor
            for (int i=0;i<int(lista_telefone_a_remover.size());i++){
                remover_dados_telefone_fornecedor.prepare("DELETE FROM tel_fornecedor WHERE id_fornecedor = :id_fornecedor AND telefone = :telefone;");
                remover_dados_telefone_fornecedor.bindValue(":id_fornecedor",id);
                remover_dados_telefone_fornecedor.bindValue(":telefone",QString::fromStdString(lista_telefone_a_remover[i]));
                remover_dados_telefone_fornecedor.exec();
            }
        }

        //Adicionar números de telefone ao cadastro do fornecedor
        for (int i=0;i<int(lista_telefone_a_adicionar.size());i++){
            salvar_dados_telefone_fornecedor.prepare("INSERT INTO tel_fornecedor(id_fornecedor,telefone,operadora) VALUES(:id_fornecedor, :telefone, :operadora)");
            salvar_dados_telefone_fornecedor.bindValue(":id_fornecedor",id);
            salvar_dados_telefone_fornecedor.bindValue(":telefone",QString::fromStdString(lista_telefone_a_adicionar[i]));
            salvar_dados_telefone_fornecedor.bindValue(":operadora",QString::fromStdString(lista_operadora_a_adicionar[i]));
            salvar_dados_telefone_fornecedor.exec();
        }

        if(lista_email_a_remover.size()>0){
            //Remover emails do cadastro do fornecedor
            for (int i=0;i<int(lista_email_a_remover.size());i++){
                remover_dados_email_fornecedor.prepare("DELETE FROM email_fornecedor WHERE id_fornecedor='"+QString::number(id)+"' AND e_mail='"+QString::fromStdString(lista_email_a_remover[i])+"';");
                remover_dados_email_fornecedor.exec();
            }
        }

        //Insere os emails no cadastro dos fornecedors
        for (int i=0;i<int(lista_email_a_adicionar.size());i++){
            salvar_dados_email_fornecedor.prepare("INSERT INTO email_fornecedor(id_fornecedor,e_mail) VALUES(:id_fornecedor, :e_mail)");
            salvar_dados_email_fornecedor.bindValue(":id_fornecedor",id);
            salvar_dados_email_fornecedor.bindValue(":e_mail",QString::fromStdString(lista_email_a_adicionar[i]));
            salvar_dados_email_fornecedor.exec();
        }

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((alterar_dados_fornecedor.lastError().number()<=0)&&
            ((salvar_dados_telefone_fornecedor.lastError().number()<=0)||(salvar_dados_telefone_fornecedor.lastError().number()==1062))&&
            ((salvar_dados_email_fornecedor.lastError().number()<=0)||(salvar_dados_email_fornecedor.lastError().number()==1062))&&
            (remover_dados_telefone_fornecedor.lastError().number()<=0)&&
            (remover_dados_email_fornecedor.lastError().number()<=0)){
            //Finaliza a alteraçao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_janela(":img/img/arquivo_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nCadastro alterado com sucesso!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            bd.close();
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as alterações no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão foi possível alterar o cadastro do fornecedor!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            bd.close();
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}

bool fornecedor::remover_cadastro_fornecedor(int id_fornecedor){
    conexao_bd conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","fornecedor::remover_cadastro_fornecedor")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        bd.transaction();

        //Declara as variáves que irão alterar os dados no banco de dados.
        QSqlQuery remover_cadastro_fornecedor(bd);

        remover_cadastro_fornecedor.prepare("DELETE FROM fornecedor WHERE id_fornecedor = :id_fornecedor;");
        remover_cadastro_fornecedor.bindValue(":id_fornecedor",id_fornecedor);
        remover_cadastro_fornecedor.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((remover_cadastro_fornecedor.lastError().number()<=0)){

            //Finaliza a alteraçao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_janela(":img/img/arquivo_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nCadastro removido com sucesso!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            bd.close();
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as alterações no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão foi possível remover o cadastro do fornecedor!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            bd.close();
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}

void fornecedor::limpar_fornecedor(void){
    id = 0;
    cnpj ="";
    razao_social ="";
    nome ="";
    comentario ="";
    lista_email.clear();
    lista_telefone.clear();
    lista_operadora.clear();
}
