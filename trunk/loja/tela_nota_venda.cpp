#include "tela_nota_venda.h"
#include "ui_tela_nota_venda.h"

tela_nota_venda::tela_nota_venda(QWidget *parent) :
    QDialog(parent,Qt::Window),
    ui(new Ui::tela_nota_venda)
{
    ui->setupUi(this);
}

tela_nota_venda::~tela_nota_venda()
{
    delete ui;
}

void tela_nota_venda::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    font5.setFamily(QString::fromUtf8("Calibri"));
    font5.setPointSize(10);
    te_justificativa_cancelamento = new QTextEdit();
    te_justificativa_cancelamento->setObjectName(QString::fromUtf8("te_justificativa_cancelamento"));
    te_justificativa_cancelamento->setMinimumSize(QSize(750, 250));
    te_justificativa_cancelamento->setFont(font5);
    te_justificativa_cancelamento->setReadOnly(true);

    tw_lista_pagamento = new QTableWidget();
    tw_lista_pagamento->setObjectName(QString::fromUtf8("tw_lista_pagamento"));
    tw_lista_pagamento->setMinimumSize(QSize(750, 250));
    tw_lista_pagamento->setFont(font5);
    tw_lista_pagamento->setAlternatingRowColors(true);
    tw_lista_pagamento->setRowCount(0);
    tw_lista_pagamento->setColumnCount(0);
    tw_lista_pagamento->horizontalHeader()->setDefaultSectionSize(400);
    tw_lista_pagamento->horizontalHeader()->setHighlightSections(true);
    tw_lista_pagamento->horizontalHeader()->setMinimumSectionSize(95);
    tw_lista_pagamento->horizontalHeader()->setStretchLastSection(true);
    tw_lista_pagamento->verticalHeader()->setVisible(false);
    tw_lista_pagamento->verticalHeader()->setDefaultSectionSize(20);
    tw_lista_pagamento->verticalHeader()->setMinimumSectionSize(20);
    tw_lista_pagamento->connect(tw_lista_pagamento,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(ajustar_parcelas(QModelIndex)));
}

void tela_nota_venda::definir_dados(venda *vend){
    venda_atual = vend;
    this->setWindowTitle("Venda de Código = "+QString::number(venda_atual->retorna_id_venda()));
    editou_dados = false;
    buscar_dados();
    mostrar_dados_pagamento_ou_justificativa();
    mostrar_dados();
}

void tela_nota_venda::buscar_dados(){
    lt_venda.clear();
    lt_ganho.clear();
    valor_total = 0;

    conexao_bd conexao;
    QSqlDatabase bd;

    int aux_id_cliente;
    QString aux_nome;
    QString aux_rg;
    QString aux_cpf;

    int aux_id_lista_venda;
    int aux_id_produto;
    double valor_venda_uni;
    int quantidade;
    QString aux_nome_produto;

    int aux_id_ganho;
    QString data_pagamento;
    QString aux_descricao;
    double valor;
    int aux_status;
    int aux_origem;
    int aux_id_origem;
    QString justificativa;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta sobre os dados da venda;
        consultar.exec("SELECT c.`id_cliente`, c.`nome`, c.`rg`, c.`cpf` FROM cliente c WHERE c.id_cliente = '"+QString::number(venda_atual->retorna_id_cliente())+"';");
        if(consultar.last()){
            aux_id_cliente = consultar.value(0).toInt();
            aux_nome = consultar.value(1).toString();
            aux_rg = consultar.value(2).toString();
            aux_cpf = consultar.value(3).toString();
            cliente_atual = new cliente(aux_id_cliente,aux_nome,aux_rg,aux_cpf);
        }
        consultar.clear();

        //realiza a consulta sobre a lista de compra
        consultar.exec("SELECT l.id_lista_venda, l.id_produto, l.valor_venda_uni, l.quantidade, p.nome FROM lista_venda l, produto p WHERE l.id_venda = '"+QString::number(venda_atual->retorna_id_venda())+"' AND p.id_produto=l.id_produto;");
        while(consultar.next()){
            aux_id_lista_venda = consultar.value(0).toInt();
            aux_id_produto = consultar.value(1).toInt();
            valor_venda_uni = consultar.value(2).toFloat();
            quantidade = consultar.value(3).toInt();
            aux_nome_produto = consultar.value(4).toString();
            lt_venda.push_back(new lista_venda(aux_id_lista_venda,aux_id_produto,venda_atual->retorna_id_venda(),quantidade,valor_venda_uni,aux_nome_produto));
        }
        consultar.clear();

        //realiza a consulta sobre a lista dados de pagamento
        consultar.exec("SELECT * FROM ganhos g WHERE id_origem='"+QString::number(venda_atual->retorna_id_venda())+"';");
        while(consultar.next()){
            aux_id_ganho = consultar.value(0).toInt();
            data_pagamento = consultar.value(1).toString();
            aux_descricao = consultar.value(2).toString();
            valor = consultar.value(3).toFloat();
            aux_status = consultar.value(4).toInt();
            aux_origem = consultar.value(5).toInt();
            aux_id_origem = consultar.value(6).toInt();
            lt_ganho.push_back(new ganho(aux_id_ganho,data_pagamento,aux_descricao,valor,aux_status,aux_origem,aux_id_origem));
            if(aux_origem==_dinheiro_par){
                valor_total = valor_total+valor;
            }
        }
        consultar.clear();

        if(venda_atual->retorna_status()==_cancelada){
            //realiza a consulta sobre a lista dados de pagamento
            consultar.exec("SELECT justificativa FROM jus_cancelamento_nota WHERE id_origem='"+QString::number(venda_atual->retorna_id_venda())+"' AND origem = '"+_nota_de_venda+"';");
            if(consultar.last()){
                justificativa = consultar.value(0).toString();
            }
            te_justificativa_cancelamento->setText(justificativa);
        }
        consultar.clear();

        bd.close();
        conexao.fechar_conexao();
    }
}

void tela_nota_venda::mostrar_dados(){
    funcoes_extras funcao;

    double aux_valor_total_por_produto = 0.0;

    ui->le_codigo->setText(QString::number(cliente_atual->retornar_id()));
    ui->le_nome->setText(cliente_atual->retornar_nome());
    ui->le_cpf->setText(cliente_atual->retornar_cpf());
    ui->le_rg->setText(cliente_atual->retornar_rg());
    ui->le_data->setText(venda_atual->retorna_data_venda());

    ui->tw_lista_produtos->setRowCount(int(lt_venda.size()));
    ui->tw_lista_produtos->setColumnCount(5);
    ui->tw_lista_produtos->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_lista_produtos->clear();
    ui->tw_lista_produtos->setHorizontalHeaderLabels(QString("Código;Nome;Quantidade;Valor unitário;Total por produto").split(";"));
    for (int i=0;i<int(lt_venda.size());i++){
        aux_valor_total_por_produto = (lt_venda[i]->retorna_quantidade())*(lt_venda[i]->retorna_valor_venda());
        ui->tw_lista_produtos->setItem(i,0,new QTableWidgetItem(QString::number(lt_venda[i]->retorna_id_produto())));
        ui->tw_lista_produtos->setItem(i,1,new QTableWidgetItem(lt_venda[i]->retorna_nome_produto()));
        ui->tw_lista_produtos->setItem(i,2,new QTableWidgetItem(QString::number(lt_venda[i]->retorna_quantidade())));
        ui->tw_lista_produtos->setItem(i,3,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lt_venda[i]->retorna_valor_venda())));
        ui->tw_lista_produtos->setItem(i,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(aux_valor_total_por_produto)));
        ui->tw_lista_produtos->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_produtos->item(i,4)->setTextAlignment(Qt::AlignHCenter);
        aux_valor_total_por_produto = 0.0;
    }
    ui->tw_lista_produtos->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_lista_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_lista_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_lista_produtos->resizeColumnToContents(0);
    ui->tw_lista_produtos->resizeColumnToContents(2);
    ui->tw_lista_produtos->resizeColumnToContents(3);
    ui->tw_lista_produtos->resizeColumnToContents(4);
}

void tela_nota_venda::mostrar_dados_pagamento_ou_justificativa(void){
    funcoes_extras funcao;
    if(venda_atual->retorna_status()!=_cancelada){
        ui->lb_forma_pagamento_jus->setText("Forma de Pagamento");
        ui->horizontalLayout_2->insertWidget(1,tw_lista_pagamento,0,0);

        ui->le_total->setText(funcao.retorna_valor_dinheiro(venda_atual->retorna_valor_total()));
        ui->le_total_a_pagar->setText(funcao.retorna_valor_dinheiro(venda_atual->retorna_valor_pago()));
        ui->le_desconto->setText(funcao.retorna_valor_dinheiro(venda_atual->retorna_valor_total()-venda_atual->retorna_valor_pago()));

        tw_lista_pagamento->setRowCount(int(lt_ganho.size()));
        tw_lista_pagamento->setColumnCount(4);
        tw_lista_pagamento->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
        tw_lista_pagamento->clear();
        tw_lista_pagamento->setHorizontalHeaderLabels(QString("Data;Descrição;valor;Status").split(";"));
        for (int i=0;i<int(lt_ganho.size());i++){
            tw_lista_pagamento->setItem(i,0,new QTableWidgetItem(lt_ganho[i]->retorna_data()));
            tw_lista_pagamento->setItem(i,1,new QTableWidgetItem(lt_ganho[i]->retorna_descricao()));
            tw_lista_pagamento->setItem(i,2,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lt_ganho[i]->retorna_valor())));
            tw_lista_pagamento->setItem(i,3,new QTableWidgetItem(funcao.converte_despesa_numero_status_nome(lt_ganho[i]->retorna_status())));
            tw_lista_pagamento->item(i,0)->setTextAlignment(Qt::AlignHCenter);
            tw_lista_pagamento->item(i,1)->setTextAlignment(Qt::AlignHCenter);
            tw_lista_pagamento->item(i,2)->setTextAlignment(Qt::AlignHCenter);
            tw_lista_pagamento->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        }
        tw_lista_pagamento->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_lista_pagamento->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_lista_pagamento->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_lista_pagamento->resizeColumnToContents(0);
        tw_lista_pagamento->resizeColumnToContents(1);
        tw_lista_pagamento->resizeColumnToContents(2);
        tw_lista_pagamento->resizeColumnToContents(3);
        tw_lista_pagamento->deleteLater();
    }
    else{
        ui->lb_forma_pagamento_jus->setText("Justificativa para o Cancelamento");
        ui->horizontalLayout_2->insertWidget(1,te_justificativa_cancelamento,0,0);
        te_justificativa_cancelamento->deleteLater();
    }
}

void tela_nota_venda::ajustar_parcelas(const QModelIndex &index){
    funcoes_extras funcao;
    double total_parcial = 0;
    double total_a_parcelar = 0;
    double valor_parcelas = 0;
    double ultima_parcela = 0;
    int numero_parcelas_restantes = 0;
    double valor_anterior = lt_ganho[index.row()]->retorna_valor();
    std::vector< int > indice_parcelas;

    tl_editar_parcela.definir_icone_janela(logomarca);
    tl_editar_parcela.definir_dados(lt_ganho[index.row()]);
    if(tl_editar_parcela.exec()){
        editou_dados = true;
        lt_ganho[index.row()]  = tl_editar_parcela.retorna_parcela();
        if(valor_anterior!=lt_ganho[index.row()]->retorna_valor()){
            for (int i=0; i < int(lt_ganho.size()); i++){                
                if((lt_ganho[i]->retorna_origem()==_dinheiro_par)){
                    if(i <= int(index.row())){
                        total_parcial  = total_parcial + lt_ganho[i]->retorna_valor();
                    }
                    else{
                        if(lt_ganho[i]->retorna_status()==_fechada){
                            total_parcial = total_parcial + lt_ganho[i]->retorna_valor();
                        }
                        else{
                            numero_parcelas_restantes = numero_parcelas_restantes+1;
                            indice_parcelas.push_back(i);
                        }
                    }
                }
            }
            if(numero_parcelas_restantes!=0){
                total_a_parcelar = valor_total - total_parcial;

                valor_parcelas = total_a_parcelar/numero_parcelas_restantes;
                valor_parcelas = funcao.arredonda_para_duas_casas_decimais(valor_parcelas);
                ultima_parcela = total_a_parcelar - valor_parcelas*(numero_parcelas_restantes-1);

                for (int i = 0; i<int(indice_parcelas.size()-1);i++){
                    lt_ganho[indice_parcelas[i]]->alterar_valor(valor_parcelas);
                }

                lt_ganho[indice_parcelas[int(indice_parcelas.size()-1)]]->alterar_valor(ultima_parcela);
                }
            else{
                lt_ganho[index.row()]->alterar_valor(valor_anterior);
            }
        }
        mostrar_dados_pagamento_ou_justificativa();
    }
}

void tela_nota_venda::on_btn_reabrir_clicked()
{
    QPixmap icone_janela(":img/img/abrir_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("AVISO!!!");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja reabrir a nota para edição?");
    if(!msg.exec()){
        tl_vender.definir_icone_janela(logomarca);
        tl_vender.definir_dados(lt_venda,cliente_atual,venda_atual);
        if(!tl_vender.exec()){
            this->accept();
            this->close();
        }
    }
}

void tela_nota_venda::on_btn_confirmar_clicked()
{
    if(editou_dados){
        QPixmap icone_janela(":img/img/perguntar.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("AVISO!!!");
        msg.addButton("Sim", QMessageBox::AcceptRole);
        msg.addButton("Não", QMessageBox::RejectRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("\nDeseja salvar as alterações?");
        editou_dados = false;
        if(!msg.exec()){
            if(atualizar_dados_parcelamento()){
                //Gera mensagem de que tudo ocorreu direito.
                QPixmap icone_janela(":img/img/correto.png");
                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(logomarca);
                msg.setWindowTitle("Alteração");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nAlteração efetuada com sucesso!!!!");
                msg.exec();

                this->accept();
                this->close();
            }
            else{
                //Gera a mensagem de erro.
                QPixmap icone_janela(":img/img/error_50.png");
                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(logomarca);
                msg.setWindowTitle("Alteraçao");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nNão foi possível efetuar a alteração!!!!");
                msg.exec();
                this->reject();
            }
        }
    }
    else{
        this->close();
    }
}

bool tela_nota_venda::atualizar_dados_parcelamento(void){
    conexao_bd conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery atualizar_dados_parecelamento(bd);
        atualizar_dados_parecelamento.lastError().setNumber(2);

        for (int i = 0; i < int(lt_ganho.size());i++){
            //atualiza os dados sobre o parcelamento
            atualizar_dados_parecelamento.prepare("UPDATE ganhos SET data=:data, valor=:valor, status=:status WHERE id_ganhos ='"+QString::number(lt_ganho[i]->retorna_id())+"';");
            atualizar_dados_parecelamento.bindValue(":data", lt_ganho[i]->retorna_data());
            atualizar_dados_parecelamento.bindValue(":valor",lt_ganho[i]->retorna_valor());
            atualizar_dados_parecelamento.bindValue(":status", lt_ganho[i]->retorna_status());
            atualizar_dados_parecelamento.exec();
        }
        bd.close();
        conexao.fechar_conexao();
        if(atualizar_dados_parecelamento.lastError().number()<=0){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

void tela_nota_venda::closeEvent(QCloseEvent *event){
    if(editou_dados){
        QPixmap icone_janela(":img/img/perguntar.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("AVISO!!!");
        msg.addButton("Sim", QMessageBox::AcceptRole);
        msg.addButton("Não", QMessageBox::RejectRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("Alterações efetuadas.\nDeseja salvar as alterações?");
        if(!msg.exec()){
            if(atualizar_dados_parcelamento()){
                //Gera mensagem de que tudo ocorreu direito.
                QPixmap icone_janela(":img/img/correto.png");
                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(logomarca);
                msg.setWindowTitle("Alteração");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nAlteração efetuada com sucesso!!!!");
                msg.exec();

                this->accept();
                this->close();
            }
            else{
                //Gera a mensagem de erro.
                QPixmap icone_janela(":img/img/error_50.png");
                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(logomarca);
                msg.setWindowTitle("Alteraçao");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nNão foi possível efetuar a alteração!!!!");
                msg.exec();
                this->reject();
            }
        }
        else{
            this->reject();
            this->close();
        }
    }
}

void tela_nota_venda::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

void tela_nota_venda::on_btn_cancelar_nota_clicked()
{
    QString justificativa;
    QPixmap icone_janela(":img/img/perguntar.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("AVISO!!!");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja cancelar a nota?");
    if(!msg.exec()){
        tl_justificativa_cancelamento.definir_icone_janela(logomarca);
        if(tl_justificativa_cancelamento.exec())
        {
            justificativa = tl_justificativa_cancelamento.retorna_justificativa();
        }
        else{
            justificativa = "";
        }
        conexao_bd conexao;
        QSqlDatabase bd;

        //realiza conexão ao banco de dados
        if (conexao.conetar_bd()){
            //Retorna o banco de dados
            bd = conexao.retorna_bd();

            //Inicia a transaçao
            bd.transaction();

            QSqlQuery remover_dados_dinheiro(bd);
            QSqlQuery remover_dados_cartao(bd);
            QSqlQuery remover_dados_cheque(bd);
            QSqlQuery remover_dados_ganhos(bd);
            QSqlQuery remover_pagamento_avista(bd);
            QSqlQuery remover_pagamento_parcelado(bd);
            QSqlQuery remover_his_balanco_estoque(bd);
            QSqlQuery consultar_id_pagamento(bd);
            QSqlQuery consultar_his_remocao_pro_estoque(bd);
            QSqlQuery atualizar_his_balanco_estoque(bd);
            QSqlQuery salvar_dados_venda(bd);
            QSqlQuery salvar_justificativa(bd);

            int id_avista;
            int id_parcelado;
            int quantidade_his_remocao_pro_estoque;
            int id_balanco_remover;
            int id_venda = venda_atual->retorna_id_venda();

            //Insere os dados no cadastro da venda
            salvar_dados_venda.prepare("UPDATE venda SET status=:status WHERE id_venda = '"+QString::number(id_venda)+"';");
            salvar_dados_venda.bindValue(":status",_cancelada);
            salvar_dados_venda.exec();

            //Insere a justificativa para o cancelamento
            salvar_justificativa.prepare("INSERT INTO jus_cancelamento_nota(id_origem,origem,justificativa) VALUES(:id_origem,:origem,:justificativa);");
            salvar_justificativa.bindValue(":id_origem", id_venda);
            salvar_justificativa.bindValue(":origem",_nota_de_venda);
            salvar_justificativa.bindValue(":justificativa", justificativa);
            salvar_justificativa.exec();

            consultar_id_pagamento.exec("SELECT d.`id_pag_avista`, d.`id_pag_parcelado` FROM dinheiro d WHERE id_origem = '"+QString::number(id_venda)+"'AND origem ='"+_venda_de_produto+"';");
            if(consultar_id_pagamento.last()){
                id_avista = consultar_id_pagamento.value(0).toInt();
                id_parcelado = consultar_id_pagamento.value(1).toInt();
            }
            remover_dados_dinheiro.exec("DELETE FROM dinheiro WHERE origem = '"+QString::number(_venda_de_produto)+"' AND id_origem = '"+QString::number(id_venda)+"';");
            remover_dados_cartao.exec("DELETE FROM cartao WHERE origem = '"+QString::number(_venda_de_produto)+"' AND id_origem = '"+QString::number(id_venda)+"';");
            remover_dados_cheque.exec("DELETE FROM cheque WHERE origem = '"+QString::number(_venda_de_produto)+"' AND id_origem = '"+QString::number(id_venda)+"';");
            remover_dados_ganhos.exec("DELETE FROM ganhos WHERE id_origem = '"+QString::number(id_venda)+"';");
            remover_pagamento_avista.exec("DELETE FROM pagamento_avista WHERE id_pag_avista = '"+QString::number(id_avista)+"';");
            remover_pagamento_parcelado.exec("DELETE FROM pagamento_parcelado WHERE id_pag_parcelado = '"+QString::number(id_parcelado)+"';");

            consultar_his_remocao_pro_estoque.exec("SELECT h.`id_balanco`, h.`quantidade` FROM his_remocao_pro_estoque h WHERE h.id_venda = "+QString::number(id_venda)+";");
            while(consultar_his_remocao_pro_estoque.next()){
                id_balanco_remover = consultar_his_remocao_pro_estoque.value(0).toInt();
                quantidade_his_remocao_pro_estoque = consultar_his_remocao_pro_estoque.value(1).toInt();
                //Insere os dados no histórico de balanço do estoque
                atualizar_his_balanco_estoque.prepare("UPDATE his_balanco_estoque SET total_disponivel = total_disponivel+:quantidade WHERE id_balanco = '"+QString::number(id_balanco_remover)+"';");
                atualizar_his_balanco_estoque.bindValue(":quantidade", quantidade_his_remocao_pro_estoque);
                atualizar_his_balanco_estoque.exec();
            }

            remover_his_balanco_estoque.exec("DELETE FROM his_remocao_pro_estoque WHERE id_venda = '"+QString::number(id_venda)+"';");
            remover_his_balanco_estoque.exec();

            if ((remover_dados_dinheiro.lastError().number()<=0)&&
                (remover_dados_cartao.lastError().number()<=0)&&
                (remover_dados_cheque.lastError().number()<=0)&&
                (remover_dados_ganhos.lastError().number()<=0)&&
                (remover_pagamento_avista.lastError().number()<=0)&&
                (remover_pagamento_parcelado.lastError().number()<=0)&&
                (remover_his_balanco_estoque.lastError().number()<=0)&&
                (atualizar_his_balanco_estoque.lastError().number()<=0)&&
                (salvar_dados_venda.lastError().number()<=0)&&
                (salvar_justificativa.lastError().number()<=0)){

                //Finaliza a inserçao dos dados.
                bd.commit();
                //bd.rollback();

                //Gera mensagem de que tudo ocorreu direito.
                QPixmap icone_janela(":img/img/arquivo_50.png");
                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(logomarca);
                msg.setWindowTitle("Cancelamento");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nA venda foi cancelada com sucesso!!!!");
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
                msg.setWindowTitle("Cancelamento");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nNão foi possível efetuar o cancelamento!!!!");
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
