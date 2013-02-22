#include "tela_ajustar_data_valor.h"
#include "ui_tela_ajustar_data_valor.h"

tela_ajustar_data_valor::tela_ajustar_data_valor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_ajustar_data_valor)
{
    ui->setupUi(this);
}

tela_ajustar_data_valor::~tela_ajustar_data_valor()
{
    delete ui;
}

void tela_ajustar_data_valor::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_ajustar_data_valor::definir_dados(parcela *par_atual){
    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));

    funcoes_extras funcao;
    parcela_atual = par_atual;
    ui->data->setDate(QDate::fromString(parcela_atual->retorna_data(),"dd/MM/yyyy"));
    ui->le_valor->setText(funcao.retorna_valor_dinheiro(par_atual->retorna_valor()));
}

void tela_ajustar_data_valor::on_le_valor_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
}

void tela_ajustar_data_valor::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
    parcela_atual->altera_data(ui->data->date().toString(Qt::SystemLocaleShortDate));
    parcela_atual->altera_valor(funcao.converter_para_double(ui->le_valor->text()));
    this->accept();
    this->close();
}

void tela_ajustar_data_valor::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

parcela * tela_ajustar_data_valor::retorna_parcela(){
    return parcela_atual;
}
