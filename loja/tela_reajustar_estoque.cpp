#include "tela_reajustar_estoque.h"
#include "ui_tela_reajustar_estoque.h"

tela_reajustar_estoque::tela_reajustar_estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_reajustar_estoque)
{
    ui->setupUi(this);
}

tela_reajustar_estoque::~tela_reajustar_estoque()
{
    delete ui;
}

void tela_reajustar_estoque::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
    this->reject();
}

void tela_reajustar_estoque::closeEvent(QCloseEvent *event){
    tela_reajustar_estoque::limpar_dados();
}

void tela_reajustar_estoque::limpar_dados(void){
    ui->le_porcentagem->clear();
    ui->cb_tipo->setCurrentIndex(0);
}

void tela_reajustar_estoque::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

void tela_reajustar_estoque::on_btn_confirmar_clicked()
{
    produto * informacoes_produto;
    informacoes_produto = new produto();
    if(ui->le_porcentagem->text().toStdString()!="%"){
        //Gera mensagem perguntando se é para salvar alterações.
        QPixmap icone_janela(":img/img/perguntar.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("Reajustar");
        msg.addButton("Sim", QMessageBox::AcceptRole);
        msg.addButton("Não", QMessageBox::RejectRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("\nDeseja "+ui->cb_tipo->currentText().toLower()+" o preço dos produtos em:  "+ui->le_porcentagem->text()+"  ?");
        if(!msg.exec()){
            informacoes_produto->definir_icone_janela(logomarca);
            informacoes_produto->reajustar_valor_venda_produto(ui->cb_tipo->currentIndex(),ui->le_porcentagem->text());
            this->accept();
            this->close();
        }
    }
}
