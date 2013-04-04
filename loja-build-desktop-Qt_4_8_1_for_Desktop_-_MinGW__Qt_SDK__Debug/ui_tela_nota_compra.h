/********************************************************************************
** Form generated from reading UI file 'tela_nota_compra.ui'
**
** Created: Thu 4. Apr 17:43:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_NOTA_COMPRA_H
#define UI_TELA_NOTA_COMPRA_H

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

class Ui_tela_nota_compra
{
public:
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *btn_cancelar_nota;
    QToolButton *btn_reabrir;
    QToolButton *btn_confirmar;
    QToolButton *btn_cancelar;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *hz_2;
    QGroupBox *gb_dados_fornecedor;
    QLineEdit *le_codigo;
    QLineEdit *le_razao_social;
    QLineEdit *le_nome;
    QLabel *lb_razao_social;
    QLabel *lb_codigo;
    QLabel *lb_nome;
    QLabel *lb_cnpj;
    QLineEdit *le_cnpj;
    QGroupBox *gb_dados_compra;
    QLabel *lb_data;
    QLineEdit *le_data;
    QLabel *lb_codigo_cum_nota;
    QLineEdit *le_numero_cupom_nota;
    QVBoxLayout *verticalLayout_6;
    QLabel *lb_lista_de_produtos;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_8;
    QTableWidget *tw_lista_produtos;
    QFrame *frame_9;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_8;
    QLabel *lb_total;
    QLineEdit *le_total;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_11;
    QLabel *lb_desconto;
    QLineEdit *le_desconto;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_12;
    QLabel *lb_total_pago;
    QLineEdit *le_total_a_pagar;
    QVBoxLayout *verticalLayout_8;
    QLabel *lb_forma_pagamento_jus;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_11;
    QFrame *frame_12;
    QFrame *frame_13;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *tela_nota_compra)
    {
        if (tela_nota_compra->objectName().isEmpty())
            tela_nota_compra->setObjectName(QString::fromUtf8("tela_nota_compra"));
        tela_nota_compra->resize(832, 603);
        verticalLayout_9 = new QVBoxLayout(tela_nota_compra);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        frame_7 = new QFrame(tela_nota_compra);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(800, 65));
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
        horizontalLayout_10 = new QHBoxLayout(frame_7);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 10, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        btn_cancelar_nota = new QToolButton(frame_7);
        btn_cancelar_nota->setObjectName(QString::fromUtf8("btn_cancelar_nota"));
        btn_cancelar_nota->setMaximumSize(QSize(85, 55));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btn_cancelar_nota->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/vender_cancelar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar_nota->setIcon(icon);
        btn_cancelar_nota->setIconSize(QSize(30, 30));
        btn_cancelar_nota->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_cancelar_nota->setAutoRaise(true);

        horizontalLayout_10->addWidget(btn_cancelar_nota);

        btn_reabrir = new QToolButton(frame_7);
        btn_reabrir->setObjectName(QString::fromUtf8("btn_reabrir"));
        btn_reabrir->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_reabrir->setIcon(icon1);
        btn_reabrir->setIconSize(QSize(30, 30));
        btn_reabrir->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_reabrir->setAutoRaise(true);

        horizontalLayout_10->addWidget(btn_reabrir);

        btn_confirmar = new QToolButton(frame_7);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon2);
        btn_confirmar->setIconSize(QSize(30, 30));
        btn_confirmar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_confirmar->setAutoRaise(true);

        horizontalLayout_10->addWidget(btn_confirmar);

        btn_cancelar = new QToolButton(frame_7);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon3);
        btn_cancelar->setIconSize(QSize(30, 30));
        btn_cancelar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_cancelar->setAutoRaise(true);

        horizontalLayout_10->addWidget(btn_cancelar);


        verticalLayout_9->addWidget(frame_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        scrollArea_2 = new QScrollArea(tela_nota_compra);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setMinimumSize(QSize(830, 0));
        scrollArea_2->setMaximumSize(QSize(830, 16777215));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, -355, 811, 915));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 0, 5, 5);
        hz_2 = new QHBoxLayout();
        hz_2->setSpacing(5);
        hz_2->setObjectName(QString::fromUtf8("hz_2"));
        gb_dados_fornecedor = new QGroupBox(scrollAreaWidgetContents_3);
        gb_dados_fornecedor->setObjectName(QString::fromUtf8("gb_dados_fornecedor"));
        gb_dados_fornecedor->setMinimumSize(QSize(645, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        gb_dados_fornecedor->setFont(font1);
        gb_dados_fornecedor->setAlignment(Qt::AlignCenter);
        le_codigo = new QLineEdit(gb_dados_fornecedor);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(47, 17, 70, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        le_codigo->setFont(font2);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        le_razao_social = new QLineEdit(gb_dados_fornecedor);
        le_razao_social->setObjectName(QString::fromUtf8("le_razao_social"));
        le_razao_social->setGeometry(QRect(197, 17, 443, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_razao_social->sizePolicy().hasHeightForWidth());
        le_razao_social->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        le_razao_social->setFont(font3);
        le_razao_social->setMaxLength(100);
        le_razao_social->setReadOnly(true);
        le_nome = new QLineEdit(gb_dados_fornecedor);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(39, 44, 443, 20));
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setFont(font3);
        le_nome->setMaxLength(32767);
        le_nome->setReadOnly(true);
        lb_razao_social = new QLabel(gb_dados_fornecedor);
        lb_razao_social->setObjectName(QString::fromUtf8("lb_razao_social"));
        lb_razao_social->setGeometry(QRect(122, 17, 75, 20));
        lb_razao_social->setMaximumSize(QSize(100, 20));
        lb_razao_social->setFont(font3);
        lb_codigo = new QLabel(gb_dados_fornecedor);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(5, 17, 42, 20));
        lb_codigo->setFont(font2);
        lb_nome = new QLabel(gb_dados_fornecedor);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 44, 34, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font3);
        lb_cnpj = new QLabel(gb_dados_fornecedor);
        lb_cnpj->setObjectName(QString::fromUtf8("lb_cnpj"));
        lb_cnpj->setGeometry(QRect(487, 44, 32, 20));
        lb_cnpj->setFont(font2);
        le_cnpj = new QLineEdit(gb_dados_fornecedor);
        le_cnpj->setObjectName(QString::fromUtf8("le_cnpj"));
        le_cnpj->setGeometry(QRect(520, 44, 120, 20));
        le_cnpj->setFont(font2);
        le_cnpj->setReadOnly(true);

        hz_2->addWidget(gb_dados_fornecedor);

        gb_dados_compra = new QGroupBox(scrollAreaWidgetContents_3);
        gb_dados_compra->setObjectName(QString::fromUtf8("gb_dados_compra"));
        gb_dados_compra->setMinimumSize(QSize(140, 70));
        gb_dados_compra->setFont(font);
        gb_dados_compra->setAlignment(Qt::AlignCenter);
        lb_data = new QLabel(gb_dados_compra);
        lb_data->setObjectName(QString::fromUtf8("lb_data"));
        lb_data->setGeometry(QRect(5, 17, 30, 20));
        lb_data->setFont(font2);
        le_data = new QLineEdit(gb_dados_compra);
        le_data->setObjectName(QString::fromUtf8("le_data"));
        le_data->setGeometry(QRect(37, 17, 107, 20));
        le_data->setFont(font2);
        le_data->setCursorPosition(0);
        le_data->setReadOnly(true);
        lb_codigo_cum_nota = new QLabel(gb_dados_compra);
        lb_codigo_cum_nota->setObjectName(QString::fromUtf8("lb_codigo_cum_nota"));
        lb_codigo_cum_nota->setGeometry(QRect(5, 44, 29, 20));
        lb_codigo_cum_nota->setFont(font2);
        le_numero_cupom_nota = new QLineEdit(gb_dados_compra);
        le_numero_cupom_nota->setObjectName(QString::fromUtf8("le_numero_cupom_nota"));
        le_numero_cupom_nota->setGeometry(QRect(36, 44, 108, 20));
        le_numero_cupom_nota->setFont(font2);
        le_numero_cupom_nota->setReadOnly(true);

        hz_2->addWidget(gb_dados_compra);


        verticalLayout_5->addLayout(hz_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lb_lista_de_produtos = new QLabel(scrollAreaWidgetContents_3);
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

        verticalLayout_6->addWidget(lb_lista_de_produtos);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frame_8 = new QFrame(scrollAreaWidgetContents_3);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setMinimumSize(QSize(20, 380));
        frame_8->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame_8);

        tw_lista_produtos = new QTableWidget(scrollAreaWidgetContents_3);
        tw_lista_produtos->setObjectName(QString::fromUtf8("tw_lista_produtos"));
        tw_lista_produtos->setMinimumSize(QSize(750, 380));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(9);
        tw_lista_produtos->setFont(font5);
        tw_lista_produtos->setAlternatingRowColors(true);
        tw_lista_produtos->setRowCount(0);
        tw_lista_produtos->setColumnCount(0);
        tw_lista_produtos->horizontalHeader()->setDefaultSectionSize(200);
        tw_lista_produtos->horizontalHeader()->setHighlightSections(true);
        tw_lista_produtos->horizontalHeader()->setMinimumSectionSize(50);
        tw_lista_produtos->horizontalHeader()->setStretchLastSection(true);
        tw_lista_produtos->verticalHeader()->setVisible(false);
        tw_lista_produtos->verticalHeader()->setDefaultSectionSize(20);
        tw_lista_produtos->verticalHeader()->setMinimumSectionSize(20);

        horizontalLayout_3->addWidget(tw_lista_produtos);

        frame_9 = new QFrame(scrollAreaWidgetContents_3);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMinimumSize(QSize(20, 380));
        frame_9->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
""));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame_9);


        verticalLayout_6->addLayout(horizontalLayout_3);

        frame_10 = new QFrame(scrollAreaWidgetContents_3);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setMinimumSize(QSize(790, 90));
        frame_10->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #505050;\n"
"	border: none;\n"
"}"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_10);
        horizontalLayout_12->setSpacing(2);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(20, 2, 20, 2);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        lb_total = new QLabel(frame_10);
        lb_total->setObjectName(QString::fromUtf8("lb_total"));
        lb_total->setFont(font);
        lb_total->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));

        horizontalLayout_13->addWidget(lb_total);

        le_total = new QLineEdit(frame_10);
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

        horizontalLayout_13->addWidget(le_total);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        lb_desconto = new QLabel(frame_10);
        lb_desconto->setObjectName(QString::fromUtf8("lb_desconto"));
        lb_desconto->setFont(font);
        lb_desconto->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));

        horizontalLayout_14->addWidget(lb_desconto);

        le_desconto = new QLineEdit(frame_10);
        le_desconto->setObjectName(QString::fromUtf8("le_desconto"));
        le_desconto->setMinimumSize(QSize(191, 25));
        le_desconto->setMaximumSize(QSize(191, 25));
        le_desconto->setFont(font6);
        le_desconto->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        le_desconto->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_desconto->setReadOnly(false);

        horizontalLayout_14->addWidget(le_desconto);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_12);

        lb_total_pago = new QLabel(frame_10);
        lb_total_pago->setObjectName(QString::fromUtf8("lb_total_pago"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri"));
        font7.setPointSize(13);
        font7.setBold(true);
        font7.setWeight(75);
        lb_total_pago->setFont(font7);
        lb_total_pago->setStyleSheet(QString::fromUtf8("color: rgb(217, 217, 217);"));

        horizontalLayout_15->addWidget(lb_total_pago);

        le_total_a_pagar = new QLineEdit(frame_10);
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

        horizontalLayout_15->addWidget(le_total_a_pagar);


        verticalLayout_7->addLayout(horizontalLayout_15);


        horizontalLayout_12->addLayout(verticalLayout_7);


        verticalLayout_6->addWidget(frame_10);


        verticalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        lb_forma_pagamento_jus = new QLabel(scrollAreaWidgetContents_3);
        lb_forma_pagamento_jus->setObjectName(QString::fromUtf8("lb_forma_pagamento_jus"));
        lb_forma_pagamento_jus->setMinimumSize(QSize(790, 40));
        lb_forma_pagamento_jus->setFont(font4);
        lb_forma_pagamento_jus->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.3 rgba(255, 255, 255, 0));\n"
"	border: none;\n"
"	color:#000000\n"
"}\n"
""));
        lb_forma_pagamento_jus->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(lb_forma_pagamento_jus);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_11 = new QFrame(scrollAreaWidgetContents_3);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setMinimumSize(QSize(20, 250));
        frame_11->setMaximumSize(QSize(20, 250));
        frame_11->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame_11);

        frame_12 = new QFrame(scrollAreaWidgetContents_3);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setMinimumSize(QSize(20, 250));
        frame_12->setMaximumSize(QSize(20, 250));
        frame_12->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #505050, stop:0.6 #000000);\n"
"	border: none;\n"
"}\n"
""));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame_12);


        verticalLayout_8->addLayout(horizontalLayout_2);

        frame_13 = new QFrame(scrollAreaWidgetContents_3);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setMinimumSize(QSize(790, 20));
        frame_13->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #505050;\n"
"	border: none;\n"
"}"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(frame_13);


        verticalLayout_5->addLayout(verticalLayout_8);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout_11->addWidget(scrollArea_2);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);


        verticalLayout_9->addLayout(horizontalLayout_11);


        retranslateUi(tela_nota_compra);

        QMetaObject::connectSlotsByName(tela_nota_compra);
    } // setupUi

    void retranslateUi(QDialog *tela_nota_compra)
    {
        tela_nota_compra->setWindowTitle(QApplication::translate("tela_nota_compra", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_cancelar_nota->setText(QApplication::translate("tela_nota_compra", "Cancelar Nota", 0, QApplication::UnicodeUTF8));
        btn_reabrir->setText(QApplication::translate("tela_nota_compra", "Reabrir", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_nota_compra", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_nota_compra", "Cancelar", 0, QApplication::UnicodeUTF8));
        gb_dados_fornecedor->setTitle(QApplication::translate("tela_nota_compra", "Dados do Forncedor", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_nota_compra", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        le_razao_social->setText(QString());
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        lb_razao_social->setText(QApplication::translate("tela_nota_compra", "Raz\303\243o Social:", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_nota_compra", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_nota_compra", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_cnpj->setText(QApplication::translate("tela_nota_compra", "CNPJ:", 0, QApplication::UnicodeUTF8));
        le_cnpj->setInputMask(QApplication::translate("tela_nota_compra", "00.000.000/0000-00; ", 0, QApplication::UnicodeUTF8));
        le_cnpj->setText(QApplication::translate("tela_nota_compra", "../-", 0, QApplication::UnicodeUTF8));
        gb_dados_compra->setTitle(QApplication::translate("tela_nota_compra", "Dados da venda", 0, QApplication::UnicodeUTF8));
        lb_data->setText(QApplication::translate("tela_nota_compra", "Data:", 0, QApplication::UnicodeUTF8));
        le_data->setInputMask(QString());
        le_data->setText(QString());
        lb_codigo_cum_nota->setText(QApplication::translate("tela_nota_compra", "N\303\272m:", 0, QApplication::UnicodeUTF8));
        le_numero_cupom_nota->setInputMask(QApplication::translate("tela_nota_compra", "0000000; ", 0, QApplication::UnicodeUTF8));
        le_numero_cupom_nota->setText(QString());
        lb_lista_de_produtos->setText(QApplication::translate("tela_nota_compra", "Lista de Produtos", 0, QApplication::UnicodeUTF8));
        lb_total->setText(QApplication::translate("tela_nota_compra", "TOTAL:", 0, QApplication::UnicodeUTF8));
        le_total->setText(QString());
        lb_desconto->setText(QApplication::translate("tela_nota_compra", "DESCONTO:", 0, QApplication::UnicodeUTF8));
        le_desconto->setInputMask(QString());
        le_desconto->setText(QString());
        lb_total_pago->setText(QApplication::translate("tela_nota_compra", "TOTAL PAGO:", 0, QApplication::UnicodeUTF8));
        le_total_a_pagar->setText(QString());
        lb_forma_pagamento_jus->setText(QApplication::translate("tela_nota_compra", "Forma de pagamento", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_nota_compra: public Ui_tela_nota_compra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_NOTA_COMPRA_H
