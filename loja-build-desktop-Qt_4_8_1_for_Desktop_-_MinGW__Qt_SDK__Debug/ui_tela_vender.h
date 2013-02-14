/********************************************************************************
** Form generated from reading UI file 'tela_vender.ui'
**
** Created: Thu 14. Feb 11:07:24 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_VENDER_H
#define UI_TELA_VENDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_tela_vender
{
public:
    QFrame *menu_produtos;
    QToolButton *btn_adicionar_produto;
    QToolButton *btn_remover_produto;
    QPushButton *btn_confirmar;
    QFrame *frame;
    QLineEdit *le_total;
    QLabel *lb_total;
    QLineEdit *le_desconto;
    QLabel *lb_total_2;
    QLabel *lb_total_3;
    QLineEdit *le_total_a_pagar;
    QLabel *lb_lista_de_produtos;
    QGroupBox *gb_dados_venda;
    QDateEdit *data;
    QLabel *lb_data;
    QPushButton *btn_cancelar;
    QTableWidget *tw_lista_produtos;
    QFrame *frame_3;
    QGroupBox *gb_dados_cliente;
    QLineEdit *le_nome;
    QLineEdit *le_cpf;
    QLabel *lb_nome;
    QLabel *lb_rg;
    QLabel *lb_cpf;
    QLineEdit *le_rg;
    QToolButton *btn_buscar_cliente;
    QLineEdit *le_codigo;
    QLabel *lb_codigo;

    void setupUi(QDialog *tela_vender)
    {
        if (tela_vender->objectName().isEmpty())
            tela_vender->setObjectName(QString::fromUtf8("tela_vender"));
        tela_vender->resize(800, 615);
        menu_produtos = new QFrame(tela_vender);
        menu_produtos->setObjectName(QString::fromUtf8("menu_produtos"));
        menu_produtos->setGeometry(QRect(5, 110, 20, 380));
        menu_produtos->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        menu_produtos->setFrameShape(QFrame::StyledPanel);
        menu_produtos->setFrameShadow(QFrame::Raised);
        btn_adicionar_produto = new QToolButton(menu_produtos);
        btn_adicionar_produto->setObjectName(QString::fromUtf8("btn_adicionar_produto"));
        btn_adicionar_produto->setGeometry(QRect(0, 0, 20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/mais.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_adicionar_produto->setIcon(icon);
        btn_adicionar_produto->setIconSize(QSize(16, 16));
        btn_adicionar_produto->setAutoRaise(true);
        btn_remover_produto = new QToolButton(menu_produtos);
        btn_remover_produto->setObjectName(QString::fromUtf8("btn_remover_produto"));
        btn_remover_produto->setGeometry(QRect(0, 20, 20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/menos.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_remover_produto->setIcon(icon1);
        btn_remover_produto->setIconSize(QSize(16, 16));
        btn_remover_produto->setAutoRaise(true);
        btn_confirmar = new QPushButton(tela_vender);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(305, 585, 90, 25));
        btn_confirmar->setMinimumSize(QSize(0, 25));
        btn_confirmar->setMaximumSize(QSize(90, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        btn_confirmar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon2);
        btn_confirmar->setIconSize(QSize(20, 20));
        frame = new QFrame(tela_vender);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(5, 490, 790, 90));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #505050;\n"
"	border: none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        le_total = new QLineEdit(frame);
        le_total->setObjectName(QString::fromUtf8("le_total"));
        le_total->setGeometry(QRect(579, 2, 191, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        le_total->setFont(font1);
        le_total->setStyleSheet(QString::fromUtf8(""));
        le_total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_total->setReadOnly(true);
        lb_total = new QLabel(frame);
        lb_total->setObjectName(QString::fromUtf8("lb_total"));
        lb_total->setGeometry(QRect(537, 2, 40, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lb_total->setFont(font2);
        lb_total->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));
        le_desconto = new QLineEdit(frame);
        le_desconto->setObjectName(QString::fromUtf8("le_desconto"));
        le_desconto->setGeometry(QRect(579, 30, 191, 25));
        le_desconto->setFont(font1);
        le_desconto->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        le_desconto->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_desconto->setReadOnly(false);
        lb_total_2 = new QLabel(frame);
        lb_total_2->setObjectName(QString::fromUtf8("lb_total_2"));
        lb_total_2->setGeometry(QRect(508, 30, 69, 25));
        lb_total_2->setFont(font2);
        lb_total_2->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));
        lb_total_3 = new QLabel(frame);
        lb_total_3->setObjectName(QString::fromUtf8("lb_total_3"));
        lb_total_3->setGeometry(QRect(456, 58, 123, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        lb_total_3->setFont(font3);
        lb_total_3->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));
        le_total_a_pagar = new QLineEdit(frame);
        le_total_a_pagar->setObjectName(QString::fromUtf8("le_total_a_pagar"));
        le_total_a_pagar->setGeometry(QRect(580, 58, 191, 25));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(15);
        font4.setBold(false);
        font4.setWeight(50);
        le_total_a_pagar->setFont(font4);
        le_total_a_pagar->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        le_total_a_pagar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_total_a_pagar->setReadOnly(true);
        lb_lista_de_produtos = new QLabel(tela_vender);
        lb_lista_de_produtos->setObjectName(QString::fromUtf8("lb_lista_de_produtos"));
        lb_lista_de_produtos->setGeometry(QRect(5, 70, 790, 40));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        lb_lista_de_produtos->setFont(font5);
        lb_lista_de_produtos->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.3 rgba(255, 255, 255, 0));\n"
"	border: none;\n"
"	color:#000000\n"
"}\n"
""));
        lb_lista_de_produtos->setAlignment(Qt::AlignCenter);
        gb_dados_venda = new QGroupBox(tela_vender);
        gb_dados_venda->setObjectName(QString::fromUtf8("gb_dados_venda"));
        gb_dados_venda->setGeometry(QRect(655, 0, 140, 70));
        gb_dados_venda->setFont(font2);
        gb_dados_venda->setAlignment(Qt::AlignCenter);
        data = new QDateEdit(gb_dados_venda);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(35, 17, 100, 20));
        QFont font6;
        font6.setBold(false);
        font6.setWeight(50);
        data->setFont(font6);
        data->setFrame(true);
        data->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data->setReadOnly(false);
        data->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        data->setAccelerated(false);
        data->setKeyboardTracking(true);
        data->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        data->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        data->setCalendarPopup(true);
        data->setTimeSpec(Qt::LocalTime);
        lb_data = new QLabel(gb_dados_venda);
        lb_data->setObjectName(QString::fromUtf8("lb_data"));
        lb_data->setGeometry(QRect(5, 17, 30, 20));
        lb_data->setFont(font6);
        btn_cancelar = new QPushButton(tela_vender);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(405, 585, 90, 25));
        btn_cancelar->setMinimumSize(QSize(0, 25));
        btn_cancelar->setMaximumSize(QSize(90, 25));
        btn_cancelar->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon3);
        btn_cancelar->setIconSize(QSize(18, 18));
        tw_lista_produtos = new QTableWidget(tela_vender);
        tw_lista_produtos->setObjectName(QString::fromUtf8("tw_lista_produtos"));
        tw_lista_produtos->setGeometry(QRect(25, 110, 750, 380));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri"));
        font7.setPointSize(9);
        tw_lista_produtos->setFont(font7);
        tw_lista_produtos->setAlternatingRowColors(true);
        tw_lista_produtos->setRowCount(0);
        tw_lista_produtos->setColumnCount(0);
        tw_lista_produtos->horizontalHeader()->setDefaultSectionSize(360);
        tw_lista_produtos->horizontalHeader()->setHighlightSections(true);
        tw_lista_produtos->horizontalHeader()->setMinimumSectionSize(95);
        tw_lista_produtos->horizontalHeader()->setStretchLastSection(true);
        tw_lista_produtos->verticalHeader()->setVisible(false);
        tw_lista_produtos->verticalHeader()->setDefaultSectionSize(20);
        tw_lista_produtos->verticalHeader()->setMinimumSectionSize(20);
        frame_3 = new QFrame(tela_vender);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(775, 110, 20, 380));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gb_dados_cliente = new QGroupBox(tela_vender);
        gb_dados_cliente->setObjectName(QString::fromUtf8("gb_dados_cliente"));
        gb_dados_cliente->setGeometry(QRect(5, 0, 645, 70));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Calibri"));
        font8.setPointSize(10);
        font8.setBold(true);
        font8.setWeight(75);
        font8.setStrikeOut(false);
        font8.setKerning(false);
        gb_dados_cliente->setFont(font8);
        gb_dados_cliente->setAlignment(Qt::AlignCenter);
        le_nome = new QLineEdit(gb_dados_cliente);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(122, 17, 516, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(410, 20));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Calibri"));
        font9.setPointSize(10);
        font9.setBold(false);
        font9.setWeight(50);
        font9.setKerning(false);
        le_nome->setFont(font9);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(true);
        le_cpf = new QLineEdit(gb_dados_cliente);
        le_cpf->setObjectName(QString::fromUtf8("le_cpf"));
        le_cpf->setGeometry(QRect(330, 44, 95, 20));
        sizePolicy.setHeightForWidth(le_cpf->sizePolicy().hasHeightForWidth());
        le_cpf->setSizePolicy(sizePolicy);
        le_cpf->setMinimumSize(QSize(95, 20));
        le_cpf->setMaximumSize(QSize(95, 20));
        le_cpf->setFont(font9);
        le_cpf->setMaxLength(14);
        le_cpf->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_cliente);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(87, 17, 35, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font9);
        lb_rg = new QLabel(gb_dados_cliente);
        lb_rg->setObjectName(QString::fromUtf8("lb_rg"));
        lb_rg->setGeometry(QRect(126, 44, 20, 20));
        lb_rg->setFont(font9);
        lb_cpf = new QLabel(gb_dados_cliente);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setGeometry(QRect(304, 44, 26, 20));
        lb_cpf->setFont(font9);
        le_rg = new QLineEdit(gb_dados_cliente);
        le_rg->setObjectName(QString::fromUtf8("le_rg"));
        le_rg->setGeometry(QRect(147, 44, 150, 20));
        le_rg->setMinimumSize(QSize(120, 20));
        le_rg->setMaximumSize(QSize(200, 20));
        le_rg->setFont(font9);
        le_rg->setMaxLength(20);
        le_rg->setCursorPosition(20);
        le_rg->setReadOnly(true);
        btn_buscar_cliente = new QToolButton(gb_dados_cliente);
        btn_buscar_cliente->setObjectName(QString::fromUtf8("btn_buscar_cliente"));
        btn_buscar_cliente->setGeometry(QRect(5, 15, 75, 25));
        btn_buscar_cliente->setFont(font6);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/Usuario.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_buscar_cliente->setIcon(icon4);
        btn_buscar_cliente->setIconSize(QSize(20, 20));
        btn_buscar_cliente->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        le_codigo = new QLineEdit(gb_dados_cliente);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(49, 44, 70, 20));
        le_codigo->setFont(font6);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        lb_codigo = new QLabel(gb_dados_cliente);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(5, 44, 42, 20));
        lb_codigo->setFont(font6);

        retranslateUi(tela_vender);

        QMetaObject::connectSlotsByName(tela_vender);
    } // setupUi

    void retranslateUi(QDialog *tela_vender)
    {
        tela_vender->setWindowTitle(QApplication::translate("tela_vender", "Vender", 0, QApplication::UnicodeUTF8));
        btn_adicionar_produto->setText(QApplication::translate("tela_vender", "...", 0, QApplication::UnicodeUTF8));
        btn_remover_produto->setText(QApplication::translate("tela_vender", "...", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_vender", "Confirmar", 0, QApplication::UnicodeUTF8));
        le_total->setText(QString());
        lb_total->setText(QApplication::translate("tela_vender", "TOTAL:", 0, QApplication::UnicodeUTF8));
        le_desconto->setInputMask(QString());
        le_desconto->setText(QString());
        lb_total_2->setText(QApplication::translate("tela_vender", "DESCONTO:", 0, QApplication::UnicodeUTF8));
        lb_total_3->setText(QApplication::translate("tela_vender", "TOTAL A PAGAR:", 0, QApplication::UnicodeUTF8));
        le_total_a_pagar->setText(QString());
        lb_lista_de_produtos->setText(QApplication::translate("tela_vender", "Lista de Produtos", 0, QApplication::UnicodeUTF8));
        gb_dados_venda->setTitle(QApplication::translate("tela_vender", "Dados da venda", 0, QApplication::UnicodeUTF8));
        lb_data->setText(QApplication::translate("tela_vender", "Data:", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_vender", "Cancelar", 0, QApplication::UnicodeUTF8));
        gb_dados_cliente->setTitle(QApplication::translate("tela_vender", "Dados do Cliente", 0, QApplication::UnicodeUTF8));
        le_nome->setText(QString());
        le_cpf->setInputMask(QApplication::translate("tela_vender", "000.000.000-00; ", 0, QApplication::UnicodeUTF8));
        le_cpf->setText(QApplication::translate("tela_vender", "..-", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_vender", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_rg->setText(QApplication::translate("tela_vender", "RG:", 0, QApplication::UnicodeUTF8));
        lb_cpf->setText(QApplication::translate("tela_vender", "CPF:", 0, QApplication::UnicodeUTF8));
        le_rg->setInputMask(QApplication::translate("tela_vender", "00000000000000000000; ", 0, QApplication::UnicodeUTF8));
        le_rg->setText(QString());
        btn_buscar_cliente->setText(QApplication::translate("tela_vender", "Buscar", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_vender", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_codigo->setText(QApplication::translate("tela_vender", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_vender: public Ui_tela_vender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_VENDER_H
