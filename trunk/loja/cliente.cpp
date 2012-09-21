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
    id = -1;
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
        while(consultar.next()){
            id_cliente = consultar.value(0).toString();
        }

        //Insere os números de telefone no cadastro dos clientes
        for (int i=0;i<int(lista_telefone.size());i++){
            salvar_dados_telefone_cliente.prepare("INSERT INTO tel_cliente(id_cliente,telefone,Operadora) VALUES(:id_cliente, :telefone, :Operadora)");
            salvar_dados_telefone_cliente.bindValue(":id_cliente",id_cliente);
            salvar_dados_telefone_cliente.bindValue(":telefone",QString::fromStdString(lista_telefone[i]));
            salvar_dados_telefone_cliente.bindValue(":Operadora",QString::fromStdString(lista_operadora[i]));
            salvar_dados_telefone_cliente.exec();
        }

        //Insere os emails no cadastro dos clientes
        for (int i=0;i<int(lista_email.size());i++){
            salvar_dados_email_cliente.prepare("INSERT INTO email_cliente(id_cliente,e_mail) VALUES(:id_cliente, :email)");
            salvar_dados_email_cliente.bindValue(":id_cliente",id_cliente);
            salvar_dados_email_cliente.bindValue(":email",QString::fromStdString(lista_email[i]));
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
            msg.setText("\nNão foi possível salvar o cadastro do usuário!!!!");
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

bool cliente::salvar_alteracao_dados_cliente(void){
    return true;
}
