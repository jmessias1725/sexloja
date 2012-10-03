#include "tela_editar_fornecedor.h"
#include "ui_tela_editar_fornecedor.h"

tela_editar_fornecedor::tela_editar_fornecedor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_editar_fornecedor)
{
    ui->setupUi(this);
}

tela_editar_fornecedor::~tela_editar_fornecedor()
{
    delete ui;
}

void tela_editar_fornecedor::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_editar_fornecedor::definir_dados_fornecedor(fornecedor *cad_fornecedor){

    informacao_cad_fornecedor = cad_fornecedor;
    lista_email = cad_fornecedor->retorna_lista_email();
    lista_telefone = cad_fornecedor->retorna_lista_telefone();
    lista_operadora = cad_fornecedor->retorna_lista_operadora();

    funcoes_extras icone_operadora;

    ui->le_nome->setText(cad_fornecedor->retornar_nome());
    ui->le_razao_social->setText(cad_fornecedor->retornar_razao_social());
    ui->le_cnpj->setText(cad_fornecedor->retornar_cnpj());
    ui->le_cep->setText(cad_fornecedor->retorna_numero_cep());
    ui->le_rua->setText(cad_fornecedor->retorna_nome_rua());
    ui->le_bairro->setText(cad_fornecedor->retorna_bairro());
    ui->te_ponto_referencia->setText(cad_fornecedor->retorna_ponto_referencia());
    ui->le_cidade->setText(cad_fornecedor->retorna_cidade());
    ui->le_uf->setText(cad_fornecedor->retorna_sigla_estado());
    ui->le_numero->setText(QString::number(cad_fornecedor->retorna_numero_residencia()));
    ui->te_comentario->setText(cad_fornecedor->retornar_comentario());
    ui->cb_estado->setCurrentIndex(funcoes.retorna_id_estado(cad_fornecedor->retorna_sigla_estado().toStdString()));

    int j = lista_email.size();
    for (j = j-1; j>=0 ;j--){
        ui->cb_email->addItem(QString::fromStdString(lista_email[j]));
    }

    int i = lista_telefone.size();
    for (i = i-1; i>=0 ;i--){
        ui->cb_telefone->addItem(icone_operadora.retorna_icone_operadora(lista_operadora[i]),QString::fromStdString(lista_telefone[i]+" "+lista_operadora[i]));
    }
}

void tela_editar_fornecedor::on_tb_menos_email_clicked()
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
        lista_email_a_remover.push_back(lista_email[i]);
        for (int j = i; j<(int(lista_email.size())); j++){
            //Remove a ultima posiçao do vetor
            if ((j+1)>=(int(lista_email.size())))
                lista_email.pop_back();
            else{
                lista_email[j]=lista_email[j+1];
            }
        }
        ui->cb_email->removeItem(ui->cb_email->currentIndex());
    }
}

void tela_editar_fornecedor::on_tb_mais_email_clicked()
{
    QPushButton *btn_confirmar_email;
    QPushButton *btn_cancelar_email;

    tela_cadastro_email = new QDialog(this);

    tela_cadastro_email->setWindowTitle("Email");
    tela_cadastro_email->setWindowModality(Qt::WindowModal);
    tela_cadastro_email->resize(510, 59);
    QFont font;
    font.setFamily(QString::fromUtf8("Calibri"));
    font.setPointSize(10);
    tela_cadastro_email->setFont(font);
    tela_cadastro_email->setWindowIcon(logomarca);
    le_email = new QLineEdit(tela_cadastro_email);
    le_email->setObjectName(QString::fromUtf8("ld_email"));
    le_email->setGeometry(QRect(10, 10, 490, 20));
    le_email->setMaxLength(60);
    btn_confirmar_email = new QPushButton(tela_cadastro_email);
    btn_confirmar_email->setObjectName(QString::fromUtf8("btn_confirmar"));
    btn_confirmar_email->setGeometry(QRect(160, 30, 90, 24));
    btn_confirmar_email->setMinimumSize(QSize(0, 24));
    btn_confirmar_email->setMaximumSize(QSize(90, 24));
    btn_confirmar_email->setFont(font);
    btn_confirmar_email->setText("Confirmar");
    QIcon icon1;
    icon1.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
    btn_confirmar_email->setIcon(icon1);
    btn_confirmar_email->setIconSize(QSize(20, 20));
    btn_cancelar_email = new QPushButton(tela_cadastro_email);
    btn_cancelar_email->setObjectName(QString::fromUtf8("btn_cancelar_telefone"));
    btn_cancelar_email->setGeometry(QRect(260, 30, 90, 24));
    btn_cancelar_email->setMinimumSize(QSize(0, 24));
    btn_cancelar_email->setMaximumSize(QSize(90, 24));
    btn_cancelar_email->setFont(font);
    btn_cancelar_email->setText("Cancelar");
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
    btn_cancelar_email->setIcon(icon2);
    btn_cancelar_email->setIconSize(QSize(20, 200));

    connect(btn_confirmar_email,SIGNAL(pressed()),this,SLOT(adicionar_email()));
    connect(btn_cancelar_email,SIGNAL(pressed()),this,SLOT(cancelar_email()));

    tela_cadastro_email->exec();
}

void tela_editar_fornecedor::adicionar_email(){
    std::string email_digitado;
    bool ja_cadastrado;
    ja_cadastrado = false;
    ui->cb_email->setInsertPolicy(QComboBox::InsertAtTop);
    if (le_email->text()!=""){
        email_digitado = le_email->text().toStdString();
        if((le_email->text().contains("@"))&&(le_email->text().contains("."))){
            for (int i=0; i<int(lista_email.size()); i++){
                if (lista_email[i]==email_digitado){
                    QPixmap icone_janela(":img/img/email_invalido_50.png");
                    QMessageBox msg(0);
                    msg.setIconPixmap(icone_janela);
                    msg.setWindowIcon(logomarca);
                    msg.setWindowTitle("E-mail");
                    msg.addButton("OK", QMessageBox::AcceptRole);
                    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                    msg.setText("\nO fornecedor já possue esse e-mail em seu pré-cadastro!");
                    ja_cadastrado = true;
                    msg.exec();
                }
            }
            if(!ja_cadastrado){
                lista_email.push_back(le_email->text().toLower().toStdString());
                lista_email_a_adicionar.push_back(le_email->text().toLower().toStdString());
                ui->cb_email->clear();
                int i = lista_email.size();
                for (i = i-1; i>=0 ;i--){
                    ui->cb_email->addItem(QString::fromStdString(lista_email[i]));
                }
            }
            tela_cadastro_email->close();
        }
        else{
            QPixmap icone_janela(":img/img/email_invalido_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Erro de e-mail");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nE-mail inválido!");
            msg.exec();
        }
    }
}

void tela_editar_fornecedor::cancelar_email(){
    if (le_email->text()=="")
    {
        tela_cadastro_email->close();
    }
    else
        le_email->setText("");
}

void tela_editar_fornecedor::on_tb_mais_telefone_clicked()
{
    QLabel *lb_telefone;
    QLabel *lb_operadora;
    QPushButton *btn_confirmar_telefone;
    QPushButton *btn_cancelar_telefone;

    tela_cadastro_telefone = new QDialog(this);

    if (tela_cadastro_telefone->objectName().isEmpty())
        tela_cadastro_telefone->setObjectName(QString::fromUtf8("tela_cadastro_telefone"));
    tela_cadastro_telefone->setWindowModality(Qt::ApplicationModal);
    tela_cadastro_telefone->resize(370, 76);
    tela_cadastro_telefone->setWindowIcon(logomarca);
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
    cb_operadora->addItem(QString());
    QIcon icon1;
    icon1.addFile(QString::fromUtf8(":/operadoras/img/LOGO-ALGAR-TELECOM.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon1, QString());
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/operadoras/img/claro.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon2, QString());
    QIcon icon3;
    icon3.addFile(QString::fromUtf8(":/operadoras/img/vivo_boneco.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon3, QString());
    QIcon icon4;
    icon4.addFile(QString::fromUtf8(":/operadoras/img/TIM.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon4, QString());
    QIcon icon5;
    icon5.addFile(QString::fromUtf8(":/operadoras/img/oi.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon5, QString());
    QIcon icon6;
    icon6.addFile(QString::fromUtf8(":/operadoras/img/sercom_tel.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon6, QString());
    QIcon icon7;
    icon7.addFile(QString::fromUtf8(":/operadoras/img/nextel-novo.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon7, QString());
    QIcon icon8;
    icon8.addFile(QString::fromUtf8(":/img/img/telefone.png"), QSize(), QIcon::Normal, QIcon::Off);
    cb_operadora->addItem(icon8, QString());
    cb_operadora->setObjectName(QString::fromUtf8("cb_operadora"));
    cb_operadora->setGeometry(QRect(238, 10, 122, 22));
    cb_operadora->setFont(font1);
    lb_operadora = new QLabel(tela_cadastro_telefone);
    lb_operadora->setObjectName(QString::fromUtf8("lb_operadora"));
    lb_operadora->setGeometry(QRect(170, 10, 68, 20));
    lb_operadora->setFont(font);
    btn_confirmar_telefone = new QPushButton(tela_cadastro_telefone);
    btn_confirmar_telefone->setObjectName(QString::fromUtf8("btn_confirmar_telefone"));
    btn_confirmar_telefone->setGeometry(QRect(86, 40, 94, 24));
    QFont font2;
    font2.setFamily(QString::fromUtf8("Calibri"));
    font2.setPointSize(9);
    btn_confirmar_telefone->setFont(font2);
    QIcon icon9;
    icon9.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
    btn_confirmar_telefone->setIcon(icon9);
    btn_confirmar_telefone->setIconSize(QSize(20, 20));
    btn_cancelar_telefone = new QPushButton(tela_cadastro_telefone);
    btn_cancelar_telefone->setObjectName(QString::fromUtf8("btn_cancelar_telefone"));
    btn_cancelar_telefone->setGeometry(QRect(190, 40, 94, 24));
    btn_cancelar_telefone->setFont(font2);
    QIcon icon10;
    icon10.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
    btn_cancelar_telefone->setIcon(icon10);
    btn_cancelar_telefone->setIconSize(QSize(18, 18));

    tela_cadastro_telefone->setWindowTitle(QApplication::translate("tela_cadastro_telefone", "Telefone", 0, QApplication::UnicodeUTF8));
    lb_telefone->setText(QApplication::translate("tela_cadastro_telefone", "Telefone:", 0, QApplication::UnicodeUTF8));
    le_telefone->setInputMask(QApplication::translate("tela_cadastro_telefone", "(00)000000000; ", 0, QApplication::UnicodeUTF8));
    le_telefone->setText(QApplication::translate("tela_cadastro_telefone", "()", 0, QApplication::UnicodeUTF8));
    le_telefone->setCursorPosition(0);
    cb_operadora->setItemText(0, QApplication::translate("tela_cadastro_telefone", "------------------------", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(1, QApplication::translate("tela_cadastro_telefone", "Algar Telecom", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(2, QApplication::translate("tela_cadastro_telefone", "Claro", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(3, QApplication::translate("tela_cadastro_telefone", "Vivo", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(4, QApplication::translate("tela_cadastro_telefone", "TIM", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(5, QApplication::translate("tela_cadastro_telefone", "Oi", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(6, QApplication::translate("tela_cadastro_telefone", "Sercomtel", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(7, QApplication::translate("tela_cadastro_telefone", "Nextel", 0, QApplication::UnicodeUTF8));
    cb_operadora->setItemText(8, QApplication::translate("tela_cadastro_telefone", "Outro", 0, QApplication::UnicodeUTF8));
    lb_operadora->setText(QApplication::translate("tela_cadastro_telefone", "Operadora:", 0, QApplication::UnicodeUTF8));
    btn_confirmar_telefone->setText(QApplication::translate("tela_cadastro_telefone", "Confirmar", 0, QApplication::UnicodeUTF8));
    btn_cancelar_telefone->setText(QApplication::translate("tela_cadastro_telefone", "Cancelar", 0, QApplication::UnicodeUTF8));

    connect(le_telefone,SIGNAL(editingFinished()),this,SLOT(definir_mascara_telefone()));
    connect(btn_confirmar_telefone,SIGNAL(clicked()),this,SLOT(adicionar_telefone()));
    connect(btn_cancelar_telefone,SIGNAL(clicked()),this,SLOT(cancelar_telefone()));


    tela_cadastro_telefone->exec();
}

void tela_editar_fornecedor::on_tb_menos_telefone_clicked()
{
    std::string telefone_a_remover;
    std::string espaco;
    int posicao_remover,i;
    posicao_remover = -1;
    i=0;
    espaco = " ";
    telefone_a_remover = ui->cb_telefone->currentText().toStdString();

    if(telefone_a_remover!=""){
        while((lista_telefone[i]+espaco+lista_operadora[i]!=telefone_a_remover)&&(i<=(int(lista_telefone.size())-1))){
            i++;
        }
        lista_telefone_a_remover.push_back(lista_telefone[i]);
        for (int j = i; j<(int(lista_telefone.size())); j++){
            //Remove o ultimo telefone
            if ((j+1)>=(int(lista_telefone.size()))){
                lista_telefone.pop_back();
                lista_operadora.pop_back();
            }
            else{
                lista_telefone[j]=lista_telefone[j+1];
                lista_operadora[j]=lista_operadora[j+1];
            }
        }
        ui->cb_telefone->removeItem(ui->cb_telefone->currentIndex());
    }

}

void tela_editar_fornecedor::definir_mascara_telefone(){
    std::string telefone;
    telefone = le_telefone->text().toStdString();
    int posicao_traco=0;
    int i=0;

    if(telefone.size()>=12){
       while ((posicao_traco==0)&&(i<=9)){
            if (telefone[i]=='-'){
                posicao_traco = i;
                telefone = telefone.substr(0,i)+ telefone.substr(i+1,5);
            }
            i++;
        }

        if (telefone.size()>=13){
            le_telefone->setInputMask(QApplication::translate("tela_cadastro_telefone", "(00)00000-0000; ", 0, QApplication::UnicodeUTF8));
            le_telefone->setText(QApplication::translate("tela_cadastro_telefone", "", 0, QApplication::UnicodeUTF8));
            le_telefone->setText(QString::fromStdString((telefone.substr(0,9)+"-"+telefone.substr(9,4))));
        }
        else{
            if (telefone.size()>=12){
                le_telefone->setInputMask(QApplication::translate("tela_cadastro_telefone", "(00)0000-00000; ", 0, QApplication::UnicodeUTF8));
                le_telefone->setText(QApplication::translate("tela_cadastro_telefone", "", 0, QApplication::UnicodeUTF8));
                le_telefone->setText(QString::fromStdString((telefone.substr(0,8)+"-"+telefone.substr(8,4))));
            }
        }
    }
}

void tela_editar_fornecedor::adicionar_telefone(){
    bool ja_cadastrado;
    ja_cadastrado = false;
    std::string telefone;
    std::string operadora;
    telefone = le_telefone->text().toStdString();
    operadora = cb_operadora->currentText().toStdString();
    funcoes_extras icones;

    if(telefone.size()>=13){
        if (cb_operadora->currentText()=="------------------------"){
            QPixmap icone_janela(":img/img/telefone_invalido_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Operadora");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nFavor, selecione uma operadora!");
            msg.exec();
        }
        else{
            for (int i=0; i<int(lista_telefone.size()); i++){
                if (lista_telefone[i]==telefone){
                    QPixmap icone_janela(":img/img/telefone_invalido_50.png");
                    QMessageBox msg(0);
                    msg.setIconPixmap(icone_janela);
                    msg.setWindowIcon(logomarca);
                    msg.setWindowTitle("Telefone");
                    msg.addButton("OK", QMessageBox::AcceptRole);
                    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                    msg.setText("\nO fornecedor já possue esse número de telefone em seu pré-cadastro!");
                    ja_cadastrado = true;
                    msg.exec();
                }
            }
            if(!ja_cadastrado){
                lista_telefone.push_back(telefone);
                lista_operadora.push_back(operadora);
                lista_telefone_a_adicionar.push_back(telefone);
                lista_operadora_a_adicionar.push_back(operadora);
                ui->cb_telefone->clear();

                int i = lista_telefone.size();
                for (i = i-1; i>=0 ;i--){
                    ui->cb_telefone->addItem(icones.retorna_icone_operadora(lista_operadora[i]),QString::fromStdString(lista_telefone[i]+" "+lista_operadora[i]));
                }

                tela_cadastro_telefone->close();
            }
        }
    }
    else{
        QPixmap icone_janela(":img/img/telefone_invalido_50.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("Erro no número do telefone");
        msg.addButton("OK", QMessageBox::AcceptRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("\nNúmero de telefone inválido!");
        msg.exec();
    }

}

void tela_editar_fornecedor::cancelar_telefone(){
    if (le_telefone->text().size()>3){
        le_telefone->clear();
    }
    else{
        tela_cadastro_telefone->close();
    }
}

void tela_editar_fornecedor::on_le_cnpj_editingFinished()
{
    if(!funcoes.verifica_cnpj(ui->le_cnpj->text().toStdString())){
        QPixmap icone_janela(":img/img/cnpj_erro_50.png");
        QMessageBox msg(0);
        msg.setIconPixmap(icone_janela);
        msg.setWindowIcon(logomarca);
        msg.setWindowTitle("Erro no número do CNPJ");
        msg.addButton("OK", QMessageBox::AcceptRole);
        msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
        msg.setText("\nNúmero de CNPJ inválido!");
        msg.exec();
        ui->le_cnpj->clear();
    }
}

void tela_editar_fornecedor::on_le_cep_editingFinished()
{
    aux_cep = new cep;
    bool possui_cep;
    if (ui->le_cep->text().size()>=9){
        possui_cep = aux_cep->buscar_cep(ui->le_cep->text());
        if (possui_cep){
            ui->le_rua->setText(aux_cep->retorna_nome_rua());
            ui->le_bairro->setText(aux_cep->retorna_bairro());
            ui->le_cidade->setText(aux_cep->retorna_cidade());
            ui->cb_estado->setCurrentIndex(aux_cep->retorna_id_uf());
            ui->le_uf->setText(aux_cep->retorna_sigla_estado());
        }
    }
    else{
        if (ui->le_cep->text().toStdString()!="-"){
            QPixmap icone_janela(":img/img/cep_invalido_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("CEP");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nO CEP digitado é inválido!");
            msg.exec();
        }
    }
}

void tela_editar_fornecedor::on_cb_estado_currentIndexChanged(int index)
{
    switch(ui->cb_estado->currentIndex()){
    case 0:
        ui->le_uf->setText("--");
        break;
    case 1:
        ui->le_uf->setText("AC");
        break;
    case 2:
        ui->le_uf->setText("AL");
        break;
    case 3:
        ui->le_uf->setText("AM");
        break;
    case 4:
        ui->le_uf->setText("AP");
        break;
    case 5:
        ui->le_uf->setText("BA");
        break;
    case 6:
        ui->le_uf->setText("CE");
        break;
    case 7:
        ui->le_uf->setText("DF");
        break;
    case 8:
        ui->le_uf->setText("ES");
        break;
    case 9:
        ui->le_uf->setText("GO");
        break;
    case 10:
        ui->le_uf->setText("MA");
        break;
    case 11:
        ui->le_uf->setText("MG");
        break;
    case 12:
        ui->le_uf->setText("MS");
        break;
    case 13:
        ui->le_uf->setText("MT");
        break;
    case 14:
        ui->le_uf->setText("PA");
        break;
    case 15:
        ui->le_uf->setText("PB");
        break;
    case 16:
        ui->le_uf->setText("PE");
        break;
    case 17:
        ui->le_uf->setText("PI");
        break;
    case 18:
        ui->le_uf->setText("PR");
        break;
    case 19:
        ui->le_uf->setText("RJ");
        break;
    case 20:
        ui->le_uf->setText("RN");
        break;
    case 21:
        ui->le_uf->setText("RO");
        break;
    case 22:
        ui->le_uf->setText("RR");
        break;
    case 23:
        ui->le_uf->setText("RS");
        break;
    case 24:
        ui->le_uf->setText("SC");
        break;
    case 25:
        ui->le_uf->setText("SE");
        break;
    case 26:
        ui->le_uf->setText("SP");
        break;
    case 27:
        ui->le_uf->setText("TO");
        break;
    }
}

void tela_editar_fornecedor::on_btn_cancelar_clicked()
{
    this->close();
}

void tela_editar_fornecedor::on_btn_confirmar_clicked()
{
    //Gera mensagem perguntando se é para salvar alterações.
    QPixmap icone_janela(":img/img/arquivo_pergunta_50.png");
    QMessageBox msg(0);
    msg.setIconPixmap(icone_janela);
    msg.setWindowIcon(logomarca);
    msg.setWindowTitle("Cadastro");
    msg.addButton("Sim", QMessageBox::AcceptRole);
    msg.addButton("Não", QMessageBox::RejectRole);
    msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
    msg.setText("\nSalvar alterações no cadastro do fornecedor ?");
    if(msg.exec()<=0){
        if((ui->le_nome->text().toStdString()!="")&&(lista_telefone.size()>0)){
            std::string comentario_Aux,ponto_referencia_aux;
            comentario_Aux = ui->te_comentario->toPlainText().toStdString();
            ponto_referencia_aux = ui->te_ponto_referencia->toPlainText().toStdString();
            if (comentario_Aux.size()>=200){
                comentario_Aux = comentario_Aux.substr(0,200);
            }
            if(ponto_referencia_aux.size()>=150){
                ponto_referencia_aux = ponto_referencia_aux.substr(0,150);
            }

            informacao_cad_fornecedor->alterar_dados_fornecedor(ui->le_cnpj->text(),ui->le_razao_social->text(),ui->le_nome->text(),
                                                          QString::fromStdString(comentario_Aux),lista_email,lista_telefone, lista_operadora,
                                                          ui->le_uf->text(), ui->cb_estado->currentText(), ui->le_cidade->text(),ui->le_bairro->text(),
                                                          ui->le_rua->text(), ui->le_cep->text(), ui->le_numero->text().toInt(),
                                                          QString::fromStdString(ponto_referencia_aux));

            if(informacao_cad_fornecedor->salvar_alteracao_dados_fornecedor(lista_telefone_a_remover,
                                                                      lista_telefone_a_adicionar,
                                                                      lista_operadora_a_adicionar,
                                                                      lista_email_a_remover,
                                                                      lista_email_a_adicionar)){
                lista_telefone_a_remover.clear();
                lista_telefone_a_adicionar.clear();
                lista_operadora_a_adicionar.clear();
                lista_email_a_remover.clear();
                lista_email_a_adicionar.clear();
                this->close();
            }
            else{
                lista_telefone_a_remover.clear();
                lista_telefone_a_adicionar.clear();
                lista_operadora_a_adicionar.clear();
                lista_email_a_remover.clear();
                lista_email_a_adicionar.clear();
            }
        }
        else{
            if(ui->le_nome->text().toStdString()==""){
                QPixmap icone_janela(":img/img/error_50.png");
                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(logomarca);
                msg.setWindowTitle("Nome do fornecedor");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nDigite o nome do fornecedor!");
                msg.exec();
            }
            else{
                QPixmap icone_janela(":img/img/telefone_50.png");
                QMessageBox msg(0);
                msg.setIconPixmap(icone_janela);
                msg.setWindowIcon(logomarca);
                msg.setWindowTitle("Telefone");
                msg.addButton("OK", QMessageBox::AcceptRole);
                msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
                msg.setText("\nDigite pelo menos um telefone!");
                msg.exec();
            }
        }
    }
}

fornecedor * tela_editar_fornecedor::retorna_novo_cadastro(void){
    return informacao_cad_fornecedor;
}

void tela_editar_fornecedor::closeEvent(QCloseEvent *event){
    ui->le_nome->clear();
    ui->le_razao_social->clear();
    ui->le_cnpj->clear();
    ui->le_cep->clear();
    ui->le_rua->clear();
    ui->le_bairro->clear();
    ui->te_ponto_referencia->clear();
    ui->le_cidade->clear();
    ui->le_uf->clear();
    ui->le_numero->clear();
    ui->te_comentario->clear();
    ui->cb_email->clear();
    ui->cb_telefone->clear();
}
