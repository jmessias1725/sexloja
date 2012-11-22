#include "tela_pagamento.h"
#include "ui_tela_pagamento.h"

tela_pagamento::tela_pagamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_pagamento)
{
    ui->setupUi(this);
}

tela_pagamento::~tela_pagamento()
{
    delete ui;
}

void tela_pagamento::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_pagamento::definir_dados(compra* comp, std::vector< lista_compra* > lt_com){
    funcoes_extras funcao;
    dados_compra = comp;
    lt_compra = lt_com;

    valor_em_dinheiro = 0.0;
    valor_em_cartao = 0.0;
    valor_em_cheque = 0.0;
    total_pago = 0.0;
    troco = 0.0;
    total_pagar = dados_compra->retorna_valor_total();

    ui->le_dinheiro->setText(funcao.retorna_valor_dinheiro(valor_em_dinheiro));
    ui->le_cartao->setText(funcao.retorna_valor_dinheiro(valor_em_cartao));
    ui->le_cheque->setText(funcao.retorna_valor_dinheiro(valor_em_cheque));

    ui->le_total_pagar->setText(funcao.retorna_valor_dinheiro(total_pagar));
    ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(0));
    ui->le_troco->setText(funcao.retorna_valor_dinheiro(0));
}

void tela_pagamento::on_btn_dinheiro_clicked()
{
    double restante_a_pagar=0.0;
    total_pago = 0.0;
    funcoes_extras funcao;

    restante_a_pagar = total_pagar - valor_em_cartao - valor_em_cheque;

    tl_pagamento_dinheiro.definir_icone_janela(logomarca);
    tl_pagamento_dinheiro.definir_dados(restante_a_pagar);
    if(tl_pagamento_dinheiro.exec()){
        valor_em_dinheiro = tl_pagamento_dinheiro.retorna_valor_pago();
        valor_em_cartao = funcao.converter_para_double(ui->le_cartao->text());
        valor_em_cheque = funcao.converter_para_double(ui->le_cheque->text());
        total_pago = valor_em_dinheiro+valor_em_cartao+valor_em_cheque;
        troco = total_pago-total_pagar;

        ui->le_troco->setText(funcao.retorna_valor_dinheiro(troco));
        ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(total_pago));
        ui->le_dinheiro->setText(funcao.retorna_valor_dinheiro(valor_em_dinheiro));
    }
}

void tela_pagamento::on_btn_cartao_clicked()
{
    double restante_a_pagar=0.0;
    total_pago = 0.0;
    funcoes_extras funcao;

    restante_a_pagar = total_pagar - valor_em_dinheiro - valor_em_cheque;

    tl_pagamento_cartao.definir_icone_janela(logomarca);
    tl_pagamento_cartao.definir_dados(restante_a_pagar);
    if(tl_pagamento_cartao.exec()){
        cartao_usado = tl_pagamento_cartao.retorna_cartao();
        valor_em_cartao = cartao_usado->retorna_valor();
        valor_em_dinheiro = funcao.converter_para_double(ui->le_dinheiro->text());
        valor_em_cheque = funcao.converter_para_double(ui->le_cheque->text());
        total_pago = valor_em_dinheiro+valor_em_cartao+valor_em_cheque;
        troco = total_pago-total_pagar;

        ui->le_troco->setText(funcao.retorna_valor_dinheiro(troco));
        ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(total_pago));
        ui->le_cartao->setText(funcao.retorna_valor_dinheiro(valor_em_cartao));
    }
}

void tela_pagamento::on_btn_cheque_clicked()
{
    double restante_a_pagar=0.0;
    total_pago = 0.0;
    funcoes_extras funcao;

    restante_a_pagar = total_pagar - valor_em_dinheiro - valor_em_cartao;

    tl_pagamento_cheque.definir_icone_janela(logomarca);
    tl_pagamento_cheque.definir_dados(restante_a_pagar);
    if(tl_pagamento_cheque.exec()){
        cheque_usado = tl_pagamento_cheque.retorna_cheque();
        valor_em_cheque = cheque_usado->retorna_valor();
        valor_em_dinheiro = funcao.converter_para_double(ui->le_dinheiro->text());
        valor_em_cartao = funcao.converter_para_double(ui->le_cartao->text());
        total_pago = valor_em_dinheiro+valor_em_cartao+valor_em_cheque;
        troco = total_pago-total_pagar;

        ui->le_troco->setText(funcao.retorna_valor_dinheiro(troco));
        ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(total_pago));
        ui->le_cheque->setText(funcao.retorna_valor_dinheiro(valor_em_cheque));
    }
}

void tela_pagamento::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
    if ((total_pagar-total_pago)>0){
        QPixmap icone_janela(":img/img/produto_pergunta_50.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("Total pago");
        msg.addButton("OK", QMessageBox::AcceptRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("O total pago é inferior ao valor total da compra.\nPor favor complete a diferença de "+funcao.retorna_valor_dinheiro(total_pagar-total_pago));
        msg.exec();
    }
    else{
        conexao_bd conexao;
        QSqlDatabase bd;

        int id_compra;
        double valor_compra;
        int id_balanco;
        int total_comprado;
        int total_disponivel;
        bool encontrou_valor_compra = false;

        QString campos;

        //realiza conexão ao banco de dados
        if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","tela_pagamento::on_btn_confirmar_clicke")){
            //Retorna o banco de dados
            bd = conexao.retorna_bd();

            //Inicia a transaçao
            bd.transaction();

            //Declara as variáves que irão inserir os dados no banco de dados.
            QSqlQuery salvar_dados_compra(bd);
            QSqlQuery alterar_dados_his_balanco_estoque(bd);
            QSqlQuery salvar_dados_his_balanco_estoque(bd);
            QSqlQuery salvar_dados_lista_compra(bd);

            //Declara a variável que irá fazer a consulta para determinar o id do produto;
            QSqlQuery consultar_id_compra(bd);
            QSqlQuery consultar_valor_compra(bd);
            QSqlQuery consultar_id_balanco(bd);

            //Insere os dados no cadastro da compra
            salvar_dados_compra.prepare("INSERT INTO compra(data_compra,id_fornecedor,num_cupom_nota,valor_total) VALUES(:data_compra, :id_fornecedor, :num_cupom_nota, :valor_total);");
            salvar_dados_compra.bindValue(":data_compra", dados_compra->retorna_data_compra());
            salvar_dados_compra.bindValue(":id_fornecedor",dados_compra->retorna_id_fornecedor());
            salvar_dados_compra.bindValue(":num_cupom_nota", dados_compra->retorna_num_cupom_nota());
            salvar_dados_compra.bindValue(":valor_total", dados_compra->retorna_valor_total());
            salvar_dados_compra.exec();

            //realiza a consulta para determinar  o id da compra.
            consultar_id_compra.exec("SELECT id_compra FROM compra");
            if(consultar_id_compra.last()){
                id_compra = consultar_id_compra.value(0).toInt();
            }

            dados_compra->alterar_id_compra(id_compra);

            for(int i=0; i<int(lt_compra.size());i++){
                //realiza a consulta determinar se já existe produto com mesmo valor de venda cadastrado.
                consultar_valor_compra.exec("SELECT id_balanco,valor_compra,total_comprado,total_disponivel FROM his_balanco_estoque WHERE id_produto = "+QString::number(lt_compra[i]->retorna_id_produto())+";");
                while((consultar_valor_compra.next())&&(encontrou_valor_compra==false)){
                    id_balanco = consultar_valor_compra.value(0).toInt();
                    valor_compra = consultar_valor_compra.value(1).toDouble();
                    total_comprado = consultar_valor_compra.value(2).toInt();
                    total_disponivel = consultar_valor_compra.value(3).toInt();
                    if(funcao.arredonda_para_duas_casas_decimais(valor_compra)==
                       funcao.arredonda_para_duas_casas_decimais(lt_compra[i]->retorna_valor_compra())){

                        encontrou_valor_compra = true;

                        campos = "valor_compra=:valor_compra , total_comprado=:total_comprado, total_disponivel=:total_disponivel";

                        total_comprado = total_comprado+lt_compra[i]->retorna_quantidade();
                        total_disponivel = total_disponivel+lt_compra[i]->retorna_quantidade();

                        //Alteras os dados no cadastro dos produtos
                        alterar_dados_his_balanco_estoque.prepare("UPDATE his_balanco_estoque SET "+campos+" WHERE id_produto = '"+QString::number(lt_compra[i]->retorna_id_produto())+"' AND id_balanco = '"+QString::number(id_balanco)+"';");
                        alterar_dados_his_balanco_estoque.bindValue(":valor_compra", lt_compra[i]->retorna_valor_compra());
                        alterar_dados_his_balanco_estoque.bindValue(":total_comprado", total_comprado);
                        alterar_dados_his_balanco_estoque.bindValue(":total_disponivel", total_disponivel);
                        alterar_dados_his_balanco_estoque.exec();

                        lt_compra[i]->alterar_id_balanco(id_balanco);
                    }
                }
                if(encontrou_valor_compra == false){
                    //Insere os dados no histórico de balanço do estoque
                    salvar_dados_his_balanco_estoque.prepare("INSERT INTO his_balanco_estoque(valor_compra,id_produto,total_comprado,total_disponivel) VALUES(:valor_compra, :id_produto, :total_comprado, :total_disponivel);");
                    salvar_dados_his_balanco_estoque.bindValue(":valor_compra", lt_compra[i]->retorna_valor_compra());
                    salvar_dados_his_balanco_estoque.bindValue(":id_produto",lt_compra[i]->retorna_id_produto());
                    salvar_dados_his_balanco_estoque.bindValue(":total_comprado", lt_compra[i]->retorna_quantidade());
                    salvar_dados_his_balanco_estoque.bindValue(":total_disponivel", lt_compra[i]->retorna_quantidade());
                    salvar_dados_his_balanco_estoque.exec();

                    //realiza a consulta para determinar o id do balanco.
                    consultar_id_balanco.exec("SELECT id_balanco FROM his_balanco_estoque");
                    if(consultar_id_balanco.last()){
                        id_balanco = consultar_id_balanco.value(0).toInt();
                    }
                    lt_compra[i]->alterar_id_balanco(id_balanco);
                }

                encontrou_valor_compra = false;

                //Insere os dados na lista de compra;
                salvar_dados_lista_compra.prepare("INSERT INTO lista_compra(id_produto,valor_compra_uni,quantidade,id_compra,valor_venda_uni,id_balanco) VALUES(:id_produto,:valor_compra_uni,:quantidade,:id_compra,:valor_venda_uni,:id_balanco);");
                salvar_dados_lista_compra.bindValue(":id_produto", lt_compra[i]->retorna_id_produto());
                salvar_dados_lista_compra.bindValue(":valor_compra_uni",lt_compra[i]->retorna_valor_compra());
                salvar_dados_lista_compra.bindValue(":quantidade", lt_compra[i]->retorna_quantidade());
                salvar_dados_lista_compra.bindValue(":id_compra", dados_compra->retorna_id_compra());
                salvar_dados_lista_compra.bindValue(":valor_venda_uni", lt_compra[i]->retorna_valor_venda());
                salvar_dados_lista_compra.bindValue(":id_balanco",  lt_compra[i]->retorna_id_balanco());
                salvar_dados_lista_compra.exec();
            }

            std::cout<<salvar_dados_compra.lastError().number()<<std::endl;
            std::cout<<alterar_dados_his_balanco_estoque.lastError().number()<<std::endl;
            std::cout<<salvar_dados_his_balanco_estoque.lastError().number()<<std::endl;
            std::cout<<salvar_dados_lista_compra.lastError().number()<<std::endl;

            //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
            if((salvar_dados_compra.lastError().number()<=0)&&(alterar_dados_his_balanco_estoque.lastError().number()<=0)&&
               (salvar_dados_his_balanco_estoque.lastError().number()<=0)&&(salvar_dados_lista_compra.lastError().number()<=0)){

                //Finaliza a inserçao dos dados.
                bd.commit();
                //bd.rollback();

                //Gera mensagem de que tudo ocorreu direito.
                QPixmap icone_janela(":img/img/arquivo_50.png");
                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(logomarca);
                msg.setWindowTitle("Compra");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nA compra foi efetuada com sucesso!!!!");
                msg.exec();

                //Fecha a conexão com o banco de dados
                bd.close();
                conexao.fechar_conexao();
                this->accept();
                this->close();
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
                msg.setText("\nNão foi possível efetuar a compra!!!!");
                msg.exec();

                //Fecha a conexão com o banco de dados
                bd.close();
                conexao.fechar_conexao();
                this->accept();
                this->close();
            }
        }
    }
}

void tela_pagamento::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}
