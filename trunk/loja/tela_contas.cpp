#include "tela_contas.h"
#include "ui_tela_contas.h"

tela_contas::tela_contas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_contas)
{
    ui->setupUi(this);
}

tela_contas::~tela_contas()
{
    delete ui;
}

void tela_contas::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    ui->data->setDate(QDate::currentDate());
    aux_cons_id_despesa = "";
    aux_cons_id_ganhos = "";
    aux_cons_status = "Todos";
    aux_cons_status_ganhos = "Todos";
    ui->le_codigo_cp->setCursorPosition(0);
    ui->le_codigo_cr->setCursorPosition(0);
    ui->data_inicial_cp->setDate(QDate::currentDate());
    ui->data_inicial_cr->setDate(QDate::currentDate());
    QDate data_final;
    data_final.setDate(2500,12,30);
    ui->data_final_cp->setDateRange(ui->data_inicial_cp->date(),data_final);
    ui->data_final_cr->setDateRange(ui->data_inicial_cr->date(),data_final);
    mostrar_fluxo_caixa();
}

void tela_contas::mostrar_fluxo_caixa(){
    lista_ganhos_valores.clear();
    lista_despesas_valores.clear();
    busca_lista_movimento_mes(ui->data->date());
    funcoes_extras funcao;

    QDate data_atual;
    QDate aux_data;
    data_atual = ui->data->date();
    int num_dias = data_atual.daysInMonth();
    int mes = data_atual.month();
    int ano = data_atual.year();

    ui->tw_fluxo_caixa->setRowCount(num_dias);
    ui->tw_fluxo_caixa->setColumnCount(5);
    ui->tw_fluxo_caixa->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    //ui->tw_fluxo_caixa->clear();
    ui->tw_fluxo_caixa->setHorizontalHeaderLabels(QString("Dia;Despesas;Receitas;Saldo;Acumulado do mês").split(";"));

    double saldo;
    double saldo_acumulado = 0;
    double despesas_acumuladas = 0;
    double ganhos_acumulado = 0;

    QString dia_s;
    QString mes_s = QString::number(mes);
    QString dia_nome;
    for (int i=1;i<=num_dias;i++){
        aux_data.setDate(ano,mes,i);
        dia_s = QString::number(i);
        if (dia_s.size()<2)
            dia_s = "0"+dia_s;
        if(mes_s.size()<2)
            mes_s = "0"+mes_s;

        dia_nome = QDate::longDayName(aux_data.dayOfWeek());
        dia_nome[0] = dia_nome[0].toUpper();

        ui->tw_fluxo_caixa->setItem(i-1,0,new QTableWidgetItem(dia_s+"/"+mes_s+" - "+
                                                               dia_nome));
        ui->tw_fluxo_caixa->setItem(i-1,1,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_despesas_valores[i-1])));
        ui->tw_fluxo_caixa->setItem(i-1,2,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_ganhos_valores[i-1])));
        ganhos_acumulado = ganhos_acumulado + lista_ganhos_valores[i-1];
        despesas_acumuladas = despesas_acumuladas + lista_despesas_valores[i-1];
        saldo = lista_ganhos_valores[i-1] - lista_despesas_valores[i-1];
        saldo_acumulado = saldo_acumulado + saldo;
        ui->tw_fluxo_caixa->setItem(i-1,3,new QTableWidgetItem(funcao.retorna_valor_dinheiro(saldo)));
        ui->tw_fluxo_caixa->setItem(i-1,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(saldo_acumulado)));
        ui->tw_fluxo_caixa->item(i-1,0)->setTextAlignment(Qt::AlignLeft);
        ui->tw_fluxo_caixa->item(i-1,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_fluxo_caixa->item(i-1,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_fluxo_caixa->item(i-1,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_fluxo_caixa->item(i-1,4)->setTextAlignment(Qt::AlignHCenter);
        if(dia_nome.toStdString()=="Domingo"){
            for(int j=0;j<5;j++){
                ui->tw_fluxo_caixa->item(i-1,j)->setBackgroundColor(QColor::fromRgb(239,80,80,255));
            }
        }

        //Define o íten como não editável
        //ui->tw_lista_produtos->item(i,0)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        //ui->tw_lista_produtos->item(i,1)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    }

    ui->tw_fluxo_caixa->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_fluxo_caixa->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_fluxo_caixa->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_fluxo_caixa->resizeColumnToContents(0);
    ui->tw_fluxo_caixa->resizeColumnToContents(2);
    ui->tw_fluxo_caixa->resizeColumnToContents(3);
    ui->tw_fluxo_caixa->resizeColumnToContents(4);

    ui->lb_receitas_dina->setText(funcao.retorna_valor_dinheiro(ganhos_acumulado));
    ui->lb_despesas_dina->setText(funcao.retorna_valor_dinheiro(despesas_acumuladas));
    ui->lb_saldo_dina->setText(funcao.retorna_valor_dinheiro(saldo_acumulado));
}

void tela_contas::busca_lista_movimento_mes(QDate data_consultar){
    conexao_bd conexao;
    QSqlDatabase bd;

    double valor_ganhos;
    double valor_despesas;

    int mes = data_consultar.month();
    int ano = data_consultar.year();
    int num_dias = data_consultar.daysInMonth();

    QString dia_s;
    QString mes_s = QString::number(mes);
    QString ano_s = QString::number(ano);
    QString data_s;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar_ganhos(bd);
        QSqlQuery consultar_despesas(bd);

        for (int i=1;i<=num_dias;i++){
            dia_s = QString::number(i);
            if (dia_s.size()<2)
                dia_s = "0"+dia_s;
            if(mes_s.size()<2)
                mes_s = "0"+mes_s;

            data_s = dia_s+"/"+mes_s+"/"+ano_s;

            //realiza a consulta
            consultar_ganhos.exec("SELECT SUM(valor) FROM ganhos WHERE data = '"+data_s+"';");
            if(consultar_ganhos.last()){
                valor_ganhos = consultar_ganhos.value(0).toDouble();
            }
            lista_ganhos_valores.push_back(valor_ganhos);
            consultar_ganhos.clear();

            consultar_despesas.exec("SELECT SUM(valor) FROM despesas WHERE data = '"+data_s+"';");
            if(consultar_despesas.last()){
                valor_despesas = consultar_despesas.value(0).toDouble();
            }
            lista_despesas_valores.push_back(valor_despesas);
            consultar_despesas.clear();
        }
        bd.close();
        conexao.fechar_conexao();
    }
}

void tela_contas::on_btn_buscar_clicked()
{
    mostrar_fluxo_caixa();
}

void tela_contas::on_btn_buscar_cp_clicked()
{
    ui->le_codigo_cp->setCursorPosition(0);
    aux_cons_id_despesa = "";
    aux_cons_status = "Todos";
    ui->cb_status_cp->setCurrentIndex(0);

    conexao_bd conexao;
    QSqlDatabase bd;

    int aux_id_despesa;
    QString aux_data;
    QString aux_descricao;
    double aux_valor;
    int aux_status;
    int aux_origem;
    int aux_id_origem;

    QString aux_data_inicial;
    QString aux_data_final;

    aux_data_inicial = QString::number(ui->data_inicial_cp->date().year())+"-"+
                       QString::number(ui->data_inicial_cp->date().month())+"-"+
                       QString::number(ui->data_inicial_cp->date().day());

    aux_data_final = QString::number(ui->data_final_cp->date().year())+"-"+
                     QString::number(ui->data_final_cp->date().month())+"-"+
                     QString::number(ui->data_final_cp->date().day());

    aux_lista_despesa.clear();

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT * FROM despesas WHERE STR_TO_DATE(data, '%d/%m/%Y') BETWEEN '"+aux_data_inicial+"' AND '"+aux_data_final+"';");
        while(consultar.next()){
            aux_id_despesa = consultar.value(0).toInt();
            aux_data = consultar.value(1).toString();
            aux_descricao = consultar.value(2).toString();
            aux_valor = consultar.value(3).toDouble();
            aux_status = consultar.value(4).toInt();
            aux_origem = consultar.value(5).toInt();
            aux_id_origem = consultar.value(6).toInt();
            aux_lista_despesa.push_back(new despesa(aux_id_despesa,aux_data,aux_descricao,aux_valor,aux_status,aux_origem,aux_id_origem));
        }
        consultar.clear();
        tela_contas::mostrar_lista_despesas();
        bd.close();
        conexao.fechar_conexao();
    }
}

void tela_contas::on_btn_filtrar_cp_clicked()
{
    aux_cons_status = ui->cb_status_cp->currentText();
    aux_cons_id_despesa = ui->le_codigo_cp->text();
    tela_contas::mostrar_lista_despesas();
}

void tela_contas::on_btn_limpar_cp_clicked()
{
    ui->le_codigo_cp->clear();
    ui->cb_status_cp->setCurrentIndex(0);
    tela_contas::mostrar_lista_despesas();
}

void tela_contas::mostrar_lista_despesas(void){
    lista_despesa.clear();
    funcoes_extras funcao;

    for (int i=0;i<int(aux_lista_despesa.size());i++){//aux_cons_status
        if (aux_cons_status=="Todos"){
            if((QString::number(aux_lista_despesa[i]->retorna_id_origem())==aux_cons_id_despesa)||(aux_cons_id_despesa=="")){
                lista_despesa.push_back(aux_lista_despesa[i]);
            }
        }
        else{
            if(((QString::number(aux_lista_despesa[i]->retorna_id_origem())==aux_cons_id_despesa)||(aux_cons_id_despesa==""))&&
               (funcao.converte_despesa_numero_status_nome(aux_lista_despesa[i]->retorna_status())==aux_cons_status)){
                lista_despesa.push_back(aux_lista_despesa[i]);
            }
        }
    }
    ui->tw_contas_pagar->setRowCount(int(lista_despesa.size()));
    ui->tw_contas_pagar->setColumnCount(6);
    ui->tw_contas_pagar->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_contas_pagar->clear();
    ui->tw_contas_pagar->setHorizontalHeaderLabels(QString("Código da despesa;Data;Descrição;Origem;Valor;Status").split(";"));

    for (int i=0;i<int(lista_despesa.size());i++){
        ui->tw_contas_pagar->setItem(i,0,new QTableWidgetItem(QString::number(lista_despesa[i]->retorna_id_origem())));
        ui->tw_contas_pagar->setItem(i,1,new QTableWidgetItem(lista_despesa[i]->retorna_data()));
        ui->tw_contas_pagar->setItem(i,2,new QTableWidgetItem(lista_despesa[i]->retorna_descricao()));
        ui->tw_contas_pagar->setItem(i,3,new QTableWidgetItem(funcao.converte_despesa_numero_origem_nome(lista_despesa[i]->retorna_origem())));
        ui->tw_contas_pagar->setItem(i,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_despesa[i]->retorna_valor())));
        ui->tw_contas_pagar->setItem(i,5,new QTableWidgetItem(funcao.converte_despesa_numero_status_nome(lista_despesa[i]->retorna_status())));
        ui->tw_contas_pagar->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_pagar->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_pagar->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_pagar->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_pagar->item(i,4)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_pagar->item(i,5)->setTextAlignment(Qt::AlignHCenter);
    }
    ui->tw_contas_pagar->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_contas_pagar->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_contas_pagar->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_contas_pagar->resizeColumnToContents(0);
    ui->tw_contas_pagar->resizeColumnToContents(1);
    ui->tw_contas_pagar->resizeColumnToContents(3);
    ui->tw_contas_pagar->resizeColumnToContents(4);
    ui->tw_contas_pagar->resizeColumnToContents(5);
}

void tela_contas::on_data_inicial_cp_editingFinished()
{
    QDate data_final;
    data_final.setDate(2500,12,30);
    ui->data_final_cp->setDateRange(ui->data_inicial_cp->date(),data_final);
}

void tela_contas::on_btn_buscar_cr_clicked()
{
    ui->le_codigo_cr->setCursorPosition(0);
    aux_cons_id_ganhos = "";
    aux_cons_status_ganhos = "Todos";
    ui->cb_status_cr->setCurrentIndex(0);

    conexao_bd conexao;
    QSqlDatabase bd;

    int aux_id_ganhos;
    QString aux_data;
    QString aux_descricao;
    double aux_valor;
    int aux_status;
    int aux_origem;
    int aux_id_origem;

    QString aux_data_inicial;
    QString aux_data_final;

    aux_data_inicial = QString::number(ui->data_inicial_cr->date().year())+"-"+
                       QString::number(ui->data_inicial_cr->date().month())+"-"+
                       QString::number(ui->data_inicial_cr->date().day());

    aux_data_final = QString::number(ui->data_final_cr->date().year())+"-"+
                     QString::number(ui->data_final_cr->date().month())+"-"+
                     QString::number(ui->data_final_cr->date().day());

    aux_lista_ganho.clear();

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT * FROM ganhos WHERE STR_TO_DATE(data, '%d/%m/%Y') BETWEEN '"+aux_data_inicial+"' AND '"+aux_data_final+"';");
        while(consultar.next()){
            aux_id_ganhos = consultar.value(0).toInt();
            aux_data = consultar.value(1).toString();
            aux_descricao = consultar.value(2).toString();
            aux_valor = consultar.value(3).toDouble();
            aux_status = consultar.value(4).toInt();
            aux_origem = consultar.value(5).toInt();
            aux_id_origem = consultar.value(6).toInt();
            aux_lista_ganho.push_back(new ganho(aux_id_ganhos,aux_data,aux_descricao,aux_valor,aux_status,aux_origem,aux_id_origem));
        }
        consultar.clear();
        tela_contas::mostrar_lista_ganhos();
        bd.close();
        conexao.fechar_conexao();
    }
}

void tela_contas::on_btn_filtrar_cr_clicked()
{
    aux_cons_status_ganhos = ui->cb_status_cr->currentText();
    aux_cons_id_ganhos = ui->le_codigo_cr->text();
    tela_contas::mostrar_lista_ganhos();
}

void tela_contas::on_btn_limparcr_clicked()
{
    ui->le_codigo_cr->clear();
    ui->cb_status_cr->setCurrentIndex(0);
    tela_contas::mostrar_lista_ganhos();
}

void tela_contas::mostrar_lista_ganhos(void){
    lista_ganho.clear();
    funcoes_extras funcao;

    for (int i=0;i<int(aux_lista_ganho.size());i++){//aux_cons_status
        if (aux_cons_status=="Todos"){
            if((QString::number(aux_lista_ganho[i]->retorna_id_origem())==aux_cons_id_ganhos)||(aux_cons_id_ganhos=="")){
                lista_ganho.push_back(aux_lista_ganho[i]);
            }
        }
        else{
            if(((QString::number(aux_lista_ganho[i]->retorna_id_origem())==aux_cons_id_ganhos)||(aux_cons_id_ganhos==""))&&
               (funcao.converte_despesa_numero_status_nome(aux_lista_ganho[i]->retorna_status())==aux_cons_status_ganhos)){
                lista_ganho.push_back(aux_lista_ganho[i]);
            }
        }
    }
    ui->tw_contas_receber->setRowCount(int(lista_ganho.size()));
    ui->tw_contas_receber->setColumnCount(6);
    ui->tw_contas_receber->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_contas_receber->clear();
    ui->tw_contas_receber->setHorizontalHeaderLabels(QString("Código da receita;Data;Descrição;Origem;Valor;Status").split(";"));

    for (int i=0;i<int(lista_ganho.size());i++){
        ui->tw_contas_receber->setItem(i,0,new QTableWidgetItem(QString::number(lista_ganho[i]->retorna_id_origem())));
        ui->tw_contas_receber->setItem(i,1,new QTableWidgetItem(lista_ganho[i]->retorna_data()));
        ui->tw_contas_receber->setItem(i,2,new QTableWidgetItem(lista_ganho[i]->retorna_descricao()));
        ui->tw_contas_receber->setItem(i,3,new QTableWidgetItem(funcao.converte_despesa_numero_origem_nome(lista_ganho[i]->retorna_origem())));
        ui->tw_contas_receber->setItem(i,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_ganho[i]->retorna_valor())));
        ui->tw_contas_receber->setItem(i,5,new QTableWidgetItem(funcao.converte_despesa_numero_status_nome(lista_ganho[i]->retorna_status())));
        ui->tw_contas_receber->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_receber->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_receber->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_receber->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_receber->item(i,4)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_contas_receber->item(i,5)->setTextAlignment(Qt::AlignHCenter);
    }
    ui->tw_contas_receber->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_contas_receber->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_contas_receber->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_contas_receber->resizeColumnToContents(0);
    ui->tw_contas_receber->setColumnWidth(0,120);
    ui->tw_contas_receber->resizeColumnToContents(1);
    ui->tw_contas_receber->resizeColumnToContents(3);
    ui->tw_contas_receber->resizeColumnToContents(4);
    ui->tw_contas_receber->resizeColumnToContents(5);
}

void tela_contas::on_data_inicial_cr_editingFinished()
{
    QDate data_final;
    data_final.setDate(2500,12,30);
    ui->data_final_cr->setDateRange(ui->data_inicial_cr->date(),data_final);
}

void tela_contas::on_btn_buscar_nota_venda_clicked()
{
    conexao_bd conexao;
    QSqlDatabase bd;

    int aux_id_venda;
    QString aux_data;
    int aux_id_cliente;
    double aux_valor_total;
    double aux_desconto;
    QString aux_nome;


    lista_venda.clear();
    lista_nome_clientes.clear();

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT v.id_venda,v.data_venda,v.id_cliente,v.valor_total,v.desconto,c.nome FROM venda v, cliente c WHERE nome LIKE '%"+ui->le_nome_cliente->text()+"%' AND c.id_cliente = v.id_cliente;");
        while(consultar.next()){
            aux_id_venda = consultar.value(0).toInt();
            aux_data = consultar.value(1).toString();
            aux_id_cliente = consultar.value(2).toInt();
            aux_valor_total = consultar.value(3).toDouble();
            aux_desconto = consultar.value(4).toDouble();
            aux_nome = consultar.value(5).toString();
            lista_venda.push_back(new venda(aux_id_venda,QDate::fromString(aux_data,"dd/MM/yyyy"),aux_id_cliente,aux_valor_total,aux_desconto));
            lista_nome_clientes.push_back(aux_nome);
        }
        consultar.clear();
        bd.close();
        conexao.fechar_conexao();
        tela_contas::mostrar_lista_notas_venda();
    }
}

void tela_contas::mostrar_lista_notas_venda(void){
    funcoes_extras funcao;

    ui->tw_lista_notas_venda->setRowCount(int(lista_nome_clientes.size()));
    ui->tw_lista_notas_venda->setColumnCount(5);
    ui->tw_lista_notas_venda->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_lista_notas_venda->clear();
    ui->tw_lista_notas_venda->setHorizontalHeaderLabels(QString("Data;Número da nota;Nome do Cliente;Valor Total;Valor Pago").split(";"));

    for (int i=0;i<int(lista_nome_clientes.size());i++){
        ui->tw_lista_notas_venda->setItem(i,0,new QTableWidgetItem(lista_venda[i]->retorna_data_venda()));
        ui->tw_lista_notas_venda->setItem(i,1,new QTableWidgetItem(QString::number(lista_venda[i]->retorna_id_venda())));
        ui->tw_lista_notas_venda->setItem(i,2,new QTableWidgetItem(lista_nome_clientes[i]));
        ui->tw_lista_notas_venda->setItem(i,3,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_venda[i]->retorna_valor_total())));
        ui->tw_lista_notas_venda->setItem(i,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_venda[i]->retorna_valor_pago())));
        ui->tw_lista_notas_venda->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_venda->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_venda->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_venda->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_venda->item(i,4)->setTextAlignment(Qt::AlignHCenter);
    }
    //Código para fazer a ordenação acesdente.
    ui->tw_lista_notas_venda->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_lista_notas_venda->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_lista_notas_venda->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_lista_notas_venda->resizeColumnToContents(0);
    ui->tw_lista_notas_venda->resizeColumnToContents(1);
    ui->tw_lista_notas_venda->resizeColumnToContents(2);
    ui->tw_lista_notas_venda->resizeColumnToContents(3);
    ui->tw_lista_notas_venda->resizeColumnToContents(4);
}

void tela_contas::on_btn_buscar_nota_compra_clicked(){
    conexao_bd conexao;
    QSqlDatabase bd;

    int aux_id_compra;
    QString aux_data;
    int aux_id_fornecedor;
    int aux_num_nota;
    double aux_valor_total;
    double aux_desconto;
    QString aux_nome;


    lista_compra.clear();
    lista_nome_fornecedores.clear();

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd()){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT c.`id_compra`, c.`data_compra`, c.`id_fornecedor`, c.`num_cupom_nota`, c.`valor_total`, c.`desconto`, f.nome FROM compra c, fornecedor f WHERE f.nome LIKE '%"+ui->le_nome_fornecedor->text()+"%'AND c.id_fornecedor = f.id_fornecedor;");
        while(consultar.next()){
            aux_id_compra = consultar.value(0).toInt();
            aux_data = consultar.value(1).toString();
            aux_id_fornecedor = consultar.value(2).toInt();
            aux_num_nota = consultar.value(3).toInt();
            aux_valor_total = consultar.value(4).toDouble();
            aux_desconto = consultar.value(5).toDouble();
            aux_nome = consultar.value(6).toString();
            lista_compra.push_back(new compra(aux_id_compra,QDate::fromString(aux_data,"dd/MM/yyyy"),aux_id_fornecedor,aux_num_nota,aux_valor_total,aux_desconto));
            lista_nome_fornecedores.push_back(aux_nome);
        }
        consultar.clear();
        bd.close();
        conexao.fechar_conexao();
        tela_contas::mostrar_lista_notas_compra();
    }
}

void tela_contas::mostrar_lista_notas_compra(void){
    funcoes_extras funcao;

    ui->tw_lista_notas_compra->setRowCount(int(lista_nome_fornecedores.size()));
    ui->tw_lista_notas_compra->setColumnCount(6);
    ui->tw_lista_notas_compra->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_lista_notas_compra->clear();
    ui->tw_lista_notas_compra->setHorizontalHeaderLabels(QString("Data;Código da nota;Número da nota;Nome do Fornecedor;Valor Total;Valor Pago").split(";"));
    for (int i=0;i<int(lista_nome_fornecedores.size());i++){
        ui->tw_lista_notas_compra->setItem(i,0,new QTableWidgetItem(lista_compra[i]->retorna_data_compra()));
        ui->tw_lista_notas_compra->setItem(i,1,new QTableWidgetItem(QString::number(lista_compra[i]->retorna_id_compra())));
        ui->tw_lista_notas_compra->setItem(i,2,new QTableWidgetItem(QString::number(lista_compra[i]->retorna_num_cupom_nota())));
        ui->tw_lista_notas_compra->setItem(i,3,new QTableWidgetItem(lista_nome_fornecedores[i]));
        ui->tw_lista_notas_compra->setItem(i,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_compra[i]->retorna_valor_total())));
        ui->tw_lista_notas_compra->setItem(i,5,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_compra[i]->retorna_valor_pago())));
        ui->tw_lista_notas_compra->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_compra->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_compra->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_compra->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_compra->item(i,4)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_lista_notas_compra->item(i,5)->setTextAlignment(Qt::AlignHCenter);
    }
    ui->tw_lista_notas_compra->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_lista_notas_compra->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_lista_notas_compra->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_lista_notas_compra->resizeColumnToContents(0);
    ui->tw_lista_notas_compra->resizeColumnToContents(1);
    ui->tw_lista_notas_compra->resizeColumnToContents(2);
    ui->tw_lista_notas_compra->resizeColumnToContents(3);
    ui->tw_lista_notas_compra->resizeColumnToContents(4);
    ui->tw_lista_notas_compra->resizeColumnToContents(5);
}

void tela_contas::on_tw_lista_notas_venda_doubleClicked(const QModelIndex &index){
    tl_nota_venda.definir_icone_janela(logomarca);
    tl_nota_venda.definir_dados(lista_venda[index.row()]);
    tl_nota_venda.exec();
}
