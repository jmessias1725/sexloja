#include "tela_definir_valor_venda.h"
#include "ui_tela_definir_valor_venda.h"

tela_definir_valor_venda::tela_definir_valor_venda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_definir_valor_venda)
{
    ui->setupUi(this);
}

tela_definir_valor_venda::~tela_definir_valor_venda()
{
    delete ui;
}

void tela_definir_valor_venda::definir_dados(double valor_ven, int quan){
    funcoes_extras funcao;
    valor_venda = valor_ven;
    quantidade = quan;

    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    QRegExp valida_quantidade("^\\d{0,4}");

    ui->le_valor_venda->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor_venda));
    ui->le_quantidade->setValidator(new QRegExpValidator(valida_quantidade, ui->le_quantidade));

    ui->le_valor_venda->setText(funcao.retorna_valor_dinheiro(valor_venda));
    ui->le_quantidade->setText(QString::number(quantidade));

    ui->le_valor_venda->setCursorPosition(0);
    ui->le_quantidade->setCursorPosition(0);
}

void tela_definir_valor_venda::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

int tela_definir_valor_venda::retorna_quantidade(void){
    return quantidade;
}

double tela_definir_valor_venda::retorna_valor_venda(void){
    return valor_venda;
}

void tela_definir_valor_venda::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

void tela_definir_valor_venda::on_le_valor_venda_editingFinished()
{
    funcoes_extras funcao;
    ui->le_valor_venda->setText(funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor_venda->text())));
}

void tela_definir_valor_venda::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
    valor_venda = funcao.converter_para_double(ui->le_valor_venda->text());
    quantidade = ui->le_quantidade->text().toInt();
    this->accept();
    this->close();
}

void tela_definir_valor_venda::closeEvent(QCloseEvent *event){
    tela_definir_valor_venda::limpar_dados();
}

void tela_definir_valor_venda::limpar_dados(void){
    ui->le_valor_venda->clear();
    ui->le_quantidade->clear();
}
