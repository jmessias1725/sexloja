/********************************************************************************
** Form generated from reading UI file 'tela_cadastro_loja.ui'
**
** Created: Thu 7. Feb 11:32:09 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CADASTRO_LOJA_H
#define UI_TELA_CADASTRO_LOJA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_cadastro_loja
{
public:
    QGroupBox *gb_dados_fornecedor;
    QLabel *lb_telefone;
    QComboBox *cb_telefone;
    QLabel *lb_nome;
    QLineEdit *le_nome;
    QToolButton *tb_mais_telefone;
    QToolButton *tb_menos_telefone;
    QLabel *lb_razao_social;
    QLineEdit *le_razao_social;
    QLabel *lb_cnpj;
    QLineEdit *le_cnpj;
    QGroupBox *gb_endereo;
    QLineEdit *le_cep;
    QLabel *lb_cep;
    QLabel *lb_rua;
    QLineEdit *le_rua;
    QLabel *lb_numero;
    QLineEdit *le_numero;
    QLabel *lb_bairro;
    QLineEdit *le_bairro;
    QLabel *lb_cidade;
    QLineEdit *le_cidade;
    QLabel *lb_estado;
    QLabel *lb_uf;
    QLineEdit *le_uf;
    QComboBox *cb_estado;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QGraphicsView *gv_logo;
    QPushButton *btn_adicionar_logo;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *tela_cadastro_loja)
    {
        if (tela_cadastro_loja->objectName().isEmpty())
            tela_cadastro_loja->setObjectName(QString::fromUtf8("tela_cadastro_loja"));
        tela_cadastro_loja->resize(800, 237);
        tela_cadastro_loja->setMinimumSize(QSize(800, 237));
        tela_cadastro_loja->setMaximumSize(QSize(800, 237));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_cadastro_loja->setWindowIcon(icon);
        tela_cadastro_loja->setModal(true);
        gb_dados_fornecedor = new QGroupBox(tela_cadastro_loja);
        gb_dados_fornecedor->setObjectName(QString::fromUtf8("gb_dados_fornecedor"));
        gb_dados_fornecedor->setGeometry(QRect(5, 5, 658, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_dados_fornecedor->setFont(font);
        gb_dados_fornecedor->setAlignment(Qt::AlignCenter);
        lb_telefone = new QLabel(gb_dados_fornecedor);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(181, 80, 50, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_telefone->setFont(font1);
        cb_telefone = new QComboBox(gb_dados_fornecedor);
        cb_telefone->setObjectName(QString::fromUtf8("cb_telefone"));
        cb_telefone->setGeometry(QRect(234, 80, 217, 20));
        cb_telefone->setMaximumSize(QSize(16777215, 22));
        cb_telefone->setFont(font1);
        cb_telefone->setEditable(false);
        cb_telefone->setMaxVisibleItems(20);
        lb_nome = new QLabel(gb_dados_fornecedor);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(7, 23, 34, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font1);
        le_nome = new QLineEdit(gb_dados_fornecedor);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(41, 23, 612, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(450, 20));
        le_nome->setMaximumSize(QSize(800, 20));
        le_nome->setFont(font1);
        le_nome->setMaxLength(32767);
        le_nome->setReadOnly(false);
        tb_mais_telefone = new QToolButton(gb_dados_fornecedor);
        tb_mais_telefone->setObjectName(QString::fromUtf8("tb_mais_telefone"));
        tb_mais_telefone->setGeometry(QRect(451, 77, 20, 15));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/mais.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_mais_telefone->setIcon(icon1);
        tb_mais_telefone->setIconSize(QSize(12, 12));
        tb_mais_telefone->setAutoRaise(true);
        tb_mais_telefone->setArrowType(Qt::NoArrow);
        tb_menos_telefone = new QToolButton(gb_dados_fornecedor);
        tb_menos_telefone->setObjectName(QString::fromUtf8("tb_menos_telefone"));
        tb_menos_telefone->setGeometry(QRect(451, 91, 20, 15));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/menos.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_menos_telefone->setIcon(icon2);
        tb_menos_telefone->setIconSize(QSize(12, 12));
        tb_menos_telefone->setAutoRaise(true);
        lb_razao_social = new QLabel(gb_dados_fornecedor);
        lb_razao_social->setObjectName(QString::fromUtf8("lb_razao_social"));
        lb_razao_social->setGeometry(QRect(7, 50, 75, 20));
        lb_razao_social->setMaximumSize(QSize(100, 20));
        lb_razao_social->setFont(font1);
        le_razao_social = new QLineEdit(gb_dados_fornecedor);
        le_razao_social->setObjectName(QString::fromUtf8("le_razao_social"));
        le_razao_social->setGeometry(QRect(82, 50, 571, 20));
        sizePolicy.setHeightForWidth(le_razao_social->sizePolicy().hasHeightForWidth());
        le_razao_social->setSizePolicy(sizePolicy);
        le_razao_social->setMinimumSize(QSize(450, 20));
        le_razao_social->setMaximumSize(QSize(800, 20));
        le_razao_social->setFont(font1);
        le_razao_social->setMaxLength(100);
        le_razao_social->setReadOnly(false);
        lb_cnpj = new QLabel(gb_dados_fornecedor);
        lb_cnpj->setObjectName(QString::fromUtf8("lb_cnpj"));
        lb_cnpj->setGeometry(QRect(8, 80, 33, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        lb_cnpj->setFont(font2);
        le_cnpj = new QLineEdit(gb_dados_fornecedor);
        le_cnpj->setObjectName(QString::fromUtf8("le_cnpj"));
        le_cnpj->setGeometry(QRect(41, 80, 121, 20));
        le_cnpj->setFont(font2);
        lb_telefone->raise();
        cb_telefone->raise();
        tb_mais_telefone->raise();
        tb_menos_telefone->raise();
        lb_nome->raise();
        le_nome->raise();
        lb_razao_social->raise();
        le_razao_social->raise();
        lb_cnpj->raise();
        le_cnpj->raise();
        gb_endereo = new QGroupBox(tela_cadastro_loja);
        gb_endereo->setObjectName(QString::fromUtf8("gb_endereo"));
        gb_endereo->setGeometry(QRect(5, 120, 658, 111));
        gb_endereo->setFont(font);
        gb_endereo->setAlignment(Qt::AlignCenter);
        le_cep = new QLineEdit(gb_endereo);
        le_cep->setObjectName(QString::fromUtf8("le_cep"));
        le_cep->setGeometry(QRect(35, 23, 91, 20));
        le_cep->setMaximumSize(QSize(100, 20));
        le_cep->setFont(font1);
        le_cep->setFrame(true);
        le_cep->setCursorPosition(9);
        le_cep->setReadOnly(false);
        lb_cep = new QLabel(gb_endereo);
        lb_cep->setObjectName(QString::fromUtf8("lb_cep"));
        lb_cep->setGeometry(QRect(8, 23, 27, 20));
        lb_cep->setFont(font1);
        lb_rua = new QLabel(gb_endereo);
        lb_rua->setObjectName(QString::fromUtf8("lb_rua"));
        lb_rua->setGeometry(QRect(133, 23, 31, 20));
        lb_rua->setFont(font1);
        le_rua = new QLineEdit(gb_endereo);
        le_rua->setObjectName(QString::fromUtf8("le_rua"));
        le_rua->setGeometry(QRect(160, 23, 493, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        le_rua->setFont(font3);
        le_rua->setMaxLength(100);
        le_rua->setCursorPosition(0);
        le_rua->setReadOnly(false);
        lb_numero = new QLabel(gb_endereo);
        lb_numero->setObjectName(QString::fromUtf8("lb_numero"));
        lb_numero->setGeometry(QRect(7, 50, 51, 20));
        lb_numero->setFont(font1);
        le_numero = new QLineEdit(gb_endereo);
        le_numero->setObjectName(QString::fromUtf8("le_numero"));
        le_numero->setGeometry(QRect(54, 50, 70, 20));
        le_numero->setFont(font3);
        le_numero->setMaxLength(9);
        le_numero->setReadOnly(false);
        lb_bairro = new QLabel(gb_endereo);
        lb_bairro->setObjectName(QString::fromUtf8("lb_bairro"));
        lb_bairro->setGeometry(QRect(132, 50, 46, 20));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(false);
        lb_bairro->setFont(font4);
        le_bairro = new QLineEdit(gb_endereo);
        le_bairro->setObjectName(QString::fromUtf8("le_bairro"));
        le_bairro->setGeometry(QRect(172, 50, 251, 20));
        le_bairro->setFont(font3);
        le_bairro->setMaxLength(70);
        le_bairro->setReadOnly(false);
        lb_cidade = new QLabel(gb_endereo);
        lb_cidade->setObjectName(QString::fromUtf8("lb_cidade"));
        lb_cidade->setGeometry(QRect(429, 50, 46, 20));
        lb_cidade->setFont(font1);
        le_cidade = new QLineEdit(gb_endereo);
        le_cidade->setObjectName(QString::fromUtf8("le_cidade"));
        le_cidade->setGeometry(QRect(472, 50, 181, 20));
        le_cidade->setFont(font3);
        le_cidade->setMaxLength(50);
        le_cidade->setCursorPosition(0);
        le_cidade->setReadOnly(false);
        lb_estado = new QLabel(gb_endereo);
        lb_estado->setObjectName(QString::fromUtf8("lb_estado"));
        lb_estado->setGeometry(QRect(8, 80, 45, 20));
        lb_estado->setFont(font1);
        lb_uf = new QLabel(gb_endereo);
        lb_uf->setObjectName(QString::fromUtf8("lb_uf"));
        lb_uf->setGeometry(QRect(225, 80, 20, 20));
        lb_uf->setFont(font2);
        le_uf = new QLineEdit(gb_endereo);
        le_uf->setObjectName(QString::fromUtf8("le_uf"));
        le_uf->setGeometry(QRect(245, 80, 25, 20));
        le_uf->setFont(font2);
        le_uf->setReadOnly(true);
        cb_estado = new QComboBox(gb_endereo);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/bandeira_do_brasil.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/acre.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Alagoas.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Amazonas.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Bandeira_do_Amapa.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Bahia.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Bandeira_do_Ceara.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Distrito_Federal.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Espirito_Santo.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon11, QString());
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Goias.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon12, QString());
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Maranhao.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon13, QString());
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Minas_Gerais.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon14, QString());
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Mato_Grosso_do_Sul.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon15, QString());
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Mato_Grosso.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon16, QString());
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Para.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon17, QString());
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Paraiba.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon18, QString());
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Pernambuco.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon19, QString());
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Piaui.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon20, QString());
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Bandeira_do_Parana.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon21, QString());
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Rio_de_Janeiro.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon22, QString());
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Rio_Grande_do_Norte.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon23, QString());
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Rondonia.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon24, QString());
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Roraima.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon25, QString());
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Rio_Grande_do_Sul.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon26, QString());
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Santa_Catarina.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon27, QString());
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Sergipe.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon28, QString());
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Sao_Paulo.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon29, QString());
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/bandeiras/badeiras_estados/Tocantins.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_estado->addItem(icon30, QString());
        cb_estado->setObjectName(QString::fromUtf8("cb_estado"));
        cb_estado->setGeometry(QRect(53, 80, 161, 20));
        cb_estado->setFont(font2);
        lb_rua->raise();
        le_rua->raise();
        lb_numero->raise();
        le_numero->raise();
        lb_bairro->raise();
        le_bairro->raise();
        lb_cidade->raise();
        le_cidade->raise();
        lb_estado->raise();
        le_cep->raise();
        lb_cep->raise();
        lb_uf->raise();
        le_uf->raise();
        cb_estado->raise();
        layoutWidget = new QWidget(tela_cadastro_loja);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(667, 12, 132, 217));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gv_logo = new QGraphicsView(layoutWidget);
        gv_logo->setObjectName(QString::fromUtf8("gv_logo"));
        gv_logo->setMinimumSize(QSize(128, 128));
        gv_logo->setMaximumSize(QSize(128, 128));

        verticalLayout->addWidget(gv_logo);

        btn_adicionar_logo = new QPushButton(layoutWidget);
        btn_adicionar_logo->setObjectName(QString::fromUtf8("btn_adicionar_logo"));
        btn_adicionar_logo->setFont(font2);

        verticalLayout->addWidget(btn_adicionar_logo);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btn_confirmar = new QPushButton(layoutWidget);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setMinimumSize(QSize(0, 24));
        btn_confirmar->setMaximumSize(QSize(150, 24));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        btn_confirmar->setFont(font5);
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon31);
        btn_confirmar->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btn_confirmar);

        btn_cancelar = new QPushButton(layoutWidget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(150, 24));
        btn_cancelar->setFont(font5);
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon32);
        btn_cancelar->setIconSize(QSize(18, 18));

        verticalLayout_2->addWidget(btn_cancelar);


        verticalLayout_3->addLayout(verticalLayout_2);

        QWidget::setTabOrder(le_razao_social, le_nome);
        QWidget::setTabOrder(le_nome, le_cnpj);
        QWidget::setTabOrder(le_cnpj, cb_telefone);
        QWidget::setTabOrder(cb_telefone, tb_mais_telefone);
        QWidget::setTabOrder(tb_mais_telefone, tb_menos_telefone);
        QWidget::setTabOrder(tb_menos_telefone, gv_logo);
        QWidget::setTabOrder(gv_logo, btn_adicionar_logo);
        QWidget::setTabOrder(btn_adicionar_logo, le_cep);
        QWidget::setTabOrder(le_cep, le_rua);
        QWidget::setTabOrder(le_rua, le_numero);
        QWidget::setTabOrder(le_numero, le_bairro);
        QWidget::setTabOrder(le_bairro, le_cidade);
        QWidget::setTabOrder(le_cidade, cb_estado);
        QWidget::setTabOrder(cb_estado, le_uf);
        QWidget::setTabOrder(le_uf, btn_confirmar);
        QWidget::setTabOrder(btn_confirmar, btn_cancelar);

        retranslateUi(tela_cadastro_loja);

        QMetaObject::connectSlotsByName(tela_cadastro_loja);
    } // setupUi

    void retranslateUi(QDialog *tela_cadastro_loja)
    {
        tela_cadastro_loja->setWindowTitle(QApplication::translate("tela_cadastro_loja", "Cadastro de Loja", 0, QApplication::UnicodeUTF8));
        gb_dados_fornecedor->setTitle(QApplication::translate("tela_cadastro_loja", "Dados da Loja", 0, QApplication::UnicodeUTF8));
        lb_telefone->setText(QApplication::translate("tela_cadastro_loja", "Telefone:", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_cadastro_loja", "Nome:", 0, QApplication::UnicodeUTF8));
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        tb_mais_telefone->setText(QApplication::translate("tela_cadastro_loja", "...", 0, QApplication::UnicodeUTF8));
        tb_menos_telefone->setText(QApplication::translate("tela_cadastro_loja", "...", 0, QApplication::UnicodeUTF8));
        lb_razao_social->setText(QApplication::translate("tela_cadastro_loja", "Raz\303\243o Social:", 0, QApplication::UnicodeUTF8));
        le_razao_social->setText(QString());
        lb_cnpj->setText(QApplication::translate("tela_cadastro_loja", "CNPJ:", 0, QApplication::UnicodeUTF8));
        le_cnpj->setInputMask(QApplication::translate("tela_cadastro_loja", "00.000.000/0000-00; ", 0, QApplication::UnicodeUTF8));
        le_cnpj->setText(QApplication::translate("tela_cadastro_loja", "../-", 0, QApplication::UnicodeUTF8));
        gb_endereo->setTitle(QApplication::translate("tela_cadastro_loja", "Endere\303\247o", 0, QApplication::UnicodeUTF8));
        le_cep->setInputMask(QApplication::translate("tela_cadastro_loja", "00000-000; ", 0, QApplication::UnicodeUTF8));
        le_cep->setText(QApplication::translate("tela_cadastro_loja", "-", 0, QApplication::UnicodeUTF8));
        lb_cep->setText(QApplication::translate("tela_cadastro_loja", "CEP:", 0, QApplication::UnicodeUTF8));
        lb_rua->setText(QApplication::translate("tela_cadastro_loja", "Rua:", 0, QApplication::UnicodeUTF8));
        le_rua->setText(QString());
        lb_numero->setText(QApplication::translate("tela_cadastro_loja", "N\303\272mero:", 0, QApplication::UnicodeUTF8));
        le_numero->setInputMask(QApplication::translate("tela_cadastro_loja", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_numero->setText(QString());
        lb_bairro->setText(QApplication::translate("tela_cadastro_loja", "Bairro:", 0, QApplication::UnicodeUTF8));
        le_bairro->setText(QString());
        lb_cidade->setText(QApplication::translate("tela_cadastro_loja", "Cidade:", 0, QApplication::UnicodeUTF8));
        le_cidade->setText(QString());
        lb_estado->setText(QApplication::translate("tela_cadastro_loja", "Estado:", 0, QApplication::UnicodeUTF8));
        lb_uf->setText(QApplication::translate("tela_cadastro_loja", "UF:", 0, QApplication::UnicodeUTF8));
        le_uf->setText(QApplication::translate("tela_cadastro_loja", "--", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(0, QApplication::translate("tela_cadastro_loja", "-------------------", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(1, QApplication::translate("tela_cadastro_loja", "Acre", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(2, QApplication::translate("tela_cadastro_loja", "Alagoas", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(3, QApplication::translate("tela_cadastro_loja", "Amazonas", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(4, QApplication::translate("tela_cadastro_loja", "Amap\303\241", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(5, QApplication::translate("tela_cadastro_loja", "Bahia", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(6, QApplication::translate("tela_cadastro_loja", "Cear\303\241", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(7, QApplication::translate("tela_cadastro_loja", "Distrito Federal", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(8, QApplication::translate("tela_cadastro_loja", "Esp\303\255rito Santo", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(9, QApplication::translate("tela_cadastro_loja", "Goi\303\241s", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(10, QApplication::translate("tela_cadastro_loja", "Maranh\303\243o", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(11, QApplication::translate("tela_cadastro_loja", "Minas Gerais", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(12, QApplication::translate("tela_cadastro_loja", "Mato Grosso do Sul", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(13, QApplication::translate("tela_cadastro_loja", "Mato Grosso", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(14, QApplication::translate("tela_cadastro_loja", "Par\303\241", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(15, QApplication::translate("tela_cadastro_loja", "Para\303\255ba", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(16, QApplication::translate("tela_cadastro_loja", "Pernambuco", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(17, QApplication::translate("tela_cadastro_loja", "Piau\303\255", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(18, QApplication::translate("tela_cadastro_loja", "Paran\303\241", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(19, QApplication::translate("tela_cadastro_loja", "Rio de Janeiro", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(20, QApplication::translate("tela_cadastro_loja", "Rio Grande do Norte", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(21, QApplication::translate("tela_cadastro_loja", "Rond\303\264nia", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(22, QApplication::translate("tela_cadastro_loja", "Roraima", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(23, QApplication::translate("tela_cadastro_loja", "Rio Grande do Sul", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(24, QApplication::translate("tela_cadastro_loja", "Santa Catarina", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(25, QApplication::translate("tela_cadastro_loja", "Sergipe", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(26, QApplication::translate("tela_cadastro_loja", "S\303\243o Paulo", 0, QApplication::UnicodeUTF8));
        cb_estado->setItemText(27, QApplication::translate("tela_cadastro_loja", "Tocantins", 0, QApplication::UnicodeUTF8));

        btn_adicionar_logo->setText(QApplication::translate("tela_cadastro_loja", "Adicionar logomarca", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_cadastro_loja", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_cadastro_loja", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_cadastro_loja: public Ui_tela_cadastro_loja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CADASTRO_LOJA_H
