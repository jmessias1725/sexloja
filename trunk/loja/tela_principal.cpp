#include "tela_principal.h"
#include "ui_tela_principal.h"

tela_principal::tela_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_principal)
{
    QString aux_mes;
    ui->setupUi(this);
    lb_dados_usuario = new QLabel;
    lb_dados_usuario->setFrameShape(QFrame::Panel);
    lb_dados_usuario->setFrameShadow(QFrame::Sunken);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(atualizar_hora()));
    timer->start(1000);
    ui->calendario_mes_pos->showNextMonth();
    aux_mes =QDate::longMonthName(ui->calendario_mes_pos->monthShown())+", "+QString::number((ui->calendario_mes_pos->yearShown()));
    ui->lb_mes_pos->setText(aux_mes);
    aux_mes =QDate::longMonthName(ui->calendario_mes_cor->monthShown())+", "+QString::number((ui->calendario_mes_cor->yearShown()));
    ui->lb_mes_cor->setText(aux_mes);
}

tela_principal::~tela_principal()
{
    delete ui;
}

void tela_principal::dados_usuario(usuario *info_usuario){
    informacao_usuario = info_usuario;
    lb_dados_usuario->setText("  Usuário = "+informacao_usuario->retorna_nome()+"  ");
    ui->barra_de_status->addWidget(lb_dados_usuario,0);
}

void tela_principal::on_consultar_clientes_triggered()
{
    tl_listar_clientes.definir_icone_janela(logomarca);
    tl_listar_clientes.show();
}

void tela_principal::on_buscar_clientes_triggered()
{
    tl_listar_clientes.definir_icone_janela(logomarca);
    tl_listar_clientes.show();
}

void tela_principal::on_botao_sair_triggered()
{
    this->close();
}

void tela_principal::on_Cadastrar_cliente_triggered()
{
    tl_cadastro_clientes.definir_icone_janela(logomarca);
    tl_cadastro_clientes.show();
}

void tela_principal::on_cadastrar_forncecedor_triggered()
{
    tl_cadastro_fornecedor.definir_icone_janela(logomarca);
    tl_cadastro_fornecedor.show();
}

void tela_principal::on_buscar_fornecedores_triggered()
{
    tl_listar_fornecedores.definir_icone_janela(logomarca);
    tl_listar_fornecedores.show();
}

void tela_principal::on_consultar_fornecedores_triggered()
{
    tl_listar_fornecedores.definir_icone_janela(logomarca);
    tl_listar_fornecedores.show();
}

void tela_principal::on_Cadastro_da_Loja_triggered()
{
    tl_loja.definir_icone_janela(logomarca);
    tl_loja.definir_dados_loja(informacao_loja);
    if(!tl_loja.exec()){
        informacao_loja = tl_loja.retorna_novo_cadastro();
        tela_principal::dados_loja(informacao_loja);
    }
}

void  tela_principal::dados_loja(loja * info_loja){
    informacao_loja = info_loja;
    logomarca = informacao_loja->retorna_QPixmap_imagem();
    this->setWindowIcon(logomarca);
}

void tela_principal::on_cadastrar_produto_triggered()
{
    tl_cadastro_produto.definir_icone_janela(logomarca);
    tl_cadastro_produto.show();
}

void tela_principal::on_Estoque_triggered()
{
    tl_estoque.definir_icone_janela(logomarca);
    tl_estoque.buscar_produtos();
    tl_estoque.showMaximized();
}

void tela_principal::atualizar_hora(void){
    QTime aux_hora = QTime::currentTime();
    QDate aux_data = QDate::currentDate();
    ui->lcd_hora->display(aux_hora.toString());
    ui->lb_data->setText(QDate::longDayName(aux_data.dayOfWeek())+"\n"+aux_data.toString(Qt::SystemLocaleShortDate));
}

void tela_principal::on_btn_cal_avanc_clicked()
{
    QString aux_mes;

    ui->calendario_mes_cor->showNextMonth();
    ui->calendario_mes_cor->showNextMonth();
    aux_mes =QDate::longMonthName(ui->calendario_mes_cor->monthShown())+", "+QString::number((ui->calendario_mes_cor->yearShown()));
    ui->lb_mes_cor->setText(aux_mes);
}

void tela_principal::on_btn_cal_voltar_clicked()
{
    QString aux_mes;

    ui->calendario_mes_cor->showPreviousMonth();
    ui->calendario_mes_cor->showPreviousMonth();
    aux_mes =QDate::longMonthName(ui->calendario_mes_cor->monthShown())+", "+QString::number((ui->calendario_mes_cor->yearShown()));
    ui->lb_mes_cor->setText(aux_mes);
}

void tela_principal::on_calendario_mes_cor_currentPageChanged(int year, int month)
{
    QString aux_mes;
    aux_mes =QDate::longMonthName(ui->calendario_mes_cor->monthShown())+", "+QString::number((ui->calendario_mes_cor->yearShown()));
    ui->lb_mes_cor->setText(aux_mes);
    ui->calendario_mes_pos->setCurrentPage(year,month);
    ui->calendario_mes_pos->showNextMonth();
    aux_mes =QDate::longMonthName(ui->calendario_mes_pos->monthShown())+", "+QString::number((ui->calendario_mes_pos->yearShown()));
    ui->lb_mes_pos->setText(aux_mes);
}

void tela_principal::on_realizar_compra_triggered()
{
    tl_comprar.definir_icone_janela(logomarca);
    tl_comprar.exec();
}


void tela_principal::on_realizar_venda_triggered()
{
    tl_vender.definir_icone_janela(logomarca);
    tl_vender.exec();
}

void tela_principal::on_listar_contas_triggered()
{
    tl_contas.definir_icone_janela(logomarca);
    tl_contas.showMaximized();
}

void tela_principal::on_adicionar_despesa_triggered()
{
    tl_despesa_avulsa.definir_icone_janela(logomarca);
    tl_despesa_avulsa.exec();
}

void tela_principal::on_adicionar_receita_triggered()
{
    tl_receita_avulsa.definir_icone_janela(logomarca);
    tl_receita_avulsa.exec();
}
