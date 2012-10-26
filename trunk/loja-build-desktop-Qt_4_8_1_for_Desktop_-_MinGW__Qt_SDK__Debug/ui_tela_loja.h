/********************************************************************************
** Form generated from reading UI file 'tela_loja.ui'
**
** Created: Thu 25. Oct 22:19:09 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_LOJA_H
#define UI_TELA_LOJA_H

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
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_tela_loja
{
public:
    QFrame *frame;
    QToolButton *btn_editar_loja;
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
    QGraphicsView *gv_estado;
    QLineEdit *le_estado;
    QGroupBox *gb_dados_loja;
    QLabel *lb_telefone;
    QComboBox *cb_telefone;
    QLabel *lb_razao_social;
    QLineEdit *le_razao_social;
    QLineEdit *le_nome;
    QLabel *lb_nome;
    QLabel *lb_cnpj;
    QLineEdit *le_cnpj;
    QGraphicsView *gv_logo;

    void setupUi(QDialog *tela_loja)
    {
        if (tela_loja->objectName().isEmpty())
            tela_loja->setObjectName(QString::fromUtf8("tela_loja"));
        tela_loja->resize(800, 317);
        tela_loja->setMinimumSize(QSize(800, 317));
        tela_loja->setMaximumSize(QSize(800, 317));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_loja->setWindowIcon(icon);
        frame = new QFrame(tela_loja);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 50));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        btn_editar_loja = new QToolButton(frame);
        btn_editar_loja->setObjectName(QString::fromUtf8("btn_editar_loja"));
        btn_editar_loja->setGeometry(QRect(10, 2, 45, 45));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/loja_editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_editar_loja->setIcon(icon1);
        btn_editar_loja->setIconSize(QSize(40, 40));
        btn_editar_loja->setAutoRaise(true);
        gb_endereo = new QGroupBox(tela_loja);
        gb_endereo->setObjectName(QString::fromUtf8("gb_endereo"));
        gb_endereo->setGeometry(QRect(5, 200, 790, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_endereo->setFont(font);
        gb_endereo->setAlignment(Qt::AlignCenter);
        le_cep = new QLineEdit(gb_endereo);
        le_cep->setObjectName(QString::fromUtf8("le_cep"));
        le_cep->setEnabled(true);
        le_cep->setGeometry(QRect(35, 23, 91, 20));
        le_cep->setMaximumSize(QSize(100, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
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
        le_rua->setEnabled(true);
        le_rua->setGeometry(QRect(160, 23, 621, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        le_rua->setFont(font2);
        le_rua->setMaxLength(100);
        le_rua->setCursorPosition(0);
        le_rua->setReadOnly(true);
        lb_numero = new QLabel(gb_endereo);
        lb_numero->setObjectName(QString::fromUtf8("lb_numero"));
        lb_numero->setGeometry(QRect(7, 50, 51, 20));
        lb_numero->setFont(font1);
        le_numero = new QLineEdit(gb_endereo);
        le_numero->setObjectName(QString::fromUtf8("le_numero"));
        le_numero->setEnabled(true);
        le_numero->setGeometry(QRect(54, 50, 70, 20));
        le_numero->setFont(font2);
        le_numero->setMaxLength(9);
        le_numero->setReadOnly(true);
        lb_bairro = new QLabel(gb_endereo);
        lb_bairro->setObjectName(QString::fromUtf8("lb_bairro"));
        lb_bairro->setGeometry(QRect(132, 50, 46, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        lb_bairro->setFont(font3);
        le_bairro = new QLineEdit(gb_endereo);
        le_bairro->setObjectName(QString::fromUtf8("le_bairro"));
        le_bairro->setEnabled(true);
        le_bairro->setGeometry(QRect(172, 50, 361, 20));
        le_bairro->setFont(font2);
        le_bairro->setMaxLength(70);
        le_bairro->setReadOnly(true);
        lb_cidade = new QLabel(gb_endereo);
        lb_cidade->setObjectName(QString::fromUtf8("lb_cidade"));
        lb_cidade->setGeometry(QRect(538, 50, 46, 20));
        lb_cidade->setFont(font1);
        le_cidade = new QLineEdit(gb_endereo);
        le_cidade->setObjectName(QString::fromUtf8("le_cidade"));
        le_cidade->setEnabled(true);
        le_cidade->setGeometry(QRect(581, 50, 201, 20));
        le_cidade->setFont(font2);
        le_cidade->setMaxLength(50);
        le_cidade->setCursorPosition(0);
        le_cidade->setReadOnly(true);
        lb_estado = new QLabel(gb_endereo);
        lb_estado->setObjectName(QString::fromUtf8("lb_estado"));
        lb_estado->setGeometry(QRect(8, 80, 45, 20));
        lb_estado->setFont(font1);
        lb_uf = new QLabel(gb_endereo);
        lb_uf->setObjectName(QString::fromUtf8("lb_uf"));
        lb_uf->setGeometry(QRect(210, 80, 20, 20));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        lb_uf->setFont(font4);
        le_uf = new QLineEdit(gb_endereo);
        le_uf->setObjectName(QString::fromUtf8("le_uf"));
        le_uf->setEnabled(true);
        le_uf->setGeometry(QRect(230, 80, 25, 20));
        le_uf->setFont(font4);
        le_uf->setReadOnly(true);
        gv_estado = new QGraphicsView(gb_endereo);
        gv_estado->setObjectName(QString::fromUtf8("gv_estado"));
        gv_estado->setGeometry(QRect(50, 77, 40, 25));
        le_estado = new QLineEdit(gb_endereo);
        le_estado->setObjectName(QString::fromUtf8("le_estado"));
        le_estado->setEnabled(true);
        le_estado->setGeometry(QRect(91, 80, 110, 20));
        le_estado->setFont(font4);
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
        le_cep->raise();
        lb_cep->raise();
        lb_uf->raise();
        le_uf->raise();
        gv_estado->raise();
        le_estado->raise();
        gb_dados_loja = new QGroupBox(tela_loja);
        gb_dados_loja->setObjectName(QString::fromUtf8("gb_dados_loja"));
        gb_dados_loja->setGeometry(QRect(5, 50, 790, 147));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        font5.setStrikeOut(false);
        font5.setKerning(false);
        gb_dados_loja->setFont(font5);
        gb_dados_loja->setAlignment(Qt::AlignCenter);
        lb_telefone = new QLabel(gb_dados_loja);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(169, 100, 51, 20));
        lb_telefone->setFont(font1);
        cb_telefone = new QComboBox(gb_dados_loja);
        cb_telefone->setObjectName(QString::fromUtf8("cb_telefone"));
        cb_telefone->setGeometry(QRect(220, 100, 217, 22));
        cb_telefone->setMaximumSize(QSize(16777215, 22));
        cb_telefone->setFont(font1);
        cb_telefone->setEditable(false);
        cb_telefone->setMaxVisibleItems(20);
        lb_razao_social = new QLabel(gb_dados_loja);
        lb_razao_social->setObjectName(QString::fromUtf8("lb_razao_social"));
        lb_razao_social->setGeometry(QRect(5, 40, 75, 20));
        lb_razao_social->setMaximumSize(QSize(100, 20));
        lb_razao_social->setFont(font1);
        le_razao_social = new QLineEdit(gb_dados_loja);
        le_razao_social->setObjectName(QString::fromUtf8("le_razao_social"));
        le_razao_social->setEnabled(true);
        le_razao_social->setGeometry(QRect(80, 40, 571, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_razao_social->sizePolicy().hasHeightForWidth());
        le_razao_social->setSizePolicy(sizePolicy);
        le_razao_social->setMinimumSize(QSize(450, 20));
        le_razao_social->setMaximumSize(QSize(800, 20));
        le_razao_social->setFont(font1);
        le_razao_social->setMaxLength(100);
        le_razao_social->setReadOnly(true);
        le_nome = new QLineEdit(gb_dados_loja);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setEnabled(true);
        le_nome->setGeometry(QRect(39, 69, 612, 20));
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(450, 20));
        le_nome->setMaximumSize(QSize(800, 20));
        le_nome->setFont(font1);
        le_nome->setMaxLength(32767);
        le_nome->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_loja);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 69, 34, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font1);
        lb_cnpj = new QLabel(gb_dados_loja);
        lb_cnpj->setObjectName(QString::fromUtf8("lb_cnpj"));
        lb_cnpj->setGeometry(QRect(7, 100, 32, 20));
        lb_cnpj->setFont(font4);
        le_cnpj = new QLineEdit(gb_dados_loja);
        le_cnpj->setObjectName(QString::fromUtf8("le_cnpj"));
        le_cnpj->setEnabled(true);
        le_cnpj->setGeometry(QRect(40, 100, 120, 20));
        le_cnpj->setFont(font4);
        le_cnpj->setReadOnly(true);
        gv_logo = new QGraphicsView(gb_dados_loja);
        gv_logo->setObjectName(QString::fromUtf8("gv_logo"));
        gv_logo->setGeometry(QRect(657, 13, 128, 128));
        gv_logo->setMinimumSize(QSize(128, 128));
        gv_logo->setMaximumSize(QSize(128, 128));
        gv_logo->setInteractive(false);

        retranslateUi(tela_loja);

        QMetaObject::connectSlotsByName(tela_loja);
    } // setupUi

    void retranslateUi(QDialog *tela_loja)
    {
        tela_loja->setWindowTitle(QApplication::translate("tela_loja", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_editar_loja->setText(QApplication::translate("tela_loja", "Editar Fornecedor", 0, QApplication::UnicodeUTF8));
        gb_endereo->setTitle(QApplication::translate("tela_loja", "Endere\303\247o", 0, QApplication::UnicodeUTF8));
        le_cep->setInputMask(QApplication::translate("tela_loja", "00000-000; ", 0, QApplication::UnicodeUTF8));
        le_cep->setText(QApplication::translate("tela_loja", "-", 0, QApplication::UnicodeUTF8));
        lb_cep->setText(QApplication::translate("tela_loja", "CEP:", 0, QApplication::UnicodeUTF8));
        lb_rua->setText(QApplication::translate("tela_loja", "Rua:", 0, QApplication::UnicodeUTF8));
        le_rua->setText(QString());
        lb_numero->setText(QApplication::translate("tela_loja", "N\303\272mero:", 0, QApplication::UnicodeUTF8));
        le_numero->setInputMask(QApplication::translate("tela_loja", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_numero->setText(QString());
        lb_bairro->setText(QApplication::translate("tela_loja", "Bairro:", 0, QApplication::UnicodeUTF8));
        le_bairro->setText(QString());
        lb_cidade->setText(QApplication::translate("tela_loja", "Cidade:", 0, QApplication::UnicodeUTF8));
        le_cidade->setText(QString());
        lb_estado->setText(QApplication::translate("tela_loja", "Estado:", 0, QApplication::UnicodeUTF8));
        lb_uf->setText(QApplication::translate("tela_loja", "UF:", 0, QApplication::UnicodeUTF8));
        le_uf->setText(QApplication::translate("tela_loja", "--", 0, QApplication::UnicodeUTF8));
        le_estado->setText(QString());
        gb_dados_loja->setTitle(QApplication::translate("tela_loja", "Dados da Loja", 0, QApplication::UnicodeUTF8));
        lb_telefone->setText(QApplication::translate("tela_loja", "Telefone:", 0, QApplication::UnicodeUTF8));
        lb_razao_social->setText(QApplication::translate("tela_loja", "Raz\303\243o Social:", 0, QApplication::UnicodeUTF8));
        le_razao_social->setText(QString());
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        lb_nome->setText(QApplication::translate("tela_loja", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_cnpj->setText(QApplication::translate("tela_loja", "CNPJ:", 0, QApplication::UnicodeUTF8));
        le_cnpj->setInputMask(QApplication::translate("tela_loja", "00.000.000/0000-00; ", 0, QApplication::UnicodeUTF8));
        le_cnpj->setText(QApplication::translate("tela_loja", "../-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_loja: public Ui_tela_loja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_LOJA_H
