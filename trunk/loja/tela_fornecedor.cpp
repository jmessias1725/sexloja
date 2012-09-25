#include "tela_fornecedor.h"
#include "ui_tela_fornecedor.h"

tela_fornecedor::tela_fornecedor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_fornecedor)
{
    ui->setupUi(this);
}

tela_fornecedor::~tela_fornecedor()
{
    delete ui;
}

void tela_fornecedor::definir_dados_fornecedor(fornecedor *cad_fornecedor){
    informacoes_fornecedor = cad_fornecedor;

    funcoes_extras icone_operadora;
    QGraphicsScene *scene = new QGraphicsScene;

    ui->le_codigo->setText(QString::number(cad_fornecedor->retornar_id()));
    ui->le_nome->setText(cad_fornecedor->retornar_nome());
    ui->le_razao_social->setText(cad_fornecedor->retornar_razao_social());
    ui->le_cnpj->setText(cad_fornecedor->retornar_cnpj());
    ui->le_cep->setText(cad_fornecedor->retorna_numero_cep());
    ui->le_rua->setText(cad_fornecedor->retorna_nome_rua());
    ui->le_bairro->setText(cad_fornecedor->retorna_bairro());
    ui->te_ponto_referencia->setText(cad_fornecedor->retorna_ponto_referencia());
    ui->le_cidade->setText(cad_fornecedor->retorna_cidade());
    ui->le_estado->setText(cad_fornecedor->retorna_nome_estado());
    ui->le_uf->setText(cad_fornecedor->retorna_sigla_estado());
    ui->le_numero->setText(QString::number(cad_fornecedor->retorna_numero_residencia()));
    ui->te_comentario_fornecedor->setText(cad_fornecedor->retornar_comentario());

    ui->gv_estado->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_estado->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QPixmap *lPixmap = new QPixmap(funcoes.retorna_nome_imagem_estado(cad_fornecedor->retorna_sigla_estado().toStdString()));
    QPixmap sized = lPixmap->scaled(QSize(ui->gv_estado->width(),ui->gv_estado->height()), Qt::IgnoreAspectRatio); // This scales the image too all
    QImage sizedImage = QImage(sized.toImage());
    QImage sizedCroppedImage = QImage(sizedImage.copy(0,0,(ui->gv_estado->width()),(ui->gv_estado->height())));
    QGraphicsPixmapItem *sizedBackground = scene->addPixmap(QPixmap::fromImage(sizedCroppedImage));
    sizedBackground->setZValue(1);
    ui->gv_estado->setScene(scene);

    std::vector< std::string > aux_email = cad_fornecedor->retorna_lista_email();
    std::vector< std::string > aux_operadoras = cad_fornecedor->retorna_lista_operadora();
    std::vector< std::string > aux_telefones = cad_fornecedor->retorna_lista_telefone();

    int j = aux_email.size();
    for (j = j-1; j>=0 ;j--){
        ui->cb_email->addItem(QString::fromStdString(aux_email[j]));
    }

    int i = aux_telefones.size();
    for (i = i-1; i>=0 ;i--){
        ui->cb_telefone->addItem(icone_operadora.retorna_icone_operadora(aux_operadoras[i]),QString::fromStdString(aux_telefones[i]+" "+aux_operadoras[i]));
    }
    aux_email.clear();
    aux_operadoras.clear();
    aux_telefones.clear();
}

fornecedor * tela_fornecedor::retorna_novo_cadastro(void){
    return informacoes_fornecedor;
}

void tela_fornecedor::closeEvent(QCloseEvent *event){
    ui->le_codigo->clear();
    ui->le_nome->clear();
    ui->le_razao_social->clear();
    ui->lb_cnpj->clear();
    ui->le_cep->clear();
    ui->le_rua->clear();
    ui->le_bairro->clear();
    ui->te_ponto_referencia->clear();
    ui->le_cidade->clear();
    ui->le_estado->clear();
    ui->le_uf->clear();
    ui->le_numero->clear();
    ui->te_comentario_fornecedor->clear();
    ui->cb_email->clear();
    ui->cb_telefone->clear();
}

void tela_fornecedor::limpar_dados(){
    ui->le_codigo->clear();
    ui->le_nome->clear();
    ui->le_razao_social->clear();
    ui->lb_cnpj->clear();
    ui->le_cep->clear();
    ui->le_rua->clear();
    ui->le_bairro->clear();
    ui->te_ponto_referencia->clear();
    ui->le_cidade->clear();
    ui->le_estado->clear();
    ui->le_uf->clear();
    ui->le_numero->clear();
    ui->te_comentario_fornecedor->clear();
    ui->cb_email->clear();
    ui->cb_telefone->clear();
}

void tela_fornecedor::on_btn_editar_fornecedor_clicked()
{
    tl_editar_fornecedor.definir_dados_fornecedor(informacoes_fornecedor);
    if(!tl_editar_fornecedor.exec()){
        informacoes_fornecedor = tl_editar_fornecedor.retorna_novo_cadastro();
        tela_fornecedor::limpar_dados();
        tela_fornecedor::definir_dados_fornecedor(informacoes_fornecedor);
    }
}

void tela_fornecedor::on_btn_adicionar_fornecedor_clicked()
{
    tl_cadastro_fornecedor.show();
}

void tela_fornecedor::on_btn_remover_fornecedor_clicked()
{
    //Gera mensagem perguntando se é para salvar alterações.
    QPixmap icone_titulo_janela(":img/img/logo_sex.png");
    QPixmap icone_janela(":img/img/fornecedor_pergunta_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(icone_titulo_janela);
    msg.setWindowTitle("Cadastro");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja remover o cadastro do fornecedor ?");
    if(!msg.exec()){
        if(informacoes_fornecedor->remover_cadastro_fornecedor(informacoes_fornecedor->retornar_id())){
            informacoes_fornecedor->altera_id_fornecedor(-1);
        }
        this->close();
    }
}
