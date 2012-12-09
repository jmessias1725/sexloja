#include "tela_listar_despesas.h"
#include "ui_tela_listar_despesas.h"

tela_listar_despesas::tela_listar_despesas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_listar_despesas)
{
    ui->setupUi(this);
    modelo = new QStandardItemModel();
}

tela_listar_despesas::~tela_listar_despesas()
{
    delete ui;
}

void tela_listar_despesas::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    aux_cons_id_despesa = "";
    aux_cons_status = "Todos";
    ui->le_codigo->setCursorPosition(0);
    ui->data_inicial->setDate(QDate::currentDate());
    QDate data_final;
    data_final.setDate(2500,12,30);
    ui->data_final->setDateRange(ui->data_inicial->date(),data_final);
}

void tela_listar_despesas::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

void tela_listar_despesas::on_btn_buscar_clicked()
{
    ui->le_codigo->setCursorPosition(0);
    aux_cons_id_despesa = "";
    aux_cons_status = "Todos";
    ui->cb_status->setCurrentIndex(0);

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

    aux_data_inicial = QString::number(ui->data_inicial->date().year())+"-"+
                       QString::number(ui->data_inicial->date().month())+"-"+
                       QString::number(ui->data_inicial->date().day());

    aux_data_final = QString::number(ui->data_final->date().year())+"-"+
                     QString::number(ui->data_final->date().month())+"-"+
                     QString::number(ui->data_final->date().day());

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
        tela_listar_despesas::mostrar_lista_despesas();
        bd.close();
        conexao.fechar_conexao();
    }
}

void tela_listar_despesas::mostrar_lista_despesas(void){
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
    ui->tw_despesas->setRowCount(int(lista_despesa.size()));
    ui->tw_despesas->setColumnCount(6);
    ui->tw_despesas->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_despesas->clear();
    ui->tw_despesas->setHorizontalHeaderLabels(QString("Código;Data;Descrição;Origem;Valor;Status").split(";"));

    for (int i=0;i<int(lista_despesa.size());i++){
        ui->tw_despesas->setItem(i,0,new QTableWidgetItem(QString::number(lista_despesa[i]->retorna_id())));
        ui->tw_despesas->setItem(i,1,new QTableWidgetItem(lista_despesa[i]->retorna_data()));
        ui->tw_despesas->setItem(i,2,new QTableWidgetItem(lista_despesa[i]->retorna_descricao()));
        ui->tw_despesas->setItem(i,3,new QTableWidgetItem(funcao.converte_despesa_numero_origem_nome(lista_despesa[i]->retorna_origem())));
        ui->tw_despesas->setItem(i,4,new QTableWidgetItem(funcao.retorna_valor_dinheiro(lista_despesa[i]->retorna_valor())));
        ui->tw_despesas->setItem(i,5,new QTableWidgetItem(funcao.converte_despesa_numero_status_nome(lista_despesa[i]->retorna_status())));
        ui->tw_despesas->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_despesas->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_despesas->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_despesas->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_despesas->item(i,4)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_despesas->item(i,5)->setTextAlignment(Qt::AlignHCenter);
    }
    //Código para fazer a ordenação acesdente.
    //ui->tw_despesas->sortItems(1,Qt::AscendingOrder);
    ui->tw_despesas->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_despesas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_despesas->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_despesas->resizeColumnToContents(0);
    ui->tw_despesas->resizeColumnToContents(1);
    ui->tw_despesas->resizeColumnToContents(3);
    ui->tw_despesas->resizeColumnToContents(4);
    ui->tw_despesas->resizeColumnToContents(5);
    connect(ui->tw_despesas->horizontalHeader(),SIGNAL(sectionClicked(int)),this,SLOT(teste(int)));
}

void tela_listar_despesas::on_btn_limpar_clicked()
{
    modelo->clear();
    ui->le_codigo->clear();
    ui->data_inicial->setDate(QDate::currentDate());
    ui->data_final->setDate(QDate::currentDate());
    ui->cb_status->setCurrentIndex(0);
}

void tela_listar_despesas::closeEvent(QCloseEvent *event){
    modelo->clear();
    ui->le_codigo->clear();
    ui->data_inicial->setDate(QDate::currentDate());
    ui->data_final->setDate(QDate::currentDate());
}

void tela_listar_despesas::on_data_inicial_editingFinished()
{
    QDate data_final;
    data_final.setDate(2500,12,30);
    ui->data_final->setDateRange(ui->data_inicial->date(),data_final);
}

void tela_listar_despesas::on_btn_filtrar_clicked()
{
    aux_cons_status = ui->cb_status->currentText();
    aux_cons_id_despesa = ui->le_codigo->text();
    tela_listar_despesas::mostrar_lista_despesas();
}

void tela_listar_despesas::teste(int index){
    switch(index){
    case 0:
        ui->tw_despesas->sortItems(0,Qt::AscendingOrder);
        break;
    case 1:
        ui->tw_despesas->sortItems(1,Qt::AscendingOrder);
        break;
    case 2:
        ui->tw_despesas->sortItems(2,Qt::AscendingOrder);
        break;
    case 3:
        ui->tw_despesas->sortItems(3,Qt::AscendingOrder);
        break;
    case 4:
        ui->tw_despesas->sortItems(4,Qt::AscendingOrder);
        break;
    case 5:
        ui->tw_despesas->sortItems(5,Qt::AscendingOrder);
        break;
    }

}
