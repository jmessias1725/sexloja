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
    mostrar_fluxo_caixa();
}

void tela_contas::mostrar_fluxo_caixa(){
    QDate data_atual;
    QDate aux_data;
    data_atual = data_atual.currentDate();
    int num_dias = data_atual.daysInMonth();
    int mes = data_atual.month();
    int ano = data_atual.year();

    ui->tw_fluxo_caixa->setRowCount(num_dias);
    ui->tw_fluxo_caixa->setColumnCount(5);
    ui->tw_fluxo_caixa->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    //ui->tw_fluxo_caixa->clear();
    ui->tw_fluxo_caixa->setHorizontalHeaderLabels(QString("Dia;Despesas;Receitas;Saldo;Acumulado do mês").split(";"));

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
        ui->tw_fluxo_caixa->setItem(i-1,1,new QTableWidgetItem(QString::number(i)));
        ui->tw_fluxo_caixa->setItem(i-1,2,new QTableWidgetItem(QString::number(i)));
        ui->tw_fluxo_caixa->setItem(i-1,3,new QTableWidgetItem(QString::number(i)));
        ui->tw_fluxo_caixa->setItem(i-1,4,new QTableWidgetItem(QString::number(i)));
        ui->tw_fluxo_caixa->item(i-1,0)->setTextAlignment(Qt::AlignLeft);
        ui->tw_fluxo_caixa->item(i-1,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_fluxo_caixa->item(i-1,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_fluxo_caixa->item(i-1,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_fluxo_caixa->item(i-1,4)->setTextAlignment(Qt::AlignHCenter);
        if(dia_nome.toStdString()=="Domingo"){
            for(int j=0;j<5;j++){
                ui->tw_fluxo_caixa->item(i-1,j)->setBackgroundColor(QColor::fromRgb(239,52,62,255));
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
}
