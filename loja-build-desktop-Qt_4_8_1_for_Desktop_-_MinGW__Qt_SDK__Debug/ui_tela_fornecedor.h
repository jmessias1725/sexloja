/********************************************************************************
** Form generated from reading UI file 'tela_fornecedor.ui'
**
** Created: Fri 23. Nov 08:30:02 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_FORNECEDOR_H
#define UI_TELA_FORNECEDOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_tela_fornecedor
{
public:
    QGroupBox *groupBox;
    QTableView *tv_historico_compras;
    QFrame *frame;
    QToolButton *btn_editar_fornecedor;
    QToolButton *btn_adicionar_fornecedor;
    QToolButton *btn_remover_fornecedor;
    QGroupBox *gb_dados_fornecedor;
    QLabel *lb_telefone;
    QLabel *lb_email;
    QComboBox *cb_email;
    QLabel *lb_comentario_fornecedor;
    QTextEdit *te_comentario_fornecedor;
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QComboBox *cb_telefone;
    QTableView *tv_comentario_produtos;
    QLabel *lb_comentario_produtos;
    QLabel *lb_razao_social;
    QLineEdit *le_razao_social;
    QLineEdit *le_nome;
    QLabel *lb_nome;
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
    QLabel *lb_ponto_refe;
    QTextEdit *te_ponto_referencia;
    QLabel *lb_uf;
    QLineEdit *le_uf;
    QGraphicsView *gv_estado;
    QLineEdit *le_estado;

    void setupUi(QDialog *tela_fornecedor)
    {
        if (tela_fornecedor->objectName().isEmpty())
            tela_fornecedor->setObjectName(QString::fromUtf8("tela_fornecedor"));
        tela_fornecedor->resize(800, 683);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_fornecedor->setWindowIcon(icon);
        tela_fornecedor->setModal(true);
        groupBox = new QGroupBox(tela_fornecedor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 447, 790, 231));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignCenter);
        tv_historico_compras = new QTableView(groupBox);
        tv_historico_compras->setObjectName(QString::fromUtf8("tv_historico_compras"));
        tv_historico_compras->setGeometry(QRect(5, 20, 780, 205));
        frame = new QFrame(tela_fornecedor);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 50));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.1 #777777, stop:0.9 #525252);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        btn_editar_fornecedor = new QToolButton(frame);
        btn_editar_fornecedor->setObjectName(QString::fromUtf8("btn_editar_fornecedor"));
        btn_editar_fornecedor->setGeometry(QRect(10, 2, 45, 45));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/fornecedor_editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_editar_fornecedor->setIcon(icon1);
        btn_editar_fornecedor->setIconSize(QSize(40, 40));
        btn_editar_fornecedor->setAutoRaise(true);
        btn_adicionar_fornecedor = new QToolButton(frame);
        btn_adicionar_fornecedor->setObjectName(QString::fromUtf8("btn_adicionar_fornecedor"));
        btn_adicionar_fornecedor->setGeometry(QRect(60, 2, 45, 45));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/fornecedor_cadastrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_adicionar_fornecedor->setIcon(icon2);
        btn_adicionar_fornecedor->setIconSize(QSize(40, 40));
        btn_adicionar_fornecedor->setAutoRaise(true);
        btn_remover_fornecedor = new QToolButton(frame);
        btn_remover_fornecedor->setObjectName(QString::fromUtf8("btn_remover_fornecedor"));
        btn_remover_fornecedor->setGeometry(QRect(110, 2, 45, 45));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/fornecedor_remover.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_remover_fornecedor->setIcon(icon3);
        btn_remover_fornecedor->setIconSize(QSize(40, 40));
        btn_remover_fornecedor->setAutoRaise(true);
        gb_dados_fornecedor = new QGroupBox(tela_fornecedor);
        gb_dados_fornecedor->setObjectName(QString::fromUtf8("gb_dados_fornecedor"));
        gb_dados_fornecedor->setGeometry(QRect(5, 50, 790, 195));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        gb_dados_fornecedor->setFont(font1);
        gb_dados_fornecedor->setAlignment(Qt::AlignCenter);
        lb_telefone = new QLabel(gb_dados_fornecedor);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(387, 73, 51, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        lb_telefone->setFont(font2);
        lb_email = new QLabel(gb_dados_fornecedor);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setGeometry(QRect(4, 73, 41, 20));
        lb_email->setFont(font2);
        cb_email = new QComboBox(gb_dados_fornecedor);
        cb_email->setObjectName(QString::fromUtf8("cb_email"));
        cb_email->setGeometry(QRect(44, 73, 339, 20));
        cb_email->setMaximumSize(QSize(450, 20));
        cb_email->setSizeIncrement(QSize(450, 20));
        cb_email->setFont(font2);
        cb_email->setEditable(false);
        cb_email->setMaxCount(60);
        lb_comentario_fornecedor = new QLabel(gb_dados_fornecedor);
        lb_comentario_fornecedor->setObjectName(QString::fromUtf8("lb_comentario_fornecedor"));
        lb_comentario_fornecedor->setGeometry(QRect(10, 100, 162, 20));
        lb_comentario_fornecedor->setFont(font2);
        te_comentario_fornecedor = new QTextEdit(gb_dados_fornecedor);
        te_comentario_fornecedor->setObjectName(QString::fromUtf8("te_comentario_fornecedor"));
        te_comentario_fornecedor->setGeometry(QRect(5, 118, 388, 71));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        te_comentario_fornecedor->setFont(font3);
        te_comentario_fornecedor->setReadOnly(true);
        lb_codigo = new QLabel(gb_dados_fornecedor);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(5, 20, 42, 20));
        lb_codigo->setFont(font3);
        le_codigo = new QLineEdit(gb_dados_fornecedor);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(47, 20, 70, 20));
        le_codigo->setFont(font3);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        cb_telefone = new QComboBox(gb_dados_fornecedor);
        cb_telefone->setObjectName(QString::fromUtf8("cb_telefone"));
        cb_telefone->setGeometry(QRect(440, 73, 217, 22));
        cb_telefone->setMaximumSize(QSize(16777215, 22));
        cb_telefone->setFont(font2);
        cb_telefone->setEditable(false);
        cb_telefone->setMaxVisibleItems(20);
        tv_comentario_produtos = new QTableView(gb_dados_fornecedor);
        tv_comentario_produtos->setObjectName(QString::fromUtf8("tv_comentario_produtos"));
        tv_comentario_produtos->setGeometry(QRect(397, 118, 388, 71));
        tv_comentario_produtos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tv_comentario_produtos->horizontalHeader()->setStretchLastSection(true);
        lb_comentario_produtos = new QLabel(gb_dados_fornecedor);
        lb_comentario_produtos->setObjectName(QString::fromUtf8("lb_comentario_produtos"));
        lb_comentario_produtos->setGeometry(QRect(400, 100, 191, 20));
        lb_comentario_produtos->setFont(font2);
        lb_razao_social = new QLabel(gb_dados_fornecedor);
        lb_razao_social->setObjectName(QString::fromUtf8("lb_razao_social"));
        lb_razao_social->setGeometry(QRect(122, 20, 75, 20));
        lb_razao_social->setMaximumSize(QSize(100, 20));
        lb_razao_social->setFont(font2);
        le_razao_social = new QLineEdit(gb_dados_fornecedor);
        le_razao_social->setObjectName(QString::fromUtf8("le_razao_social"));
        le_razao_social->setGeometry(QRect(197, 20, 588, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_razao_social->sizePolicy().hasHeightForWidth());
        le_razao_social->setSizePolicy(sizePolicy);
        le_razao_social->setMinimumSize(QSize(450, 20));
        le_razao_social->setMaximumSize(QSize(800, 20));
        le_razao_social->setFont(font2);
        le_razao_social->setMaxLength(100);
        le_razao_social->setReadOnly(true);
        le_nome = new QLineEdit(gb_dados_fornecedor);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(39, 47, 588, 20));
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(450, 20));
        le_nome->setMaximumSize(QSize(800, 20));
        le_nome->setFont(font2);
        le_nome->setMaxLength(32767);
        le_nome->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_fornecedor);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 47, 34, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font2);
        lb_cnpj = new QLabel(gb_dados_fornecedor);
        lb_cnpj->setObjectName(QString::fromUtf8("lb_cnpj"));
        lb_cnpj->setGeometry(QRect(632, 47, 32, 20));
        lb_cnpj->setFont(font3);
        le_cnpj = new QLineEdit(gb_dados_fornecedor);
        le_cnpj->setObjectName(QString::fromUtf8("le_cnpj"));
        le_cnpj->setGeometry(QRect(665, 47, 120, 20));
        le_cnpj->setFont(font3);
        le_cnpj->setReadOnly(true);
        gb_endereo = new QGroupBox(tela_fornecedor);
        gb_endereo->setObjectName(QString::fromUtf8("gb_endereo"));
        gb_endereo->setGeometry(QRect(5, 250, 790, 192));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setKerning(false);
        gb_endereo->setFont(font4);
        gb_endereo->setAlignment(Qt::AlignCenter);
        le_cep = new QLineEdit(gb_endereo);
        le_cep->setObjectName(QString::fromUtf8("le_cep"));
        le_cep->setGeometry(QRect(35, 23, 91, 20));
        le_cep->setMaximumSize(QSize(100, 20));
        le_cep->setFont(font2);
        le_cep->setFrame(true);
        le_cep->setCursorPosition(9);
        le_cep->setReadOnly(true);
        lb_cep = new QLabel(gb_endereo);
        lb_cep->setObjectName(QString::fromUtf8("lb_cep"));
        lb_cep->setGeometry(QRect(8, 23, 27, 20));
        lb_cep->setFont(font2);
        lb_rua = new QLabel(gb_endereo);
        lb_rua->setObjectName(QString::fromUtf8("lb_rua"));
        lb_rua->setGeometry(QRect(133, 23, 31, 20));
        lb_rua->setFont(font2);
        le_rua = new QLineEdit(gb_endereo);
        le_rua->setObjectName(QString::fromUtf8("le_rua"));
        le_rua->setGeometry(QRect(160, 23, 621, 20));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        font5.setKerning(false);
        le_rua->setFont(font5);
        le_rua->setMaxLength(100);
        le_rua->setCursorPosition(0);
        le_rua->setReadOnly(true);
        lb_numero = new QLabel(gb_endereo);
        lb_numero->setObjectName(QString::fromUtf8("lb_numero"));
        lb_numero->setGeometry(QRect(7, 50, 51, 20));
        lb_numero->setFont(font2);
        le_numero = new QLineEdit(gb_endereo);
        le_numero->setObjectName(QString::fromUtf8("le_numero"));
        le_numero->setGeometry(QRect(54, 50, 70, 20));
        le_numero->setFont(font5);
        le_numero->setMaxLength(9);
        le_numero->setReadOnly(true);
        lb_bairro = new QLabel(gb_endereo);
        lb_bairro->setObjectName(QString::fromUtf8("lb_bairro"));
        lb_bairro->setGeometry(QRect(132, 50, 46, 20));
        QFont font6;
        font6.setBold(false);
        font6.setWeight(50);
        font6.setKerning(false);
        lb_bairro->setFont(font6);
        le_bairro = new QLineEdit(gb_endereo);
        le_bairro->setObjectName(QString::fromUtf8("le_bairro"));
        le_bairro->setGeometry(QRect(172, 50, 361, 20));
        le_bairro->setFont(font5);
        le_bairro->setMaxLength(70);
        le_bairro->setReadOnly(true);
        lb_cidade = new QLabel(gb_endereo);
        lb_cidade->setObjectName(QString::fromUtf8("lb_cidade"));
        lb_cidade->setGeometry(QRect(538, 50, 46, 20));
        lb_cidade->setFont(font2);
        le_cidade = new QLineEdit(gb_endereo);
        le_cidade->setObjectName(QString::fromUtf8("le_cidade"));
        le_cidade->setGeometry(QRect(581, 50, 201, 20));
        le_cidade->setFont(font5);
        le_cidade->setMaxLength(50);
        le_cidade->setCursorPosition(0);
        le_cidade->setReadOnly(true);
        lb_estado = new QLabel(gb_endereo);
        lb_estado->setObjectName(QString::fromUtf8("lb_estado"));
        lb_estado->setGeometry(QRect(8, 80, 45, 20));
        lb_estado->setFont(font2);
        lb_ponto_refe = new QLabel(gb_endereo);
        lb_ponto_refe->setObjectName(QString::fromUtf8("lb_ponto_refe"));
        lb_ponto_refe->setGeometry(QRect(10, 110, 131, 20));
        lb_ponto_refe->setFont(font2);
        te_ponto_referencia = new QTextEdit(gb_endereo);
        te_ponto_referencia->setObjectName(QString::fromUtf8("te_ponto_referencia"));
        te_ponto_referencia->setGeometry(QRect(5, 132, 780, 54));
        te_ponto_referencia->setFont(font3);
        te_ponto_referencia->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_ponto_referencia->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_ponto_referencia->setReadOnly(true);
        lb_uf = new QLabel(gb_endereo);
        lb_uf->setObjectName(QString::fromUtf8("lb_uf"));
        lb_uf->setGeometry(QRect(210, 80, 20, 20));
        lb_uf->setFont(font3);
        le_uf = new QLineEdit(gb_endereo);
        le_uf->setObjectName(QString::fromUtf8("le_uf"));
        le_uf->setGeometry(QRect(230, 80, 25, 20));
        le_uf->setFont(font3);
        le_uf->setReadOnly(true);
        gv_estado = new QGraphicsView(gb_endereo);
        gv_estado->setObjectName(QString::fromUtf8("gv_estado"));
        gv_estado->setGeometry(QRect(50, 77, 40, 25));
        le_estado = new QLineEdit(gb_endereo);
        le_estado->setObjectName(QString::fromUtf8("le_estado"));
        le_estado->setGeometry(QRect(91, 80, 110, 20));
        le_estado->setFont(font3);
        le_estado->setReadOnly(true);
        lb_rua->raise();
        le_rua->raise();
        lb_numero->raise();
        le_numero->raise();
        lb_bairro->raise();
        le_bairro->raise();
        lb_cidade->raise();
        le_cidade->raise();
        lb_estado->raise();
        lb_ponto_refe->raise();
        te_ponto_referencia->raise();
        le_cep->raise();
        lb_cep->raise();
        lb_uf->raise();
        le_uf->raise();
        gv_estado->raise();
        le_estado->raise();
        QWidget::setTabOrder(btn_editar_fornecedor, btn_adicionar_fornecedor);
        QWidget::setTabOrder(btn_adicionar_fornecedor, btn_remover_fornecedor);
        QWidget::setTabOrder(btn_remover_fornecedor, le_codigo);
        QWidget::setTabOrder(le_codigo, le_razao_social);
        QWidget::setTabOrder(le_razao_social, le_nome);
        QWidget::setTabOrder(le_nome, le_cnpj);
        QWidget::setTabOrder(le_cnpj, cb_email);
        QWidget::setTabOrder(cb_email, cb_telefone);
        QWidget::setTabOrder(cb_telefone, te_comentario_fornecedor);
        QWidget::setTabOrder(te_comentario_fornecedor, tv_comentario_produtos);
        QWidget::setTabOrder(tv_comentario_produtos, le_cep);
        QWidget::setTabOrder(le_cep, le_rua);
        QWidget::setTabOrder(le_rua, le_numero);
        QWidget::setTabOrder(le_numero, le_bairro);
        QWidget::setTabOrder(le_bairro, le_cidade);
        QWidget::setTabOrder(le_cidade, gv_estado);
        QWidget::setTabOrder(gv_estado, le_estado);
        QWidget::setTabOrder(le_estado, le_uf);
        QWidget::setTabOrder(le_uf, te_ponto_referencia);
        QWidget::setTabOrder(te_ponto_referencia, tv_historico_compras);

        retranslateUi(tela_fornecedor);

        QMetaObject::connectSlotsByName(tela_fornecedor);
    } // setupUi

    void retranslateUi(QDialog *tela_fornecedor)
    {
        tela_fornecedor->setWindowTitle(QApplication::translate("tela_fornecedor", "Fornecedor", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_fornecedor", "Hist\303\263rico de Compras", 0, QApplication::UnicodeUTF8));
        btn_editar_fornecedor->setText(QApplication::translate("tela_fornecedor", "Editar Fornecedor", 0, QApplication::UnicodeUTF8));
        btn_adicionar_fornecedor->setText(QApplication::translate("tela_fornecedor", "Adicionar Fornecedor", 0, QApplication::UnicodeUTF8));
        btn_remover_fornecedor->setText(QApplication::translate("tela_fornecedor", "Remover fornecedor", 0, QApplication::UnicodeUTF8));
        gb_dados_fornecedor->setTitle(QApplication::translate("tela_fornecedor", "Dados do Fornecedor", 0, QApplication::UnicodeUTF8));
        lb_telefone->setText(QApplication::translate("tela_fornecedor", "Telefone:", 0, QApplication::UnicodeUTF8));
        lb_email->setText(QApplication::translate("tela_fornecedor", "E-mail:", 0, QApplication::UnicodeUTF8));
        lb_comentario_fornecedor->setText(QApplication::translate("tela_fornecedor", "Coment\303\241rio sobre fornecedor", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_fornecedor", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_fornecedor", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_comentario_produtos->setText(QApplication::translate("tela_fornecedor", "Lista de produtos mais vendidos", 0, QApplication::UnicodeUTF8));
        lb_razao_social->setText(QApplication::translate("tela_fornecedor", "Raz\303\243o Social:", 0, QApplication::UnicodeUTF8));
        le_razao_social->setText(QString());
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        lb_nome->setText(QApplication::translate("tela_fornecedor", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_cnpj->setText(QApplication::translate("tela_fornecedor", "CNPJ:", 0, QApplication::UnicodeUTF8));
        le_cnpj->setInputMask(QApplication::translate("tela_fornecedor", "00.000.000/0000-00; ", 0, QApplication::UnicodeUTF8));
        le_cnpj->setText(QApplication::translate("tela_fornecedor", "../-", 0, QApplication::UnicodeUTF8));
        gb_endereo->setTitle(QApplication::translate("tela_fornecedor", "Endere\303\247o", 0, QApplication::UnicodeUTF8));
        le_cep->setInputMask(QApplication::translate("tela_fornecedor", "00000-000; ", 0, QApplication::UnicodeUTF8));
        le_cep->setText(QApplication::translate("tela_fornecedor", "-", 0, QApplication::UnicodeUTF8));
        lb_cep->setText(QApplication::translate("tela_fornecedor", "CEP:", 0, QApplication::UnicodeUTF8));
        lb_rua->setText(QApplication::translate("tela_fornecedor", "Rua:", 0, QApplication::UnicodeUTF8));
        le_rua->setText(QString());
        lb_numero->setText(QApplication::translate("tela_fornecedor", "N\303\272mero:", 0, QApplication::UnicodeUTF8));
        le_numero->setInputMask(QApplication::translate("tela_fornecedor", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_numero->setText(QString());
        lb_bairro->setText(QApplication::translate("tela_fornecedor", "Bairro:", 0, QApplication::UnicodeUTF8));
        le_bairro->setText(QString());
        lb_cidade->setText(QApplication::translate("tela_fornecedor", "Cidade:", 0, QApplication::UnicodeUTF8));
        le_cidade->setText(QString());
        lb_estado->setText(QApplication::translate("tela_fornecedor", "Estado:", 0, QApplication::UnicodeUTF8));
        lb_ponto_refe->setText(QApplication::translate("tela_fornecedor", "Ponto de refer\303\252ncia:", 0, QApplication::UnicodeUTF8));
        te_ponto_referencia->setHtml(QApplication::translate("tela_fornecedor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Calibri'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_uf->setText(QApplication::translate("tela_fornecedor", "UF:", 0, QApplication::UnicodeUTF8));
        le_uf->setText(QApplication::translate("tela_fornecedor", "--", 0, QApplication::UnicodeUTF8));
        le_estado->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tela_fornecedor: public Ui_tela_fornecedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_FORNECEDOR_H
