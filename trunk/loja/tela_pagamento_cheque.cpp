#include "tela_pagamento_cheque.h"
#include "ui_tela_pagamento_cheque.h"

tela_pagamento_cheque::tela_pagamento_cheque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_pagamento_cheque)
{
    ui->setupUi(this);
    ui->gb_para->setChecked(false);
    cheque_usado = new cheque();
}

tela_pagamento_cheque::~tela_pagamento_cheque()
{
    delete ui;
}

void tela_pagamento_cheque::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    ui->data->setDate(QDate::currentDate());
}

void tela_pagamento_cheque::definir_dados(double valor){
    funcoes_extras funcao;
    QRegExp valida_dinheiro("^\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));
    ui->le_valor->setText(funcao.retorna_valor_dinheiro(valor));
}

void tela_pagamento_cheque::on_le_valor_editingFinished(){
    funcoes_extras funcao;
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor->text()));
    ui->le_valor->setText(aux);
}


void tela_pagamento_cheque::on_btn_cancelar_clicked()
{
    this->rect();
    this->close();
}

void tela_pagamento_cheque::on_btn_confirmar_clicked()
{
    funcoes_extras funcao;
    valor_pago = funcao.converter_para_double(ui->le_valor->text());
    cheque_usado = new cheque(ui->le_nome_banco->text(),ui->le_agencia->text(),ui->le_conta->text(),
                              ui->le_numero_cheque->text().toInt(),valor_pago,1,0,ui->le_codigo_banco->text(),
                              ui->data->date().currentDate().toString());
    this->accept();
    this->close();
}

cheque *tela_pagamento_cheque::retorna_cheque(){
    return cheque_usado;
}

void tela_pagamento_cheque::on_cb_a_vista_clicked()
{
    ui->gb_para->setChecked(false);
}

void tela_pagamento_cheque::on_gb_para_clicked()
{
    ui->cb_a_vista->setChecked(false);
}

void tela_pagamento_cheque::on_le_codigo_banco_editingFinished()
{
    conexao_bd conexao;
    QSqlDatabase bd;

    QString nome_banco = "Nome do banco não encontrado, insira o nome manualmente.";

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","tela_pagamento_cheque")){
        //Retorna o banco de dados
       bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        consultar.exec("SELECT nome FROM lista_bancos WHERE codigo = '"+ ui->le_codigo_banco->text() +"';");
        while(consultar.next()){
           nome_banco = consultar.value(0).toString();
        }
        bd.close();
    }
    ui->le_nome_banco->setText(nome_banco);
}
