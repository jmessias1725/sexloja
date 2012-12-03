#include "tela_configurar_legenda_estoque.h"
#include "ui_tela_configurar_legenda_estoque.h"

tela_configurar_legenda_estoque::tela_configurar_legenda_estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_configurar_legenda_estoque)
{
    ui->setupUi(this);
    ui->tw_legenda->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

tela_configurar_legenda_estoque::~tela_configurar_legenda_estoque()
{
    delete ui;
}

void tela_configurar_legenda_estoque::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_configurar_legenda_estoque::configuracao_legenda(legenda_estoque *leg){
    legenda = leg;
    aux_legenda = leg;

    zerado_valor = legenda->retorna_zerado_valor();
    z_cor_vermelho = legenda->retorna_z_cor_vermelho();
    z_cor_verde = legenda->retorna_z_cor_verde();
    z_cor_azul = legenda->retorna_z_cor_azul();

    minimo_valor = legenda->retorna_minimo_valor();
    m_cor_vermelho = legenda->retorna_m_cor_vermelho();
    m_cor_verde = legenda->retorna_m_cor_verde();
    m_cor_azul = legenda->retorna_m_cor_azul();

    normal_valor = legenda->retorna_normal_valor();
    n_cor_vermelho = legenda->retorna_n_cor_vermelho();
    n_cor_verde = legenda->retorna_n_cor_verde();
    n_cor_azul = legenda->retorna_n_cor_azul();

    ideal_valor = legenda->retorna_ideal_valor();
    i_cor_vermelho = legenda->retorna_i_cor_vermelho();
    i_cor_verde = legenda->retorna_i_cor_verde();
    i_cor_azul = legenda->retorna_i_cor_azul();

    ui->le_zerado->setText(QString::number(zerado_valor));
    ui->le_minimo->setText(QString::number(minimo_valor));
    ui->le_normal->setText(QString::number(normal_valor));
    ui->le_ideal->setText(QString::number(ideal_valor));
    ui->tw_legenda->item(0,0)->setBackgroundColor(QColor::fromRgb(z_cor_vermelho,z_cor_verde,z_cor_azul,255));
    ui->tw_legenda->item(0,1)->setBackgroundColor(QColor::fromRgb(m_cor_vermelho,m_cor_verde,m_cor_azul,255));
    ui->tw_legenda->item(0,2)->setBackgroundColor(QColor::fromRgb(n_cor_vermelho,n_cor_verde,n_cor_azul,255));
    ui->tw_legenda->item(0,3)->setBackgroundColor(QColor::fromRgb(i_cor_vermelho,i_cor_verde,i_cor_azul,255));
}

void tela_configurar_legenda_estoque::on_btn_alterar_cor_zerado_clicked()
{
    QColorDialog tl_cores;
    tl_cores.setLocale(QLocale(QLocale::Portuguese,QLocale::Brazil));
    tl_cores.setWindowTitle("Selecione a cor desejada.");
    tl_cores.setCurrentColor(QColor(z_cor_vermelho,z_cor_verde,z_cor_azul, 100));
    tl_cores.setWindowIcon(logomarca);
    tl_cores.exec();
    QColor color = tl_cores.currentColor();
    z_cor_vermelho = color.red();
    z_cor_verde = color.green();
    z_cor_azul = color.blue();
    ui->tw_legenda->item(0,0)->setBackgroundColor(QColor::fromRgb(z_cor_vermelho,z_cor_verde,z_cor_azul,255));
}

void tela_configurar_legenda_estoque::on_btn_alterar_cor_minimo_clicked()
{
    QColorDialog tl_cores;
    tl_cores.setLocale(QLocale(QLocale::Portuguese,QLocale::Brazil));
    tl_cores.setWindowTitle("Selecione a cor desejada.");
    tl_cores.setCurrentColor(QColor(m_cor_vermelho,m_cor_verde,m_cor_azul, 100));
    tl_cores.setWindowIcon(logomarca);
    tl_cores.exec();
    QColor color = tl_cores.currentColor();
    m_cor_vermelho = color.red();
    m_cor_verde = color.green();
    m_cor_azul = color.blue();
    ui->tw_legenda->item(0,1)->setBackgroundColor(QColor::fromRgb(m_cor_vermelho,m_cor_verde,m_cor_azul,255));
}

void tela_configurar_legenda_estoque::on_btn_alterar_cor_normal_clicked()
{
    QColorDialog tl_cores;
    tl_cores.setLocale(QLocale(QLocale::Portuguese,QLocale::Brazil));
    tl_cores.setWindowTitle("Selecione a cor desejada.");
    tl_cores.setCurrentColor(QColor(n_cor_vermelho,n_cor_verde,n_cor_azul, 100));
    tl_cores.setWindowIcon(logomarca);
    tl_cores.exec();
    QColor color = tl_cores.currentColor();
    n_cor_vermelho = color.red();
    n_cor_verde = color.green();
    n_cor_azul = color.blue();
    ui->tw_legenda->item(0,2)->setBackgroundColor(QColor::fromRgb(n_cor_vermelho,n_cor_verde,n_cor_azul,255));
}

void tela_configurar_legenda_estoque::on_btn_alterar_cor_ideal_clicked()
{
    QColorDialog tl_cores;
    tl_cores.setLocale(QLocale(QLocale::Portuguese,QLocale::Brazil));
    tl_cores.setWindowTitle("Selecione a cor desejada.");
    tl_cores.setCurrentColor(QColor(i_cor_vermelho,i_cor_verde,i_cor_azul, 100));
    tl_cores.setWindowIcon(logomarca);
    tl_cores.exec();
    QColor color = tl_cores.currentColor();
    i_cor_vermelho = color.red();
    i_cor_verde = color.green();
    i_cor_azul = color.blue();
    ui->tw_legenda->item(0,3)->setBackgroundColor(QColor::fromRgb(i_cor_vermelho,i_cor_verde,i_cor_azul,255));
}


void tela_configurar_legenda_estoque::on_le_normal_editingFinished()
{
    if((ui->le_normal->text().toInt()) <= (ui->le_minimo->text().toInt())){
        QPixmap icone_janela(":img/img/error_50.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("Valor normal");
        msg.addButton("OK", QMessageBox::AcceptRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("\nO valor normal deve ser maior que o valor mínimo!");
        msg.exec();
    }
    else{
        int aux_valor_ideal;
        aux_valor_ideal = ui->le_normal->text().toInt()+1;
        ui->le_ideal->setText(QString::number(aux_valor_ideal));
    }
}

void tela_configurar_legenda_estoque::on_btn_voltar_padrao_clicked()
{
    //Gera mensagem perguntando se é para salvar alterações.
    QPixmap icone_janela(":img/img/perguntar.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Configuraçao");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja voltar as configurações padrão?");
    if(msg.exec()<=0){
        zerado_valor = 0;
        z_cor_vermelho = 255;
        z_cor_verde = 150;
        z_cor_azul = 150;

        minimo_valor = 1;
        m_cor_vermelho = 255;
        m_cor_verde = 210;
        m_cor_azul = 210;

        normal_valor = 2;
        n_cor_vermelho = 204;
        n_cor_verde = 255;
        n_cor_azul = 255;

        ideal_valor = 3;
        i_cor_vermelho = 0;
        i_cor_verde = 253;
        i_cor_azul = 126;
        ui->le_zerado->setText(QString::number(zerado_valor));
        ui->le_minimo->setText(QString::number(minimo_valor));
        ui->le_normal->setText(QString::number(normal_valor));
        ui->le_ideal->setText(QString::number(ideal_valor));
        ui->tw_legenda->item(0,0)->setBackgroundColor(QColor::fromRgb(z_cor_vermelho,z_cor_verde,z_cor_azul,255));
        ui->tw_legenda->item(0,1)->setBackgroundColor(QColor::fromRgb(m_cor_vermelho,m_cor_verde,m_cor_azul,255));
        ui->tw_legenda->item(0,2)->setBackgroundColor(QColor::fromRgb(n_cor_vermelho,n_cor_verde,n_cor_azul,255));
        ui->tw_legenda->item(0,3)->setBackgroundColor(QColor::fromRgb(i_cor_vermelho,i_cor_verde,i_cor_azul,255));
    }
}

void tela_configurar_legenda_estoque::on_btn_confirmar_clicked()
{
    //Gera mensagem perguntando se é para salvar alterações.
    QPixmap icone_janela(":img/img/perguntar.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Configuraçao");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nDeseja salvar as alterações?");
    if(msg.exec()<=0){
        zerado_valor = ui->le_zerado->text().toInt();
        minimo_valor = ui->le_minimo->text().toInt();
        normal_valor = ui->le_normal->text().toInt();
        ideal_valor = ui->le_ideal->text().toInt();
        legenda->definir_icone_janela(logomarca);
        legenda->alterar_configuracao_estoque(zerado_valor,z_cor_vermelho,z_cor_verde,z_cor_azul,
                                              minimo_valor,m_cor_vermelho,m_cor_verde,m_cor_azul,
                                              normal_valor,n_cor_vermelho,n_cor_verde,n_cor_azul,
                                              ideal_valor,i_cor_vermelho,i_cor_verde,i_cor_azul);
        if(legenda->salvar_alteracao_configuracao_estoque()){
            this->accept();
            this->close();
        }
    }
    else{
        legenda = aux_legenda;
    }
}

legenda_estoque * tela_configurar_legenda_estoque::retorna_nova_configuracao(void){
   return legenda;
}

void tela_configurar_legenda_estoque::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

void tela_configurar_legenda_estoque::on_le_minimo_editingFinished()
{
    if((ui->le_normal->text().toInt()) <= (ui->le_minimo->text().toInt())){
        QPixmap icone_janela(":img/img/error_50.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("Valor normal");
        msg.addButton("OK", QMessageBox::AcceptRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("\nO valor normal deve ser maior que o valor mínimo!");
        msg.exec();
    }
}
