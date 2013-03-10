#include "tela_editar_parcela.h"
#include "ui_tela_editar_parcela.h"

tela_editar_parcela::tela_editar_parcela(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_editar_parcela)
{
    ui->setupUi(this);
}

tela_editar_parcela::~tela_editar_parcela()
{
    delete ui;
}

void tela_editar_parcela::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}


void tela_editar_parcela::definir_dados(ganho *par_atual){
    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));

    funcoes_extras funcao;
    parcela_atual = par_atual;
    ui->data->setDate(QDate::fromString(parcela_atual->retorna_data(),"dd/MM/yyyy"));
    ui->le_valor->setText(funcao.retorna_valor_dinheiro(par_atual->retorna_valor()));
    ui->cb_status->setCurrentIndex(parcela_atual->retorna_status());
}

void tela_editar_parcela::on_le_valor_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
}

void tela_editar_parcela::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
    parcela_atual->alterar_data(ui->data->date().toString(Qt::SystemLocaleShortDate));
    parcela_atual->alterar_valor(funcao.converter_para_double(ui->le_valor->text()));
    parcela_atual->alterar_status(ui->cb_status->currentIndex());
    this->accept();
    this->close();
}

void tela_editar_parcela::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

ganho * tela_editar_parcela::retorna_parcela(){
    return parcela_atual;
}