/********************************************************************************
** Form generated from reading UI file 'tela_cadastro_cliente.ui'
**
** Created: Wed 29. Aug 15:36:56 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CADASTRO_CLIENTE_H
#define UI_TELA_CADASTRO_CLIENTE_H

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
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_cadastro_cliente
{
public:
    QWidget *centralwidget;
    QGroupBox *gb_dados_cliente;
    QLabel *lb_telefone;
    QComboBox *cb_telefone;
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
    QToolButton *tb_mais_email;
    QToolButton *tb_menos_email;
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
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;

    void setupUi(QMainWindow *tela_cadastro_cliente)
    {
        if (tela_cadastro_cliente->objectName().isEmpty())
            tela_cadastro_cliente->setObjectName(QString::fromUtf8("tela_cadastro_cliente"));
        tela_cadastro_cliente->setWindowModality(Qt::ApplicationModal);
        tela_cadastro_cliente->resize(800, 465);
        tela_cadastro_cliente->setMaximumSize(QSize(800, 465));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_cadastro_cliente->setWindowIcon(icon);
        centralwidget = new QWidget(tela_cadastro_cliente);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gb_dados_cliente = new QGroupBox(centralwidget);
        gb_dados_cliente->setObjectName(QString::fromUtf8("gb_dados_cliente"));
        gb_dados_cliente->setGeometry(QRect(5, 5, 790, 210));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_dados_cliente->setFont(font);
        lb_telefone = new QLabel(gb_dados_cliente);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(520, 53, 50, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_telefone->setFont(font1);
        cb_telefone = new QComboBox(gb_dados_cliente);
        cb_telefone->setObjectName(QString::fromUtf8("cb_telefone"));
        cb_telefone->setGeometry(QRect(574, 53, 130, 20));
        cb_telefone->setMaximumSize(QSize(16777215, 20));
        cb_telefone->setFont(font1);
        cb_telefone->setEditable(false);
        lb_nome = new QLabel(gb_dados_cliente);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(13, 23, 39, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font1);
        le_nome = new QLineEdit(gb_dados_cliente);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(51, 23, 410, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(410, 20));
        le_nome->setMaximumSize(QSize(500, 20));
        le_nome->setFont(font1);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(false);
        lb_cpf = new QLabel(gb_dados_cliente);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setGeometry(QRect(647, 23, 27, 20));
        lb_cpf->setFont(font1);
        le_cpf = new QLineEdit(gb_dados_cliente);
        le_cpf->setObjectName(QString::fromUtf8("le_cpf"));
        le_cpf->setGeometry(QRect(675, 23, 100, 20));
        sizePolicy.setHeightForWidth(le_cpf->sizePolicy().hasHeightForWidth());
        le_cpf->setSizePolicy(sizePolicy);
        le_cpf->setMinimumSize(QSize(100, 20));
        le_cpf->setMaximumSize(QSize(100, 20));
        le_cpf->setFont(font1);
        le_cpf->setMaxLength(14);
        le_cpf->setReadOnly(false);
        lb_rg = new QLabel(gb_dados_cliente);
        lb_rg->setObjectName(QString::fromUtf8("lb_rg"));
        lb_rg->setGeometry(QRect(487, 23, 20, 20));
        lb_rg->setFont(font1);
        le_rg = new QLineEdit(gb_dados_cliente);
        le_rg->setObjectName(QString::fromUtf8("le_rg"));
        le_rg->setGeometry(QRect(508, 23, 120, 20));
        le_rg->setMinimumSize(QSize(120, 20));
        le_rg->setMaximumSize(QSize(120, 20));
        le_rg->setFont(font1);
        le_rg->setMaxLength(15);
        le_rg->setCursorPosition(0);
        le_rg->setReadOnly(false);
        lb_email = new QLabel(gb_dados_cliente);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setGeometry(QRect(14, 53, 40, 20));
        lb_email->setFont(font1);
        cb_email = new QComboBox(gb_dados_cliente);
        cb_email->setObjectName(QString::fromUtf8("cb_email"));
        cb_email->setGeometry(QRect(54, 53, 390, 20));
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
        te_comentario->setGeometry(QRect(10, 100, 770, 100));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        te_comentario->setFont(font2);
        te_comentario->setReadOnly(false);
        tb_mais_email = new QToolButton(gb_dados_cliente);
        tb_mais_email->setObjectName(QString::fromUtf8("tb_mais_email"));
        tb_mais_email->setGeometry(QRect(450, 49, 25, 15));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/mais.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_mais_email->setIcon(icon1);
        tb_mais_email->setIconSize(QSize(12, 12));
        tb_mais_email->setAutoRaise(true);
        tb_mais_email->setArrowType(Qt::NoArrow);
        tb_menos_email = new QToolButton(gb_dados_cliente);
        tb_menos_email->setObjectName(QString::fromUtf8("tb_menos_email"));
        tb_menos_email->setGeometry(QRect(450, 63, 25, 15));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/menos.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_menos_email->setIcon(icon2);
        tb_menos_email->setIconSize(QSize(12, 12));
        tb_menos_email->setAutoRaise(true);
        gb_endereo = new QGroupBox(centralwidget);
        gb_endereo->setObjectName(QString::fromUtf8("gb_endereo"));
        gb_endereo->setGeometry(QRect(5, 220, 790, 208));
        gb_endereo->setFont(font);
        le_cep = new QLineEdit(gb_endereo);
        le_cep->setObjectName(QString::fromUtf8("le_cep"));
        le_cep->setGeometry(QRect(50, 23, 91, 20));
        le_cep->setMaximumSize(QSize(100, 20));
        le_cep->setFont(font1);
        le_cep->setReadOnly(false);
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
        le_rua->setReadOnly(false);
        lb_numero = new QLabel(gb_endereo);
        lb_numero->setObjectName(QString::fromUtf8("lb_numero"));
        lb_numero->setGeometry(QRect(670, 23, 51, 20));
        lb_numero->setFont(font1);
        le_numero = new QLineEdit(gb_endereo);
        le_numero->setObjectName(QString::fromUtf8("le_numero"));
        le_numero->setGeometry(QRect(720, 23, 51, 20));
        le_numero->setFont(font3);
        le_numero->setMaxLength(5);
        le_numero->setReadOnly(false);
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
        le_bairro->setReadOnly(false);
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
        le_cidade->setReadOnly(false);
        lb_estado = new QLabel(gb_endereo);
        lb_estado->setObjectName(QString::fromUtf8("lb_estado"));
        lb_estado->setGeometry(QRect(555, 53, 46, 20));
        lb_estado->setFont(font1);
        le_estado = new QLineEdit(gb_endereo);
        le_estado->setObjectName(QString::fromUtf8("le_estado"));
        le_estado->setGeometry(QRect(600, 53, 171, 20));
        le_estado->setFont(font3);
        le_estado->setReadOnly(false);
        lb_ponto_refe = new QLabel(gb_endereo);
        lb_ponto_refe->setObjectName(QString::fromUtf8("lb_ponto_refe"));
        lb_ponto_refe->setGeometry(QRect(10, 78, 131, 20));
        lb_ponto_refe->setFont(font1);
        te_ponto_referencia = new QTextEdit(gb_endereo);
        te_ponto_referencia->setObjectName(QString::fromUtf8("te_ponto_referencia"));
        te_ponto_referencia->setGeometry(QRect(10, 100, 770, 98));
        te_ponto_referencia->setFont(font2);
        te_ponto_referencia->setReadOnly(false);
        lb_rua->raise();
        le_rua->raise();
        lb_numero->raise();
        le_numero->raise();
        lb_bairro->raise();
        le_bairro->raise();
        lb_cidade->raise();
        le_cidade->raise();
        lb_estado->raise();
        le_estado->raise();
        lb_ponto_refe->raise();
        te_ponto_referencia->raise();
        le_cep->raise();
        lb_cep->raise();
        btn_confirmar = new QPushButton(centralwidget);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(305, 435, 90, 24));
        btn_confirmar->setMinimumSize(QSize(0, 24));
        btn_confirmar->setMaximumSize(QSize(90, 24));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        btn_confirmar->setFont(font5);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon3);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(centralwidget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(405, 435, 90, 24));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        btn_cancelar->setFont(font5);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon4);
        btn_cancelar->setIconSize(QSize(20, 200));
        tela_cadastro_cliente->setCentralWidget(centralwidget);

        retranslateUi(tela_cadastro_cliente);

        QMetaObject::connectSlotsByName(tela_cadastro_cliente);
    } // setupUi

    void retranslateUi(QMainWindow *tela_cadastro_cliente)
    {
        tela_cadastro_cliente->setWindowTitle(QApplication::translate("tela_cadastro_cliente", "Cadastrar novo Cliente", 0, QApplication::UnicodeUTF8));
        gb_dados_cliente->setTitle(QApplication::translate("tela_cadastro_cliente", "Dados do Cliente", 0, QApplication::UnicodeUTF8));
        lb_telefone->setText(QApplication::translate("tela_cadastro_cliente", "Telefone:", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_cadastro_cliente", "Nome:", 0, QApplication::UnicodeUTF8));
        le_nome->setText(QString());
        lb_cpf->setText(QApplication::translate("tela_cadastro_cliente", "CPF:", 0, QApplication::UnicodeUTF8));
        le_cpf->setInputMask(QApplication::translate("tela_cadastro_cliente", "000.000.000-00; ", 0, QApplication::UnicodeUTF8));
        le_cpf->setText(QApplication::translate("tela_cadastro_cliente", "..-", 0, QApplication::UnicodeUTF8));
        lb_rg->setText(QApplication::translate("tela_cadastro_cliente", "RG:", 0, QApplication::UnicodeUTF8));
        le_rg->setText(QString());
        lb_email->setText(QApplication::translate("tela_cadastro_cliente", "E-mail:", 0, QApplication::UnicodeUTF8));
        lb_comentario->setText(QApplication::translate("tela_cadastro_cliente", "Coment\303\241rio", 0, QApplication::UnicodeUTF8));
        tb_mais_email->setText(QApplication::translate("tela_cadastro_cliente", "...", 0, QApplication::UnicodeUTF8));
        tb_menos_email->setText(QApplication::translate("tela_cadastro_cliente", "...", 0, QApplication::UnicodeUTF8));
        gb_endereo->setTitle(QApplication::translate("tela_cadastro_cliente", "Endere\303\247o", 0, QApplication::UnicodeUTF8));
        le_cep->setInputMask(QApplication::translate("tela_cadastro_cliente", "000000-00; ", 0, QApplication::UnicodeUTF8));
        le_cep->setText(QApplication::translate("tela_cadastro_cliente", "-", 0, QApplication::UnicodeUTF8));
        lb_cep->setText(QApplication::translate("tela_cadastro_cliente", "CEP:", 0, QApplication::UnicodeUTF8));
        lb_rua->setText(QApplication::translate("tela_cadastro_cliente", "Rua:", 0, QApplication::UnicodeUTF8));
        le_rua->setText(QString());
        lb_numero->setText(QApplication::translate("tela_cadastro_cliente", "N\303\272mero:", 0, QApplication::UnicodeUTF8));
        le_numero->setText(QString());
        lb_bairro->setText(QApplication::translate("tela_cadastro_cliente", "Bairro:", 0, QApplication::UnicodeUTF8));
        le_bairro->setText(QString());
        lb_cidade->setText(QApplication::translate("tela_cadastro_cliente", "Cidade:", 0, QApplication::UnicodeUTF8));
        le_cidade->setText(QString());
        lb_estado->setText(QApplication::translate("tela_cadastro_cliente", "Estado:", 0, QApplication::UnicodeUTF8));
        le_estado->setText(QString());
        lb_ponto_refe->setText(QApplication::translate("tela_cadastro_cliente", "Ponto de refer\303\252ncia:", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_cadastro_cliente", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_cadastro_cliente", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_cadastro_cliente: public Ui_tela_cadastro_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CADASTRO_CLIENTE_H
