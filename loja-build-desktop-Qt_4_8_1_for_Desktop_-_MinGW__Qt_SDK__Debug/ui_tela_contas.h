/********************************************************************************
** Form generated from reading UI file 'tela_contas.ui'
**
** Created: Sun 10. Feb 13:16:34 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CONTAS_H
#define UI_TELA_CONTAS_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_contas
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tbw_geral;
    QWidget *tab_fluxo_caixa;
    QVBoxLayout *verticalLayout_2;
    QFrame *fr_buscar;
    QLabel *lb_data;
    QDateEdit *data;
    QPushButton *btn_buscar;
    QTableWidget *tw_fluxo_caixa;
    QFrame *fr_informacoes;
    QLabel *lb_receitas_fixa;
    QLabel *lb_receitas_dina;
    QLabel *lb_despesas_fixa;
    QLabel *lb_despesas_dina;
    QLabel *lb_saldo_dina;
    QLabel *lb_saldo_fixo;
    QWidget *tab_contas_receber;
    QVBoxLayout *verticalLayout_3;
    QFrame *fr;
    QPushButton *btn_buscar_cr;
    QLabel *lb_nome_cr;
    QDateEdit *data_inicial_cr;
    QLabel *lb_a_cr;
    QDateEdit *data_final_cr;
    QPushButton *btn_filtrar_cr;
    QLabel *lb_status_cr;
    QLabel *lb_codigo_cr;
    QComboBox *cb_status_cr;
    QLineEdit *le_codigo_cr;
    QFrame *fr_linha;
    QPushButton *btn_limparcr;
    QTableWidget *tw_contas_receber;
    QWidget *tab_contas_pagar;
    QVBoxLayout *verticalLayout_4;
    QFrame *fr_2;
    QPushButton *btn_buscar_cp;
    QLabel *lb_nome_cp;
    QDateEdit *data_inicial_cp;
    QLabel *lb_a_cp;
    QDateEdit *data_final_cp;
    QPushButton *btn_filtrar_cp;
    QLabel *lb_status_cp;
    QLabel *lb_codigo_cp;
    QComboBox *cb_status_cp;
    QLineEdit *le_codigo_cp;
    QFrame *fr_linha_cp;
    QPushButton *btn_limpar_cp;
    QTableWidget *tw_contas_pagar;
    QWidget *tab_notas_venda;
    QVBoxLayout *verticalLayout_5;
    QFrame *fr_buscar_notas_venda;
    QLabel *lb_nome_cliente;
    QPushButton *btn_buscar_nota_venda;
    QLineEdit *le_nome_cliente;
    QTableWidget *tw_lista_notas_venda;
    QWidget *tab_notas_compra;
    QVBoxLayout *verticalLayout_6;
    QFrame *fr_buscar_notas_compra;
    QLineEdit *le_nome_fornecedor;
    QLabel *lb_nome_fornecedor;
    QPushButton *btn_buscar_nota_compra;
    QTableWidget *tw_lista_notas_compra;

    void setupUi(QMainWindow *tela_contas)
    {
        if (tela_contas->objectName().isEmpty())
            tela_contas->setObjectName(QString::fromUtf8("tela_contas"));
        tela_contas->setWindowModality(Qt::ApplicationModal);
        tela_contas->resize(800, 600);
        centralwidget = new QWidget(tela_contas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tbw_geral = new QTabWidget(centralwidget);
        tbw_geral->setObjectName(QString::fromUtf8("tbw_geral"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        tbw_geral->setFont(font);
        tbw_geral->setAutoFillBackground(false);
        tbw_geral->setTabShape(QTabWidget::Rounded);
        tbw_geral->setElideMode(Qt::ElideMiddle);
        tbw_geral->setDocumentMode(false);
        tbw_geral->setTabsClosable(false);
        tbw_geral->setMovable(false);
        tab_fluxo_caixa = new QWidget();
        tab_fluxo_caixa->setObjectName(QString::fromUtf8("tab_fluxo_caixa"));
        verticalLayout_2 = new QVBoxLayout(tab_fluxo_caixa);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fr_buscar = new QFrame(tab_fluxo_caixa);
        fr_buscar->setObjectName(QString::fromUtf8("fr_buscar"));
        fr_buscar->setMinimumSize(QSize(0, 40));
        fr_buscar->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #777777, stop:0.6 #525252);\n"
"	border: none;\n"
"}"));
        fr_buscar->setFrameShape(QFrame::WinPanel);
        fr_buscar->setFrameShadow(QFrame::Raised);
        lb_data = new QLabel(fr_buscar);
        lb_data->setObjectName(QString::fromUtf8("lb_data"));
        lb_data->setGeometry(QRect(10, 10, 140, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        lb_data->setFont(font1);
        lb_data->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        data = new QDateEdit(fr_buscar);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(152, 10, 70, 20));
        data->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        data->setMinimumDate(QDate(1990, 9, 14));
        data->setCurrentSection(QDateTimeEdit::MonthSection);
        data->setCalendarPopup(false);
        btn_buscar = new QPushButton(fr_buscar);
        btn_buscar->setObjectName(QString::fromUtf8("btn_buscar"));
        btn_buscar->setGeometry(QRect(232, 8, 90, 24));
        btn_buscar->setMinimumSize(QSize(0, 24));
        btn_buscar->setMaximumSize(QSize(90, 24));
        btn_buscar->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/buscar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_buscar->setIcon(icon);
        btn_buscar->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(fr_buscar);

        tw_fluxo_caixa = new QTableWidget(tab_fluxo_caixa);
        tw_fluxo_caixa->setObjectName(QString::fromUtf8("tw_fluxo_caixa"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        tw_fluxo_caixa->setFont(font2);
        tw_fluxo_caixa->setRowCount(0);
        tw_fluxo_caixa->setColumnCount(0);
        tw_fluxo_caixa->horizontalHeader()->setMinimumSectionSize(95);
        tw_fluxo_caixa->horizontalHeader()->setStretchLastSection(true);
        tw_fluxo_caixa->verticalHeader()->setVisible(false);
        tw_fluxo_caixa->verticalHeader()->setDefaultSectionSize(15);
        tw_fluxo_caixa->verticalHeader()->setMinimumSectionSize(15);

        verticalLayout_2->addWidget(tw_fluxo_caixa);

        fr_informacoes = new QFrame(tab_fluxo_caixa);
        fr_informacoes->setObjectName(QString::fromUtf8("fr_informacoes"));
        fr_informacoes->setMinimumSize(QSize(0, 40));
        fr_informacoes->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	border: none;\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.534091 rgba(238, 238, 238, 227), stop:0.965909 rgba(71, 71, 71, 178));\n"
"}"));
        fr_informacoes->setFrameShape(QFrame::WinPanel);
        fr_informacoes->setFrameShadow(QFrame::Raised);
        lb_receitas_fixa = new QLabel(fr_informacoes);
        lb_receitas_fixa->setObjectName(QString::fromUtf8("lb_receitas_fixa"));
        lb_receitas_fixa->setGeometry(QRect(10, 10, 52, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        lb_receitas_fixa->setFont(font3);
        lb_receitas_fixa->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: none"));
        lb_receitas_dina = new QLabel(fr_informacoes);
        lb_receitas_dina->setObjectName(QString::fromUtf8("lb_receitas_dina"));
        lb_receitas_dina->setGeometry(QRect(68, 10, 100, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(11);
        lb_receitas_dina->setFont(font4);
        lb_receitas_dina->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(0, 0, 255);\n"
""));
        lb_despesas_fixa = new QLabel(fr_informacoes);
        lb_despesas_fixa->setObjectName(QString::fromUtf8("lb_despesas_fixa"));
        lb_despesas_fixa->setGeometry(QRect(190, 10, 59, 20));
        lb_despesas_fixa->setFont(font3);
        lb_despesas_fixa->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: none"));
        lb_despesas_dina = new QLabel(fr_informacoes);
        lb_despesas_dina->setObjectName(QString::fromUtf8("lb_despesas_dina"));
        lb_despesas_dina->setGeometry(QRect(255, 10, 100, 20));
        lb_despesas_dina->setFont(font4);
        lb_despesas_dina->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 0, 0);\n"
""));
        lb_saldo_dina = new QLabel(fr_informacoes);
        lb_saldo_dina->setObjectName(QString::fromUtf8("lb_saldo_dina"));
        lb_saldo_dina->setGeometry(QRect(420, 10, 100, 20));
        lb_saldo_dina->setFont(font4);
        lb_saldo_dina->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(0, 150, 0);\n"
""));
        lb_saldo_fixo = new QLabel(fr_informacoes);
        lb_saldo_fixo->setObjectName(QString::fromUtf8("lb_saldo_fixo"));
        lb_saldo_fixo->setGeometry(QRect(380, 10, 35, 20));
        lb_saldo_fixo->setFont(font3);
        lb_saldo_fixo->setStyleSheet(QString::fromUtf8("color: rgb(0, 150, 0);\n"
"background-color: none"));

        verticalLayout_2->addWidget(fr_informacoes);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/caixa.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbw_geral->addTab(tab_fluxo_caixa, icon1, QString());
        tab_contas_receber = new QWidget();
        tab_contas_receber->setObjectName(QString::fromUtf8("tab_contas_receber"));
        verticalLayout_3 = new QVBoxLayout(tab_contas_receber);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        fr = new QFrame(tab_contas_receber);
        fr->setObjectName(QString::fromUtf8("fr"));
        fr->setMinimumSize(QSize(794, 40));
        fr->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #777777, stop:0.6 #525252);\n"
"	border: none;\n"
"}"));
        fr->setFrameShape(QFrame::WinPanel);
        fr->setFrameShadow(QFrame::Raised);
        fr->setLineWidth(1);
        btn_buscar_cr = new QPushButton(fr);
        btn_buscar_cr->setObjectName(QString::fromUtf8("btn_buscar_cr"));
        btn_buscar_cr->setGeometry(QRect(295, 8, 75, 24));
        btn_buscar_cr->setMinimumSize(QSize(0, 24));
        btn_buscar_cr->setMaximumSize(QSize(90, 24));
        btn_buscar_cr->setFont(font1);
        btn_buscar_cr->setIcon(icon);
        btn_buscar_cr->setIconSize(QSize(20, 20));
        lb_nome_cr = new QLabel(fr);
        lb_nome_cr->setObjectName(QString::fromUtf8("lb_nome_cr"));
        lb_nome_cr->setGeometry(QRect(5, 10, 62, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        font5.setKerning(false);
        lb_nome_cr->setFont(font5);
        lb_nome_cr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: none;"));
        data_inicial_cr = new QDateEdit(fr);
        data_inicial_cr->setObjectName(QString::fromUtf8("data_inicial_cr"));
        data_inicial_cr->setGeometry(QRect(67, 10, 100, 20));
        QFont font6;
        font6.setBold(false);
        font6.setWeight(50);
        data_inicial_cr->setFont(font6);
        data_inicial_cr->setStyleSheet(QString::fromUtf8("background-color: none;"));
        data_inicial_cr->setFrame(true);
        data_inicial_cr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data_inicial_cr->setReadOnly(false);
        data_inicial_cr->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        data_inicial_cr->setAccelerated(false);
        data_inicial_cr->setKeyboardTracking(true);
        data_inicial_cr->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        data_inicial_cr->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        data_inicial_cr->setCalendarPopup(true);
        data_inicial_cr->setTimeSpec(Qt::LocalTime);
        lb_a_cr = new QLabel(fr);
        lb_a_cr->setObjectName(QString::fromUtf8("lb_a_cr"));
        lb_a_cr->setGeometry(QRect(174, 10, 7, 20));
        lb_a_cr->setFont(font5);
        lb_a_cr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: none;"));
        data_final_cr = new QDateEdit(fr);
        data_final_cr->setObjectName(QString::fromUtf8("data_final_cr"));
        data_final_cr->setGeometry(QRect(188, 10, 100, 20));
        data_final_cr->setFont(font6);
        data_final_cr->setStyleSheet(QString::fromUtf8("background-color: none;"));
        data_final_cr->setFrame(true);
        data_final_cr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data_final_cr->setReadOnly(false);
        data_final_cr->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        data_final_cr->setAccelerated(false);
        data_final_cr->setKeyboardTracking(true);
        data_final_cr->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        data_final_cr->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        data_final_cr->setCalendarPopup(true);
        data_final_cr->setTimeSpec(Qt::LocalTime);
        btn_filtrar_cr = new QPushButton(fr);
        btn_filtrar_cr->setObjectName(QString::fromUtf8("btn_filtrar_cr"));
        btn_filtrar_cr->setGeometry(QRect(625, 8, 70, 24));
        btn_filtrar_cr->setMinimumSize(QSize(0, 24));
        btn_filtrar_cr->setMaximumSize(QSize(90, 24));
        btn_filtrar_cr->setFont(font1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/filtrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_filtrar_cr->setIcon(icon2);
        btn_filtrar_cr->setIconSize(QSize(20, 20));
        lb_status_cr = new QLabel(fr);
        lb_status_cr->setObjectName(QString::fromUtf8("lb_status_cr"));
        lb_status_cr->setGeometry(QRect(500, 10, 38, 20));
        lb_status_cr->setFont(font1);
        lb_status_cr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: none;"));
        lb_codigo_cr = new QLabel(fr);
        lb_codigo_cr->setObjectName(QString::fromUtf8("lb_codigo_cr"));
        lb_codigo_cr->setGeometry(QRect(381, 10, 42, 20));
        lb_codigo_cr->setFont(font1);
        lb_codigo_cr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: none;"));
        cb_status_cr = new QComboBox(fr);
        cb_status_cr->setObjectName(QString::fromUtf8("cb_status_cr"));
        cb_status_cr->setGeometry(QRect(538, 10, 80, 20));
        cb_status_cr->setFont(font1);
        cb_status_cr->setStyleSheet(QString::fromUtf8("background-color: none;"));
        le_codigo_cr = new QLineEdit(fr);
        le_codigo_cr->setObjectName(QString::fromUtf8("le_codigo_cr"));
        le_codigo_cr->setGeometry(QRect(423, 10, 70, 20));
        le_codigo_cr->setFont(font1);
        le_codigo_cr->setCursorPosition(9);
        fr_linha = new QFrame(fr);
        fr_linha->setObjectName(QString::fromUtf8("fr_linha"));
        fr_linha->setGeometry(QRect(374, 0, 2, 40));
        fr_linha->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	background-color: rgb(193, 193, 193);\n"
"	border: none;\n"
"}"));
        fr_linha->setFrameShape(QFrame::Panel);
        fr_linha->setFrameShadow(QFrame::Sunken);
        btn_limparcr = new QPushButton(fr);
        btn_limparcr->setObjectName(QString::fromUtf8("btn_limparcr"));
        btn_limparcr->setGeometry(QRect(700, 8, 90, 24));
        btn_limparcr->setMinimumSize(QSize(90, 24));
        btn_limparcr->setMaximumSize(QSize(90, 24));
        btn_limparcr->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_limparcr->setIcon(icon3);
        btn_limparcr->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(fr);

        tw_contas_receber = new QTableWidget(tab_contas_receber);
        tw_contas_receber->setObjectName(QString::fromUtf8("tw_contas_receber"));
        tw_contas_receber->setFont(font2);
        tw_contas_receber->setAlternatingRowColors(true);
        tw_contas_receber->setRowCount(0);
        tw_contas_receber->setColumnCount(0);
        tw_contas_receber->horizontalHeader()->setDefaultSectionSize(450);
        tw_contas_receber->horizontalHeader()->setHighlightSections(true);
        tw_contas_receber->horizontalHeader()->setMinimumSectionSize(60);
        tw_contas_receber->horizontalHeader()->setStretchLastSection(true);
        tw_contas_receber->verticalHeader()->setVisible(false);
        tw_contas_receber->verticalHeader()->setDefaultSectionSize(20);
        tw_contas_receber->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout_3->addWidget(tw_contas_receber);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/ganho.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbw_geral->addTab(tab_contas_receber, icon4, QString());
        tab_contas_pagar = new QWidget();
        tab_contas_pagar->setObjectName(QString::fromUtf8("tab_contas_pagar"));
        verticalLayout_4 = new QVBoxLayout(tab_contas_pagar);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        fr_2 = new QFrame(tab_contas_pagar);
        fr_2->setObjectName(QString::fromUtf8("fr_2"));
        fr_2->setMinimumSize(QSize(794, 40));
        fr_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #777777, stop:0.6 #525252);\n"
"	border: none;\n"
"}"));
        fr_2->setFrameShape(QFrame::WinPanel);
        fr_2->setFrameShadow(QFrame::Raised);
        fr_2->setLineWidth(1);
        btn_buscar_cp = new QPushButton(fr_2);
        btn_buscar_cp->setObjectName(QString::fromUtf8("btn_buscar_cp"));
        btn_buscar_cp->setGeometry(QRect(295, 8, 75, 24));
        btn_buscar_cp->setMinimumSize(QSize(0, 24));
        btn_buscar_cp->setMaximumSize(QSize(90, 24));
        btn_buscar_cp->setFont(font1);
        btn_buscar_cp->setIcon(icon);
        btn_buscar_cp->setIconSize(QSize(20, 20));
        lb_nome_cp = new QLabel(fr_2);
        lb_nome_cp->setObjectName(QString::fromUtf8("lb_nome_cp"));
        lb_nome_cp->setGeometry(QRect(5, 10, 62, 20));
        lb_nome_cp->setFont(font5);
        lb_nome_cp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: none;"));
        data_inicial_cp = new QDateEdit(fr_2);
        data_inicial_cp->setObjectName(QString::fromUtf8("data_inicial_cp"));
        data_inicial_cp->setGeometry(QRect(67, 10, 100, 20));
        data_inicial_cp->setFont(font6);
        data_inicial_cp->setStyleSheet(QString::fromUtf8("background-color: none;"));
        data_inicial_cp->setFrame(true);
        data_inicial_cp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data_inicial_cp->setReadOnly(false);
        data_inicial_cp->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        data_inicial_cp->setAccelerated(false);
        data_inicial_cp->setKeyboardTracking(true);
        data_inicial_cp->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        data_inicial_cp->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        data_inicial_cp->setCalendarPopup(true);
        data_inicial_cp->setTimeSpec(Qt::LocalTime);
        lb_a_cp = new QLabel(fr_2);
        lb_a_cp->setObjectName(QString::fromUtf8("lb_a_cp"));
        lb_a_cp->setGeometry(QRect(174, 10, 7, 20));
        lb_a_cp->setFont(font5);
        lb_a_cp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: none;"));
        data_final_cp = new QDateEdit(fr_2);
        data_final_cp->setObjectName(QString::fromUtf8("data_final_cp"));
        data_final_cp->setGeometry(QRect(188, 10, 100, 20));
        data_final_cp->setFont(font6);
        data_final_cp->setStyleSheet(QString::fromUtf8("background-color: none;"));
        data_final_cp->setFrame(true);
        data_final_cp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data_final_cp->setReadOnly(false);
        data_final_cp->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        data_final_cp->setAccelerated(false);
        data_final_cp->setKeyboardTracking(true);
        data_final_cp->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        data_final_cp->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        data_final_cp->setCalendarPopup(true);
        data_final_cp->setTimeSpec(Qt::LocalTime);
        btn_filtrar_cp = new QPushButton(fr_2);
        btn_filtrar_cp->setObjectName(QString::fromUtf8("btn_filtrar_cp"));
        btn_filtrar_cp->setGeometry(QRect(625, 8, 70, 24));
        btn_filtrar_cp->setMinimumSize(QSize(0, 24));
        btn_filtrar_cp->setMaximumSize(QSize(90, 24));
        btn_filtrar_cp->setFont(font1);
        btn_filtrar_cp->setIcon(icon2);
        btn_filtrar_cp->setIconSize(QSize(20, 20));
        lb_status_cp = new QLabel(fr_2);
        lb_status_cp->setObjectName(QString::fromUtf8("lb_status_cp"));
        lb_status_cp->setGeometry(QRect(500, 10, 38, 20));
        lb_status_cp->setFont(font1);
        lb_status_cp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: none;"));
        lb_codigo_cp = new QLabel(fr_2);
        lb_codigo_cp->setObjectName(QString::fromUtf8("lb_codigo_cp"));
        lb_codigo_cp->setGeometry(QRect(381, 10, 42, 20));
        lb_codigo_cp->setFont(font1);
        lb_codigo_cp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: none;"));
        cb_status_cp = new QComboBox(fr_2);
        cb_status_cp->setObjectName(QString::fromUtf8("cb_status_cp"));
        cb_status_cp->setGeometry(QRect(538, 10, 80, 20));
        cb_status_cp->setFont(font1);
        cb_status_cp->setStyleSheet(QString::fromUtf8("background-color: none;"));
        le_codigo_cp = new QLineEdit(fr_2);
        le_codigo_cp->setObjectName(QString::fromUtf8("le_codigo_cp"));
        le_codigo_cp->setGeometry(QRect(423, 10, 70, 20));
        le_codigo_cp->setFont(font1);
        le_codigo_cp->setCursorPosition(9);
        fr_linha_cp = new QFrame(fr_2);
        fr_linha_cp->setObjectName(QString::fromUtf8("fr_linha_cp"));
        fr_linha_cp->setGeometry(QRect(374, 0, 2, 40));
        fr_linha_cp->setStyleSheet(QString::fromUtf8("QFrame{	\n"
"	background-color: rgb(193, 193, 193);\n"
"	border: none;\n"
"}"));
        fr_linha_cp->setFrameShape(QFrame::Panel);
        fr_linha_cp->setFrameShadow(QFrame::Sunken);
        btn_limpar_cp = new QPushButton(fr_2);
        btn_limpar_cp->setObjectName(QString::fromUtf8("btn_limpar_cp"));
        btn_limpar_cp->setGeometry(QRect(700, 8, 90, 24));
        btn_limpar_cp->setMinimumSize(QSize(90, 24));
        btn_limpar_cp->setMaximumSize(QSize(90, 24));
        btn_limpar_cp->setFont(font1);
        btn_limpar_cp->setIcon(icon3);
        btn_limpar_cp->setIconSize(QSize(20, 20));

        verticalLayout_4->addWidget(fr_2);

        tw_contas_pagar = new QTableWidget(tab_contas_pagar);
        tw_contas_pagar->setObjectName(QString::fromUtf8("tw_contas_pagar"));
        tw_contas_pagar->setFont(font2);
        tw_contas_pagar->setAlternatingRowColors(true);
        tw_contas_pagar->setRowCount(0);
        tw_contas_pagar->setColumnCount(0);
        tw_contas_pagar->horizontalHeader()->setDefaultSectionSize(450);
        tw_contas_pagar->horizontalHeader()->setHighlightSections(true);
        tw_contas_pagar->horizontalHeader()->setMinimumSectionSize(60);
        tw_contas_pagar->horizontalHeader()->setStretchLastSection(true);
        tw_contas_pagar->verticalHeader()->setVisible(false);
        tw_contas_pagar->verticalHeader()->setDefaultSectionSize(20);
        tw_contas_pagar->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout_4->addWidget(tw_contas_pagar);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/despesa.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbw_geral->addTab(tab_contas_pagar, icon5, QString());
        tab_notas_venda = new QWidget();
        tab_notas_venda->setObjectName(QString::fromUtf8("tab_notas_venda"));
        verticalLayout_5 = new QVBoxLayout(tab_notas_venda);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        fr_buscar_notas_venda = new QFrame(tab_notas_venda);
        fr_buscar_notas_venda->setObjectName(QString::fromUtf8("fr_buscar_notas_venda"));
        fr_buscar_notas_venda->setMinimumSize(QSize(0, 40));
        fr_buscar_notas_venda->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #777777, stop:0.6 #525252);\n"
"	border: none;\n"
"}"));
        fr_buscar_notas_venda->setFrameShape(QFrame::WinPanel);
        fr_buscar_notas_venda->setFrameShadow(QFrame::Raised);
        lb_nome_cliente = new QLabel(fr_buscar_notas_venda);
        lb_nome_cliente->setObjectName(QString::fromUtf8("lb_nome_cliente"));
        lb_nome_cliente->setGeometry(QRect(10, 10, 92, 20));
        lb_nome_cliente->setFont(font1);
        lb_nome_cliente->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_buscar_nota_venda = new QPushButton(fr_buscar_notas_venda);
        btn_buscar_nota_venda->setObjectName(QString::fromUtf8("btn_buscar_nota_venda"));
        btn_buscar_nota_venda->setGeometry(QRect(538, 8, 90, 24));
        btn_buscar_nota_venda->setMinimumSize(QSize(0, 24));
        btn_buscar_nota_venda->setMaximumSize(QSize(90, 24));
        btn_buscar_nota_venda->setFont(font1);
        btn_buscar_nota_venda->setIcon(icon);
        btn_buscar_nota_venda->setIconSize(QSize(20, 20));
        le_nome_cliente = new QLineEdit(fr_buscar_notas_venda);
        le_nome_cliente->setObjectName(QString::fromUtf8("le_nome_cliente"));
        le_nome_cliente->setGeometry(QRect(103, 10, 430, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nome_cliente->sizePolicy().hasHeightForWidth());
        le_nome_cliente->setSizePolicy(sizePolicy);
        le_nome_cliente->setMinimumSize(QSize(410, 20));
        le_nome_cliente->setMaximumSize(QSize(500, 20));
        le_nome_cliente->setFont(font5);
        le_nome_cliente->setMaxLength(60);
        le_nome_cliente->setReadOnly(false);

        verticalLayout_5->addWidget(fr_buscar_notas_venda);

        tw_lista_notas_venda = new QTableWidget(tab_notas_venda);
        tw_lista_notas_venda->setObjectName(QString::fromUtf8("tw_lista_notas_venda"));
        tw_lista_notas_venda->setFont(font2);
        tw_lista_notas_venda->setRowCount(0);
        tw_lista_notas_venda->setColumnCount(0);
        tw_lista_notas_venda->horizontalHeader()->setMinimumSectionSize(95);
        tw_lista_notas_venda->horizontalHeader()->setStretchLastSection(true);
        tw_lista_notas_venda->verticalHeader()->setVisible(false);
        tw_lista_notas_venda->verticalHeader()->setDefaultSectionSize(20);
        tw_lista_notas_venda->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout_5->addWidget(tw_lista_notas_venda);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/vender.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbw_geral->addTab(tab_notas_venda, icon6, QString());
        tab_notas_compra = new QWidget();
        tab_notas_compra->setObjectName(QString::fromUtf8("tab_notas_compra"));
        verticalLayout_6 = new QVBoxLayout(tab_notas_compra);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        fr_buscar_notas_compra = new QFrame(tab_notas_compra);
        fr_buscar_notas_compra->setObjectName(QString::fromUtf8("fr_buscar_notas_compra"));
        fr_buscar_notas_compra->setMinimumSize(QSize(0, 40));
        fr_buscar_notas_compra->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #777777, stop:0.6 #525252);\n"
"	border: none;\n"
"}"));
        fr_buscar_notas_compra->setFrameShape(QFrame::WinPanel);
        fr_buscar_notas_compra->setFrameShadow(QFrame::Raised);
        le_nome_fornecedor = new QLineEdit(fr_buscar_notas_compra);
        le_nome_fornecedor->setObjectName(QString::fromUtf8("le_nome_fornecedor"));
        le_nome_fornecedor->setGeometry(QRect(128, 10, 430, 20));
        sizePolicy.setHeightForWidth(le_nome_fornecedor->sizePolicy().hasHeightForWidth());
        le_nome_fornecedor->setSizePolicy(sizePolicy);
        le_nome_fornecedor->setMinimumSize(QSize(410, 20));
        le_nome_fornecedor->setMaximumSize(QSize(500, 20));
        le_nome_fornecedor->setFont(font5);
        le_nome_fornecedor->setMaxLength(60);
        le_nome_fornecedor->setReadOnly(false);
        lb_nome_fornecedor = new QLabel(fr_buscar_notas_compra);
        lb_nome_fornecedor->setObjectName(QString::fromUtf8("lb_nome_fornecedor"));
        lb_nome_fornecedor->setGeometry(QRect(10, 10, 115, 20));
        lb_nome_fornecedor->setFont(font1);
        lb_nome_fornecedor->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_buscar_nota_compra = new QPushButton(fr_buscar_notas_compra);
        btn_buscar_nota_compra->setObjectName(QString::fromUtf8("btn_buscar_nota_compra"));
        btn_buscar_nota_compra->setGeometry(QRect(563, 8, 90, 24));
        btn_buscar_nota_compra->setMinimumSize(QSize(0, 24));
        btn_buscar_nota_compra->setMaximumSize(QSize(90, 24));
        btn_buscar_nota_compra->setFont(font1);
        btn_buscar_nota_compra->setIcon(icon);
        btn_buscar_nota_compra->setIconSize(QSize(20, 20));

        verticalLayout_6->addWidget(fr_buscar_notas_compra);

        tw_lista_notas_compra = new QTableWidget(tab_notas_compra);
        tw_lista_notas_compra->setObjectName(QString::fromUtf8("tw_lista_notas_compra"));
        tw_lista_notas_compra->setFont(font2);
        tw_lista_notas_compra->setRowCount(0);
        tw_lista_notas_compra->setColumnCount(0);
        tw_lista_notas_compra->horizontalHeader()->setMinimumSectionSize(95);
        tw_lista_notas_compra->horizontalHeader()->setStretchLastSection(true);
        tw_lista_notas_compra->verticalHeader()->setVisible(false);
        tw_lista_notas_compra->verticalHeader()->setDefaultSectionSize(15);
        tw_lista_notas_compra->verticalHeader()->setMinimumSectionSize(15);

        verticalLayout_6->addWidget(tw_lista_notas_compra);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/compra.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbw_geral->addTab(tab_notas_compra, icon7, QString());

        verticalLayout->addWidget(tbw_geral);

        tela_contas->setCentralWidget(centralwidget);

        retranslateUi(tela_contas);

        tbw_geral->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(tela_contas);
    } // setupUi

    void retranslateUi(QMainWindow *tela_contas)
    {
        tela_contas->setWindowTitle(QApplication::translate("tela_contas", "Contas", 0, QApplication::UnicodeUTF8));
        lb_data->setText(QApplication::translate("tela_contas", "Fluxo de caixa do m\303\252s de:", 0, QApplication::UnicodeUTF8));
        data->setDisplayFormat(QApplication::translate("tela_contas", "MM/yyyy", 0, QApplication::UnicodeUTF8));
        btn_buscar->setText(QApplication::translate("tela_contas", "Buscar", 0, QApplication::UnicodeUTF8));
        lb_receitas_fixa->setText(QApplication::translate("tela_contas", "Receitas", 0, QApplication::UnicodeUTF8));
        lb_receitas_dina->setText(QApplication::translate("tela_contas", "R$ 12.000,59", 0, QApplication::UnicodeUTF8));
        lb_despesas_fixa->setText(QApplication::translate("tela_contas", "Despesas", 0, QApplication::UnicodeUTF8));
        lb_despesas_dina->setText(QApplication::translate("tela_contas", "R$ 12.000,59", 0, QApplication::UnicodeUTF8));
        lb_saldo_dina->setText(QApplication::translate("tela_contas", "R$ 12.000,59", 0, QApplication::UnicodeUTF8));
        lb_saldo_fixo->setText(QApplication::translate("tela_contas", "Saldo", 0, QApplication::UnicodeUTF8));
        tbw_geral->setTabText(tbw_geral->indexOf(tab_fluxo_caixa), QApplication::translate("tela_contas", "Fluxo de caixa", 0, QApplication::UnicodeUTF8));
        btn_buscar_cr->setText(QApplication::translate("tela_contas", "Buscar", 0, QApplication::UnicodeUTF8));
        lb_nome_cr->setText(QApplication::translate("tela_contas", "Per\303\255odo de:", 0, QApplication::UnicodeUTF8));
        lb_a_cr->setText(QApplication::translate("tela_contas", "a", 0, QApplication::UnicodeUTF8));
        btn_filtrar_cr->setText(QApplication::translate("tela_contas", "Filtrar", 0, QApplication::UnicodeUTF8));
        lb_status_cr->setText(QApplication::translate("tela_contas", "Status:", 0, QApplication::UnicodeUTF8));
        lb_codigo_cr->setText(QApplication::translate("tela_contas", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        cb_status_cr->clear();
        cb_status_cr->insertItems(0, QStringList()
         << QApplication::translate("tela_contas", "Todos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_contas", "Aberta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_contas", "Atrasada", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_contas", "Paga", 0, QApplication::UnicodeUTF8)
        );
        le_codigo_cr->setInputMask(QApplication::translate("tela_contas", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo_cr->setText(QString());
        btn_limparcr->setText(QApplication::translate("tela_contas", "Limpar", 0, QApplication::UnicodeUTF8));
        tbw_geral->setTabText(tbw_geral->indexOf(tab_contas_receber), QApplication::translate("tela_contas", "Contas a Receber", 0, QApplication::UnicodeUTF8));
        btn_buscar_cp->setText(QApplication::translate("tela_contas", "Buscar", 0, QApplication::UnicodeUTF8));
        lb_nome_cp->setText(QApplication::translate("tela_contas", "Per\303\255odo de:", 0, QApplication::UnicodeUTF8));
        lb_a_cp->setText(QApplication::translate("tela_contas", "a", 0, QApplication::UnicodeUTF8));
        btn_filtrar_cp->setText(QApplication::translate("tela_contas", "Filtrar", 0, QApplication::UnicodeUTF8));
        lb_status_cp->setText(QApplication::translate("tela_contas", "Status:", 0, QApplication::UnicodeUTF8));
        lb_codigo_cp->setText(QApplication::translate("tela_contas", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        cb_status_cp->clear();
        cb_status_cp->insertItems(0, QStringList()
         << QApplication::translate("tela_contas", "Todos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_contas", "Aberta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_contas", "Atrasada", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_contas", "Paga", 0, QApplication::UnicodeUTF8)
        );
        le_codigo_cp->setInputMask(QApplication::translate("tela_contas", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo_cp->setText(QString());
        btn_limpar_cp->setText(QApplication::translate("tela_contas", "Limpar", 0, QApplication::UnicodeUTF8));
        tbw_geral->setTabText(tbw_geral->indexOf(tab_contas_pagar), QApplication::translate("tela_contas", "Contas a Pagar", 0, QApplication::UnicodeUTF8));
        lb_nome_cliente->setText(QApplication::translate("tela_contas", "Nome do cliente:", 0, QApplication::UnicodeUTF8));
        btn_buscar_nota_venda->setText(QApplication::translate("tela_contas", "Buscar", 0, QApplication::UnicodeUTF8));
        le_nome_cliente->setText(QString());
        tbw_geral->setTabText(tbw_geral->indexOf(tab_notas_venda), QApplication::translate("tela_contas", "Notas de venda", 0, QApplication::UnicodeUTF8));
        le_nome_fornecedor->setText(QString());
        lb_nome_fornecedor->setText(QApplication::translate("tela_contas", "Nome do fornecedor:", 0, QApplication::UnicodeUTF8));
        btn_buscar_nota_compra->setText(QApplication::translate("tela_contas", "Buscar", 0, QApplication::UnicodeUTF8));
        tbw_geral->setTabText(tbw_geral->indexOf(tab_notas_compra), QApplication::translate("tela_contas", "Notas de compra", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_contas: public Ui_tela_contas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CONTAS_H
