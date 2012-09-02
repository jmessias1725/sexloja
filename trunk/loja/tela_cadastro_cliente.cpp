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
    std::string email_a_remover;
    int posicao_remover,i;
    posicao_remover = -1;
    i=0;
    email_a_remover = ui->cb_email->currentText().toStdString();

    if(email_a_remover!=""){
        while((lista_email[i]!=email_a_remover)&&(i<=(int(lista_email.size())-1))){
            i++;
        }
        for (int j = i; j<(int(lista_email.size())); j++){
            if ((j+1)>=(int(lista_email.size())))
                lista_email.pop_back();
            else{
                lista_email[j]=lista_email[j+1];
            }
        }
        ui->cb_email->removeItem(ui->cb_email->currentIndex());
    }
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
    ui->cb_email->setInsertPolicy(QComboBox::InsertAtTop);
    if (le_email->text()!=""){
        QPixmap icone_titulo_janela(":img/logo_sex.png");
        QPixmap icone_janela(":img/email_invalido_50.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(icone_titulo_janela);
        msg.setWindowTitle("Erro de e-mail.");
        msg.addButton("OK", QMessageBox::AcceptRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Bold, false));
        msg.setText("\nE-mail inválido!");
        if((le_email->text().contains("@"))&&(le_email->text().contains("."))){
            lista_email.push_back(le_email->text().toLower().toStdString());
            ui->cb_email->clear();
            int i = lista_email.size();
            for (i = i-1; i>=0 ;i--){
                ui->cb_email->addItem(QString::fromStdString(lista_email[i]));
            }
            Qdialog_email->close();
        }
        else{
            msg.exec();
        }
    }
}

void tela_cadastro_cliente::cancelar(){
    if (le_email->text()!="")
    {
        Qdialog_email->close();
    }
    le_email->setText("");
}
