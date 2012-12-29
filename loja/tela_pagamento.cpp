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
    cheque_usado = new cheque();
    cartao_usado = new cartao();
    dinheiro_usado = new dinheiro();
    verifica_se_eh_compra = false;
}

void tela_pagamento::definir_dados_compra(compra* comp, std::vector< lista_compra* > lt_com){
    funcoes_extras funcao;
    dados_compra = comp;
    lt_compra = lt_com;
    verifica_se_eh_compra = true;

    valor_em_dinheiro = 0.0;
    valor_em_cartao = 0.0;
    valor_em_cheque = 0.0;
    total_pago = 0.0;
    troco = 0.0;
    total_pagar = dados_compra->retorna_valor_total()-dados_compra->retorna_desconto();

    ui->le_dinheiro->setText(funcao.retorna_valor_dinheiro(valor_em_dinheiro));
    ui->le_cartao->setText(funcao.retorna_valor_dinheiro(valor_em_cartao));
    ui->le_cheque->setText(funcao.retorna_valor_dinheiro(valor_em_cheque));

    ui->le_total_pagar->setText(funcao.retorna_valor_dinheiro(total_pagar));
    ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(0));
    ui->le_troco->setText(funcao.retorna_valor_dinheiro(0));
}

void tela_pagamento::definir_dados_venda(venda* vend, std::vector< lista_venda* > lt_ven){
    funcoes_extras funcao;
    dados_venda = vend;
    lt_venda = lt_ven;
    verifica_se_eh_compra = false;

    valor_em_dinheiro = 0.0;
    valor_em_cartao = 0.0;
    valor_em_cheque = 0.0;
    total_pago = 0.0;
    troco = 0.0;
    total_pagar = dados_venda->retorna_valor_total() - dados_venda->retorna_desconto();

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
        dinheiro_usado = tl_pagamento_dinheiro.retorna_valor_pago();
        valor_em_dinheiro = dinheiro_usado->retorna_valor();
        valor_em_cartao = funcao.converter_para_double(ui->le_cartao->text());
        valor_em_cheque = funcao.converter_para_double(ui->le_cheque->text());

        valor_em_dinheiro = funcao.arredonda_para_duas_casas_decimais(valor_em_dinheiro);
        valor_em_cartao = funcao.arredonda_para_duas_casas_decimais(valor_em_cartao);
        valor_em_cheque = funcao.arredonda_para_duas_casas_decimais(valor_em_cheque);

        total_pago = valor_em_dinheiro+valor_em_cartao+valor_em_cheque;
        total_pago = funcao.arredonda_para_duas_casas_decimais(total_pago);

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

        valor_em_dinheiro = funcao.arredonda_para_duas_casas_decimais(valor_em_dinheiro);
        valor_em_cartao = funcao.arredonda_para_duas_casas_decimais(valor_em_cartao);
        valor_em_cheque = funcao.arredonda_para_duas_casas_decimais(valor_em_cheque);

        total_pago = valor_em_dinheiro+valor_em_cartao+valor_em_cheque;
        total_pago = funcao.arredonda_para_duas_casas_decimais(total_pago);

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

        valor_em_dinheiro = funcao.arredonda_para_duas_casas_decimais(valor_em_dinheiro);
        valor_em_cartao = funcao.arredonda_para_duas_casas_decimais(valor_em_cartao);
        valor_em_cheque = funcao.arredonda_para_duas_casas_decimais(valor_em_cheque);

        total_pago = valor_em_dinheiro+valor_em_cartao+valor_em_cheque;
        total_pago = funcao.arredonda_para_duas_casas_decimais(total_pago);

        troco = total_pago-total_pagar;

        ui->le_troco->setText(funcao.retorna_valor_dinheiro(troco));
        ui->le_total_pago->setText(funcao.retorna_valor_dinheiro(total_pago));
        ui->le_cheque->setText(funcao.retorna_valor_dinheiro(valor_em_cheque));
    }
}

void tela_pagamento::on_btn_confirmar_clicked()
{
    if (verifica_se_eh_compra){
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
                QSqlQuery atualiza_valor_venda_produto(bd);
                QSqlQuery salvar_dados_cartao(bd);
                QSqlQuery salvar_dados_despesa_cartao(bd);
                QSqlQuery salvar_dados_cheque(bd);
                QSqlQuery salvar_dados_despesa_cheque(bd);
                QSqlQuery salvar_dados_dinheiro(bd);
                QSqlQuery salvar_dados_despesa_dinheiro(bd);

                //Declara a variável que irá fazer a consulta para determinar o id do produto;
                QSqlQuery consultar_id_compra(bd);
                QSqlQuery consultar_valor_compra(bd);
                QSqlQuery consultar_id_balanco(bd);

                //Insere os dados no cadastro da compra
                salvar_dados_compra.prepare("INSERT INTO compra(data_compra,id_fornecedor,num_cupom_nota,valor_total,desconto,valor_pago) VALUES(:data_compra, :id_fornecedor, :num_cupom_nota, :valor_total, :desconto, :valor_pago);");
                salvar_dados_compra.bindValue(":data_compra", dados_compra->retorna_data_compra());
                salvar_dados_compra.bindValue(":id_fornecedor",dados_compra->retorna_id_fornecedor());
                salvar_dados_compra.bindValue(":num_cupom_nota", dados_compra->retorna_num_cupom_nota());
                salvar_dados_compra.bindValue(":valor_total", dados_compra->retorna_valor_total());
                salvar_dados_compra.bindValue(":desconto", dados_compra->retorna_desconto());
                salvar_dados_compra.bindValue(":valor_pago", dados_compra->retorna_valor_pago());
                salvar_dados_compra.exec();

                //realiza a consulta para determinar  o id da compra.
                consultar_id_compra.exec("SELECT id_compra FROM compra");
                if(consultar_id_compra.last()){
                    id_compra = consultar_id_compra.value(0).toInt();
                }
                dados_compra->alterar_id_compra(id_compra);

                if(dinheiro_usado->retorna_valor() > 0.0){

                    double valor_pago = dinheiro_usado->retorna_valor();
                    double valor_parcela = 0.0;
                    double primeira_parcela = 0.0;
                    int numero_pacelas = dinheiro_usado->retorna_num_parcelas();

                    valor_parcela = valor_pago/numero_pacelas;
                    valor_parcela = funcao.arredonda_para_duas_casas_decimais(valor_parcela);
                    primeira_parcela = valor_pago - valor_parcela*(numero_pacelas-1);

                    //Insere os dados referente ao dinheiro
                    salvar_dados_dinheiro.prepare("INSERT INTO dinheiro(valor,origem,id_origem,data_ini_pag,num_par) VALUES(:valor, :origem, :id_origem, :data_ini_pag, :num_par);");
                    salvar_dados_dinheiro.bindValue(":valor", valor_pago);
                    salvar_dados_dinheiro.bindValue(":origem", 1);
                    salvar_dados_dinheiro.bindValue(":id_origem", dados_compra->retorna_id_compra());
                    salvar_dados_dinheiro.bindValue(":data_ini_pag", dinheiro_usado->retorna_data_ini_pag());
                    salvar_dados_dinheiro.bindValue(":num_par", dinheiro_usado->retorna_num_parcelas());
                    salvar_dados_dinheiro.exec();

                    std::vector< QString > data_parcelas = funcao.determina_parcelas(dinheiro_usado->retorna_data_ini_pag_Qdate(),
                                                                                     0,
                                                                                     dinheiro_usado->retorna_num_parcelas());

                    if (primeira_parcela!=valor_parcela){
                        //parcelas = ",\nsendo a 1ª de "+funcao.retorna_valor_dinheiro(primeira_parcela)+" e "+QString::number(numero_pacelas-1)+" de "+funcao.retorna_valor_dinheiro(valor_parcela);
                        //Insere na tabela de despesas a despesas da parcela do cartão.
                        salvar_dados_despesa_cartao.prepare("INSERT INTO despesas(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                        salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela em dinheiro de número 1, referente a compra de código: "+QString::number(dados_compra->retorna_id_compra())+".");
                        salvar_dados_despesa_cartao.bindValue(":valor", primeira_parcela);
                        salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[0]);
                        salvar_dados_despesa_cartao.bindValue(":status", 0);
                        salvar_dados_despesa_cartao.bindValue(":origem", 2);
                        salvar_dados_despesa_cartao.bindValue(":id_origem", dados_compra->retorna_id_compra());
                        salvar_dados_despesa_cartao.exec();
                        for (int i=2; i<=numero_pacelas;i++){
                            //Insere na tabela de despesas a despesas da parcela do cartão.
                            salvar_dados_despesa_cartao.prepare("INSERT INTO despesas(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                            salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela em dinheiro de número "+QString::number(i)+", referente a compra de código: "+QString::number(dados_compra->retorna_id_compra())+".");
                            salvar_dados_despesa_cartao.bindValue(":valor", valor_parcela);
                            salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[i-1]);
                            salvar_dados_despesa_cartao.bindValue(":status", 0);
                            salvar_dados_despesa_cartao.bindValue(":origem", 2);
                            salvar_dados_despesa_cartao.bindValue(":id_origem", dados_compra->retorna_id_compra());
                            salvar_dados_despesa_cartao.exec();
                        }
                    }
                    else{
                        for (int i=1; i<=numero_pacelas;i++){
                            //Insere na tabela de despesas a despesas da parcela do cartão.
                            salvar_dados_despesa_cartao.prepare("INSERT INTO despesas(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                            salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela em dinheiro de número "+QString::number(i)+", referente a compra de código: "+QString::number(dados_compra->retorna_id_compra())+".");
                            salvar_dados_despesa_cartao.bindValue(":valor", valor_parcela);
                            salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[i-1]);
                            salvar_dados_despesa_cartao.bindValue(":status", 0);
                            salvar_dados_despesa_cartao.bindValue(":origem", 2);
                            salvar_dados_despesa_cartao.bindValue(":id_origem", dados_compra->retorna_id_compra());
                            salvar_dados_despesa_cartao.exec();
                        }
                    }
                }

                if(cartao_usado->retorna_valor() > 0.0){
                    //Insere os dados referente ao cartão.
                    salvar_dados_cartao.prepare("INSERT INTO cartao(dia_vencimento,num_parcelas,valor,origem,id_origem) VALUES(:dia_vencimento, :num_parcelas, :valor, :origem, :id_origem);");
                    salvar_dados_cartao.bindValue(":dia_vencimento", cartao_usado->retorna_dia_vencimento());
                    salvar_dados_cartao.bindValue(":num_parcelas", cartao_usado->retorna_num_parcelas());
                    salvar_dados_cartao.bindValue(":valor", cartao_usado->retorna_valor());
                    salvar_dados_cartao.bindValue(":origem", 1);
                    salvar_dados_cartao.bindValue(":id_origem", dados_compra->retorna_id_compra());
                    salvar_dados_cartao.exec();

                    double valor_pago = cartao_usado->retorna_valor();
                    double valor_parcela = 0.0;
                    double primeira_parcela = 0.0;
                    int numero_pacelas = cartao_usado->retorna_num_parcelas();

                    valor_parcela = valor_pago/numero_pacelas;
                    valor_parcela = funcao.arredonda_para_duas_casas_decimais(valor_parcela);
                    primeira_parcela = valor_pago - valor_parcela*(numero_pacelas-1);

                    std::vector< QString > data_parcelas = funcao.determina_parcelas(dados_compra->retorna_data_QDate(),
                                                                                     cartao_usado->retorna_dia_vencimento(),
                                                                                     cartao_usado->retorna_num_parcelas());

                    if (primeira_parcela!=valor_parcela){
                        //parcelas = ",\nsendo a 1ª de "+funcao.retorna_valor_dinheiro(primeira_parcela)+" e "+QString::number(numero_pacelas-1)+" de "+funcao.retorna_valor_dinheiro(valor_parcela);
                        //Insere na tabela de despesas a despesas da parcela do cartão.
                        salvar_dados_despesa_cartao.prepare("INSERT INTO despesas(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                        salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela de número 1, referente a compra de código: "+QString::number(dados_compra->retorna_id_compra())+".");
                        salvar_dados_despesa_cartao.bindValue(":valor", primeira_parcela);
                        salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[0]);
                        salvar_dados_despesa_cartao.bindValue(":status", 0);
                        salvar_dados_despesa_cartao.bindValue(":origem", 0);
                        salvar_dados_despesa_cartao.bindValue(":id_origem", dados_compra->retorna_id_compra());
                        salvar_dados_despesa_cartao.exec();
                        for (int i=2; i<=numero_pacelas;i++){
                            //Insere na tabela de despesas a despesas da parcela do cartão.
                            salvar_dados_despesa_cartao.prepare("INSERT INTO despesas(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                            salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela de número "+QString::number(i)+", referente a compra de código: "+QString::number(dados_compra->retorna_id_compra())+".");
                            salvar_dados_despesa_cartao.bindValue(":valor", valor_parcela);
                            salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[i-1]);
                            salvar_dados_despesa_cartao.bindValue(":status", 0);
                            salvar_dados_despesa_cartao.bindValue(":origem", 0);
                            salvar_dados_despesa_cartao.bindValue(":id_origem", dados_compra->retorna_id_compra());
                            salvar_dados_despesa_cartao.exec();
                        }
                    }
                    else{
                        for (int i=1; i<=numero_pacelas;i++){
                            //Insere na tabela de despesas a despesas da parcela do cartão.
                            salvar_dados_despesa_cartao.prepare("INSERT INTO despesas(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                            salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela de número "+QString::number(i)+", referente a compra de código: "+QString::number(dados_compra->retorna_id_compra())+".");
                            salvar_dados_despesa_cartao.bindValue(":valor", valor_parcela);
                            salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[i-1]);
                            salvar_dados_despesa_cartao.bindValue(":status", 0);
                            salvar_dados_despesa_cartao.bindValue(":origem", 0);
                            salvar_dados_despesa_cartao.bindValue(":id_origem", dados_compra->retorna_id_compra());
                            salvar_dados_despesa_cartao.exec();
                        }
                    }

                }

                if(cheque_usado->retorna_valor() > 0.0){
                    //Insere os dados referente ao cheque
                    salvar_dados_cheque.prepare("INSERT INTO cheque(id_banco,agencia,conta,numero,valor,origem,id_origem,data_pagamento,nome_banco) VALUES(:id_banco, :agencia, :conta, :numero, :valor, :origem, :id_origem, :data_pagamento, :nome_banco);");
                    salvar_dados_cheque.bindValue(":id_banco", cheque_usado->retorna_codigo_banco());
                    salvar_dados_cheque.bindValue(":agencia", cheque_usado->retorna_agencia());
                    salvar_dados_cheque.bindValue(":conta", cheque_usado->retorna_conta());
                    salvar_dados_cheque.bindValue(":numero", cheque_usado->retorna_numero());
                    salvar_dados_cheque.bindValue(":valor", cheque_usado->retorna_valor());
                    salvar_dados_cheque.bindValue(":origem", 1);
                    salvar_dados_cheque.bindValue(":id_origem", dados_compra->retorna_id_compra());
                    salvar_dados_cheque.bindValue(":data_pagamento", cheque_usado->retorna_data_pagamento());
                    salvar_dados_cheque.bindValue(":nome_banco", cheque_usado->retorna_nome_banco());
                    salvar_dados_cheque.exec();

                    //Insere na tabela de despesas a despesa do cheque.
                    salvar_dados_despesa_cheque.prepare("INSERT INTO despesas(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                    salvar_dados_despesa_cheque.bindValue(":descricao", "Cheque utilizado para efetuar pagamento da compra de código: "+QString::number(dados_compra->retorna_id_compra())+".");
                    salvar_dados_despesa_cheque.bindValue(":valor", cheque_usado->retorna_valor());
                    if(cheque_usado->retorna_se_insere_caixa_hoje()==true){
                        QDate data_atual;
                        salvar_dados_despesa_cheque.bindValue(":status", 1);
                        salvar_dados_despesa_cheque.bindValue(":data", data_atual.currentDate().toString(Qt::SystemLocaleShortDate));
                    }
                    else{
                        salvar_dados_despesa_cheque.bindValue(":data", cheque_usado->retorna_data_pagamento());
                        salvar_dados_despesa_cheque.bindValue(":status", 0);
                    }
                    salvar_dados_despesa_cheque.bindValue(":origem", 1);
                    salvar_dados_despesa_cheque.bindValue(":id_origem", dados_compra->retorna_id_compra());
                    salvar_dados_despesa_cheque.exec();
                }

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

                    campos = "valor_venda=:valor_venda";

                    total_comprado = total_comprado+lt_compra[i]->retorna_quantidade();
                    total_disponivel = total_disponivel+lt_compra[i]->retorna_quantidade();

                    //Atualiva preço de venda do produto.
                    atualiza_valor_venda_produto.prepare("UPDATE produto SET "+campos+" WHERE id_produto = '"+QString::number(lt_compra[i]->retorna_id_produto())+"';");
                    atualiza_valor_venda_produto.bindValue(":valor_venda", lt_compra[i]->retorna_valor_venda());
                    atualiza_valor_venda_produto.exec();
                }

                //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
                if((salvar_dados_compra.lastError().number()<=0)&&(alterar_dados_his_balanco_estoque.lastError().number()<=0)&&
                   (salvar_dados_his_balanco_estoque.lastError().number()<=0)&&(salvar_dados_lista_compra.lastError().number()<=0)&&
                   (atualiza_valor_venda_produto.lastError().number()<=0)&&(salvar_dados_cheque.lastError().number()<=0)&&
                   (salvar_dados_cartao.lastError().number()<=0)&&(salvar_dados_despesa_cheque.lastError().number()<=0)&&
                   (salvar_dados_dinheiro.lastError().number()<=0)&&(salvar_dados_despesa_dinheiro.lastError().number()<=0)&&
                   (salvar_dados_despesa_cartao.lastError().number()<=0)){

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
    else{
        funcoes_extras funcao;
        if ((total_pagar-total_pago)>0){
            QPixmap icone_janela(":img/img/produto_pergunta_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Total pago");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("O total pago é inferior ao valor total da venda.\nPor favor complete a diferença de "+funcao.retorna_valor_dinheiro(total_pagar-total_pago));
            msg.exec();
        }
        else{
            conexao_bd conexao;
            QSqlDatabase bd;

            int id_venda;
            double valor_venda;
            int id_balanco;
            int total_vendido;
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
                QSqlQuery salvar_dados_venda(bd);
                QSqlQuery alterar_dados_his_balanco_estoque(bd);
                QSqlQuery salvar_dados_his_balanco_estoque(bd);
                QSqlQuery salvar_dados_lista_compra(bd);
                QSqlQuery atualiza_valor_venda_produto(bd);
                QSqlQuery salvar_dados_cartao(bd);
                QSqlQuery salvar_dados_despesa_cartao(bd);
                QSqlQuery salvar_dados_cheque(bd);
                QSqlQuery salvar_dados_despesa_cheque(bd);
                QSqlQuery salvar_dados_dinheiro(bd);
                QSqlQuery salvar_dados_despesa_dinheiro(bd);

                //Declara a variável que irá fazer a consulta para determinar o id do produto;
                QSqlQuery consultar_id_venda(bd);
                QSqlQuery consultar_valor_venda(bd);
                QSqlQuery consultar_id_balanco(bd);

                //Insere os dados no cadastro da venda
                salvar_dados_venda.prepare("INSERT INTO venda(data_venda,id_cliente,valor_total,desconto,valor_pago) VALUES(:data_venda, :id_cliente, :valor_total, :desconto, :valor_pago);");
                salvar_dados_venda.bindValue(":data_venda", dados_venda->retorna_data_venda());
                salvar_dados_venda.bindValue(":id_cliente",dados_venda->retorna_id_cliente());
                salvar_dados_venda.bindValue(":valor_total", dados_venda->retorna_valor_total());
                salvar_dados_venda.bindValue(":desconto", dados_venda->retorna_desconto());
                salvar_dados_venda.bindValue(":valor_pago", dados_venda->retorna_valor_pago());
                salvar_dados_venda.exec();

                //realiza a consulta para determinar  o id da venda.
                consultar_id_venda.exec("SELECT id_venda FROM venda");
                if(consultar_id_venda.last()){
                    id_venda = consultar_id_venda.value(0).toInt();
                }
                dados_venda->alterar_id_venda(id_venda);

                if(dinheiro_usado->retorna_valor() > 0.0){

                    double valor_pago = dinheiro_usado->retorna_valor();
                    double valor_parcela = 0.0;
                    double primeira_parcela = 0.0;
                    int numero_pacelas = dinheiro_usado->retorna_num_parcelas();

                    valor_parcela = valor_pago/numero_pacelas;
                    valor_parcela = funcao.arredonda_para_duas_casas_decimais(valor_parcela);
                    primeira_parcela = valor_pago - valor_parcela*(numero_pacelas-1);

                    //Insere os dados referente ao dinheiro
                    salvar_dados_dinheiro.prepare("INSERT INTO dinheiro(valor,origem,id_origem,data_ini_pag,num_par) VALUES(:valor, :origem, :id_origem, :data_ini_pag, :num_par);");
                    salvar_dados_dinheiro.bindValue(":valor", valor_pago);
                    salvar_dados_dinheiro.bindValue(":origem", 3);
                    salvar_dados_dinheiro.bindValue(":id_origem", dados_venda->retorna_id_venda());
                    salvar_dados_dinheiro.bindValue(":data_ini_pag", dinheiro_usado->retorna_data_ini_pag());
                    salvar_dados_dinheiro.bindValue(":num_par", dinheiro_usado->retorna_num_parcelas());
                    salvar_dados_dinheiro.exec();

                    std::vector< QString > data_parcelas = funcao.determina_parcelas(dinheiro_usado->retorna_data_ini_pag_Qdate(),
                                                                                     0,
                                                                                     dinheiro_usado->retorna_num_parcelas());

                    if (primeira_parcela!=valor_parcela){
                        //parcelas = ",\nsendo a 1ª de "+funcao.retorna_valor_dinheiro(primeira_parcela)+" e "+QString::number(numero_pacelas-1)+" de "+funcao.retorna_valor_dinheiro(valor_parcela);
                        //Insere na tabela de ganhos a venda da parcela do cartão.
                        salvar_dados_despesa_cartao.prepare("INSERT INTO ganhos(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                        salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela em dinheiro de número 1, referente a venda de código: "+QString::number(dados_venda->retorna_id_venda())+".");
                        salvar_dados_despesa_cartao.bindValue(":valor", primeira_parcela);
                        salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[0]);
                        salvar_dados_despesa_cartao.bindValue(":status", 0);
                        salvar_dados_despesa_cartao.bindValue(":origem", 2);
                        salvar_dados_despesa_cartao.bindValue(":id_origem", dados_venda->retorna_id_venda());
                        salvar_dados_despesa_cartao.exec();
                        for (int i=2; i<=numero_pacelas;i++){
                            //Insere na tabela de ganhos a venda da parcela do cartão.
                            salvar_dados_despesa_cartao.prepare("INSERT INTO ganhos(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                            salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela em dinheiro de número "+QString::number(i)+", referente a venda de código: "+QString::number(dados_venda->retorna_id_venda())+".");
                            salvar_dados_despesa_cartao.bindValue(":valor", valor_parcela);
                            salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[i-1]);
                            salvar_dados_despesa_cartao.bindValue(":status", 0);
                            salvar_dados_despesa_cartao.bindValue(":origem", 2);
                            salvar_dados_despesa_cartao.bindValue(":id_origem", dados_venda->retorna_id_venda());
                            salvar_dados_despesa_cartao.exec();
                        }
                    }
                    else{
                        for (int i=1; i<=numero_pacelas;i++){
                            //Insere na tabela de ganhos o ganho da parcela do cartão.
                            salvar_dados_despesa_cartao.prepare("INSERT INTO ganhos(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                            salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela em dinheiro de número "+QString::number(i)+", referente a venda de código: "+QString::number(dados_venda->retorna_id_venda())+".");
                            salvar_dados_despesa_cartao.bindValue(":valor", valor_parcela);
                            salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[i-1]);
                            salvar_dados_despesa_cartao.bindValue(":status", 0);
                            salvar_dados_despesa_cartao.bindValue(":origem", 2);
                            salvar_dados_despesa_cartao.bindValue(":id_origem", dados_venda->retorna_id_venda());
                            salvar_dados_despesa_cartao.exec();
                        }
                    }
                }

                if(cartao_usado->retorna_valor() > 0.0){
                    //Insere os dados referente ao cartão.
                    salvar_dados_cartao.prepare("INSERT INTO cartao(dia_vencimento,num_parcelas,valor,origem,id_origem) VALUES(:dia_vencimento, :num_parcelas, :valor, :origem, :id_origem);");
                    salvar_dados_cartao.bindValue(":dia_vencimento", cartao_usado->retorna_dia_vencimento());
                    salvar_dados_cartao.bindValue(":num_parcelas", cartao_usado->retorna_num_parcelas());
                    salvar_dados_cartao.bindValue(":valor", cartao_usado->retorna_valor());
                    salvar_dados_cartao.bindValue(":origem", 3);
                    salvar_dados_cartao.bindValue(":id_origem", dados_venda->retorna_id_venda());
                    salvar_dados_cartao.exec();

                    double valor_pago = cartao_usado->retorna_valor();
                    double valor_parcela = 0.0;
                    double primeira_parcela = 0.0;
                    int numero_pacelas = cartao_usado->retorna_num_parcelas();

                    valor_parcela = valor_pago/numero_pacelas;
                    valor_parcela = funcao.arredonda_para_duas_casas_decimais(valor_parcela);
                    primeira_parcela = valor_pago - valor_parcela*(numero_pacelas-1);

                    std::vector< QString > data_parcelas = funcao.determina_parcelas(dados_compra->retorna_data_QDate(),
                                                                                     cartao_usado->retorna_dia_vencimento(),
                                                                                     cartao_usado->retorna_num_parcelas());

                    if (primeira_parcela!=valor_parcela){
                        //parcelas = ",\nsendo a 1ª de "+funcao.retorna_valor_dinheiro(primeira_parcela)+" e "+QString::number(numero_pacelas-1)+" de "+funcao.retorna_valor_dinheiro(valor_parcela);
                        //Insere na tabela de despesas a despesas da parcela do cartão.
                        salvar_dados_despesa_cartao.prepare("INSERT INTO ganhos(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                        salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela de número 1, referente a venda de código: "+QString::number(dados_venda->retorna_id_venda())+".");
                        salvar_dados_despesa_cartao.bindValue(":valor", primeira_parcela);
                        salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[0]);
                        salvar_dados_despesa_cartao.bindValue(":status", 0);
                        salvar_dados_despesa_cartao.bindValue(":origem", 0);
                        salvar_dados_despesa_cartao.bindValue(":id_origem", dados_venda->retorna_id_venda());
                        salvar_dados_despesa_cartao.exec();
                        for (int i=2; i<=numero_pacelas;i++){
                            //Insere na tabela de despesas a despesas da parcela do cartão.
                            salvar_dados_despesa_cartao.prepare("INSERT INTO ganhos(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                            salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela de número "+QString::number(i)+", referente a venda de código: "+QString::number(dados_venda->retorna_id_venda())+".");
                            salvar_dados_despesa_cartao.bindValue(":valor", valor_parcela);
                            salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[i-1]);
                            salvar_dados_despesa_cartao.bindValue(":status", 0);
                            salvar_dados_despesa_cartao.bindValue(":origem", 0);
                            salvar_dados_despesa_cartao.bindValue(":id_origem", dados_venda->retorna_id_venda());
                            salvar_dados_despesa_cartao.exec();
                        }
                    }
                    else{
                        for (int i=1; i<=numero_pacelas;i++){
                            //Insere na tabela de despesas a despesas da parcela do cartão.
                            salvar_dados_despesa_cartao.prepare("INSERT INTO ganhos(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                            salvar_dados_despesa_cartao.bindValue(":descricao", "Parcela de número "+QString::number(i)+", referente a venda de código: "+QString::number(dados_venda->retorna_id_venda())+".");
                            salvar_dados_despesa_cartao.bindValue(":valor", valor_parcela);
                            salvar_dados_despesa_cartao.bindValue(":data", data_parcelas[i-1]);
                            salvar_dados_despesa_cartao.bindValue(":status", 0);
                            salvar_dados_despesa_cartao.bindValue(":origem", 0);
                            salvar_dados_despesa_cartao.bindValue(":id_origem", dados_venda->retorna_id_venda());
                            salvar_dados_despesa_cartao.exec();
                        }
                    }

                }

                if(cheque_usado->retorna_valor() > 0.0){
                    //Insere os dados referente ao cheque
                    salvar_dados_cheque.prepare("INSERT INTO cheque(id_banco,agencia,conta,numero,valor,origem,id_origem,data_pagamento,nome_banco) VALUES(:id_banco, :agencia, :conta, :numero, :valor, :origem, :id_origem, :data_pagamento, :nome_banco);");
                    salvar_dados_cheque.bindValue(":id_banco", cheque_usado->retorna_codigo_banco());
                    salvar_dados_cheque.bindValue(":agencia", cheque_usado->retorna_agencia());
                    salvar_dados_cheque.bindValue(":conta", cheque_usado->retorna_conta());
                    salvar_dados_cheque.bindValue(":numero", cheque_usado->retorna_numero());
                    salvar_dados_cheque.bindValue(":valor", cheque_usado->retorna_valor());
                    salvar_dados_cheque.bindValue(":origem", 3);
                    salvar_dados_cheque.bindValue(":id_origem", dados_venda->retorna_id_venda());
                    salvar_dados_cheque.bindValue(":data_pagamento", cheque_usado->retorna_data_pagamento());
                    salvar_dados_cheque.bindValue(":nome_banco", cheque_usado->retorna_nome_banco());
                    salvar_dados_cheque.exec();

                    //Insere na tabela de despesas a despesa do cheque.
                    salvar_dados_despesa_cheque.prepare("INSERT INTO ganhos(data,descricao,valor,status,origem,id_origem) VALUES(:data, :descricao, :valor, :status, :origem, :id_origem);");
                    salvar_dados_despesa_cheque.bindValue(":descricao", "Cheque utilizado para efetuar pagamento da venda de código: "+QString::number(dados_venda->retorna_id_venda())+".");
                    salvar_dados_despesa_cheque.bindValue(":valor", cheque_usado->retorna_valor());
                    if(cheque_usado->retorna_se_insere_caixa_hoje()==true){
                        QDate data_atual;
                        salvar_dados_despesa_cheque.bindValue(":status", 1);
                        salvar_dados_despesa_cheque.bindValue(":data", data_atual.currentDate().toString(Qt::SystemLocaleShortDate));
                    }
                    else{
                        salvar_dados_despesa_cheque.bindValue(":data", cheque_usado->retorna_data_pagamento());
                        salvar_dados_despesa_cheque.bindValue(":status", 0);
                    }
                    salvar_dados_despesa_cheque.bindValue(":origem", 1);
                    salvar_dados_despesa_cheque.bindValue(":id_origem", dados_venda->retorna_id_venda());
                    salvar_dados_despesa_cheque.exec();
                }

                for(int i=0; i<int(lt_compra.size());i++){
                    /*//realiza a consulta determinar se já existe produto com mesmo valor de venda cadastrado.
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

                    campos = "valor_venda=:valor_venda";

                    total_comprado = total_comprado+lt_compra[i]->retorna_quantidade();
                    total_disponivel = total_disponivel+lt_compra[i]->retorna_quantidade();

                    //Atualiva preço de venda do produto.
                    atualiza_valor_venda_produto.prepare("UPDATE produto SET "+campos+" WHERE id_produto = '"+QString::number(lt_compra[i]->retorna_id_produto())+"';");
                    atualiza_valor_venda_produto.bindValue(":valor_venda", lt_compra[i]->retorna_valor_venda());
                    atualiza_valor_venda_produto.exec(); */
                }

                //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
                if((salvar_dados_venda.lastError().number()<=0)&&(alterar_dados_his_balanco_estoque.lastError().number()<=0)&&
                   (salvar_dados_his_balanco_estoque.lastError().number()<=0)&&(salvar_dados_lista_compra.lastError().number()<=0)&&
                   (atualiza_valor_venda_produto.lastError().number()<=0)&&(salvar_dados_cheque.lastError().number()<=0)&&
                   (salvar_dados_cartao.lastError().number()<=0)&&(salvar_dados_despesa_cheque.lastError().number()<=0)&&
                   (salvar_dados_dinheiro.lastError().number()<=0)&&(salvar_dados_despesa_dinheiro.lastError().number()<=0)&&
                   (salvar_dados_despesa_cartao.lastError().number()<=0)){

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
}

void tela_pagamento::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}
