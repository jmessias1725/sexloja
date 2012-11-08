#include "produto.h"

produto::produto()
{
}

produto::produto(int id_pro, QString nome_produto, QString fabricante_produto,QString cod_barras_produto, QString tipo_produto,
        float valor_ven, float custo_med, int qt_disponivel){
    id_produto = id_pro;
    nome = nome_produto;
    fabricante = fabricante_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
    valor_venda  = valor_ven;
    custo_medio = custo_med;
    quantidade_disponivel = qt_disponivel;
}

produto::produto(int id_pro, QString nome_produto, QString fabricante_produto, QString desc_utilizacao_produto,
                 QString cod_barras_produto, QString tipo_produto, int id_imag, float valor_ven, float custo_med, int qt_disponivel){
    id_produto = id_pro;
    nome = nome_produto;
    fabricante = fabricante_produto;
    desc_utilizacao = desc_utilizacao_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
    id_imagem = id_imag;
    removido = false;
    valor_venda  = valor_ven;
    custo_medio = custo_med;
    quantidade_disponivel = qt_disponivel;
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

QString produto::retorna_cod_barras(void){
    return cod_barras;
}

QString produto::retorna_tipo(void){
    return tipo;
}

int produto::retorna_id_imagem(void){
    return id_imagem;
}

float produto::retorna_valor_venda(void){
    return valor_venda;
}

float produto::retorna_custo_medio(void){
    return custo_medio;
}

int produto::retorna_quantidade_disponivel(void){
    return quantidade_disponivel;
}

void produto::altera_quantidade(int quant){
    quantidade_disponivel = quant;
}

void produto::altera_valor_venda(float valor_ven){
    valor_venda = valor_ven;
}

void produto::altera_valor_compra(float valor_com){
    custo_medio = valor_com;
}

bool produto::salvar_dados_produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                                   QString cod_barras_produto,QString tipo_produto,QString nome_arquivo_imagem, int altura,
                                   int largura,float valor_ven){

    nome = nome_produto;
    fabricante = fabricante_produto;
    desc_utilizacao = desc_utilizacao_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
    removido = false;
    valor_venda = valor_ven;

    imagem *nova_imagem;
    int aux_id_imagem;

    nova_imagem = new imagem(nome_arquivo_imagem,largura,altura);

    conexao_bd conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","produto::salvar_dados_produto")){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery salvar_dados_produto(bd);
        QSqlQuery salvar_dados_imagem(bd);

        //Declara a variável que irá fazer a consulta para determinar o id do produto;
        QSqlQuery consultar_imagem(bd);

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
        salvar_dados_produto.prepare("INSERT INTO produto(nome,fabricante,desc_utilizacao,cod_barras,tipo,id_imagem,valor_venda) VALUES(:nome, :fabricante, :desc_utilizacao, :cod_barras, :tipo, :id_imagem, :valor_venda);");
        salvar_dados_produto.bindValue(":nome", nome);
        salvar_dados_produto.bindValue(":fabricante",fabricante);
        salvar_dados_produto.bindValue(":desc_utilizacao", desc_utilizacao);
        salvar_dados_produto.bindValue(":cod_barras", cod_barras);
        salvar_dados_produto.bindValue(":tipo", tipo);
        salvar_dados_produto.bindValue(":id_imagem", aux_id_imagem);
        salvar_dados_produto.bindValue(":valor_venda", valor_venda);
        salvar_dados_produto.exec();

        /*//realiza a consulta para determinar  o id do produto.
        consultar_produto.exec("SELECT * FROM produto");
        if(consultar_produto.last()){
            id_produto = consultar_produto.value(0).toInt();
        }

        novo_balanco_estoque = new his_balanco_estoque(id_produto,valor_com,quant_disponivel_produto,quant_disponivel_produto);

        //Insere os dados no cadastro de histórico de valores e quantidades do produto
        salvar_his_balanco_estoque.prepare("INSERT INTO his_balanco_estoque(valor_compra,id_produto,total_comprado,total_disponivel) VALUES(:valor_compra,:id_produto,:total_comprado,:total_disponivel);");
        salvar_his_balanco_estoque.bindValue(":valor_compra", novo_balanco_estoque->retorna_valor_compra());
        salvar_his_balanco_estoque.bindValue(":id_produto", novo_balanco_estoque->retorna_id_produto());
        salvar_his_balanco_estoque.bindValue(":total_comprado", novo_balanco_estoque->retorna_total_comprado());
        salvar_his_balanco_estoque.bindValue(":total_disponivel", novo_balanco_estoque->retorna_total_disponivel());
        salvar_his_balanco_estoque.exec();

        //realiza a consulta para determinar  o id do produto.
        consultar_balanco.exec("SELECT * FROM his_balanco_estoque");
        if(consultar_balanco.last()){
            id_balanco = consultar_balanco.value(0).toInt();
        }

        nova_entrada = new his_entradas(id_produto,quant_disponivel_produto,valor_com,valor_ven,0,id_balanco);

        //Insere os dados no cadastro de histórico de valores e quantidades do produto
        salvar_his_entradas.prepare("INSERT INTO his_entradas(id_produto,quantidade,valor_compra,valor_venda,data,hora,origem,id_balanco) VALUES(:id_produto,:quantidade,:valor_compra,:valor_venda,:data,:hora,:origem,:id_balanco);");
        salvar_his_entradas.bindValue(":id_produto", nova_entrada->retorna_id_produto());
        salvar_his_entradas.bindValue(":quantidade", nova_entrada->retorna_quantidade());
        salvar_his_entradas.bindValue(":valor_compra", nova_entrada->retorna_valor_compra());
        salvar_his_entradas.bindValue(":valor_venda", nova_entrada->retorna_valor_venda());
        salvar_his_entradas.bindValue(":data", nova_entrada->retorna_data());
        salvar_his_entradas.bindValue(":hora", nova_entrada->retorna_hora());
        salvar_his_entradas.bindValue(":origem", nova_entrada->retorna_origem());
        salvar_his_entradas.bindValue(":id_balanco", nova_entrada->retorna_id_balanco());
        salvar_his_entradas.exec();*/

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((salvar_dados_produto.lastError().number()<=0)&&(salvar_dados_imagem.lastError().number()<=0)){

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
            msg.setText("\nNão foi possível efetuar o cadastro do produto!!!!");
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

bool produto::salvar_alteracao_dados_produto(QString nome_produto,QString fabricante_produto,QString desc_utilizacao_produto,
                                             QString cod_barras_produto,QString tipo_produto,float valor_ven,QString nome_arquivo_imagem,
                                             int altura, int largura,bool alterou_imgem){
    nome = nome_produto;
    fabricante = fabricante_produto;
    desc_utilizacao = desc_utilizacao_produto;
    cod_barras = cod_barras_produto;
    tipo = tipo_produto;
    valor_venda = valor_ven;

    conexao_bd conexao;
    QSqlDatabase bd;
    QString campos;

    //realiza conexão ao banco de dados

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","produto::salvar_alteracao_dados_produto")){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery alterar_dados_produto(bd);
        QSqlQuery alterar_dados_imagem(bd);
        QSqlQuery salvar_dados_imagem(bd);
        QSqlQuery consultar_imagem(bd);

        //realiza a consulta
        consultar_imagem.exec("SELECT id_imagem FROM produto WHERE id_produto = "+QString::number(id_produto)+ ";");
        if(consultar_imagem.last()){
            id_imagem = consultar_imagem.value(0).toInt();
        }
        consultar_imagem.clear();

        if(alterou_imgem){
            imagem *nova_imagem;
            nova_imagem = new imagem(nome_arquivo_imagem,largura,altura);
            if ((id_imagem == 1)&&(nome_arquivo_imagem.toStdString()!=":/img/img/produto.png")){
                //Insere os dados no cadastro de imagem
                salvar_dados_imagem.prepare("INSERT INTO imagem(imagem,extensao) VALUES(:imagem, :extensao);");
                salvar_dados_imagem.bindValue(":imagem", nova_imagem->retorna_vetor_bytes_imagem());
                salvar_dados_imagem.bindValue(":extensao",nova_imagem->retorna_extensao());
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
                if((nome_arquivo_imagem.toStdString()!=":/img/img/produto.png")){
                    //Altera os dados no cadastro da imagem
                    alterar_dados_imagem.prepare("UPDATE imagem SET "+campos+" WHERE id_imagem = '"+QString::number(id_imagem)+"';");
                    alterar_dados_imagem.bindValue(":imagem", nova_imagem->retorna_vetor_bytes_imagem());
                    alterar_dados_imagem.bindValue(":extensao",nova_imagem->retorna_extensao());
                    alterar_dados_imagem.exec();
                }
                campos.clear();
            }
        }

        campos = "nome=:nome, fabricante=:fabricante, desc_utilizacao=:desc_utilizacao, cod_barras=:cod_barras, tipo=:tipo, id_imagem=:id_imagem, valor_venda=:valor_venda";

        //Alteras os dados no cadastro dos produtos
        alterar_dados_produto.prepare("UPDATE produto SET "+campos+" WHERE id_produto = '"+QString::number(id_produto)+"';");
        alterar_dados_produto.bindValue(":nome", nome);
        alterar_dados_produto.bindValue(":fabricante",fabricante);
        alterar_dados_produto.bindValue(":desc_utilizacao", desc_utilizacao);
        alterar_dados_produto.bindValue(":cod_barras", cod_barras);
        alterar_dados_produto.bindValue(":tipo", tipo);
        alterar_dados_produto.bindValue(":id_imagem", id_imagem);
        alterar_dados_produto.bindValue(":valor_venda", valor_venda);
        alterar_dados_produto.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((alterar_dados_produto.lastError().number()<=0)&&(alterar_dados_imagem.lastError().number()<=0)&&
           (salvar_dados_imagem.lastError().number()<=0)){

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
        bd.close();
        conexao.fechar_conexao();
        return false;
    }
    bd.close();
    conexao.fechar_conexao();
    return false;
}

bool produto::remover_cadastro_produto(void){
    conexao_bd conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","produto::remover_cadastro_produto")){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        removido = true;

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery remover_cadastro(bd);

        //Alteras os dados no cadastro dos produtos
        remover_cadastro.prepare("UPDATE produto SET removido=:removido WHERE id_produto = '"+QString::number(id_produto)+"';");
        remover_cadastro.bindValue("removido=:",removido);
        remover_cadastro.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((remover_cadastro.lastError().number()<=0)){

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
            msg.setText("\nNão foi possível remover o cadastro do produto!!!!");
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

bool produto::recuperar_cadastro_produto(void){
    conexao_bd conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","produto::recuperar_cadastro_produto")){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        removido = false;

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery remover_cadastro(bd);

        //Alteras os dados no cadastro dos produtos
        remover_cadastro.prepare("UPDATE produto SET removido=:removido WHERE id_produto = '"+QString::number(id_produto)+"';");
        remover_cadastro.bindValue("removido=:",removido);
        remover_cadastro.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((remover_cadastro.lastError().number()<=0)){

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
            msg.setText("\nCadastro restaurado com sucesso!!!!");
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
            msg.setText("\nNão foi possível restaurar o cadastro do produto!!!!");
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

produto * produto::retorna_novo_cadastro_produto(void){
    return this;
}

bool produto::reajustar_valor_venda_produto(int tp, QString porcentagem){
    conexao_bd conexao;
    QSqlDatabase bd;
    int real;
    int centavos;
    int resto;

    float aux_centavos;

    porcentagem.replace("%","");
    float por = porcentagem.toFloat();

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","produto::reajustar_valor_venda_produto")){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        removido = true;

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery consultar_valor_anterior(bd);
        QSqlQuery atualizar_valor_venda(bd);

        //realiza a consulta para determinar  o id do produto.
        consultar_valor_anterior.exec("SELECT id_produto,valor_venda FROM produto");
        while(consultar_valor_anterior.next()){
            id_produto =  consultar_valor_anterior.value(0).toInt();
            valor_venda = consultar_valor_anterior.value(1).toFloat();

            if(tp==0){
                valor_venda = valor_venda+(valor_venda*(por/100));
                real = valor_venda;
                resto = (valor_venda-real)*10000;
                centavos = resto/100;
                resto = resto - centavos*100;

                if (resto>=56){
                    centavos = centavos+1;
                }
                aux_centavos = centavos;
                valor_venda = real+aux_centavos/100;
            }
            else{
                valor_venda = valor_venda-(valor_venda*(por/100));
                real = valor_venda;
                resto = (valor_venda-real)*10000;
                centavos = resto/100;
                resto = resto - centavos*100;

                if (resto>=56){
                    centavos = centavos+1;
                }
                aux_centavos = centavos;
                valor_venda = real+aux_centavos/100;
            }
            std::cout << "Valor venda " <<valor_venda<<std::endl;
            //Alteras os dados no cadastro dos produtos
            atualizar_valor_venda.prepare("UPDATE produto SET valor_venda=:valor_venda WHERE id_produto = '"+QString::number(id_produto)+"';");
            atualizar_valor_venda.bindValue("valor_venda=:",valor_venda);
            atualizar_valor_venda.exec();
            atualizar_valor_venda.clear();
        }
        consultar_valor_anterior.clear();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((atualizar_valor_venda.lastError().number()<=0)){

            //Finaliza a inserçao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_janela(":img/img/dinheiro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Reajustar");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nValores alterados com sucesso!!!!");
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
            QPixmap icone_janela(":img/img/dinheiro_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Reajustar");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão foi possível alterar os valores!!!");
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
