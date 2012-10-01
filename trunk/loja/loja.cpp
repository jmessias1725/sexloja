#include "loja.h"

loja::loja():endereco(), imagem()
{
}
loja::loja(int id_loja,QString loja_cnpj,QString loja_razao_social,QString loja_nome,
           std::vector< std::string > lista_telefone_loja,
           std::vector< std::string > lista_operadora_loja,
           QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
           QString rua, QString cep, int numero, QString nome_arquivo, int largura, int altura)
           :endereco(uf_sigla,uf_nome,cidade,bairro,rua, cep,numero), imagem(nome_arquivo, largura, altura){

    id = id_loja;
    cnpj =loja_cnpj;
    razao_social =loja_razao_social;
    nome =loja_nome;
    lista_telefone =lista_telefone_loja;
    lista_operadora =lista_operadora_loja;
}

loja::loja(QString loja_cnpj,QString loja_razao_social,QString loja_nome,
           std::vector< std::string > lista_telefone_loja,
           std::vector< std::string > lista_operadora_loja,
           QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
           QString rua, QString cep, int numero, QString nome_arquivo, int largura, int altura)
           :endereco(uf_sigla,uf_nome,cidade,bairro,rua, cep,numero), imagem(nome_arquivo, largura, altura){

    cnpj =loja_cnpj;
    razao_social =loja_razao_social;
    nome =loja_nome;
    lista_telefone =lista_telefone_loja;
    lista_operadora =lista_operadora_loja;
}

int loja::retornar_id(){
    return id;
}

QString loja::retornar_cnpj(){
    return cnpj;
}

QString loja::retornar_razao_social(void){
    return razao_social;
}

QString loja::retornar_nome(void){
    return nome;
}

std::vector< std::string > loja::retorna_lista_telefone(void){
    return lista_telefone;
}

std::vector< std::string > loja::retorna_lista_operadora(void){
    return lista_operadora;
}

void loja::alterar_dados_loja(QString loja_cnpj,QString loja_razao_social,QString loja_nome,
                              std::vector< std::string > lista_telefone_loja,
                              std::vector< std::string > lista_operadora_loja,
                              QString uf_sigla, QString uf_nome, QString cidade, QString bairro,
                              QString rua, QString cep, int numero, QString nome_arquivo, int largura, int altura){
    cnpj =loja_cnpj;
    razao_social =loja_razao_social;
    nome =loja_nome;
    lista_telefone =lista_telefone_loja;
    lista_operadora =lista_operadora_loja;
    altera_endereco(uf_sigla,uf_nome,cidade,bairro,rua,cep,numero,"");
    alterar_imagem(nome_arquivo, largura, altura);
}

bool loja::salvar_dados_loja(void){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    QString id_loja;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery salvar_dados_loja(bd);
        QSqlQuery salvar_dados_telefone_loja(bd);

        //Declara a variável que irá fazer a consulta para determinar o id do loja;
        QSqlQuery consultar(bd);

        //Insere os dados no cadastro dos lojas
        salvar_dados_loja.prepare("INSERT INTO loja(cnpj,razao_social,nome,cep,rua,bairro,cidade,uf,numero,estado,logomarca,extensao) VALUES(:cnpj, :razao_social, :nome, :numero_cep, :nome_rua, :nome_bairro, :nome_cidade,:sigla_estado, :numero_residencia, :nome_estado, :logomarca, :formato_logo);");
        salvar_dados_loja.bindValue(":cnpj",cnpj);
        salvar_dados_loja.bindValue(":razao_social",razao_social);
        salvar_dados_loja.bindValue(":nome",nome);
        salvar_dados_loja.bindValue(":numero_cep",numero_cep);
        salvar_dados_loja.bindValue(":nome_rua",nome_rua);
        salvar_dados_loja.bindValue(":nome_bairro",nome_bairro);
        salvar_dados_loja.bindValue(":nome_cidade",nome_cidade);
        salvar_dados_loja.bindValue(":sigla_estado",sigla_estado);
        salvar_dados_loja.bindValue(":numero_residencia",numero_residencia);
        salvar_dados_loja.bindValue(":nome_estado",nome_estado);
        salvar_dados_loja.bindValue(":logomarca",vetor_bytes_imagem);
        salvar_dados_loja.bindValue(":formato_logo",QString::fromStdString(extensao));
        salvar_dados_loja.exec();

        //realiza a consulta para determinar  o id do loja.
        consultar.exec("SELECT id_loja FROM loja");
        if(consultar.last()){
            id_loja = consultar.value(0).toString();
        }

        //Insere os números de telefone no cadastro das lojas
        for (int i=0;i<int(lista_telefone.size());i++){
            salvar_dados_telefone_loja.prepare("INSERT INTO tel_loja(id_loja,telefone,operadora) VALUES(:id_loja, :telefone, :operadora)");
            salvar_dados_telefone_loja.bindValue(":id_loja",id_loja);
            salvar_dados_telefone_loja.bindValue(":telefone",QString::fromStdString(lista_telefone[i]));
            salvar_dados_telefone_loja.bindValue(":operadora",QString::fromStdString(lista_operadora[i]));
            salvar_dados_telefone_loja.exec();
        }

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((salvar_dados_loja.lastError().number()<=0)&&(salvar_dados_telefone_loja.lastError().number()<=0)){

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
            msg.setText("\nNão foi possível efetuar o cadastro da loja!!!!");
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

bool loja::salvar_alteracao_dados_loja(std::vector< std::string > lista_telefone_a_remover,
                                       std::vector< std::string > lista_telefone_a_adicionar,
                                       std::vector< std::string > lista_operadora_a_adicionar){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    QString campos;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        bd.transaction();

        //Declara as variáves que irão alterar os dados no banco de dados.
        QSqlQuery alterar_dados_loja(bd);
        QSqlQuery remover_dados_telefone_loja(bd);
        QSqlQuery salvar_dados_telefone_loja(bd);

        campos = "cnpj = :cnpj, razao_social = :razao_social, nome = :nome, comentario = :comentario, cep = :numero_cep, rua = :nome_rua, bairro = :nome_bairro, ponto_referencia = :ponto_referencia, cidade = :nome_cidade, uf = :sigla_estado, numero = :numero_residencia, estado = :nome_estado , logomarca = :logomarca , extensao = :formato_logo";

        //Alterar os dados no cadastro do loja
        alterar_dados_loja.prepare("UPDATE loja SET "+campos+" WHERE id_loja = '"+QString::number(id)+"';");
        alterar_dados_loja.bindValue(":cnpj",cnpj);
        alterar_dados_loja.bindValue(":razao_social",razao_social);
        alterar_dados_loja.bindValue(":nome",nome);
        alterar_dados_loja.bindValue(":numero_cep",numero_cep);
        alterar_dados_loja.bindValue(":nome_rua",nome_rua);
        alterar_dados_loja.bindValue(":nome_bairro",nome_bairro);
        alterar_dados_loja.bindValue(":nome_cidade",nome_cidade);
        alterar_dados_loja.bindValue(":sigla_estado",sigla_estado);
        alterar_dados_loja.bindValue(":numero_residencia",numero_residencia);
        alterar_dados_loja.bindValue(":nome_estado",nome_estado);
        alterar_dados_loja.bindValue(":logomarca",vetor_bytes_imagem);
        alterar_dados_loja.bindValue(":formato_logo",QString::fromStdString(extensao));
        alterar_dados_loja.exec();

        if(int(lista_telefone_a_remover.size())>0){
            //Remover números de telefone do cadastro da loja
            for (int i=0;i<int(lista_telefone_a_remover.size());i++){
                remover_dados_telefone_loja.prepare("DELETE FROM tel_loja WHERE id_loja = :id_loja AND telefone = :telefone;");
                remover_dados_telefone_loja.bindValue(":id_loja",id);
                remover_dados_telefone_loja.bindValue(":telefone",QString::fromStdString(lista_telefone_a_remover[i]));
                remover_dados_telefone_loja.exec();
            }
        }

        //Adicionar números de telefone ao cadastro da loja
        for (int i=0;i<int(lista_telefone_a_adicionar.size());i++){
            salvar_dados_telefone_loja.prepare("INSERT INTO tel_loja(id_loja,telefone,operadora) VALUES(:id_loja, :telefone, :operadora)");
            salvar_dados_telefone_loja.bindValue(":id_loja",id);
            salvar_dados_telefone_loja.bindValue(":telefone",QString::fromStdString(lista_telefone_a_adicionar[i]));
            salvar_dados_telefone_loja.bindValue(":operadora",QString::fromStdString(lista_operadora_a_adicionar[i]));
            salvar_dados_telefone_loja.exec();
        }


        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((alterar_dados_loja.lastError().number()<=0)&&
            ((salvar_dados_telefone_loja.lastError().number()<=0)||(salvar_dados_telefone_loja.lastError().number()==1062))&&
            (remover_dados_telefone_loja.lastError().number()<=0)){
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
            msg.setText("\nNão foi possível alterar o cadastro da loja!!!!");
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
