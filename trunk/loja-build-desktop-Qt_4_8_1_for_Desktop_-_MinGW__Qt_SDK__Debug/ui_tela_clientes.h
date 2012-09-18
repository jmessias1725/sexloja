/********************************************************************************
** Form generated from reading UI file 'tela_clientes.ui'
**
** Created: Tue 18. Sep 11:34:08 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CLIENTES_H
#define UI_TELA_CLIENTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_clientes
{
public:
    QAction *actionEditar_Contato;
    QAction *actionAdicionar_Contato;
    QWidget *centralwidget;
    QGroupBox *gb_dados_cliente;
    QLabel *lb_telefone;
    QLabel *lb_email;
    QComboBox *cb_email;
    QLabel *lb_comentario_clientes;
    QTextEdit *te_comentario_cliente;
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QLineEdit *le_nome;
    QLineEdit *le_cpf;
    QLabel *lb_nome;
    QLabel *lb_rg;
    QLabel *lb_cpf;
    QLineEdit *le_rg;
    QComboBox *cb_telefone;
    QTableView *tv_comentario_produtos;
    QLabel *lb_comentario_produtos;
    QGroupBox *groupBox;
    QTableView *tv_historico_compras;
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
    QToolBar *Barra_de_menu;

    void setupUi(QMainWindow *tela_clientes)
    {
        if (tela_clientes->objectName().isEmpty())
            tela_clientes->setObjectName(QString::fromUtf8("tela_clientes"));
        tela_clientes->setWindowModality(Qt::ApplicationModal);
        tela_clientes->resize(800, 670);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tela_clientes->sizePolicy().hasHeightForWidth());
        tela_clientes->setSizePolicy(sizePolicy);
        tela_clientes->setMaximumSize(QSize(800, 900));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_clientes->setWindowIcon(icon);
        actionEditar_Contato = new QAction(tela_clientes);
        actionEditar_Contato->setObjectName(QString::fromUtf8("actionEditar_Contato"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/editar_cliente.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditar_Contato->setIcon(icon1);
        actionAdicionar_Contato = new QAction(tela_clientes);
        actionAdicionar_Contato->setObjectName(QString::fromUtf8("actionAdicionar_Contato"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/adiciona_clientes.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdicionar_Contato->setIcon(icon2);
        centralwidget = new QWidget(tela_clientes);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gb_dados_cliente = new QGroupBox(centralwidget);
        gb_dados_cliente->setObjectName(QString::fromUtf8("gb_dados_cliente"));
        gb_dados_cliente->setGeometry(QRect(5, 0, 790, 171));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_dados_cliente->setFont(font);
        lb_telefone = new QLabel(gb_dados_cliente);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(515, 50, 51, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_telefone->setFont(font1);
        lb_email = new QLabel(gb_dados_cliente);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setGeometry(QRect(132, 50, 41, 20));
        lb_email->setFont(font1);
        cb_email = new QComboBox(gb_dados_cliente);
        cb_email->setObjectName(QString::fromUtf8("cb_email"));
        cb_email->setGeometry(QRect(172, 50, 339, 20));
        cb_email->setMaximumSize(QSize(450, 20));
        cb_email->setSizeIncrement(QSize(450, 20));
        cb_email->setFont(font1);
        cb_email->setEditable(false);
        cb_email->setMaxCount(60);
        lb_comentario_clientes = new QLabel(gb_dados_cliente);
        lb_comentario_clientes->setObjectName(QString::fromUtf8("lb_comentario_clientes"));
        lb_comentario_clientes->setGeometry(QRect(10, 75, 139, 20));
        lb_comentario_clientes->setFont(font1);
        te_comentario_cliente = new QTextEdit(gb_dados_cliente);
        te_comentario_cliente->setObjectName(QString::fromUtf8("te_comentario_cliente"));
        te_comentario_cliente->setGeometry(QRect(5, 93, 388, 71));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        te_comentario_cliente->setFont(font2);
        te_comentario_cliente->setReadOnly(true);
        lb_codigo = new QLabel(gb_dados_cliente);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(11, 20, 46, 20));
        lb_codigo->setFont(font2);
        le_codigo = new QLineEdit(gb_dados_cliente);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(54, 20, 70, 20));
        le_codigo->setFont(font2);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        le_nome = new QLineEdit(gb_dados_cliente);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(169, 20, 425, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy1);
        le_nome->setMinimumSize(QSize(410, 20));
        le_nome->setMaximumSize(QSize(500, 20));
        le_nome->setFont(font1);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(true);
        le_cpf = new QLineEdit(gb_dados_cliente);
        le_cpf->setObjectName(QString::fromUtf8("le_cpf"));
        le_cpf->setGeometry(QRect(33, 50, 95, 20));
        sizePolicy1.setHeightForWidth(le_cpf->sizePolicy().hasHeightForWidth());
        le_cpf->setSizePolicy(sizePolicy1);
        le_cpf->setMinimumSize(QSize(95, 20));
        le_cpf->setMaximumSize(QSize(95, 20));
        le_cpf->setFont(font1);
        le_cpf->setMaxLength(14);
        le_cpf->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_cliente);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(133, 20, 35, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font1);
        lb_rg = new QLabel(gb_dados_cliente);
        lb_rg->setObjectName(QString::fromUtf8("lb_rg"));
        lb_rg->setGeometry(QRect(607, 20, 22, 20));
        lb_rg->setFont(font1);
        lb_cpf = new QLabel(gb_dados_cliente);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setGeometry(QRect(5, 50, 29, 20));
        lb_cpf->setFont(font1);
        le_rg = new QLineEdit(gb_dados_cliente);
        le_rg->setObjectName(QString::fromUtf8("le_rg"));
        le_rg->setGeometry(QRect(629, 20, 150, 20));
        le_rg->setMinimumSize(QSize(120, 20));
        le_rg->setMaximumSize(QSize(200, 20));
        le_rg->setFont(font1);
        le_rg->setMaxLength(20);
        le_rg->setCursorPosition(20);
        le_rg->setReadOnly(true);
        cb_telefone = new QComboBox(gb_dados_cliente);
        cb_telefone->setObjectName(QString::fromUtf8("cb_telefone"));
        cb_telefone->setGeometry(QRect(568, 50, 217, 22));
        cb_telefone->setMaximumSize(QSize(16777215, 22));
        cb_telefone->setFont(font1);
        cb_telefone->setEditable(false);
        cb_telefone->setMaxVisibleItems(20);
        tv_comentario_produtos = new QTableView(gb_dados_cliente);
        tv_comentario_produtos->setObjectName(QString::fromUtf8("tv_comentario_produtos"));
        tv_comentario_produtos->setGeometry(QRect(397, 93, 388, 71));
        tv_comentario_produtos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tv_comentario_produtos->horizontalHeader()->setStretchLastSection(true);
        lb_comentario_produtos = new QLabel(gb_dados_cliente);
        lb_comentario_produtos->setObjectName(QString::fromUtf8("lb_comentario_produtos"));
        lb_comentario_produtos->setGeometry(QRect(400, 75, 191, 20));
        lb_comentario_produtos->setFont(font1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 385, 790, 231));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        groupBox->setFont(font3);
        tv_historico_compras = new QTableView(groupBox);
        tv_historico_compras->setObjectName(QString::fromUtf8("tv_historico_compras"));
        tv_historico_compras->setGeometry(QRect(10, 20, 770, 201));
        gb_endereo = new QGroupBox(centralwidget);
        gb_endereo->setObjectName(QString::fromUtf8("gb_endereo"));
        gb_endereo->setGeometry(QRect(5, 175, 790, 192));
        gb_endereo->setFont(font);
        le_cep = new QLineEdit(gb_endereo);
        le_cep->setObjectName(QString::fromUtf8("le_cep"));
        le_cep->setGeometry(QRect(35, 23, 91, 20));
        le_cep->setMaximumSize(QSize(100, 20));
        le_cep->setFont(font1);
        le_cep->setFrame(true);
        le_cep->setCursorPosition(9);
        le_cep->setReadOnly(true);
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
        le_rua->setGeometry(QRect(160, 23, 621, 20));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(false);
        le_rua->setFont(font4);
        le_rua->setMaxLength(100);
        le_rua->setCursorPosition(0);
        le_rua->setReadOnly(true);
        lb_numero = new QLabel(gb_endereo);
        lb_numero->setObjectName(QString::fromUtf8("lb_numero"));
        lb_numero->setGeometry(QRect(7, 50, 51, 20));
        lb_numero->setFont(font1);
        le_numero = new QLineEdit(gb_endereo);
        le_numero->setObjectName(QString::fromUtf8("le_numero"));
        le_numero->setGeometry(QRect(54, 50, 70, 20));
        le_numero->setFont(font4);
        le_numero->setMaxLength(9);
        le_numero->setReadOnly(true);
        lb_bairro = new QLabel(gb_endereo);
        lb_bairro->setObjectName(QString::fromUtf8("lb_bairro"));
        lb_bairro->setGeometry(QRect(132, 50, 46, 20));
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        font5.setKerning(false);
        lb_bairro->setFont(font5);
        le_bairro = new QLineEdit(gb_endereo);
        le_bairro->setObjectName(QString::fromUtf8("le_bairro"));
        le_bairro->setGeometry(QRect(172, 50, 361, 20));
        le_bairro->setFont(font4);
        le_bairro->setMaxLength(70);
        le_bairro->setReadOnly(true);
        lb_cidade = new QLabel(gb_endereo);
        lb_cidade->setObjectName(QString::fromUtf8("lb_cidade"));
        lb_cidade->setGeometry(QRect(538, 50, 46, 20));
        lb_cidade->setFont(font1);
        le_cidade = new QLineEdit(gb_endereo);
        le_cidade->setObjectName(QString::fromUtf8("le_cidade"));
        le_cidade->setGeometry(QRect(581, 50, 201, 20));
        le_cidade->setFont(font4);
        le_cidade->setMaxLength(50);
        le_cidade->setCursorPosition(0);
        le_cidade->setReadOnly(true);
        lb_estado = new QLabel(gb_endereo);
        lb_estado->setObjectName(QString::fromUtf8("lb_estado"));
        lb_estado->setGeometry(QRect(8, 80, 45, 20));
        lb_estado->setFont(font1);
        lb_ponto_refe = new QLabel(gb_endereo);
        lb_ponto_refe->setObjectName(QString::fromUtf8("lb_ponto_refe"));
        lb_ponto_refe->setGeometry(QRect(10, 110, 131, 20));
        lb_ponto_refe->setFont(font1);
        te_ponto_referencia = new QTextEdit(gb_endereo);
        te_ponto_referencia->setObjectName(QString::fromUtf8("te_ponto_referencia"));
        te_ponto_referencia->setGeometry(QRect(10, 132, 770, 51));
        te_ponto_referencia->setFont(font2);
        te_ponto_referencia->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        te_ponto_referencia->setReadOnly(true);
        lb_uf = new QLabel(gb_endereo);
        lb_uf->setObjectName(QString::fromUtf8("lb_uf"));
        lb_uf->setGeometry(QRect(210, 80, 20, 20));
        lb_uf->setFont(font2);
        le_uf = new QLineEdit(gb_endereo);
        le_uf->setObjectName(QString::fromUtf8("le_uf"));
        le_uf->setGeometry(QRect(230, 80, 25, 20));
        le_uf->setFont(font2);
        le_uf->setReadOnly(true);
        gv_estado = new QGraphicsView(gb_endereo);
        gv_estado->setObjectName(QString::fromUtf8("gv_estado"));
        gv_estado->setGeometry(QRect(50, 77, 40, 25));
        le_estado = new QLineEdit(gb_endereo);
        le_estado->setObjectName(QString::fromUtf8("le_estado"));
        le_estado->setGeometry(QRect(91, 80, 110, 20));
        le_estado->setFont(font2);
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
        tela_clientes->setCentralWidget(centralwidget);
        Barra_de_menu = new QToolBar(tela_clientes);
        Barra_de_menu->setObjectName(QString::fromUtf8("Barra_de_menu"));
        Barra_de_menu->setMovable(false);
        Barra_de_menu->setIconSize(QSize(40, 40));
        tela_clientes->addToolBar(Qt::TopToolBarArea, Barra_de_menu);
        QWidget::setTabOrder(cb_email, te_comentario_cliente);
        QWidget::setTabOrder(te_comentario_cliente, tv_historico_compras);

        Barra_de_menu->addSeparator();
        Barra_de_menu->addAction(actionEditar_Contato);
        Barra_de_menu->addAction(actionAdicionar_Contato);

        retranslateUi(tela_clientes);

        QMetaObject::connectSlotsByName(tela_clientes);
    } // setupUi

    void retranslateUi(QMainWindow *tela_clientes)
    {
        tela_clientes->setWindowTitle(QApplication::translate("tela_clientes", "Clientes", 0, QApplication::UnicodeUTF8));
        actionEditar_Contato->setText(QApplication::translate("tela_clientes", "Editar Contato", 0, QApplication::UnicodeUTF8));
        actionAdicionar_Contato->setText(QApplication::translate("tela_clientes", "Adicionar Contato", 0, QApplication::UnicodeUTF8));
        gb_dados_cliente->setTitle(QApplication::translate("tela_clientes", "Dados do Cliente", 0, QApplication::UnicodeUTF8));
        lb_telefone->setText(QApplication::translate("tela_clientes", "Telefone:", 0, QApplication::UnicodeUTF8));
        lb_email->setText(QApplication::translate("tela_clientes", "E-mail:", 0, QApplication::UnicodeUTF8));
        lb_comentario_clientes->setText(QApplication::translate("tela_clientes", "Coment\303\241rio sobre cliente", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_clientes", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_clientes", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        le_nome->setText(QString());
        le_cpf->setInputMask(QApplication::translate("tela_clientes", "000.000.000-00; ", 0, QApplication::UnicodeUTF8));
        le_cpf->setText(QApplication::translate("tela_clientes", "..-", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_clientes", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_rg->setText(QApplication::translate("tela_clientes", "RG:", 0, QApplication::UnicodeUTF8));
        lb_cpf->setText(QApplication::translate("tela_clientes", "CPF:", 0, QApplication::UnicodeUTF8));
        le_rg->setInputMask(QApplication::translate("tela_clientes", "00000000000000000000; ", 0, QApplication::UnicodeUTF8));
        le_rg->setText(QString());
        lb_comentario_produtos->setText(QApplication::translate("tela_clientes", "Lista de produtos mais comprados", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_clientes", "Hist\303\263rico de Compras", 0, QApplication::UnicodeUTF8));
        gb_endereo->setTitle(QApplication::translate("tela_clientes", "Endere\303\247o", 0, QApplication::UnicodeUTF8));
        le_cep->setInputMask(QApplication::translate("tela_clientes", "00000-000; ", 0, QApplication::UnicodeUTF8));
        le_cep->setText(QApplication::translate("tela_clientes", "-", 0, QApplication::UnicodeUTF8));
        lb_cep->setText(QApplication::translate("tela_clientes", "CEP:", 0, QApplication::UnicodeUTF8));
        lb_rua->setText(QApplication::translate("tela_clientes", "Rua:", 0, QApplication::UnicodeUTF8));
        le_rua->setText(QString());
        lb_numero->setText(QApplication::translate("tela_clientes", "N\303\272mero:", 0, QApplication::UnicodeUTF8));
        le_numero->setInputMask(QApplication::translate("tela_clientes", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_numero->setText(QString());
        lb_bairro->setText(QApplication::translate("tela_clientes", "Bairro:", 0, QApplication::UnicodeUTF8));
        le_bairro->setText(QString());
        lb_cidade->setText(QApplication::translate("tela_clientes", "Cidade:", 0, QApplication::UnicodeUTF8));
        le_cidade->setText(QString());
        lb_estado->setText(QApplication::translate("tela_clientes", "Estado:", 0, QApplication::UnicodeUTF8));
        lb_ponto_refe->setText(QApplication::translate("tela_clientes", "Ponto de refer\303\252ncia:", 0, QApplication::UnicodeUTF8));
        te_ponto_referencia->setHtml(QApplication::translate("tela_clientes", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Calibri'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_uf->setText(QApplication::translate("tela_clientes", "UF:", 0, QApplication::UnicodeUTF8));
        le_uf->setText(QApplication::translate("tela_clientes", "--", 0, QApplication::UnicodeUTF8));
        le_estado->setText(QString());
        Barra_de_menu->setWindowTitle(QApplication::translate("tela_clientes", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_clientes: public Ui_tela_clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CLIENTES_H
