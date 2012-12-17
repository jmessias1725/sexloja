/********************************************************************************
** Form generated from reading UI file 'tela_comprar.ui'
**
** Created: Mon 17. Dec 17:06:54 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_COMPRAR_H
#define UI_TELA_COMPRAR_H

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

class Ui_tela_comprar
{
public:
    QGroupBox *gb_dados_compra;
    QDateEdit *data;
    QLabel *lb_data;
    QLabel *lb_codigo_cum_nota;
    QLineEdit *le_numero_cupom_nota;
    QGroupBox *gb_dados_fornecedor;
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QLabel *lb_razao_social;
    QLineEdit *le_razao_social;
    QLineEdit *le_nome;
    QLabel *lb_nome;
    QLabel *lb_cnpj;
    QLineEdit *le_cnpj;
    QToolButton *btn_buscar_fornecedor;
    QTableWidget *tw_lista_produtos;
    QLabel *lb_lista_de_produtos;
    QFrame *frame;
    QLineEdit *le_total;
    QLabel *lb_total;
    QLineEdit *le_desconto;
    QLabel *lb_total_2;
    QLabel *lb_total_3;
    QLineEdit *le_total_a_pagar;
    QFrame *menu_produtos;
    QToolButton *btn_adicionar_produto;
    QToolButton *btn_remover_produto;
    QFrame *frame_3;
    QPushButton *btn_cancelar;
    QPushButton *btn_confirmar;

    void setupUi(QDialog *tela_comprar)
    {
        if (tela_comprar->objectName().isEmpty())
            tela_comprar->setObjectName(QString::fromUtf8("tela_comprar"));
        tela_comprar->setWindowModality(Qt::ApplicationModal);
        tela_comprar->resize(800, 670);
        tela_comprar->setMinimumSize(QSize(800, 630));
        tela_comprar->setMaximumSize(QSize(800, 670));
        tela_comprar->setModal(true);
        gb_dados_compra = new QGroupBox(tela_comprar);
        gb_dados_compra->setObjectName(QString::fromUtf8("gb_dados_compra"));
        gb_dados_compra->setGeometry(QRect(5, 70, 790, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_dados_compra->setFont(font);
        gb_dados_compra->setAlignment(Qt::AlignCenter);
        data = new QDateEdit(gb_dados_compra);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(35, 20, 100, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        data->setFont(font1);
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
        lb_data = new QLabel(gb_dados_compra);
        lb_data->setObjectName(QString::fromUtf8("lb_data"));
        lb_data->setGeometry(QRect(5, 20, 30, 20));
        lb_data->setFont(font1);
        lb_codigo_cum_nota = new QLabel(gb_dados_compra);
        lb_codigo_cum_nota->setObjectName(QString::fromUtf8("lb_codigo_cum_nota"));
        lb_codigo_cum_nota->setGeometry(QRect(145, 20, 176, 20));
        lb_codigo_cum_nota->setFont(font1);
        le_numero_cupom_nota = new QLineEdit(gb_dados_compra);
        le_numero_cupom_nota->setObjectName(QString::fromUtf8("le_numero_cupom_nota"));
        le_numero_cupom_nota->setGeometry(QRect(321, 20, 55, 20));
        le_numero_cupom_nota->setFont(font1);
        gb_dados_fornecedor = new QGroupBox(tela_comprar);
        gb_dados_fornecedor->setObjectName(QString::fromUtf8("gb_dados_fornecedor"));
        gb_dados_fornecedor->setGeometry(QRect(5, 0, 790, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(false);
        gb_dados_fornecedor->setFont(font2);
        gb_dados_fornecedor->setAlignment(Qt::AlignCenter);
        lb_codigo = new QLabel(gb_dados_fornecedor);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(85, 20, 42, 20));
        lb_codigo->setFont(font1);
        le_codigo = new QLineEdit(gb_dados_fornecedor);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(127, 20, 70, 20));
        le_codigo->setFont(font1);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        lb_razao_social = new QLabel(gb_dados_fornecedor);
        lb_razao_social->setObjectName(QString::fromUtf8("lb_razao_social"));
        lb_razao_social->setGeometry(QRect(202, 20, 75, 20));
        lb_razao_social->setMaximumSize(QSize(100, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        lb_razao_social->setFont(font3);
        le_razao_social = new QLineEdit(gb_dados_fornecedor);
        le_razao_social->setObjectName(QString::fromUtf8("le_razao_social"));
        le_razao_social->setGeometry(QRect(277, 20, 508, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_razao_social->sizePolicy().hasHeightForWidth());
        le_razao_social->setSizePolicy(sizePolicy);
        le_razao_social->setMinimumSize(QSize(450, 20));
        le_razao_social->setMaximumSize(QSize(800, 20));
        le_razao_social->setFont(font3);
        le_razao_social->setMaxLength(100);
        le_razao_social->setReadOnly(true);
        le_nome = new QLineEdit(gb_dados_fornecedor);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(39, 45, 588, 20));
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(450, 20));
        le_nome->setMaximumSize(QSize(800, 20));
        le_nome->setFont(font3);
        le_nome->setMaxLength(32767);
        le_nome->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_fornecedor);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 45, 34, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font3);
        lb_cnpj = new QLabel(gb_dados_fornecedor);
        lb_cnpj->setObjectName(QString::fromUtf8("lb_cnpj"));
        lb_cnpj->setGeometry(QRect(632, 45, 32, 20));
        lb_cnpj->setFont(font1);
        le_cnpj = new QLineEdit(gb_dados_fornecedor);
        le_cnpj->setObjectName(QString::fromUtf8("le_cnpj"));
        le_cnpj->setGeometry(QRect(665, 45, 120, 20));
        le_cnpj->setFont(font1);
        le_cnpj->setReadOnly(true);
        btn_buscar_fornecedor = new QToolButton(gb_dados_fornecedor);
        btn_buscar_fornecedor->setObjectName(QString::fromUtf8("btn_buscar_fornecedor"));
        btn_buscar_fornecedor->setGeometry(QRect(5, 16, 75, 25));
        btn_buscar_fornecedor->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/fornecedor.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_buscar_fornecedor->setIcon(icon);
        btn_buscar_fornecedor->setIconSize(QSize(20, 20));
        btn_buscar_fornecedor->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tw_lista_produtos = new QTableWidget(tela_comprar);
        tw_lista_produtos->setObjectName(QString::fromUtf8("tw_lista_produtos"));
        tw_lista_produtos->setGeometry(QRect(25, 165, 750, 380));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(9);
        tw_lista_produtos->setFont(font4);
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
        lb_lista_de_produtos = new QLabel(tela_comprar);
        lb_lista_de_produtos->setObjectName(QString::fromUtf8("lb_lista_de_produtos"));
        lb_lista_de_produtos->setGeometry(QRect(5, 125, 790, 40));
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
        frame = new QFrame(tela_comprar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(5, 545, 790, 90));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #505050;\n"
"	border: none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        le_total = new QLineEdit(frame);
        le_total->setObjectName(QString::fromUtf8("le_total"));
        le_total->setGeometry(QRect(579, 2, 191, 25));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Calibri"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setWeight(50);
        le_total->setFont(font6);
        le_total->setStyleSheet(QString::fromUtf8(""));
        le_total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_total->setReadOnly(true);
        lb_total = new QLabel(frame);
        lb_total->setObjectName(QString::fromUtf8("lb_total"));
        lb_total->setGeometry(QRect(537, 2, 40, 25));
        lb_total->setFont(font);
        lb_total->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));
        le_desconto = new QLineEdit(frame);
        le_desconto->setObjectName(QString::fromUtf8("le_desconto"));
        le_desconto->setGeometry(QRect(579, 30, 191, 25));
        le_desconto->setFont(font6);
        le_desconto->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        le_desconto->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_desconto->setReadOnly(false);
        lb_total_2 = new QLabel(frame);
        lb_total_2->setObjectName(QString::fromUtf8("lb_total_2"));
        lb_total_2->setGeometry(QRect(508, 30, 69, 25));
        lb_total_2->setFont(font);
        lb_total_2->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));
        lb_total_3 = new QLabel(frame);
        lb_total_3->setObjectName(QString::fromUtf8("lb_total_3"));
        lb_total_3->setGeometry(QRect(456, 58, 123, 25));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri"));
        font7.setPointSize(13);
        font7.setBold(true);
        font7.setWeight(75);
        lb_total_3->setFont(font7);
        lb_total_3->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));
        le_total_a_pagar = new QLineEdit(frame);
        le_total_a_pagar->setObjectName(QString::fromUtf8("le_total_a_pagar"));
        le_total_a_pagar->setGeometry(QRect(580, 58, 191, 25));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Calibri"));
        font8.setPointSize(15);
        font8.setBold(false);
        font8.setWeight(50);
        le_total_a_pagar->setFont(font8);
        le_total_a_pagar->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        le_total_a_pagar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_total_a_pagar->setReadOnly(true);
        menu_produtos = new QFrame(tela_comprar);
        menu_produtos->setObjectName(QString::fromUtf8("menu_produtos"));
        menu_produtos->setGeometry(QRect(5, 165, 20, 380));
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/mais.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_adicionar_produto->setIcon(icon1);
        btn_adicionar_produto->setIconSize(QSize(16, 16));
        btn_adicionar_produto->setAutoRaise(true);
        btn_remover_produto = new QToolButton(menu_produtos);
        btn_remover_produto->setObjectName(QString::fromUtf8("btn_remover_produto"));
        btn_remover_produto->setGeometry(QRect(0, 20, 20, 20));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/menos.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_remover_produto->setIcon(icon2);
        btn_remover_produto->setIconSize(QSize(16, 16));
        btn_remover_produto->setAutoRaise(true);
        frame_3 = new QFrame(tela_comprar);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(775, 165, 20, 380));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        btn_cancelar = new QPushButton(tela_comprar);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(405, 640, 90, 25));
        btn_cancelar->setMinimumSize(QSize(0, 25));
        btn_cancelar->setMaximumSize(QSize(90, 25));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Calibri"));
        font9.setPointSize(10);
        btn_cancelar->setFont(font9);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon3);
        btn_cancelar->setIconSize(QSize(18, 18));
        btn_confirmar = new QPushButton(tela_comprar);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(305, 640, 90, 25));
        btn_confirmar->setMinimumSize(QSize(0, 25));
        btn_confirmar->setMaximumSize(QSize(90, 25));
        btn_confirmar->setFont(font9);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon4);
        btn_confirmar->setIconSize(QSize(20, 20));

        retranslateUi(tela_comprar);

        QMetaObject::connectSlotsByName(tela_comprar);
    } // setupUi

    void retranslateUi(QDialog *tela_comprar)
    {
        tela_comprar->setWindowTitle(QApplication::translate("tela_comprar", "Nova Compra", 0, QApplication::UnicodeUTF8));
        gb_dados_compra->setTitle(QApplication::translate("tela_comprar", "Dados da compra", 0, QApplication::UnicodeUTF8));
        lb_data->setText(QApplication::translate("tela_comprar", "Data:", 0, QApplication::UnicodeUTF8));
        lb_codigo_cum_nota->setText(QApplication::translate("tela_comprar", "N\303\272mero da NF-e/ Cupom fiscal:", 0, QApplication::UnicodeUTF8));
        le_numero_cupom_nota->setInputMask(QApplication::translate("tela_comprar", "0000000; ", 0, QApplication::UnicodeUTF8));
        le_numero_cupom_nota->setText(QString());
        gb_dados_fornecedor->setTitle(QApplication::translate("tela_comprar", "Dados do Fornecedor", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_comprar", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_comprar", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_razao_social->setText(QApplication::translate("tela_comprar", "Raz\303\243o Social:", 0, QApplication::UnicodeUTF8));
        le_razao_social->setText(QString());
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        lb_nome->setText(QApplication::translate("tela_comprar", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_cnpj->setText(QApplication::translate("tela_comprar", "CNPJ:", 0, QApplication::UnicodeUTF8));
        le_cnpj->setInputMask(QApplication::translate("tela_comprar", "00.000.000/0000-00; ", 0, QApplication::UnicodeUTF8));
        le_cnpj->setText(QApplication::translate("tela_comprar", "../-", 0, QApplication::UnicodeUTF8));
        btn_buscar_fornecedor->setText(QApplication::translate("tela_comprar", "Buscar", 0, QApplication::UnicodeUTF8));
        lb_lista_de_produtos->setText(QApplication::translate("tela_comprar", "Lista de Produtos", 0, QApplication::UnicodeUTF8));
        le_total->setText(QString());
        lb_total->setText(QApplication::translate("tela_comprar", "TOTAL:", 0, QApplication::UnicodeUTF8));
        le_desconto->setInputMask(QString());
        le_desconto->setText(QString());
        lb_total_2->setText(QApplication::translate("tela_comprar", "DESCONTO:", 0, QApplication::UnicodeUTF8));
        lb_total_3->setText(QApplication::translate("tela_comprar", "TOTAL A PAGAR:", 0, QApplication::UnicodeUTF8));
        le_total_a_pagar->setText(QString());
        btn_adicionar_produto->setText(QApplication::translate("tela_comprar", "...", 0, QApplication::UnicodeUTF8));
        btn_remover_produto->setText(QApplication::translate("tela_comprar", "...", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_comprar", "Cancelar", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_comprar", "Confirmar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_comprar: public Ui_tela_comprar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_COMPRAR_H
