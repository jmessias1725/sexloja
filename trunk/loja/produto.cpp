#include "produto.h"

produto::produto()
{
}
produto::produto(int id_produto,QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                 int quant_disponivel_produto,QString cod_barras_produto,QString tipo_produto,
                 QString nome_arquivo_imagem, int altura, int largura,float valor_pro)
    :imagem(nome_arquivo_imagem, largura, altura), valor_produto(valor_pro,quant_disponivel_produto){
    id = id_produto;
    nome = nome_produto;
    fabricante = fabricante_produto;
    desc_utilizacao = desc_utilizacao_produto;
    quant_disponivel = quant_disponivel_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
}

produto::produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                 int quant_disponivel_produto,QString cod_barras_produto,QString tipo_produto,
                 QString nome_arquivo_imagem, int altura, int largura,float valor_pro)
                 :imagem(nome_arquivo_imagem, largura, altura), valor_produto(valor_pro,quant_disponivel_produto){
    nome = nome_produto;
    fabricante = fabricante_produto;
    desc_utilizacao = desc_utilizacao_produto;
    quant_disponivel = quant_disponivel_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
}

void produto::definir_icone_janela(QPixmap logo){
    logomarca = logo;
}

int produto::retorna_id(void){
    return id;
}

QString produto::retorna_nome(void){
    return nome;
}

QString produto::retorna_fabricante(void){
    return fabricante;
}

QString produto::retorna_desc_utilizacao(void){
    return desc_utilizacao;
}

int produto::retorna_quant_disponivel(void){
    return quant_disponivel;
}

QString produto::retorna_cod_barras(void){
    return cod_barras;
}

QString produto::retorna_tipo(void){
    return tipo;
}

void produto::alterar_dados_produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                           int quant_disponivel_produto,QString cod_barras_produto,QPixmap img_produto,
                           QString tipo_produto, QString nome_arquivo_imagem, int altura, int largura){
    nome = nome_produto;
    fabricante = fabricante_produto;
    desc_utilizacao = desc_utilizacao_produto;
    quant_disponivel = quant_disponivel_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
    alterar_imagem(nome_arquivo_imagem, largura, altura);
}

bool produto::salvar_dados_produto(void){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    int id_produto;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery salvar_dados_produto(bd);
        QSqlQuery salvar_dados_imagem(bd);
        QSqlQuery salvar_dados_valor(bd);

        //Declara a variável que irá fazer a consulta para determinar o id do produto;
        QSqlQuery consultar(bd);

        if (nome_imagem.toStdString()!=":/img/img/produto.png"){
            //Insere os dados no cadastro de imagem
            salvar_dados_imagem.prepare("INSERT INTO imagem(imagem,extensao) VALUES(:imagem, :extensao);");
            salvar_dados_imagem.bindValue(":imagem", vetor_bytes_imagem);
            salvar_dados_imagem.bindValue(":extensao",QString::fromStdString(extensao));
            salvar_dados_imagem.exec();

            //realiza a consulta para determinar  o id da imagem.
            consultar.exec("SELECT id_imagem FROM imagem");
            if(consultar.last()){
                id_imagem = consultar.value(0).toInt();
            }
        }
        else{
            id_imagem = 1;
        }

        //Insere os dados no cadastro dos produtos
        salvar_dados_produto.prepare("INSERT INTO produto(nome,fabricante,desc_utilizacao,quant_disponivel,cod_barras,tipo,id_imagem) VALUES(:nome, :fabricante, :desc_utilizacao, :quant_disponivel, :cod_barras, :tipo, :id_imagem);");
        salvar_dados_produto.bindValue(":nome", nome);
        salvar_dados_produto.bindValue(":fabricante",fabricante);
        salvar_dados_produto.bindValue(":desc_utilizacao", desc_utilizacao);
        salvar_dados_produto.bindValue(":quant_disponivel", quant_disponivel);
        salvar_dados_produto.bindValue(":cod_barras", cod_barras);
        salvar_dados_produto.bindValue(":tipo", tipo);
        salvar_dados_produto.bindValue(":id_imagem", id_imagem);
        salvar_dados_produto.exec();

        //realiza a consulta para determinar  o id da imagem.
        consultar.exec("SELECT id_produto FROM produto");
        if(consultar.last()){
            id_produto = consultar.value(0).toInt();
        }

        //Insere os dados no cadastro de valores
        salvar_dados_valor.prepare("INSERT INTO his_val_quant_com_pro(id_produto,data,valor,quantidade) VALUES(:id_produto, :data, :valor, :quantidade);");
        salvar_dados_valor.bindValue(":id_produto", id_produto);
        salvar_dados_valor.bindValue(":data", data);
        salvar_dados_valor.bindValue(":valor",valor);
        salvar_dados_valor.bindValue(":quantidade", quantidade);
        salvar_dados_valor.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((salvar_dados_produto.lastError().number()<=0)&&(salvar_dados_imagem.lastError().number()<=0)&&(salvar_dados_valor.lastError().number()<=0)){

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
            msg.setText("\nNão foi possível efetuar o cadastro do produto!!!!");
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

bool produto::salvar_alteracao_dados_produto(void){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    QString campos;

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery alterar_dados_produto(bd);
        QSqlQuery alterar_dados_imagem(bd);

        if (nome_imagem.toStdString()!=":/img/img/produto.png"){
            campos = "imagem=:imagem, extensao=:extensao";

            //Altera os dados no cadastro da imagem
            alterar_dados_imagem.prepare("UPDATE imagem SET "+campos+" WHERE id_imagem = '"+QString::number(id_imagem)+"';");
            alterar_dados_imagem.bindValue(":imagem", vetor_bytes_imagem);
            alterar_dados_imagem.bindValue(":extensao",QString::fromStdString(extensao));
            alterar_dados_imagem.exec();
        }
        else{
            id_imagem = 1;
        }

        campos = "nome=:nome, fabricante=:fabricante, desc_utilizacao=:desc_utilizacao, quant_disponivel=:quant_disponivel, cod_barras=:cod_barras, tipo=:tipo, id_imagem=:id_imagem";

        //Alteras os dados no cadastro dos produtos
        alterar_dados_produto.prepare("UPDATE produto SET "+campos+" WHERE id_produto = '"+QString::number(id)+"';");
        alterar_dados_produto.bindValue(":nome", nome);
        alterar_dados_produto.bindValue(":fabricante",fabricante);
        alterar_dados_produto.bindValue(":desc_utilizacao", desc_utilizacao);
        alterar_dados_produto.bindValue(":quant_disponivel", quant_disponivel);
        alterar_dados_produto.bindValue(":cod_barras", cod_barras);
        alterar_dados_produto.bindValue(":tipo", tipo);
        alterar_dados_produto.bindValue(":id_imagem", id_imagem);
        alterar_dados_produto.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((alterar_dados_produto.lastError().number()<=0)&&(alterar_dados_imagem.lastError().number()<=0)){

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
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão foi possível alterar o cadastro do produto!!!!");
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

produto * produto::busca_produto(void){
    return this;
}
