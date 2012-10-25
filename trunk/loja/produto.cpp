#include "produto.h"

produto::produto()
{
}
produto::produto(int id_pro,QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                 int quant_disponivel_produto,QString cod_barras_produto,QString tipo_produto, int id_imag,
                 QByteArray vetor_bytes_img, std::string img_extensao,QString dta ,float valor_com,float valor_ven,QString ho)
    :imagem(vetor_bytes_img, img_extensao), valor_produto(id_pro,dta,quant_disponivel_produto,valor_com,valor_ven,ho){
    id_produto = id_pro;
    produto::nome = nome_produto;
    produto::fabricante = fabricante_produto;
    produto::desc_utilizacao = desc_utilizacao_produto;
    produto::quant_disponivel = quant_disponivel_produto;
    produto::cod_barras = cod_barras_produto;
    produto::tipo = tipo_produto;
    produto::id_imagem = id_imag;
    removido = false;
    alterou_valores = false;
}

void produto::definir_icone_janela(QPixmap logo){
    logomarca = logo;
}

int produto::retorna_id(void){
    return id_produto;
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
                                    int quant_disponivel_produto,QString cod_barras_produto,QString tipo_produto,
                                    QString nome_arquivo_imagem, int altura, int largura,float valor_com,float valor_ven){
    nome = nome_produto;
    fabricante = fabricante_produto;
    desc_utilizacao = desc_utilizacao_produto;
    quant_disponivel = quant_disponivel_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
    alterar_imagem(nome_arquivo_imagem, largura, altura);
    alterou_valores = alterar_valor_produto(quant_disponivel_produto,valor_com,valor_ven);
}

bool produto::salvar_dados_produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                                   int quant_disponivel_produto,QString cod_barras_produto,QString tipo_produto,
                                   QString nome_arquivo_imagem, int altura, int largura,float valor_com,float valor_ven){

    nome = nome_produto;
    fabricante = fabricante_produto;
    desc_utilizacao = desc_utilizacao_produto;
    quant_disponivel = quant_disponivel_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
    removido = false;

    his_entradas *nova_entrada;
    his_balanco_estoque  *novo_balanco_estoque;
    imagem *nova_imagem;
    int aux_id_imagem;

    nova_imagem = new imagem(nome_arquivo_imagem,largura,altura);

    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;

    //realiza conex�o ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transa�ao
        bd.transaction();

        //Declara as vari�ves que ir�o inserir os dados no banco de dados.
        QSqlQuery salvar_dados_produto(bd);
        QSqlQuery salvar_dados_imagem(bd);
        QSqlQuery salvar_his_entradas(bd);
        QSqlQuery salvar_his_balanco_estoque(bd);

        //Declara a vari�vel que ir� fazer a consulta para determinar o id do produto;
        QSqlQuery consultar_imagem(bd);
        QSqlQuery consultar_produto(bd);

        if (nome_arquivo_imagem.toStdString()!=":/img/img/produto.png"){
            //Insere os dados no cadastro de imagem
            salvar_dados_imagem.prepare("INSERT INTO imagem(imagem,extensao) VALUES(:imagem, :extensao);");
            salvar_dados_imagem.bindValue(":imagem", nova_imagem->retorna_vetor_bytes_imagem());
            salvar_dados_imagem.bindValue(":extensao",nova_imagem->retorna_extensao());
            salvar_dados_imagem.exec();

            //realiza a consulta para determinar  o id da imagem.
            consultar_imagem.exec("SELECT id_imagem FROM imagem");
            if(consultar_imagem.last()){
                aux_id_imagem = consultar_imagem.value(0).toInt();
            }
        }
        else{
            aux_id_imagem = 1;
        }
        //Insere os dados no cadastro dos produtos
        salvar_dados_produto.prepare("INSERT INTO produto(nome,fabricante,desc_utilizacao,cod_barras,tipo,id_imagem) VALUES(:nome, :fabricante, :desc_utilizacao, :cod_barras, :tipo, :id_imagem);");
        salvar_dados_produto.bindValue(":nome", nome);
        salvar_dados_produto.bindValue(":fabricante",fabricante);
        salvar_dados_produto.bindValue(":desc_utilizacao", desc_utilizacao);
        salvar_dados_produto.bindValue(":cod_barras", cod_barras);
        salvar_dados_produto.bindValue(":tipo", tipo);
        salvar_dados_produto.bindValue(":id_imagem", aux_id_imagem);
        salvar_dados_produto.exec();

        //realiza a consulta para determinar  o id do produto.
        consultar_produto.exec("SELECT * FROM produto");
        while(consultar_produto.next()){
            id_produto = consultar_produto.value(0).toInt();
        }        

        nova_entrada = new his_entradas(id_produto,quant_disponivel,valor_com,valor_ven);

        //Insere os dados no cadastro de hist�rico de valores e quantidades do produto
        salvar_his_entradas.prepare("INSERT INTO his_entradas(id_produto,quantidade,valor_compra,valor_venda,data,hora) VALUES(:id_produto,:quantidade,:valor_compra,:valor_venda,:data,:hora);");
        salvar_his_entradas.bindValue(":id_produto", nova_entrada->retorna_id_produto());
        salvar_his_entradas.bindValue(":quantidade", nova_entrada->retorna_quantidade());
        salvar_his_entradas.bindValue(":valor_compra", nova_entrada->retorna_valor_compra());
        salvar_his_entradas.bindValue(":valor_venda", nova_entrada->retorna_valor_venda());
        salvar_his_entradas.bindValue(":data", nova_entrada->retorna_data());
        salvar_his_entradas.bindValue(":hora", nova_entrada->retorna_hora());
        salvar_his_entradas.exec();

        novo_balanco_estoque = new his_balanco_estoque(id_produto,valor_com,valor_ven,quant_disponivel,quant_disponivel);

        //Insere os dados no cadastro de hist�rico de valores e quantidades do produto
        salvar_his_balanco_estoque.prepare("INSERT INTO his_balanco_estoque(valor_compra,valor_venda,id_produto,total_comprado,total_disponivel) VALUES(:valor_compra,:valor_venda,:id_produto,:total_comprado,:total_disponivel);");
        salvar_his_balanco_estoque.bindValue(":valor_compra", novo_balanco_estoque->retorna_valor_compra());
        salvar_his_balanco_estoque.bindValue(":valor_venda", novo_balanco_estoque->retorna_valor_venda());
        salvar_his_balanco_estoque.bindValue(":id_produto", novo_balanco_estoque->retorna_id_produto());
        salvar_his_balanco_estoque.bindValue(":total_comprado", novo_balanco_estoque->retorna_total_comprado());
        salvar_his_balanco_estoque.bindValue(":total_disponivel", novo_balanco_estoque->retorna_total_disponivel());
        salvar_his_balanco_estoque.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contr�rio o Rollback.
        if((salvar_dados_produto.lastError().number()<=0)&&(salvar_dados_imagem.lastError().number()<=0)&&
           (salvar_his_entradas.lastError().number()<=0)&&(salvar_his_balanco_estoque.lastError().number()<=0)){

            //Finaliza a inser�ao dos dados.
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

            //Fecha a conex�o com o banco de dados
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as altera��es no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nN�o foi poss�vel efetuar o cadastro do produto!!!!");
            msg.exec();

            //Fecha a conex�o com o banco de dados
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}

bool produto::salvar_alteracao_dados_produto(bool alterou_imgem){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    QString campos;

    //realiza conex�o ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transa�ao
        bd.transaction();

        //Declara as vari�ves que ir�o inserir os dados no banco de dados.
        QSqlQuery alterar_dados_produto(bd);
        QSqlQuery alterar_dados_imagem(bd);
        QSqlQuery salvar_dados_valor(bd);
        QSqlQuery salvar_dados_imagem(bd);
        QSqlQuery consultar_imagem(bd);

        //realiza a consulta
        consultar_imagem.exec("SELECT id_imagem FROM produto WHERE id_produto = "+QString::number(id_produto)+ ";");
        if(consultar_imagem.last()){
            id_imagem = consultar_imagem.value(0).toInt();
        }
        consultar_imagem.clear();

        if(alterou_imgem){
            if ((id_imagem == 1)&&(nome_imagem.toStdString()!=":/img/img/produto.png")){
                //Insere os dados no cadastro de imagem
                salvar_dados_imagem.prepare("INSERT INTO imagem(imagem,extensao) VALUES(:imagem, :extensao);");
                salvar_dados_imagem.bindValue(":imagem", vetor_bytes_imagem);
                salvar_dados_imagem.bindValue(":extensao",QString::fromStdString(extensao));
                salvar_dados_imagem.exec();

                //realiza a consulta
                consultar_imagem.exec("SELECT id_imagem FROM imagem;");
                if(consultar_imagem.last()){
                    id_imagem = consultar_imagem.value(0).toInt();
                }
                consultar_imagem.clear();
            }
            else{
                campos ="imagem=:imagem, extensao=:extensao";
                if((nome_imagem.toStdString()!=":/img/img/produto.png")){
                    //Altera os dados no cadastro da imagem
                    alterar_dados_imagem.prepare("UPDATE imagem SET "+campos+" WHERE id_imagem = '"+QString::number(id_imagem)+"';");
                    alterar_dados_imagem.bindValue(":imagem", vetor_bytes_imagem);
                    alterar_dados_imagem.bindValue(":extensao",QString::fromStdString(extensao));
                    alterar_dados_imagem.exec();
                }
                campos.clear();
            }
        }

        campos = "nome=:nome, fabricante=:fabricante, desc_utilizacao=:desc_utilizacao, quant_disponivel=:quant_disponivel, cod_barras=:cod_barras, tipo=:tipo, id_imagem=:id_imagem";

        //Alteras os dados no cadastro dos produtos
        alterar_dados_produto.prepare("UPDATE produto SET "+campos+" WHERE id_produto = '"+QString::number(id_produto)+"';");
        alterar_dados_produto.bindValue(":nome", nome);
        alterar_dados_produto.bindValue(":fabricante",fabricante);
        alterar_dados_produto.bindValue(":desc_utilizacao", desc_utilizacao);
        alterar_dados_produto.bindValue(":quant_disponivel", quant_disponivel);
        alterar_dados_produto.bindValue(":cod_barras", cod_barras);
        alterar_dados_produto.bindValue(":tipo", tipo);
        alterar_dados_produto.bindValue(":id_imagem", id_imagem);
        alterar_dados_produto.exec();

        if(alterou_valores==true){
            //Insere os dados no cadastro de hist�rico de valores e quantidades do produto
            salvar_dados_valor.prepare("INSERT INTO his_valores_quantidade(id_produto,data,quantidade,valor_compra,valor_venda,hora) VALUES(:id_produto,:data,:quantidade,:valor_compra,:valor_venda,:hora);");
            salvar_dados_valor.bindValue(":id_produto", id_produto);
            salvar_dados_valor.bindValue(":data", data);
            salvar_dados_valor.bindValue(":quantidade", quantidade);
            salvar_dados_valor.bindValue(":valor_compra", valor_compra);
            salvar_dados_valor.bindValue(":valor_venda", valor_venda);
            salvar_dados_valor.bindValue(":hora", hora);
            salvar_dados_valor.exec();
        }

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contr�rio o Rollback.
        if((alterar_dados_produto.lastError().number()<=0)&&(alterar_dados_imagem.lastError().number()<=0)&&
           (salvar_dados_valor.lastError().number()<=0)&&(salvar_dados_imagem.lastError().number()<=0)){

            //Finaliza a inser�ao dos dados.
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

            //Fecha a conex�o com o banco de dados
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as altera��es no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nN�o foi poss�vel alterar o cadastro do produto!!!!");
            msg.exec();

            //Fecha a conex�o com o banco de dados
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        conexao.fechar_conexao();
        return false;
    }
    conexao.fechar_conexao();
    return false;
}

bool produto::remover_cadastro_produto(void){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;

    //realiza conex�o ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transa�ao
        bd.transaction();

        removido = true;

        //Declara as vari�ves que ir�o inserir os dados no banco de dados.
        QSqlQuery remover_cadastro(bd);

        //Alteras os dados no cadastro dos produtos
        remover_cadastro.prepare("UPDATE produto SET removido=:removido WHERE id_produto = '"+QString::number(id_produto)+"';");
        remover_cadastro.bindValue("removido=:",removido);
        remover_cadastro.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contr�rio o Rollback.
        if((remover_cadastro.lastError().number()<=0)){

            //Finaliza a inser�ao dos dados.
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

            //Fecha a conex�o com o banco de dados
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as altera��es no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nN�o foi poss�vel remover o cadastro do produto!!!!");
            msg.exec();

            //Fecha a conex�o com o banco de dados
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}

bool produto::recuperar_cadastro_produto(void){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;

    //realiza conex�o ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transa�ao
        bd.transaction();

        removido = false;

        //Declara as vari�ves que ir�o inserir os dados no banco de dados.
        QSqlQuery remover_cadastro(bd);

        //Alteras os dados no cadastro dos produtos
        remover_cadastro.prepare("UPDATE produto SET removido=:removido WHERE id_produto = '"+QString::number(id_produto)+"';");
        remover_cadastro.bindValue("removido=:",removido);
        remover_cadastro.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contr�rio o Rollback.
        if((remover_cadastro.lastError().number()<=0)){

            //Finaliza a inser�ao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_janela(":img/img/arquivo_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nCadastro restaurado com sucesso!!!!");
            msg.exec();

            //Fecha a conex�o com o banco de dados
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as altera��es no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Cadastro");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nN�o foi poss�vel restaurar o cadastro do produto!!!!");
            msg.exec();

            //Fecha a conex�o com o banco de dados
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
