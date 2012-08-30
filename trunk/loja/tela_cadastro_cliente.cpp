#include "tela_cadastro_cliente.h"
#include "ui_tela_cadastro_cliente.h"

tela_cadastro_cliente::tela_cadastro_cliente(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_cadastro_cliente)
{
    ui->setupUi(this);
}

tela_cadastro_cliente::~tela_cadastro_cliente()
{
    delete ui;
}

void tela_cadastro_cliente::on_tb_menos_email_clicked()
{
    ui->cb_email->removeItem(ui->cb_email->currentIndex());
}

void tela_cadastro_cliente::on_tb_mais_email_clicked()
{
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;

    Qdialog_email = new QDialog(this);

    Qdialog_email->setWindowTitle("Email");
    Qdialog_email->setWindowModality(Qt::WindowModal);
    Qdialog_email->resize(510, 59);
    QFont font;
    font.setFamily(QString::fromUtf8("Calibri"));
    font.setPointSize(10);
    Qdialog_email->setFont(font);
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
    Qdialog_email->setWindowIcon(icon);
    le_email = new QLineEdit(Qdialog_email);
    le_email->setObjectName(QString::fromUtf8("ld_email"));
    le_email->setGeometry(QRect(10, 10, 490, 20));
    btn_confirmar = new QPushButton(Qdialog_email);
    btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
    btn_confirmar->setGeometry(QRect(160, 30, 90, 24));
    btn_confirmar->setMinimumSize(QSize(0, 24));
    btn_confirmar->setMaximumSize(QSize(90, 24));
    btn_confirmar->setFont(font);
    btn_confirmar->setText("Confirmar");
    QIcon icon1;
    icon1.addFile(QString::fromUtf8(":/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
    btn_confirmar->setIcon(icon1);
    btn_confirmar->setIconSize(QSize(20, 20));
    btn_cancelar = new QPushButton(Qdialog_email);
    btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
    btn_cancelar->setGeometry(QRect(260, 30, 90, 24));
    btn_cancelar->setMinimumSize(QSize(0, 24));
    btn_cancelar->setMaximumSize(QSize(90, 24));
    btn_cancelar->setFont(font);
    btn_cancelar->setText("Cancelar");
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
    btn_cancelar->setIcon(icon2);
    btn_cancelar->setIconSize(QSize(20, 200));

    connect(btn_confirmar,SIGNAL(pressed()),this,SLOT(retornar_email()));
    connect(btn_cancelar,SIGNAL(pressed()),this,SLOT(cancelar()));

    Qdialog_email->exec();
}

void tela_cadastro_cliente::retornar_email(){
    if (le_email->text()!="")
    {
        ui->cb_email->addItem(le_email->text());
    }
    Qdialog_email->close();
}

void tela_cadastro_cliente::cancelar(){
    if (le_email->text()!="")
    {
        Qdialog_email->close();
    }
    le_email->setText("");
}
