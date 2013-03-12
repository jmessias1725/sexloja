/********************************************************************************
** Form generated from reading UI file 'tela_nota_venda.ui'
**
** Created: Tue 12. Mar 16:48:51 2013
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
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_nota_venda
{
public:
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *btn_reabrir;
    QToolButton *btn_confirmar;
    QToolButton *btn_cancelar;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *gb_dados_cliente;
    QLineEdit *le_nome;
    QLineEdit *le_cpf;
    QLabel *lb_nome;
    QLabel *lb_rg;
    QLabel *lb_cpf;
    QLineEdit *le_rg;
    QLineEdit *le_codigo;
    QLabel *lb_codigo;
    QGroupBox *gb_dados_venda;
    QLabel *lb_data;
    QLineEdit *le_data;
    QVBoxLayout *verticalLayout;
    QLabel *lb_lista_de_produtos;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_6;
    QTableWidget *tw_lista_produtos;
    QFrame *frame_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lb_total;
    QLineEdit *le_total;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lb_desconto;
    QLineEdit *le_desconto;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QLabel *lb_total_pago;
    QLineEdit *le_total_a_pagar;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_forma_pagamento;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QTableWidget *tw_lista_pagamento;
    QFrame *frame_4;
    QFrame *frame_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *tela_nota_venda)
    {
        if (tela_nota_venda->objectName().isEmpty())
            tela_nota_venda->setObjectName(QString::fromUtf8("tela_nota_venda"));
        tela_nota_venda->resize(832, 603);
        verticalLayout_5 = new QVBoxLayout(tela_nota_venda);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frame_7 = new QFrame(tela_nota_venda);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(800, 50));
        frame_7->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.1 #777777, stop:0.9 #525252);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        frame_7->setFrameShape(QFrame::Panel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_7);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(647, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        btn_reabrir = new QToolButton(frame_7);
        btn_reabrir->setObjectName(QString::fromUtf8("btn_reabrir"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btn_reabrir->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_reabrir->setIcon(icon);
        btn_reabrir->setIconSize(QSize(20, 20));
        btn_reabrir->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_reabrir->setAutoRaise(true);

        horizontalLayout_5->addWidget(btn_reabrir);

        btn_confirmar = new QToolButton(frame_7);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon1);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_confirmar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_confirmar->setAutoRaise(true);

        horizontalLayout_5->addWidget(btn_confirmar);

        btn_cancelar = new QToolButton(frame_7);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon2);
        btn_cancelar->setIconSize(QSize(20, 20));
        btn_cancelar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_cancelar->setAutoRaise(true);

        horizontalLayout_5->addWidget(btn_cancelar);


        verticalLayout_5->addWidget(frame_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        scrollArea = new QScrollArea(tela_nota_venda);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(830, 0));
        scrollArea->setMaximumSize(QSize(830, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 811, 915));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 0, 5, 5);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gb_dados_cliente = new QGroupBox(scrollAreaWidgetContents_2);
        gb_dados_cliente->setObjectName(QString::fromUtf8("gb_dados_cliente"));
        gb_dados_cliente->setMinimumSize(QSize(645, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        gb_dados_cliente->setFont(font1);
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
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        le_nome->setFont(font2);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(true);
        le_cpf = new QLineEdit(gb_dados_cliente);
        le_cpf->setObjectName(QString::fromUtf8("le_cpf"));
        le_cpf->setGeometry(QRect(330, 44, 95, 20));
        sizePolicy.setHeightForWidth(le_cpf->sizePolicy().hasHeightForWidth());
        le_cpf->setSizePolicy(sizePolicy);
        le_cpf->setMinimumSize(QSize(95, 20));
        le_cpf->setMaximumSize(QSize(95, 20));
        le_cpf->setFont(font2);
        le_cpf->setMaxLength(14);
        le_cpf->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_cliente);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 17, 35, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font2);
        lb_rg = new QLabel(gb_dados_cliente);
        lb_rg->setObjectName(QString::fromUtf8("lb_rg"));
        lb_rg->setGeometry(QRect(126, 44, 20, 20));
        lb_rg->setFont(font2);
        lb_cpf = new QLabel(gb_dados_cliente);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setGeometry(QRect(304, 44, 26, 20));
        lb_cpf->setFont(font2);
        le_rg = new QLineEdit(gb_dados_cliente);
        le_rg->setObjectName(QString::fromUtf8("le_rg"));
        le_rg->setGeometry(QRect(147, 44, 150, 20));
        le_rg->setMinimumSize(QSize(120, 20));
        le_rg->setMaximumSize(QSize(200, 20));
        le_rg->setFont(font2);
        le_rg->setMaxLength(20);
        le_rg->setCursorPosition(20);
        le_rg->setReadOnly(true);
        le_codigo = new QLineEdit(gb_dados_cliente);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(49, 44, 70, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        le_codigo->setFont(font3);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        lb_codigo = new QLabel(gb_dados_cliente);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(5, 44, 42, 20));
        lb_codigo->setFont(font3);

        horizontalLayout_3->addWidget(gb_dados_cliente);

        gb_dados_venda = new QGroupBox(scrollAreaWidgetContents_2);
        gb_dados_venda->setObjectName(QString::fromUtf8("gb_dados_venda"));
        gb_dados_venda->setMinimumSize(QSize(140, 70));
        gb_dados_venda->setFont(font);
        gb_dados_venda->setAlignment(Qt::AlignCenter);
        lb_data = new QLabel(gb_dados_venda);
        lb_data->setObjectName(QString::fromUtf8("lb_data"));
        lb_data->setGeometry(QRect(5, 17, 30, 20));
        lb_data->setFont(font3);
        le_data = new QLineEdit(gb_dados_venda);
        le_data->setObjectName(QString::fromUtf8("le_data"));
        le_data->setGeometry(QRect(39, 17, 97, 20));
        le_data->setFont(font3);
        le_data->setCursorPosition(0);
        le_data->setReadOnly(true);

        horizontalLayout_3->addWidget(gb_dados_venda);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lb_lista_de_produtos = new QLabel(scrollAreaWidgetContents_2);
        lb_lista_de_produtos->setObjectName(QString::fromUtf8("lb_lista_de_produtos"));
        lb_lista_de_produtos->setMinimumSize(QSize(790, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        lb_lista_de_produtos->setFont(font4);
        lb_lista_de_produtos->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.3 rgba(255, 255, 255, 0));\n"
"	border: none;\n"
"	color:#000000\n"
"}\n"
""));
        lb_lista_de_produtos->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lb_lista_de_produtos);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_6 = new QFrame(scrollAreaWidgetContents_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(20, 380));
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

        horizontalLayout->addWidget(frame_6);

        tw_lista_produtos = new QTableWidget(scrollAreaWidgetContents_2);
        tw_lista_produtos->setObjectName(QString::fromUtf8("tw_lista_produtos"));
        tw_lista_produtos->setMinimumSize(QSize(750, 380));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(9);
        tw_lista_produtos->setFont(font5);
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

        horizontalLayout->addWidget(tw_lista_produtos);

        frame_3 = new QFrame(scrollAreaWidgetContents_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(20, 380));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame_3);


        verticalLayout->addLayout(horizontalLayout);

        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(790, 90));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #505050;\n"
"	border: none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame);
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(20, 2, 20, 2);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        lb_total = new QLabel(frame);
        lb_total->setObjectName(QString::fromUtf8("lb_total"));
        lb_total->setFont(font);
        lb_total->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));

        horizontalLayout_6->addWidget(lb_total);

        le_total = new QLineEdit(frame);
        le_total->setObjectName(QString::fromUtf8("le_total"));
        le_total->setMinimumSize(QSize(191, 25));
        le_total->setMaximumSize(QSize(191, 25));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Calibri"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setWeight(50);
        le_total->setFont(font6);
        le_total->setStyleSheet(QString::fromUtf8(""));
        le_total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_total->setReadOnly(true);

        horizontalLayout_6->addWidget(le_total);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        lb_desconto = new QLabel(frame);
        lb_desconto->setObjectName(QString::fromUtf8("lb_desconto"));
        lb_desconto->setFont(font);
        lb_desconto->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));

        horizontalLayout_7->addWidget(lb_desconto);

        le_desconto = new QLineEdit(frame);
        le_desconto->setObjectName(QString::fromUtf8("le_desconto"));
        le_desconto->setMinimumSize(QSize(191, 25));
        le_desconto->setMaximumSize(QSize(191, 25));
        le_desconto->setFont(font6);
        le_desconto->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        le_desconto->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_desconto->setReadOnly(false);

        horizontalLayout_7->addWidget(le_desconto);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        lb_total_pago = new QLabel(frame);
        lb_total_pago->setObjectName(QString::fromUtf8("lb_total_pago"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri"));
        font7.setPointSize(13);
        font7.setBold(true);
        font7.setWeight(75);
        lb_total_pago->setFont(font7);
        lb_total_pago->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));

        horizontalLayout_8->addWidget(lb_total_pago);

        le_total_a_pagar = new QLineEdit(frame);
        le_total_a_pagar->setObjectName(QString::fromUtf8("le_total_a_pagar"));
        le_total_a_pagar->setMinimumSize(QSize(191, 25));
        le_total_a_pagar->setMaximumSize(QSize(191, 25));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Calibri"));
        font8.setPointSize(15);
        font8.setBold(false);
        font8.setWeight(50);
        le_total_a_pagar->setFont(font8);
        le_total_a_pagar->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        le_total_a_pagar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_total_a_pagar->setReadOnly(true);

        horizontalLayout_8->addWidget(le_total_a_pagar);


        verticalLayout_4->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_4);


        verticalLayout->addWidget(frame);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lb_forma_pagamento = new QLabel(scrollAreaWidgetContents_2);
        lb_forma_pagamento->setObjectName(QString::fromUtf8("lb_forma_pagamento"));
        lb_forma_pagamento->setMinimumSize(QSize(790, 40));
        lb_forma_pagamento->setFont(font4);
        lb_forma_pagamento->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.3 rgba(255, 255, 255, 0));\n"
"	border: none;\n"
"	color:#000000\n"
"}\n"
""));
        lb_forma_pagamento->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lb_forma_pagamento);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_5 = new QFrame(scrollAreaWidgetContents_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(20, 250));
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

        horizontalLayout_2->addWidget(frame_5);

        tw_lista_pagamento = new QTableWidget(scrollAreaWidgetContents_2);
        tw_lista_pagamento->setObjectName(QString::fromUtf8("tw_lista_pagamento"));
        tw_lista_pagamento->setMinimumSize(QSize(750, 250));
        tw_lista_pagamento->setFont(font5);
        tw_lista_pagamento->setAlternatingRowColors(true);
        tw_lista_pagamento->setRowCount(0);
        tw_lista_pagamento->setColumnCount(0);
        tw_lista_pagamento->horizontalHeader()->setDefaultSectionSize(400);
        tw_lista_pagamento->horizontalHeader()->setHighlightSections(true);
        tw_lista_pagamento->horizontalHeader()->setMinimumSectionSize(95);
        tw_lista_pagamento->horizontalHeader()->setStretchLastSection(true);
        tw_lista_pagamento->verticalHeader()->setVisible(false);
        tw_lista_pagamento->verticalHeader()->setDefaultSectionSize(20);
        tw_lista_pagamento->verticalHeader()->setMinimumSectionSize(20);

        horizontalLayout_2->addWidget(tw_lista_pagamento);

        frame_4 = new QFrame(scrollAreaWidgetContents_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(20, 250));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        frame_2 = new QFrame(scrollAreaWidgetContents_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(790, 20));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #505050;\n"
"	border: none;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_4->addWidget(scrollArea);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_4);


        retranslateUi(tela_nota_venda);

        QMetaObject::connectSlotsByName(tela_nota_venda);
    } // setupUi

    void retranslateUi(QDialog *tela_nota_venda)
    {
        tela_nota_venda->setWindowTitle(QApplication::translate("tela_nota_venda", "Nota de venda;", 0, QApplication::UnicodeUTF8));
        btn_reabrir->setText(QApplication::translate("tela_nota_venda", "Reabrir", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_nota_venda", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_nota_venda", "Cancelar", 0, QApplication::UnicodeUTF8));
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
        gb_dados_venda->setTitle(QApplication::translate("tela_nota_venda", "Dados da venda", 0, QApplication::UnicodeUTF8));
        lb_data->setText(QApplication::translate("tela_nota_venda", "Data:", 0, QApplication::UnicodeUTF8));
        le_data->setInputMask(QString());
        le_data->setText(QString());
        lb_lista_de_produtos->setText(QApplication::translate("tela_nota_venda", "Lista de Produtos", 0, QApplication::UnicodeUTF8));
        lb_total->setText(QApplication::translate("tela_nota_venda", "TOTAL:", 0, QApplication::UnicodeUTF8));
        le_total->setText(QString());
        lb_desconto->setText(QApplication::translate("tela_nota_venda", "DESCONTO:", 0, QApplication::UnicodeUTF8));
        le_desconto->setInputMask(QString());
        le_desconto->setText(QString());
        lb_total_pago->setText(QApplication::translate("tela_nota_venda", "TOTAL PAGO:", 0, QApplication::UnicodeUTF8));
        le_total_a_pagar->setText(QString());
        lb_forma_pagamento->setText(QApplication::translate("tela_nota_venda", "Forma de pagamento", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_nota_venda: public Ui_tela_nota_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_NOTA_VENDA_H
