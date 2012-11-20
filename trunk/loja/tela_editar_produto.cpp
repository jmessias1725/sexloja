#include "tela_editar_produto.h"
#include "ui_tela_editar_produto.h"

tela_editar_produto::tela_editar_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_editar_produto)
{
    ui->setupUi(this);
    alterou_imgem = false;
}

tela_editar_produto::~tela_editar_produto()
{
    delete ui;
}

void tela_editar_produto::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

produto * tela_editar_produto::retorna_novo_cadastro(void){
    return informacoes_produto;
}

void tela_editar_produto::definir_dados_produto(produto *cad_produto, imagem *imagem_pro){
    informacoes_produto = cad_produto;
    imagem_produto = imagem_pro;

    QRegExp valida_dinheiro("^-?\\+?\\*?\\/?\\:?\\;?\\w?\\d{0,4}([,|.]*)(\\d{0,2})$");
    ui->le_valor_venda->setValidator(new QRegExpValidator(valida_dinheiro, ui->le_valor_venda));

    QGraphicsScene *GS_imagem_produto = new QGraphicsScene;

    ui->cb_tipo->setCurrentIndex(funcao.retorna_id_tipo(informacoes_produto->retorna_tipo().toStdString()));
    ui->le_nome->setText(informacoes_produto->retorna_nome());
    ui->le_fabricante->setText(informacoes_produto->retorna_fabricante());
    ui->le_codigo_barras->setText(informacoes_produto->retorna_cod_barras());
    ui->te_des_utilizacao->setText(informacoes_produto->retorna_desc_utilizacao());
    ui->le_valor_venda->setText(funcao.retorna_valor_dinheiro(informacoes_produto->retorna_valor_venda()));

    ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    GS_imagem_produto->addPixmap(imagem_produto->retorna_QPixmap_imagem());
    ui->gv_imagem_produto->setScene(GS_imagem_produto);
    nome_arquivo_imagem = ":/img/img/produto.png";
}


void tela_editar_produto::on_btn_adicionar_imagem_clicked()
{
    imagem imagem_produto;
    QGraphicsScene *cena = new QGraphicsScene;
    nome_arquivo_imagem = QFileDialog::getOpenFileName(this,
                                     "Selecione a imagem do produto",".\\..",
                                     "Imagem JPG (*.jpg)\nImagem JPEG (*.jpeg)\nImagem PNG (*.png)\nImagem BMP (*.bmp)");
    if (nome_arquivo_imagem.toStdString()!=""){
        largura = ui->gv_imagem_produto->width();
        altura = ui->gv_imagem_produto->height();
        imagem_produto = imagem(nome_arquivo_imagem,largura,altura);
        ui->gv_imagem_produto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->gv_imagem_produto->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        cena->addPixmap(imagem_produto.retorna_QPixmap_imagem());
        ui->gv_imagem_produto->setScene(cena);
        alterou_imgem = true;
    }
    else{
        nome_arquivo_imagem = ":/img/img/produto.png";
    }
}

void tela_editar_produto::on_btn_confirmar_clicked()
{
    std::string descricao_Aux;
    descricao_Aux = ui->te_des_utilizacao->toPlainText().toStdString();

    //Gera mensagem perguntando se é para salvar alterações.
    QPixmap icone_janela(":img/img/arquivo_pergunta_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Cadastro");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nSalvar alterações no cadastro do produto?");
    if(msg.exec()<=0){
        if (descricao_Aux.size()>=300){
            descricao_Aux = descricao_Aux.substr(0,300);
        }

        if((ui->le_nome->text().toStdString()!="")){
            informacoes_produto->definir_icone_janela(logomarca);
            if(informacoes_produto->salvar_alteracao_dados_produto(ui->le_nome->text(),ui->le_fabricante->text(),QString::fromStdString(descricao_Aux),
                                                                   ui->le_codigo_barras->text(),ui->cb_tipo->currentText(),funcao.converter_para_double(ui->le_valor_venda->text()),
                                                                   nome_arquivo_imagem,altura,largura,alterou_imgem)){
                tela_editar_produto::limpar_tela();
                this->close();
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
}

void tela_editar_produto::on_btn_cancelar_clicked()
{
    this->close();
}

void tela_editar_produto::limpar_tela(void){
    ui->le_codigo_barras->clear();
    ui->le_fabricante->clear();
    ui->le_nome->clear();
    ui->cb_tipo->setCurrentIndex(0);
    ui->te_des_utilizacao->clear();
}

void tela_editar_produto::closeEvent( QCloseEvent * event ){
    tela_editar_produto::limpar_tela();
}

void tela_editar_produto::on_le_nome_textChanged(const QString &arg1)
{
    ui->le_nome->setText(ui->le_nome->text().toUpper());
}

void tela_editar_produto::on_le_fabricante_textChanged(const QString &arg1)
{
    ui->le_fabricante->setText(ui->le_fabricante->text().toUpper());
}

void tela_editar_produto::on_le_valor_venda_editingFinished()
{
    ui->le_valor_venda->setText(funcao.retorna_valor_dinheiro(funcao.converter_para_double(ui->le_valor_venda->text())));
}
