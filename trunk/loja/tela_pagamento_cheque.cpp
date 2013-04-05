#include "tela_pagamento_cheque.h"
#include "ui_tela_pagamento_cheque.h"

tela_pagamento_cheque::tela_pagamento_cheque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_pagamento_cheque)
{
    ui->setupUi(this);
    ui->gb_para->setChecked(false);
    ui->cb_a_vista->setChecked(true);
    cheque_usado = new cheque();
    inserir_caixa_hoje = false;
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
    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor));
    ui->le_valor->setText(funcao.retorna_valor_dinheiro(valor));
    inserir_caixa_hoje = false;
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
                              ui->le_numero_cheque->text().toInt(),valor_pago,-1,0,ui->le_codigo_banco->text(),
                              ui->data->date().toString(Qt::SystemLocaleShortDate));
    cheque_usado->inserir_no_caixa_de_hoje(inserir_caixa_hoje);

    //limpa as informações
    ui->le_agencia->clear();
    ui->le_codigo_banco->clear();
    ui->le_conta->clear();
    ui->le_nome_banco->clear();
    ui->le_numero_cheque->clear();
    ui->le_valor->clear();
    ui->cb_a_vista->setChecked(true);
    ui->gb_para->setChecked(false);
    ui->cb_inserir_caixa_hoje->setChecked(false);

    this->accept();
    this->close();
}

cheque *tela_pagamento_cheque::retorna_cheque(){
    return cheque_usado;
}

void tela_pagamento_cheque::on_cb_a_vista_clicked()
{
    if(ui->cb_a_vista->isChecked()){
        ui->gb_para->setChecked(false);
        ui->cb_inserir_caixa_hoje->setChecked(false);
        inserir_caixa_hoje = true;
        ui->data->setDate(QDate::currentDate());
    }
    else{
        ui->gb_para->setChecked(true);
        inserir_caixa_hoje = false;
    }
}

void tela_pagamento_cheque::on_gb_para_clicked()
{
    if(ui->gb_para->isChecked()){
        ui->cb_a_vista->setChecked(false);
        inserir_caixa_hoje = false;
    }
    else{
        ui->cb_a_vista->setChecked(true);
        inserir_caixa_hoje = true;
    }
}

void tela_pagamento_cheque::on_le_codigo_banco_editingFinished()
{
    conexao_bd conexao;
    QSqlDatabase bd;

    QString nome_banco = "Nome do banco não encontrado, insira o nome manualmente.";

    if (conexao.conetar_bd()){
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

void tela_pagamento_cheque::on_cb_inserir_caixa_hoje_toggled(bool checked)
{
    if (checked == true){
        inserir_caixa_hoje = true;
    }
    else{
        inserir_caixa_hoje = false;
    }
}

void tela_pagamento_cheque::closeEvent(QCloseEvent *event){
    ui->le_valor->clear();
    ui->le_agencia->clear();
    ui->le_codigo_banco->clear();
    ui->le_conta->clear();
    ui->le_nome_banco->clear();
    ui->le_numero_cheque->clear();
    ui->cb_a_vista->setChecked(false);
    ui->cb_inserir_caixa_hoje->setChecked(false);
    ui->gb_para->setChecked(false);
}
