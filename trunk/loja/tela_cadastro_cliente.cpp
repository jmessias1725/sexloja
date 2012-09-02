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

void tela_cadastro_cliente::on_tb_mais_telefone_clicked()
{
    QLabel *lb_telefone;
    QComboBox *cb_operadora;
    QLabel *lb_operadora;
    QPushButton *btn_confrimar;
    QPushButton *btn_cancelar;

    tela_cadastro_telefone = new QDialog(this);

    if (tela_cadastro_telefone->objectName().isEmpty())
        tela_cadastro_telefone->setObjectName(QString::fromUtf8("tela_cadastro_telefone"));
    tela_cadastro_telefone->setWindowModality(Qt::ApplicationModal);
    tela_cadastro_telefone->resize(370, 76);
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
    tela_cadastro_telefone->setWindowIcon(icon);
    lb_telefone = new QLabel(tela_cadastro_telefone);
    lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
    lb_telefone->setGeometry(QRect(10, 10, 51, 20));
    QFont font;
    font.setFamily(QString::fromUtf8("Calibri"));
    font.setPointSize(10);
    lb_telefone->setFont(font);
    le_telefone = new QLineEdit(tela_cadastro_telefone);
    le_telefone->setObjectName(QString::fromUtf8("le_telefone"));
    le_telefone->setGeometry(QRect(60, 10, 95, 20));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Calibri"));
    font1.setPointSize(10);
    font1.setKerning(false);
    le_telefone->setFont(font1);
    cb_operadora = new QComboBox(tela_cadastro_telefone);
    QIcon icon1;
    icon1.addFile(QString::fromUtf8(":/operadoras/LOGO-ALGAR-TELECOM.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon1, QString());
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/operadoras/claro.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon2, QString());
    QIcon icon3;
    icon3.addFile(QString::fromUtf8(":/operadoras/vivo_boneco.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon3, QString());
    QIcon icon4;
    icon4.addFile(QString::fromUtf8(":/operadoras/TIM.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon4, QString());
    QIcon icon5;
    icon5.addFile(QString::fromUtf8(":/operadoras/oi.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon5, QString());
    QIcon icon6;
    icon6.addFile(QString::fromUtf8(":/operadoras/sercom_tel.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon6, QString());
    QIcon icon7;
    icon7.addFile(QString::fromUtf8(":/operadoras/nextel-novo.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon7, QString());
    QIcon icon8;
    icon8.addFile(QString::fromUtf8(":/img/telefone.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon8, QString());
    cb_operadora->setObjectName(QString::fromUtf8("cb_operadora"));
    cb_operadora->setGeometry(QRect(238, 10, 122, 22));
    cb_operadora->setFont(font1);
    lb_operadora = new QLabel(tela_cadastro_telefone);
    lb_operadora->setObjectName(QString::fromUtf8("lb_operadora"));
    lb_operadora->setGeometry(QRect(170, 10, 68, 20));
    lb_operadora->setFont(font);
    btn_confrimar = new QPushButton(tela_cadastro_telefone);
    btn_confrimar->setObjectName(QString::fromUtf8("btn_confrimar"));
    btn_confrimar->setGeometry(QRect(86, 40, 94, 24));
    QFont font2;
    font2.setFamily(QString::fromUtf8("Calibri"));
    font2.setPointSize(9);
    btn_confrimar->setFont(font2);
    QIcon icon9;
    icon9.addFile(QString::fromUtf8(":/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
    btn_confrimar->setIcon(icon9);
    btn_confrimar->setIconSize(QSize(20, 20));
    btn_cancelar = new QPushButton(tela_cadastro_telefone);
    btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
    btn_cancelar->setGeometry(QRect(190, 40, 94, 24));
    btn_cancelar->setFont(font2);
    QIcon icon10;
    icon10.addFile(QString::fromUtf8(":/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
    btn_cancelar->setIcon(icon10);
    btn_cancelar->setIconSize(QSize(18, 18));

    tela_cadastro_telefone->setWindowTitle(QApplication::translate("tela_cadastro_telefone", "Telefone", 0, QApplication::UnicodeUTF8));
    lb_telefone->setText(QApplication::translate("tela_cadastro_telefone", "Telefone:", 0, QApplication::UnicodeUTF8));
    le_telefone->setInputMask(QApplication::translate("tela_cadastro_telefone", "(00)000000000; ", 0, QApplication::UnicodeUTF8));
    le_telefone->setText(QApplication::translate("tela_cadastro_telefone", "()", 0, QApplication::UnicodeUTF8));
    le_telefone->setCursorPosition(0);
    cb_operadora->setItemText(0, QApplication::translate("tela_cadastro_telefone", "Algar Telecom", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(1, QApplication::translate("tela_cadastro_telefone", "Claro", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(2, QApplication::translate("tela_cadastro_telefone", "Vivo", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(3, QApplication::translate("tela_cadastro_telefone", "TIM", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(4, QApplication::translate("tela_cadastro_telefone", "Oi", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(5, QApplication::translate("tela_cadastro_telefone", "Sercomtel", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(6, QApplication::translate("tela_cadastro_telefone", "Nextel", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(7, QApplication::translate("tela_cadastro_telefone", "Outro", 0, QApplication::UnicodeUTF8));
    lb_operadora->setText(QApplication::translate("tela_cadastro_telefone", "Operadora:", 0, QApplication::UnicodeUTF8));
    btn_confrimar->setText(QApplication::translate("tela_cadastro_telefone", "Confirmar", 0, QApplication::UnicodeUTF8));
    btn_cancelar->setText(QApplication::translate("tela_cadastro_telefone", "Cancelar", 0, QApplication::UnicodeUTF8));

    connect(le_telefone,SIGNAL(editingFinished()),this,SLOT(definir_mascara_telefone()));
    connect(le_telefone,SIGNAL(textChanged(QString)),this,SLOT(definir_mascara_inicial_telefone()));


    tela_cadastro_telefone->exec();
}

void tela_cadastro_cliente::definir_mascara_telefone(){
    QString telefone;
    telefone = le_telefone->text();
    if (le_telefone->text().size()>=13){
        le_telefone->setInputMask(QApplication::translate("tela_cadastro_telefone", "(00)00000-0000; ", 0, QApplication::UnicodeUTF8));
        le_telefone->setText(QApplication::translate("tela_cadastro_telefone", "", 0, QApplication::UnicodeUTF8));
        std::cout<<telefone.toStdString()<<std::endl;
        le_telefone->setText("(99)99999-9999");
    }
    else{
        std::cout<<"Telefone normal"<<le_telefone->text().toStdString()<<std::endl;
        le_telefone->setInputMask(QApplication::translate("tela_cadastro_telefone", "(00)0000-0000; ", 0, QApplication::UnicodeUTF8));
        le_telefone->setText(QApplication::translate("tela_cadastro_telefone", "", 0, QApplication::UnicodeUTF8));
        std::cout<<telefone.toStdString()<<std::endl;
        le_telefone->setText("(88)8888-8888");
    }
}

void tela_cadastro_cliente::definir_mascara_inicial_telefone(){
    //if (le_telefone->text()=="()-"){
        std::cout<<le_telefone->text().toStdString()<<std::endl;
        //le_telefone->setInputMask(QApplication::translate("tela_cadastro_telefone", "(00)000000000; ", 0, QApplication::UnicodeUTF8));
        //le_telefone->setText(QApplication::translate("tela_cadastro_telefone", "()", 0, QApplication::UnicodeUTF8));
        //le_telefone->setCursorPosition(0);
    //}
}
