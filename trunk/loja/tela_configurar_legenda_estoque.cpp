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
}

void tela_configurar_legenda_estoque::on_btn_alterar_cor_zerado_clicked()
{
    QColorDialog tl_cores;
    QColor color = tl_cores.getColor(QColor(legenda->retorna_z_cor_vermelho(), legenda->retorna_z_cor_verde(), legenda->retorna_z_cor_azul(), 100),this, "Selecione a cor desejada.");
    tl_cores.setLocale(QLocale(QLocale::Portuguese,QLocale::Brazil));
    z_cor_vermelho = color.red();
    z_cor_verde = color.green();
    z_cor_azul = color.blue();
    ui->tw_legenda->item(0,0)->setBackgroundColor(QColor::fromRgb(z_cor_vermelho,z_cor_verde,z_cor_azul,255));
}

void tela_configurar_legenda_estoque::on_btn_alterar_cor_minimo_clicked()
{
    QColorDialog tl_cores;
    QColor color = tl_cores.getColor(QColor(legenda->retorna_m_cor_vermelho(), legenda->retorna_m_cor_verde(), legenda->retorna_m_cor_azul(), 100),this, "Selecione a cor desejada.");
    tl_cores.setLocale(QLocale(QLocale::Portuguese,QLocale::Brazil));
    m_cor_vermelho = color.red();
    m_cor_verde = color.green();
    m_cor_azul = color.blue();
    ui->tw_legenda->item(0,1)->setBackgroundColor(QColor::fromRgb(m_cor_vermelho,m_cor_verde,m_cor_azul,255));
}

void tela_configurar_legenda_estoque::on_btn_alterar_cor_normal_clicked()
{
    QColorDialog tl_cores;
    QColor color = tl_cores.getColor(QColor(legenda->retorna_n_cor_vermelho(), legenda->retorna_n_cor_verde(), legenda->retorna_n_cor_azul(), 100),this, "Selecione a cor desejada.");
    tl_cores.setLocale(QLocale(QLocale::Portuguese,QLocale::Brazil));
    n_cor_vermelho = color.red();
    n_cor_verde = color.green();
    n_cor_azul = color.blue();
    ui->tw_legenda->item(0,2)->setBackgroundColor(QColor::fromRgb(n_cor_vermelho,n_cor_verde,n_cor_azul,255));
}

void tela_configurar_legenda_estoque::on_btn_alterar_cor_ideal_clicked()
{
    QColorDialog tl_cores;
    QColor color = tl_cores.getColor(QColor(legenda->retorna_i_cor_vermelho(), legenda->retorna_i_cor_verde(), legenda->retorna_i_cor_azul(), 100),this, "Selecione a cor desejada.");
    tl_cores.setLocale(QLocale(QLocale::Portuguese,QLocale::Brazil));
    i_cor_vermelho = color.red();
    i_cor_verde = color.green();
    i_cor_azul = color.blue();
    ui->tw_legenda->item(0,3)->setBackgroundColor(QColor::fromRgb(i_cor_vermelho,i_cor_verde,i_cor_azul,255));
}
