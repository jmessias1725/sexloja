#include "tela_definir_valor.h"
#include "ui_tela_definir_valor.h"

tela_definir_valor::tela_definir_valor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_definir_valor)
{
    ui->setupUi(this);
}

tela_definir_valor::~tela_definir_valor()
{
    delete ui;
}

void tela_definir_valor::definir_dados(float valor_ven, float cus, int quan){
    funcoes_extras funcao;
    valor_venda = valor_ven;
    custo = cus;
    quantidade = quan;

    QRegExp valida_dinheiro("^\\d{0,4}([,|.]*)(\\d{0,2})$");
    QRegExp valida_quantidade("^\\d{0,4}");

    ui->le_valor_venda->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor_venda));
    ui->le_custo_medio->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_custo_medio));
    ui->le_quantidade->setValidator(new QRegExpValidator(valida_quantidade, ui->le_quantidade));

    ui->le_valor_venda->setText(funcao.retorna_valor_dinheiro(QString::number(valor_venda)));
    ui->le_quantidade->setText(QString::number(quantidade));
    ui->le_custo_medio->setText(funcao.retorna_valor_dinheiro(QString::number(custo)));

    ui->le_valor_venda->setCursorPosition(0);
    ui->le_quantidade->setCursorPosition(0);
    ui->le_custo_medio->setCursorPosition(0);
}

void tela_definir_valor::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

int tela_definir_valor::retorna_quantidade(void){
    return quantidade;
}

float tela_definir_valor::retorna_valor_venda(void){
    return valor_venda;
}

float tela_definir_valor::retorna_custo(void){
    return custo;
}

void tela_definir_valor::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

void tela_definir_valor::on_le_valor_venda_editingFinished()
{
    funcoes_extras funcao;
    ui->le_valor_venda->setText(funcao.retorna_valor_dinheiro(ui->le_valor_venda->text()));
}

void tela_definir_valor::on_le_custo_medio_editingFinished()
{
    funcoes_extras funcao;
    ui->le_custo_medio->setText(funcao.retorna_valor_dinheiro(ui->le_custo_medio->text()));
}

void tela_definir_valor::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
    valor_venda = funcao.converter_para_float(ui->le_valor_venda->text());
    custo = funcao.converter_para_float(ui->le_custo_medio->text());
    quantidade = ui->le_quantidade->text().toInt();
    this->accept();
    this->close();
}

void tela_definir_valor::closeEvent(QCloseEvent *event){
    tela_definir_valor::limpar_dados();
}

void tela_definir_valor::limpar_dados(void){
    ui->le_valor_venda->clear();
    ui->le_quantidade->clear();
    ui->le_custo_medio->clear();
}
