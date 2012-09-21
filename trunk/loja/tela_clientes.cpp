#include "tela_clientes.h"
#include "ui_tela_clientes.h"

tela_clientes::tela_clientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_clientes)
{
    ui->setupUi(this);
}

tela_clientes::~tela_clientes()
{
    delete ui;
}

void tela_clientes::definir_dados_cliente(cliente *cad_cliente){
    informacoes_cliente = cad_cliente;

    funcoes_extras icone_operadora;
    QGraphicsScene *scene = new QGraphicsScene;

    ui->le_codigo->setText(QString::number(cad_cliente->retornar_id()));
    ui->le_nome->setText(cad_cliente->retornar_nome());
    ui->le_rg->setText(cad_cliente->retornar_rg());
    ui->le_cpf->setText(cad_cliente->retornar_cpf());
    ui->le_cep->setText(cad_cliente->retorna_numero_cep());
    ui->le_rua->setText(cad_cliente->retorna_nome_rua());
    ui->le_bairro->setText(cad_cliente->retorna_bairro());
    ui->te_ponto_referencia->setText(cad_cliente->retorna_ponto_referencia());
    ui->le_cidade->setText(cad_cliente->retorna_cidade());
    ui->le_estado->setText(cad_cliente->retorna_nome_estado());
    ui->le_uf->setText(cad_cliente->retorna_sigla_estado());
    ui->le_numero->setText(QString::number(cad_cliente->retorna_numero_residencia()));
    ui->te_comentario_cliente->setText(cad_cliente->retornar_comentario());

    ui->gv_estado->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gv_estado->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QPixmap *lPixmap = new QPixmap(funcoes.retorna_nome_imagem_estado(cad_cliente->retorna_sigla_estado().toStdString()));
    QPixmap sized = lPixmap->scaled(QSize(ui->gv_estado->width(),ui->gv_estado->height()), Qt::IgnoreAspectRatio); // This scales the image too all
    QImage sizedImage = QImage(sized.toImage());
    QImage sizedCroppedImage = QImage(sizedImage.copy(0,0,(ui->gv_estado->width()),(ui->gv_estado->height())));
    QGraphicsPixmapItem *sizedBackground = scene->addPixmap(QPixmap::fromImage(sizedCroppedImage));
    sizedBackground->setZValue(1);
    ui->gv_estado->setScene(scene);

    std::vector< std::string > aux_email = cad_cliente->retorna_lista_email();
    std::vector< std::string > aux_operadoras = cad_cliente->retorna_lista_operadora();
    std::vector< std::string > aux_telefones = cad_cliente->retorna_lista_telefone();

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

cliente * tela_clientes::retorna_novo_cadastro(void){
    return informacoes_cliente;
}

void tela_clientes::closeEvent(QCloseEvent *event){
    ui->le_codigo->clear();
    ui->le_nome->clear();
    ui->le_rg->clear();
    ui->le_cpf->clear();
    ui->le_cep->clear();
    ui->le_rua->clear();
    ui->le_bairro->clear();
    ui->te_ponto_referencia->clear();
    ui->le_cidade->clear();
    ui->le_estado->clear();
    ui->le_uf->clear();
    ui->le_numero->clear();
    ui->te_comentario_cliente->clear();
    ui->cb_email->clear();
    ui->cb_telefone->clear();
}

void tela_clientes::limpar_dados(void){
    ui->le_codigo->clear();
    ui->le_nome->clear();
    ui->le_rg->clear();
    ui->le_cpf->clear();
    ui->le_cep->clear();
    ui->le_rua->clear();
    ui->le_bairro->clear();
    ui->te_ponto_referencia->clear();
    ui->le_cidade->clear();
    ui->le_estado->clear();
    ui->le_uf->clear();
    ui->le_numero->clear();
    ui->te_comentario_cliente->clear();
    ui->cb_email->clear();
    ui->cb_telefone->clear();
}

void tela_clientes::on_btn_editar_cliente_clicked()
{
    tl_editar_cliente.definir_dados_cliente(informacoes_cliente);
    if(!tl_editar_cliente.exec()){
        informacoes_cliente = tl_editar_cliente.retorna_novo_cadastro();
        tela_clientes::limpar_dados();
        tela_clientes::definir_dados_cliente(informacoes_cliente);
    }
}

void tela_clientes::on_btn_adicionar_cliente_clicked()
{
    tl_cadastro_clientes.show();
}
