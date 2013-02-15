#include "tela_nota_venda.h"
#include "ui_tela_nota_venda.h"

#include <QLayout>
#include <QTextEdit>

tela_nota_venda::tela_nota_venda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_nota_venda)
{
    ui->setupUi(this);

}

tela_nota_venda::~tela_nota_venda()
{
    delete ui;
}

void tela_nota_venda::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_nota_venda::definir_dados(venda *vend){
    venda_atual = vend;
    this->setWindowTitle("Venda de Código = "+QString::number(venda_atual->retorna_id_venda()));
    QScrollArea *sca;
    QTextEdit *txt;

    sca = new QScrollArea(this);
    txt = new QTextEdit;
    txt->setFixedSize(800,600);      //btn = new QPushButton("Button",this);
    //btn->setFixedSize(75,30);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(sca);
    //layout->addWidget(btn);

    sca->setWidget(txt);

    setLayout(layout);
}
