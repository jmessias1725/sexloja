/********************************************************************************
** Form generated from reading UI file 'tela_clientes.ui'
**
** Created: Wed 12. Sep 21:33:13 2012
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
    QComboBox *cb_telefone;
    QLabel *lb_numero_cliente;
    QLineEdit *le_numero_cadastro;
    QLabel *lb_nome;
    QLineEdit *le_nome;
    QLabel *lb_cpf;
    QLineEdit *le_cpf;
    QLabel *lb_rg;
    QLineEdit *le_rg;
    QLabel *lb_email;
    QComboBox *cb_email;
    QLabel *lb_comentario;
    QTextEdit *te_comentario;
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
    QLineEdit *le_estado;
    QLabel *lb_ponto_refe;
    QTextEdit *te_ponto_referencia;
    QGroupBox *groupBox;
    QTableView *tv_historico_compras;
    QToolBar *Barra_de_menu;

    void setupUi(QMainWindow *tela_clientes)
    {
        if (tela_clientes->objectName().isEmpty())
            tela_clientes->setObjectName(QString::fromUtf8("tela_clientes"));
        tela_clientes->setWindowModality(Qt::ApplicationModal);
        tela_clientes->resize(800, 708);
        tela_clientes->setMaximumSize(QSize(800, 708));
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
        gb_dados_cliente->setGeometry(QRect(5, 0, 790, 210));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_dados_cliente->setFont(font);
        lb_telefone = new QLabel(gb_dados_cliente);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(590, 53, 51, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_telefone->setFont(font1);
        cb_telefone = new QComboBox(gb_dados_cliente);
        cb_telefone->setObjectName(QString::fromUtf8("cb_telefone"));
        cb_telefone->setGeometry(QRect(644, 53, 131, 20));
        cb_telefone->setMaximumSize(QSize(16777215, 20));
        cb_telefone->setFont(font1);
        cb_telefone->setEditable(false);
        lb_numero_cliente = new QLabel(gb_dados_cliente);
        lb_numero_cliente->setObjectName(QString::fromUtf8("lb_numero_cliente"));
        lb_numero_cliente->setGeometry(QRect(12, 23, 58, 20));
        lb_numero_cliente->setMaximumSize(QSize(120, 20));
        lb_numero_cliente->setFont(font1);
        le_numero_cadastro = new QLineEdit(gb_dados_cliente);
        le_numero_cadastro->setObjectName(QString::fromUtf8("le_numero_cadastro"));
        le_numero_cadastro->setGeometry(QRect(68, 23, 80, 20));
        le_numero_cadastro->setMinimumSize(QSize(80, 20));
        le_numero_cadastro->setMaximumSize(QSize(65, 20));
        le_numero_cadastro->setFont(font1);
        le_numero_cadastro->setMaxLength(10);
        le_numero_cadastro->setCursorPosition(0);
        le_numero_cadastro->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_cliente);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(170, 23, 39, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font1);
        le_nome = new QLineEdit(gb_dados_cliente);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(210, 23, 410, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(410, 20));
        le_nome->setMaximumSize(QSize(410, 20));
        le_nome->setFont(font1);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(true);
        lb_cpf = new QLabel(gb_dados_cliente);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setGeometry(QRect(12, 53, 27, 20));
        lb_cpf->setFont(font1);
        le_cpf = new QLineEdit(gb_dados_cliente);
        le_cpf->setObjectName(QString::fromUtf8("le_cpf"));
        le_cpf->setGeometry(QRect(40, 53, 100, 20));
        sizePolicy.setHeightForWidth(le_cpf->sizePolicy().hasHeightForWidth());
        le_cpf->setSizePolicy(sizePolicy);
        le_cpf->setMinimumSize(QSize(100, 20));
        le_cpf->setMaximumSize(QSize(100, 20));
        le_cpf->setFont(font1);
        le_cpf->setMaxLength(14);
        le_cpf->setReadOnly(true);
        lb_rg = new QLabel(gb_dados_cliente);
        lb_rg->setObjectName(QString::fromUtf8("lb_rg"));
        lb_rg->setGeometry(QRect(644, 23, 20, 20));
        lb_rg->setFont(font1);
        le_rg = new QLineEdit(gb_dados_cliente);
        le_rg->setObjectName(QString::fromUtf8("le_rg"));
        le_rg->setGeometry(QRect(665, 23, 111, 20));
        le_rg->setMinimumSize(QSize(110, 20));
        le_rg->setMaximumSize(QSize(120, 20));
        le_rg->setFont(font1);
        le_rg->setMaxLength(15);
        le_rg->setCursorPosition(0);
        le_rg->setReadOnly(true);
        lb_email = new QLabel(gb_dados_cliente);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setGeometry(QRect(150, 53, 41, 20));
        lb_email->setFont(font1);
        cb_email = new QComboBox(gb_dados_cliente);
        cb_email->setObjectName(QString::fromUtf8("cb_email"));
        cb_email->setGeometry(QRect(190, 53, 391, 20));
        cb_email->setMaximumSize(QSize(450, 20));
        cb_email->setSizeIncrement(QSize(450, 20));
        cb_email->setFont(font1);
        cb_email->setEditable(false);
        cb_email->setMaxCount(60);
        lb_comentario = new QLabel(gb_dados_cliente);
        lb_comentario->setObjectName(QString::fromUtf8("lb_comentario"));
        lb_comentario->setGeometry(QRect(10, 80, 71, 20));
        lb_comentario->setFont(font1);
        te_comentario = new QTextEdit(gb_dados_cliente);
        te_comentario->setObjectName(QString::fromUtf8("te_comentario"));
        te_comentario->setGeometry(QRect(10, 100, 380, 100));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        te_comentario->setFont(font2);
        te_comentario->setReadOnly(true);
        gb_endereo = new QGroupBox(centralwidget);
        gb_endereo->setObjectName(QString::fromUtf8("gb_endereo"));
        gb_endereo->setGeometry(QRect(5, 210, 790, 208));
        gb_endereo->setFont(font);
        le_cep = new QLineEdit(gb_endereo);
        le_cep->setObjectName(QString::fromUtf8("le_cep"));
        le_cep->setGeometry(QRect(50, 23, 71, 20));
        le_cep->setMaximumSize(QSize(100, 20));
        le_cep->setFont(font1);
        le_cep->setReadOnly(true);
        lb_cep = new QLabel(gb_endereo);
        lb_cep->setObjectName(QString::fromUtf8("lb_cep"));
        lb_cep->setGeometry(QRect(20, 23, 27, 20));
        lb_cep->setFont(font1);
        lb_rua = new QLabel(gb_endereo);
        lb_rua->setObjectName(QString::fromUtf8("lb_rua"));
        lb_rua->setGeometry(QRect(150, 23, 31, 20));
        lb_rua->setFont(font1);
        le_rua = new QLineEdit(gb_endereo);
        le_rua->setObjectName(QString::fromUtf8("le_rua"));
        le_rua->setGeometry(QRect(180, 23, 471, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        le_rua->setFont(font3);
        le_rua->setMaxLength(50);
        le_rua->setReadOnly(true);
        lb_numero = new QLabel(gb_endereo);
        lb_numero->setObjectName(QString::fromUtf8("lb_numero"));
        lb_numero->setGeometry(QRect(670, 23, 51, 20));
        lb_numero->setFont(font1);
        le_numero = new QLineEdit(gb_endereo);
        le_numero->setObjectName(QString::fromUtf8("le_numero"));
        le_numero->setGeometry(QRect(720, 23, 51, 20));
        le_numero->setFont(font3);
        le_numero->setMaxLength(5);
        le_numero->setReadOnly(true);
        lb_bairro = new QLabel(gb_endereo);
        lb_bairro->setObjectName(QString::fromUtf8("lb_bairro"));
        lb_bairro->setGeometry(QRect(20, 53, 46, 13));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(false);
        lb_bairro->setFont(font4);
        le_bairro = new QLineEdit(gb_endereo);
        le_bairro->setObjectName(QString::fromUtf8("le_bairro"));
        le_bairro->setGeometry(QRect(65, 53, 201, 20));
        le_bairro->setFont(font3);
        le_bairro->setMaxLength(40);
        le_bairro->setReadOnly(true);
        lb_cidade = new QLabel(gb_endereo);
        lb_cidade->setObjectName(QString::fromUtf8("lb_cidade"));
        lb_cidade->setGeometry(QRect(285, 53, 46, 21));
        lb_cidade->setFont(font1);
        le_cidade = new QLineEdit(gb_endereo);
        le_cidade->setObjectName(QString::fromUtf8("le_cidade"));
        le_cidade->setGeometry(QRect(330, 53, 201, 20));
        le_cidade->setFont(font3);
        le_cidade->setMaxLength(40);
        le_cidade->setCursorPosition(0);
        le_cidade->setReadOnly(true);
        lb_estado = new QLabel(gb_endereo);
        lb_estado->setObjectName(QString::fromUtf8("lb_estado"));
        lb_estado->setGeometry(QRect(555, 53, 46, 20));
        lb_estado->setFont(font1);
        le_estado = new QLineEdit(gb_endereo);
        le_estado->setObjectName(QString::fromUtf8("le_estado"));
        le_estado->setGeometry(QRect(600, 53, 171, 20));
        le_estado->setFont(font3);
        le_estado->setReadOnly(true);
        lb_ponto_refe = new QLabel(gb_endereo);
        lb_ponto_refe->setObjectName(QString::fromUtf8("lb_ponto_refe"));
        lb_ponto_refe->setGeometry(QRect(10, 78, 131, 20));
        lb_ponto_refe->setFont(font1);
        te_ponto_referencia = new QTextEdit(gb_endereo);
        te_ponto_referencia->setObjectName(QString::fromUtf8("te_ponto_referencia"));
        te_ponto_referencia->setGeometry(QRect(10, 100, 770, 98));
        te_ponto_referencia->setFont(font2);
        te_ponto_referencia->setReadOnly(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 420, 790, 231));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        groupBox->setFont(font5);
        tv_historico_compras = new QTableView(groupBox);
        tv_historico_compras->setObjectName(QString::fromUtf8("tv_historico_compras"));
        tv_historico_compras->setGeometry(QRect(10, 20, 770, 201));
        tela_clientes->setCentralWidget(centralwidget);
        Barra_de_menu = new QToolBar(tela_clientes);
        Barra_de_menu->setObjectName(QString::fromUtf8("Barra_de_menu"));
        Barra_de_menu->setMovable(false);
        Barra_de_menu->setIconSize(QSize(40, 40));
        tela_clientes->addToolBar(Qt::TopToolBarArea, Barra_de_menu);
        QWidget::setTabOrder(le_numero_cadastro, le_nome);
        QWidget::setTabOrder(le_nome, le_rg);
        QWidget::setTabOrder(le_rg, le_cpf);
        QWidget::setTabOrder(le_cpf, cb_email);
        QWidget::setTabOrder(cb_email, cb_telefone);
        QWidget::setTabOrder(cb_telefone, te_comentario);
        QWidget::setTabOrder(te_comentario, le_cep);
        QWidget::setTabOrder(le_cep, le_rua);
        QWidget::setTabOrder(le_rua, le_numero);
        QWidget::setTabOrder(le_numero, le_bairro);
        QWidget::setTabOrder(le_bairro, le_cidade);
        QWidget::setTabOrder(le_cidade, le_estado);
        QWidget::setTabOrder(le_estado, te_ponto_referencia);
        QWidget::setTabOrder(te_ponto_referencia, tv_historico_compras);

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
        lb_numero_cliente->setText(QApplication::translate("tela_clientes", "Cadastro:", 0, QApplication::UnicodeUTF8));
        le_numero_cadastro->setText(QString());
        lb_nome->setText(QApplication::translate("tela_clientes", "Nome:", 0, QApplication::UnicodeUTF8));
        le_nome->setText(QString());
        lb_cpf->setText(QApplication::translate("tela_clientes", "CPF:", 0, QApplication::UnicodeUTF8));
        le_cpf->setText(QString());
        lb_rg->setText(QApplication::translate("tela_clientes", "RG:", 0, QApplication::UnicodeUTF8));
        le_rg->setText(QString());
        lb_email->setText(QApplication::translate("tela_clientes", "E-mail:", 0, QApplication::UnicodeUTF8));
        lb_comentario->setText(QApplication::translate("tela_clientes", "Coment\303\241rio", 0, QApplication::UnicodeUTF8));
        gb_endereo->setTitle(QApplication::translate("tela_clientes", "Endere\303\247o", 0, QApplication::UnicodeUTF8));
        le_cep->setText(QString());
        lb_cep->setText(QApplication::translate("tela_clientes", "CEP:", 0, QApplication::UnicodeUTF8));
        lb_rua->setText(QApplication::translate("tela_clientes", "Rua:", 0, QApplication::UnicodeUTF8));
        le_rua->setText(QString());
        lb_numero->setText(QApplication::translate("tela_clientes", "N\303\272mero:", 0, QApplication::UnicodeUTF8));
        le_numero->setText(QString());
        lb_bairro->setText(QApplication::translate("tela_clientes", "Bairro:", 0, QApplication::UnicodeUTF8));
        le_bairro->setText(QString());
        lb_cidade->setText(QApplication::translate("tela_clientes", "Cidade:", 0, QApplication::UnicodeUTF8));
        le_cidade->setText(QString());
        lb_estado->setText(QApplication::translate("tela_clientes", "Estado:", 0, QApplication::UnicodeUTF8));
        le_estado->setText(QString());
        lb_ponto_refe->setText(QApplication::translate("tela_clientes", "Ponto de refer\303\252ncia:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_clientes", "Hist\303\263rico de Compras", 0, QApplication::UnicodeUTF8));
        Barra_de_menu->setWindowTitle(QApplication::translate("tela_clientes", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_clientes: public Ui_tela_clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CLIENTES_H
