#include "tela_estoque.h"
#include "ui_tela_estoque.h"

tela_estoque::tela_estoque(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_estoque)
{
    ui->setupUi(this);
    ui->tw_legenda->setEditTriggers(QAbstractItemView::NoEditTriggers);
    legenda = new legenda_estoque();
    aux_cons_id_produto = "";
    aux_cons_nome = "";
    aux_cons_fabricante = "";
    aux_cons_cod_barras = "";
    aux_cons_tipo = "";
    ui->le_codigo->setCursorPosition(0);
    ui->le_codigo_barras->setCursorPosition(0);
    lb_quantidade_produtos = new QLabel;
    lb_data = new QLabel;
    QDate aux_data = QDate::currentDate();
    data_sistema = aux_data.toString(Qt::SystemLocaleShortDate);
    lb_quantidade_produtos->setFrameShape(QFrame::Panel);
    lb_quantidade_produtos->setFrameShadow(QFrame::Sunken);
    lb_data->setFrameShape(QFrame::Panel);
    lb_data->setFrameShadow(QFrame::Sunken);
}

tela_estoque::~tela_estoque()
{
    delete ui;
}

void tela_estoque::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_estoque::buscar_produtos(void){
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;

    int aux_id;
    QString aux_nome;
    QString aux_fabricante;
    QString aux_desc_utilizacao;
    QString aux_cod_barras;
    QString aux_tipo;
    int aux_id_imagem;
    int aux_id_balanco;
    int aux_soma_total;
    float aux_valor_compra;
    float aux_valor_venda;

    lista_produtos.clear();
    lista_his_bal_est.clear();

    //realiza conex�o ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","buscar_produtos");
    if (verifica_conexao){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a vari�vel que ir� fazer a consulta
        QSqlQuery consultar(bd);
        QSqlQuery consultar_valor(bd);
        QSqlQuery consultar_soma_quant_disponivel(bd);

        //realiza a consulta
        consultar.exec("SELECT id_produto,nome,fabricante,desc_utilizacao,cod_barras,tipo,id_imagem FROM produto WHERE removido=0 ORDER BY nome;");
        while(consultar.next()){
            aux_id = consultar.value(0).toInt();
            aux_nome = consultar.value(1).toString();
            aux_fabricante = consultar.value(2).toString();
            aux_desc_utilizacao = consultar.value(3).toString();
            aux_cod_barras = consultar.value(4).toString();
            aux_tipo = consultar.value(5).toString();
            aux_id_imagem = consultar.value(6).toInt();

            //realiza a consulta para buscar o valores e quantidades do produto.
            consultar_valor.exec("SELECT id_balanco,valor_compra,valor_venda FROM his_balanco_estoque WHERE id_produto = "+QString::number(aux_id)+";");
            if(consultar_valor.last()){
                aux_id_balanco = consultar_valor.value(0).toInt();
                aux_valor_compra = consultar_valor.value(1).toFloat();
                aux_valor_venda = consultar_valor.value(2).toFloat();
                consultar_valor.clear();
            }

            //realiza a consulta para buscar o valores e quantidades do produto.
            consultar_soma_quant_disponivel.exec("SELECT SUM(total_disponivel) FROM his_balanco_estoque WHERE id_produto = "+QString::number(aux_id)+";");
            if(consultar_soma_quant_disponivel.last()){
                aux_soma_total = consultar_soma_quant_disponivel.value(0).toInt();
                consultar_soma_quant_disponivel.clear();
            }

            lista_produtos.push_back(new produto(aux_id,aux_nome,aux_fabricante,aux_desc_utilizacao,aux_cod_barras,aux_tipo,aux_id_imagem));
            lista_his_bal_est.push_back(new his_balanco_estoque(aux_id_balanco,aux_valor_compra,aux_valor_venda,aux_soma_total));

        }
        consultar.clear();
        tela_estoque::mostrar_lista_produtos();
    conexao.fechar_conexao("buscar_produtos");
    }
}

void tela_estoque::mostrar_lista_produtos(void){
    funcoes_extras funcao;
    aux_lista_produtos.clear();
    aux_lista_his_bal_est.clear();

    for (int i=0;i<int(lista_produtos.size());i++){
        if((QString::number(lista_produtos[i]->retorna_id()).contains(aux_cons_id_produto))&&
           (lista_produtos[i]->retorna_tipo().contains(aux_cons_tipo))&&
           (lista_produtos[i]->retorna_nome().contains(aux_cons_nome))&&
           (lista_produtos[i]->retorna_fabricante().contains(aux_cons_fabricante))&&
           (lista_produtos[i]->retorna_cod_barras().contains(aux_cons_cod_barras))){
            aux_lista_produtos.push_back(lista_produtos[i]);
            aux_lista_his_bal_est.push_back(lista_his_bal_est[i]);
        }
    }

    ui->tw_produtos->setRowCount(int(aux_lista_produtos.size()));
    ui->tw_produtos->setColumnCount(8);
    ui->tw_produtos->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tw_produtos->clear();
    ui->tw_produtos->setHorizontalHeaderLabels(QString("Tipo;C�digo;Nome;Fabricante;Quantidade;Valor de compra;Valor de venda;C�digo de barras").split(";"));

    for (int i=0;i<int(aux_lista_produtos.size());i++){
        ui->tw_produtos->setItem(i,0,new QTableWidgetItem(aux_lista_produtos[i]->retorna_tipo()));
        ui->tw_produtos->setItem(i,1,new QTableWidgetItem(QString::number(aux_lista_produtos[i]->retorna_id())));
        ui->tw_produtos->setItem(i,2,new QTableWidgetItem(aux_lista_produtos[i]->retorna_nome()));
        ui->tw_produtos->setItem(i,3,new QTableWidgetItem(aux_lista_produtos[i]->retorna_fabricante()));
        ui->tw_produtos->setItem(i,4,new QTableWidgetItem(QString::number(aux_lista_his_bal_est[i]->retorna_somatorio_quantidade())));
        ui->tw_produtos->setItem(i,5,new QTableWidgetItem(funcao.retorna_valor_dinheiro(QString::number(aux_lista_his_bal_est[i]->retorna_valor_compra()))));
        ui->tw_produtos->setItem(i,6,new QTableWidgetItem(funcao.retorna_valor_dinheiro(QString::number(aux_lista_his_bal_est[i]->retorna_valor_venda()))));
        ui->tw_produtos->setItem(i,7,new QTableWidgetItem(aux_lista_produtos[i]->retorna_cod_barras()));
        ui->tw_produtos->item(i,0)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,1)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,3)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,4)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,5)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,6)->setTextAlignment(Qt::AlignHCenter);
        ui->tw_produtos->item(i,7)->setTextAlignment(Qt::AlignHCenter);
        if ((aux_lista_his_bal_est[i]->retorna_somatorio_quantidade())==legenda->retorna_zerado_valor()){
            for(int j=0;j<8;j++){
                ui->tw_produtos->item(i,j)->setBackgroundColor(QColor::fromRgb(legenda->retorna_z_cor_vermelho(),legenda->retorna_z_cor_verde(),legenda->retorna_z_cor_azul(),255));
            }
        }
        if (((aux_lista_his_bal_est[i]->retorna_somatorio_quantidade()) > legenda->retorna_zerado_valor()) && ((aux_lista_his_bal_est[i]->retorna_somatorio_quantidade())<= legenda->retorna_minimo_valor())){
            for(int j=0;j<8;j++){
                ui->tw_produtos->item(i,j)->setBackgroundColor(QColor::fromRgb(legenda->retorna_m_cor_vermelho(),legenda->retorna_m_cor_verde(),legenda->retorna_m_cor_azul(),255));
            }
        }
        if (((aux_lista_his_bal_est[i]->retorna_somatorio_quantidade())>legenda->retorna_minimo_valor())&&((aux_lista_his_bal_est[i]->retorna_somatorio_quantidade())<=legenda->retorna_normal_valor())){
            for(int j=0;j<8;j++){
                ui->tw_produtos->item(i,j)->setBackgroundColor(QColor::fromRgb(legenda->retorna_n_cor_vermelho(),legenda->retorna_n_cor_verde(),legenda->retorna_n_cor_azul(),255));
            }
        }
        if ((aux_lista_his_bal_est[i]->retorna_somatorio_quantidade())>=legenda->retorna_ideal_valor()){
            for(int j=0;j<8;j++){
                ui->tw_produtos->item(i,j)->setBackgroundColor(QColor::fromRgb(legenda->retorna_i_cor_vermelho(),legenda->retorna_i_cor_verde(),legenda->retorna_i_cor_azul(),255));
            }
        }
    }
    ui->tw_legenda->item(0,0)->setBackgroundColor(QColor::fromRgb(legenda->retorna_z_cor_vermelho(),legenda->retorna_z_cor_verde(),legenda->retorna_z_cor_azul(),255));
    ui->tw_legenda->item(0,1)->setBackgroundColor(QColor::fromRgb(legenda->retorna_m_cor_vermelho(),legenda->retorna_m_cor_verde(),legenda->retorna_m_cor_azul(),255));
    ui->tw_legenda->item(0,2)->setBackgroundColor(QColor::fromRgb(legenda->retorna_n_cor_vermelho(),legenda->retorna_n_cor_verde(),legenda->retorna_n_cor_azul(),255));
    ui->tw_legenda->item(0,3)->setBackgroundColor(QColor::fromRgb(legenda->retorna_i_cor_vermelho(),legenda->retorna_i_cor_verde(),legenda->retorna_i_cor_azul(),255));

    ui->tw_produtos->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_produtos->resizeColumnToContents(0);
    ui->tw_produtos->resizeColumnToContents(1);
    ui->tw_produtos->resizeColumnToContents(4);
    ui->tw_produtos->resizeColumnToContents(5);
    ui->tw_produtos->resizeColumnToContents(6);
    ui->tw_produtos->resizeColumnToContents(7);

    lb_data->setText("  "+data_sistema+"  ");
    lb_quantidade_produtos->setText("  Total de produtos = "+QString::number(int(lista_produtos.size()))+"  ");
    ui->barra_de_status->addWidget(lb_data,0);
    ui->barra_de_status->addWidget(lb_quantidade_produtos,0);
}

void tela_estoque::on_pushButton_clicked()
{
    tl_configurar_legenda_estoque.definir_icone_janela(logomarca);
    tl_configurar_legenda_estoque.configuracao_legenda(legenda);
    if(tl_configurar_legenda_estoque.exec()<=0){
        legenda = tl_configurar_legenda_estoque.retorna_nova_configuracao();
        tela_estoque::mostrar_lista_produtos();
    }
}

void tela_estoque::on_btn_adicionar_produto_clicked()
{
    tl_cadastro_produto.definir_icone_janela(logomarca);
    if(tl_cadastro_produto.exec()<=0){
        buscar_produtos();
    }
}

void tela_estoque::on_cb_tipo_currentIndexChanged(const QString &arg1)
{
    if(arg1.toStdString() == "Todos")
    {
        aux_cons_tipo = "";
    }
    else{
        aux_cons_tipo = arg1;
    }
    tela_estoque::mostrar_lista_produtos();
}

void tela_estoque::on_le_nome_textChanged(const QString &arg1)
{
    ui->le_nome->setText(ui->le_nome->text().toUpper());
    aux_cons_nome = ui->le_nome->text();
    tela_estoque::mostrar_lista_produtos();
}

void tela_estoque::on_le_codigo_barras_textChanged(const QString &arg1)
{
    std::string aux;
    if(arg1.toStdString() == "  "){
        aux_cons_cod_barras = "";
    }
    else{
        aux_cons_cod_barras = arg1;
        if(int(aux_cons_cod_barras.size())<9){
            aux = aux_cons_cod_barras.toStdString();
            aux = aux.substr(0,(aux_cons_cod_barras.size()-2));
            aux_cons_cod_barras = QString::fromStdString(aux);
        }
    }
    tela_estoque::mostrar_lista_produtos();
}

void tela_estoque::on_le_fabricante_textChanged(const QString &arg1)
{
    ui->le_fabricante->setText(ui->le_fabricante->text().toUpper());
    aux_cons_fabricante = ui->le_fabricante->text();
    tela_estoque::mostrar_lista_produtos();
}


void tela_estoque::on_le_codigo_textChanged(const QString &arg1)
{
    aux_cons_id_produto = ui->le_codigo->text();
    tela_estoque::mostrar_lista_produtos();
}

void tela_estoque::on_tw_produtos_doubleClicked(const QModelIndex &index)
{
    int posicao_remover,i;
    posicao_remover = -1;
    i=0;

    tl_produto.definir_icone_janela(logomarca);
    tl_produto.definir_dados_produto(aux_lista_produtos[index.row()],aux_lista_his_bal_est[index.row()]);
    aux_lista_produtos[index.row()] = tl_produto.retorna_novo_cadastro();
    if(!tl_produto.exec()){

    }
    tela_estoque::buscar_produtos();
}

void tela_estoque::on_btn_limpar_clicked()
{
    ui->cb_tipo->setCurrentIndex(0);
}

void tela_estoque::on_btn_restaurar_produto_clicked()
{
    tl_restaurar_produto.setWindowFlags(Qt::Window);
    tl_restaurar_produto.definir_icone_janela(logomarca);
    tl_restaurar_produto.buscar_produtos();
    if(!tl_restaurar_produto.exec()){
        tela_estoque::buscar_produtos();
    }
}
