/********************************************************************************
** Form generated from reading UI file 'tela_nota_venda.ui'
**
** Created: Thu 14. Feb 21:49:56 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_NOTA_VENDA_H
#define UI_TELA_NOTA_VENDA_H

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

QT_BEGIN_NAMESPACE

class Ui_tela_nota_venda
{
public:
    QTableWidget *tw_lista_produtos;
    QFrame *frame;
    QLineEdit *le_total;
    QLabel *lb_total;
    QLineEdit *le_desconto;
    QLabel *lb_total_2;
    QLabel *lb_total_3;
    QLineEdit *le_total_a_pagar;
    QGroupBox *gb_dados_venda;
    QDateEdit *data;
    QLabel *lb_data;
    QLabel *lb_lista_de_produtos;
    QFrame *frame_6;
    QGroupBox *gb_dados_cliente;
    QLineEdit *le_nome;
    QLineEdit *le_cpf;
    QLabel *lb_nome;
    QLabel *lb_rg;
    QLabel *lb_cpf;
    QLineEdit *le_rg;
    QLineEdit *le_codigo;
    QLabel *lb_codigo;
    QPushButton *btn_confirmar;
    QFrame *frame_3;
    QFrame *frame_4;
    QFrame *frame_5;
    QFrame *frame_2;
    QTableWidget *tw_lista_pagamento;
    QLabel *lb_forma_pagamento;

    void setupUi(QDialog *tela_nota_venda)
    {
        if (tela_nota_venda->objectName().isEmpty())
            tela_nota_venda->setObjectName(QString::fromUtf8("tela_nota_venda"));
        tela_nota_venda->resize(800, 930);
        tw_lista_produtos = new QTableWidget(tela_nota_venda);
        tw_lista_produtos->setObjectName(QString::fromUtf8("tw_lista_produtos"));
        tw_lista_produtos->setGeometry(QRect(25, 110, 750, 380));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(9);
        tw_lista_produtos->setFont(font);
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
        frame = new QFrame(tela_nota_venda);
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
        lb_total_3->setGeometry(QRect(478, 58, 99, 25));
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
        gb_dados_venda = new QGroupBox(tela_nota_venda);
        gb_dados_venda->setObjectName(QString::fromUtf8("gb_dados_venda"));
        gb_dados_venda->setGeometry(QRect(655, 0, 140, 70));
        gb_dados_venda->setFont(font2);
        gb_dados_venda->setAlignment(Qt::AlignCenter);
        data = new QDateEdit(gb_dados_venda);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(35, 17, 100, 20));
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        data->setFont(font5);
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
        lb_data->setFont(font5);
        lb_lista_de_produtos = new QLabel(tela_nota_venda);
        lb_lista_de_produtos->setObjectName(QString::fromUtf8("lb_lista_de_produtos"));
        lb_lista_de_produtos->setGeometry(QRect(5, 70, 790, 40));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Calibri"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setWeight(75);
        lb_lista_de_produtos->setFont(font6);
        lb_lista_de_produtos->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.3 rgba(255, 255, 255, 0));\n"
"	border: none;\n"
"	color:#000000\n"
"}\n"
""));
        lb_lista_de_produtos->setAlignment(Qt::AlignCenter);
        frame_6 = new QFrame(tela_nota_venda);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(5, 110, 20, 380));
        frame_6->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gb_dados_cliente = new QGroupBox(tela_nota_venda);
        gb_dados_cliente->setObjectName(QString::fromUtf8("gb_dados_cliente"));
        gb_dados_cliente->setGeometry(QRect(5, 0, 645, 70));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        font7.setStrikeOut(false);
        font7.setKerning(false);
        gb_dados_cliente->setFont(font7);
        gb_dados_cliente->setAlignment(Qt::AlignCenter);
        le_nome = new QLineEdit(gb_dados_cliente);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(40, 17, 600, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(410, 20));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Calibri"));
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setWeight(50);
        font8.setKerning(false);
        le_nome->setFont(font8);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(true);
        le_cpf = new QLineEdit(gb_dados_cliente);
        le_cpf->setObjectName(QString::fromUtf8("le_cpf"));
        le_cpf->setGeometry(QRect(330, 44, 95, 20));
        sizePolicy.setHeightForWidth(le_cpf->sizePolicy().hasHeightForWidth());
        le_cpf->setSizePolicy(sizePolicy);
        le_cpf->setMinimumSize(QSize(95, 20));
        le_cpf->setMaximumSize(QSize(95, 20));
        le_cpf->setFont(font8);
        le_cpf->setMaxLength(14);
        le_cpf->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_cliente);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 17, 35, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font8);
        lb_rg = new QLabel(gb_dados_cliente);
        lb_rg->setObjectName(QString::fromUtf8("lb_rg"));
        lb_rg->setGeometry(QRect(126, 44, 20, 20));
        lb_rg->setFont(font8);
        lb_cpf = new QLabel(gb_dados_cliente);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setGeometry(QRect(304, 44, 26, 20));
        lb_cpf->setFont(font8);
        le_rg = new QLineEdit(gb_dados_cliente);
        le_rg->setObjectName(QString::fromUtf8("le_rg"));
        le_rg->setGeometry(QRect(147, 44, 150, 20));
        le_rg->setMinimumSize(QSize(120, 20));
        le_rg->setMaximumSize(QSize(200, 20));
        le_rg->setFont(font8);
        le_rg->setMaxLength(20);
        le_rg->setCursorPosition(20);
        le_rg->setReadOnly(true);
        le_codigo = new QLineEdit(gb_dados_cliente);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(49, 44, 70, 20));
        le_codigo->setFont(font5);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        lb_codigo = new QLabel(gb_dados_cliente);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(5, 44, 42, 20));
        lb_codigo->setFont(font5);
        btn_confirmar = new QPushButton(tela_nota_venda);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(348, 900, 104, 25));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Calibri"));
        font9.setPointSize(10);
        btn_confirmar->setFont(font9);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));
        frame_3 = new QFrame(tela_nota_venda);
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
        frame_4 = new QFrame(tela_nota_venda);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(775, 624, 20, 250));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(tela_nota_venda);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(5, 624, 20, 250));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(tela_nota_venda);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(5, 873, 790, 20));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #505050;\n"
"	border: none;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tw_lista_pagamento = new QTableWidget(tela_nota_venda);
        tw_lista_pagamento->setObjectName(QString::fromUtf8("tw_lista_pagamento"));
        tw_lista_pagamento->setGeometry(QRect(25, 624, 750, 250));
        tw_lista_pagamento->setFont(font);
        tw_lista_pagamento->setAlternatingRowColors(true);
        tw_lista_pagamento->setRowCount(0);
        tw_lista_pagamento->setColumnCount(0);
        tw_lista_pagamento->horizontalHeader()->setDefaultSectionSize(360);
        tw_lista_pagamento->horizontalHeader()->setHighlightSections(true);
        tw_lista_pagamento->horizontalHeader()->setMinimumSectionSize(95);
        tw_lista_pagamento->horizontalHeader()->setStretchLastSection(true);
        tw_lista_pagamento->verticalHeader()->setVisible(false);
        tw_lista_pagamento->verticalHeader()->setDefaultSectionSize(20);
        tw_lista_pagamento->verticalHeader()->setMinimumSectionSize(20);
        lb_forma_pagamento = new QLabel(tela_nota_venda);
        lb_forma_pagamento->setObjectName(QString::fromUtf8("lb_forma_pagamento"));
        lb_forma_pagamento->setGeometry(QRect(5, 584, 790, 40));
        lb_forma_pagamento->setFont(font6);
        lb_forma_pagamento->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.3 rgba(255, 255, 255, 0));\n"
"	border: none;\n"
"	color:#000000\n"
"}\n"
""));
        lb_forma_pagamento->setAlignment(Qt::AlignCenter);

        retranslateUi(tela_nota_venda);

        QMetaObject::connectSlotsByName(tela_nota_venda);
    } // setupUi

    void retranslateUi(QDialog *tela_nota_venda)
    {
        tela_nota_venda->setWindowTitle(QApplication::translate("tela_nota_venda", "Nota de venda;", 0, QApplication::UnicodeUTF8));
        le_total->setText(QString());
        lb_total->setText(QApplication::translate("tela_nota_venda", "TOTAL:", 0, QApplication::UnicodeUTF8));
        le_desconto->setInputMask(QString());
        le_desconto->setText(QString());
        lb_total_2->setText(QApplication::translate("tela_nota_venda", "DESCONTO:", 0, QApplication::UnicodeUTF8));
        lb_total_3->setText(QApplication::translate("tela_nota_venda", "TOTAL PAGO:", 0, QApplication::UnicodeUTF8));
        le_total_a_pagar->setText(QString());
        gb_dados_venda->setTitle(QApplication::translate("tela_nota_venda", "Dados da venda", 0, QApplication::UnicodeUTF8));
        lb_data->setText(QApplication::translate("tela_nota_venda", "Data:", 0, QApplication::UnicodeUTF8));
        lb_lista_de_produtos->setText(QApplication::translate("tela_nota_venda", "Lista de Produtos", 0, QApplication::UnicodeUTF8));
        gb_dados_cliente->setTitle(QApplication::translate("tela_nota_venda", "Dados do Cliente", 0, QApplication::UnicodeUTF8));
        le_nome->setText(QString());
        le_cpf->setInputMask(QApplication::translate("tela_nota_venda", "000.000.000-00; ", 0, QApplication::UnicodeUTF8));
        le_cpf->setText(QApplication::translate("tela_nota_venda", "..-", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_nota_venda", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_rg->setText(QApplication::translate("tela_nota_venda", "RG:", 0, QApplication::UnicodeUTF8));
        lb_cpf->setText(QApplication::translate("tela_nota_venda", "CPF:", 0, QApplication::UnicodeUTF8));
        le_rg->setInputMask(QApplication::translate("tela_nota_venda", "00000000000000000000; ", 0, QApplication::UnicodeUTF8));
        le_rg->setText(QString());
        le_codigo->setInputMask(QApplication::translate("tela_nota_venda", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_codigo->setText(QApplication::translate("tela_nota_venda", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_nota_venda", "Reabrir Nota", 0, QApplication::UnicodeUTF8));
        lb_forma_pagamento->setText(QApplication::translate("tela_nota_venda", "Forma de pagamento", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_nota_venda: public Ui_tela_nota_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_NOTA_VENDA_H
