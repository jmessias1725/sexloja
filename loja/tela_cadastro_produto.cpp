#include "tela_cadastro_produto.h"
#include "ui_tela_cadastro_produto.h"

tela_cadastro_produto::tela_cadastro_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_cadastro_produto)
{
    ui->setupUi(this);
    imagem imagem_produto;
    QGraphicsScene *cena = new QGraphicsScene;
    nome_arquivo_imagem =":/img/img/produto.png";
    largura = ui->gv_imagem_produto->width();
    altura = ui->gv_imagem_produto->height();
    imagem_produto = imagem(nome_arquivo_imagem,largura,altura);
    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    cena->addPixmap(imagem_produto.retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(cena);
}

tela_cadastro_produto::~tela_cadastro_produto()
{
    delete ui;
}

void tela_cadastro_produto::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_cadastro_produto::on_btn_adicionar_imagem_clicked()
{
    imagem imagem_produto;
    QGraphicsScene *cena = new QGraphicsScene;
    nome_arquivo_imagem = QFileDialog::getOpenFileName(this,
                                     "Selecione a imagem do produto",".\\..",
                                     "Imagem JPG (*.jpg)\nImagem JPEG (*.jpeg)\nImagem PNG (*.png)\nImagem BMP (*.bmp)");
    largura = ui->gv_imagem_produto->width();
    altura = ui->gv_imagem_produto->height();
    if (nome_arquivo_imagem.toStdString()==""){
    nome_arquivo_imagem =":/img/img/produto.png";
    }
    imagem_produto = imagem(nome_arquivo_imagem,largura,altura);
    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    cena->addPixmap(imagem_produto.retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(cena);
}

void tela_cadastro_produto::on_btn_confirmar_clicked()
{
    std::string descricao_Aux;
    descricao_Aux = ui->te_des_utilizacao->toPlainText().toStdString();
    if (descricao_Aux.size()>=300){
        descricao_Aux = descricao_Aux.substr(0,300);
    }

    if((ui->le_nome->text().toStdString()!="")){
        float valor_compra = funcao.converter_para_float(ui->le_valor_compra->text());
        float valor_venda = funcao.converter_para_float(ui->le_valor_venda->text());
        cad_produto = new produto();
        cad_produto->definir_icone_janela(logomarca);
        if(cad_produto->salvar_dados_produto(ui->le_nome->text(),ui->le_fabricante->text(),QString::fromStdString(descricao_Aux),
                                             ui->le_quantidade->text().toInt(),ui->le_codigo_barras->text(),ui->cb_tipo->currentText()
                                             ,nome_arquivo_imagem,largura,altura,valor_compra,valor_venda)){
            tela_cadastro_produto::limpar_tela();
        }
    }
    else{
        if(ui->le_nome->text().toStdString()==""){
            QPixmap icone_janela(":img/img/error_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Nome do produto");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nDigite o nome do produto!");
            msg.exec();
        }
    }
}

void tela_cadastro_produto::on_btn_cancelar_clicked()
{
    this->close();
}

void tela_cadastro_produto::limpar_tela(void){
    ui->le_codigo_barras->clear();
    ui->le_fabricante->clear();
    ui->le_nome->clear();
    ui->le_quantidade->clear();
    ui->cb_tipo->setCurrentIndex(0);
    ui->te_des_utilizacao->clear();
    ui->le_valor_compra->clear();
    ui->le_valor_venda->clear();

    imagem imagem_produto;
    QGraphicsScene *cena = new QGraphicsScene;
    nome_arquivo_imagem =":/img/img/produto.png";
    imagem_produto = imagem(nome_arquivo_imagem,largura,altura);
    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    cena->addPixmap(imagem_produto.retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(cena);
}

void tela_cadastro_produto::closeEvent( QCloseEvent * event ){
    tela_cadastro_produto::limpar_tela();
}

void tela_cadastro_produto::on_le_nome_textChanged(const QString &arg1)
{
    ui->le_nome->setText(ui->le_nome->text().toUpper());
}

void tela_cadastro_produto::on_le_fabricante_textChanged(const QString &arg1)
{
    ui->le_fabricante->setText(ui->le_fabricante->text().toUpper());
}

void tela_cadastro_produto::on_le_valor_compra_editingFinished()
{
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(ui->le_valor_compra->text());
    ui->le_valor_compra->setText(aux);
}

void tela_cadastro_produto::on_le_valor_venda_editingFinished()
{
    QString aux;
    aux =  funcao.retorna_valor_dinheiro(ui->le_valor_venda->text());
    ui->le_valor_venda->setText(aux);
}
