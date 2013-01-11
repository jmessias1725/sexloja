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
    aux_cons_status = "Todos";
    ui->le_codigo_cp->setCursorPosition(0);
    ui->data_inicial_cp->setDate(QDate::currentDate());
    QDate data_final_cp;
    data_final_cp.setDate(2500,12,30);
    ui->data_final_cp->setDateRange(ui->data_inicial_cp->date(),data_final_cp);
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
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","tela_estoque::buscar_produtos")){

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
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","tela_listar_despesas::on_btn_buscar_clicked")){

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
    std::cout<<aux_cons_id_despesa.toStdString()<<std::endl;
    std::cout<<aux_cons_status.toStdString()<<std::endl;
    tela_contas::mostrar_lista_despesas();
}

void tela_contas::on_btn_limpar_cp_clicked()
{
    //modelo->clear();
    ui->le_codigo_cp->clear();
    ui->cb_status_cp->setCurrentIndex(0);
    tela_contas::mostrar_lista_despesas();
}

void tela_contas::mostrar_lista_despesas(void){
    lista_despesa.clear();
    funcoes_extras funcao;

    for (int i=0;i<int(aux_lista_despesa.size());i++){//aux_cons_status
        if (aux_cons_status=="Todos"){
            if((QString::number(aux_lista_despesa[i]->retorna_id_origem()).contains(aux_cons_id_despesa))){
                lista_despesa.push_back(aux_lista_despesa[i]);
            }
        }
        else{
            if((QString::number(aux_lista_despesa[i]->retorna_id_origem()).contains(aux_cons_id_despesa))&&
               funcao.converte_despesa_numero_status_nome(lista_despesa[i]->retorna_status())==aux_cons_status){
                lista_despesa.push_back(aux_lista_despesa[i]);
            }
        }
    }
    ui->tw_contas_pagar->setRowCount(int(lista_despesa.size()));
    ui->tw_contas_pagar->setColumnCount(6);
    ui->tw_contas_pagar->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_contas_pagar->clear();
    ui->tw_contas_pagar->setHorizontalHeaderLabels(QString("Código;Data;Descrição;Origem;Valor;Status").split(";"));

    for (int i=0;i<int(lista_despesa.size());i++){
        ui->tw_contas_pagar->setItem(i,0,new QTableWidgetItem(QString::number(lista_despesa[i]->retorna_id())));
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
    //Código para fazer a ordenação acesdente.
    //ui->tw_despesas->sortItems(1,Qt::AscendingOrder);
    ui->tw_contas_pagar->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_contas_pagar->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_contas_pagar->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_contas_pagar->resizeColumnToContents(0);
    ui->tw_contas_pagar->resizeColumnToContents(1);
    ui->tw_contas_pagar->resizeColumnToContents(3);
    ui->tw_contas_pagar->resizeColumnToContents(4);
    ui->tw_contas_pagar->resizeColumnToContents(5);
    //connect(ui->tw_despesas->horizontalHeader(),SIGNAL(sectionClicked(int)),this,SLOT(teste(int)));
}

void tela_contas::on_data_inicial_cp_editingFinished()
{
    QDate data_final;
    data_final.setDate(2500,12,30);
    ui->data_final_cp->setDateRange(ui->data_inicial_cp->date(),data_final);
}
