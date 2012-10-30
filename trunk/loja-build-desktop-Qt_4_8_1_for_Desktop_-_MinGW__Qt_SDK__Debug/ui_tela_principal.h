/********************************************************************************
** Form generated from reading UI file 'tela_principal.ui'
**
** Created: Tue 30. Oct 14:05:13 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PRINCIPAL_H
#define UI_TELA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_principal
{
public:
    QAction *consultar_clientes;
    QAction *consultar_caixa;
    QAction *consultar_fornecedores;
    QAction *cadastrar_forncecedor;
    QAction *cadastrar_produto;
    QAction *realizar_venda;
    QAction *Cadastrar_cliente;
    QAction *botao_sair;
    QAction *buscar_clientes;
    QAction *buscar_produtos;
    QAction *buscar_fornecedores;
    QAction *Cadastro_da_Loja;
    QAction *Estoque;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *fr_central;
    QFrame *fr_lateral;
    QCalendarWidget *calendario;
    QLabel *lb_hora;
    QLabel *lb_data;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuNovo;
    QMenu *menuListar;
    QMenu *menuConfigura_oes;
    QStatusBar *barra_de_status;
    QToolBar *barra_de_menus;

    void setupUi(QMainWindow *tela_principal)
    {
        if (tela_principal->objectName().isEmpty())
            tela_principal->setObjectName(QString::fromUtf8("tela_principal"));
        tela_principal->setWindowModality(Qt::WindowModal);
        tela_principal->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        tela_principal->setFont(font);
        tela_principal->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_principal->setWindowIcon(icon);
        tela_principal->setStyleSheet(QString::fromUtf8(""));
        tela_principal->setAnimated(true);
        tela_principal->setDockNestingEnabled(false);
        tela_principal->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks);
        consultar_clientes = new QAction(tela_principal);
        consultar_clientes->setObjectName(QString::fromUtf8("consultar_clientes"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/busar_clientes.png"), QSize(), QIcon::Normal, QIcon::Off);
        consultar_clientes->setIcon(icon1);
        consultar_caixa = new QAction(tela_principal);
        consultar_caixa->setObjectName(QString::fromUtf8("consultar_caixa"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/caixa.png"), QSize(), QIcon::Normal, QIcon::Off);
        consultar_caixa->setIcon(icon2);
        consultar_fornecedores = new QAction(tela_principal);
        consultar_fornecedores->setObjectName(QString::fromUtf8("consultar_fornecedores"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/fornecedor_buscar.png"), QSize(), QIcon::Normal, QIcon::Off);
        consultar_fornecedores->setIcon(icon3);
        cadastrar_forncecedor = new QAction(tela_principal);
        cadastrar_forncecedor->setObjectName(QString::fromUtf8("cadastrar_forncecedor"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/cadastrar_fornecedor.png"), QSize(), QIcon::Normal, QIcon::Off);
        cadastrar_forncecedor->setIcon(icon4);
        cadastrar_produto = new QAction(tela_principal);
        cadastrar_produto->setObjectName(QString::fromUtf8("cadastrar_produto"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/cadastrar_produto.png"), QSize(), QIcon::Normal, QIcon::Off);
        cadastrar_produto->setIcon(icon5);
        realizar_venda = new QAction(tela_principal);
        realizar_venda->setObjectName(QString::fromUtf8("realizar_venda"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/vender.png"), QSize(), QIcon::Normal, QIcon::Off);
        realizar_venda->setIcon(icon6);
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(8);
        realizar_venda->setFont(font1);
        Cadastrar_cliente = new QAction(tela_principal);
        Cadastrar_cliente->setObjectName(QString::fromUtf8("Cadastrar_cliente"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/adiciona_clientes.png"), QSize(), QIcon::Normal, QIcon::Off);
        Cadastrar_cliente->setIcon(icon7);
        botao_sair = new QAction(tela_principal);
        botao_sair->setObjectName(QString::fromUtf8("botao_sair"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/sair.png"), QSize(), QIcon::Normal, QIcon::Off);
        botao_sair->setIcon(icon8);
        buscar_clientes = new QAction(tela_principal);
        buscar_clientes->setObjectName(QString::fromUtf8("buscar_clientes"));
        buscar_clientes->setIcon(icon1);
        buscar_produtos = new QAction(tela_principal);
        buscar_produtos->setObjectName(QString::fromUtf8("buscar_produtos"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/img/produto.png"), QSize(), QIcon::Normal, QIcon::Off);
        buscar_produtos->setIcon(icon9);
        buscar_fornecedores = new QAction(tela_principal);
        buscar_fornecedores->setObjectName(QString::fromUtf8("buscar_fornecedores"));
        buscar_fornecedores->setIcon(icon3);
        Cadastro_da_Loja = new QAction(tela_principal);
        Cadastro_da_Loja->setObjectName(QString::fromUtf8("Cadastro_da_Loja"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/img/loja.png"), QSize(), QIcon::Normal, QIcon::Off);
        Cadastro_da_Loja->setIcon(icon10);
        Estoque = new QAction(tela_principal);
        Estoque->setObjectName(QString::fromUtf8("Estoque"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/img/estoque.png"), QSize(), QIcon::Normal, QIcon::Off);
        Estoque->setIcon(icon11);
        centralwidget = new QWidget(tela_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fr_central = new QFrame(centralwidget);
        fr_central->setObjectName(QString::fromUtf8("fr_central"));
        fr_central->setStyleSheet(QString::fromUtf8(""));
        fr_central->setFrameShape(QFrame::StyledPanel);
        fr_central->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(fr_central);

        fr_lateral = new QFrame(centralwidget);
        fr_lateral->setObjectName(QString::fromUtf8("fr_lateral"));
        fr_lateral->setMaximumSize(QSize(230, 16777215));
        fr_lateral->setStyleSheet(QString::fromUtf8("background-color: #505050;"));
        fr_lateral->setFrameShape(QFrame::StyledPanel);
        fr_lateral->setFrameShadow(QFrame::Raised);
        calendario = new QCalendarWidget(fr_lateral);
        calendario->setObjectName(QString::fromUtf8("calendario"));
        calendario->setGeometry(QRect(5, 0, 220, 171));
        calendario->setStyleSheet(QString::fromUtf8(" QWidget\n"
"{ \n"
"    background: qlineargradient(\n"
"    x1: 0, y1: 0, x2: 0, y2: 1,\n"
"    stop: 0.1 #F0F0F0, stop: 0.6 #A3A3A3);\n"
"}\n"
"QFrame {\n"
"    background-color:#FFFFFF;\n"
"	alternate-background-color: #D2D2D2;\n"
"}\n"
"\n"
"QAbstractItemView {\n"
"	selection-background-color: rgb(255, 174, 0);\n"
"}\n"
""));
        lb_hora = new QLabel(fr_lateral);
        lb_hora->setObjectName(QString::fromUtf8("lb_hora"));
        lb_hora->setGeometry(QRect(5, 200, 220, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comic Sans MS"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setKerning(false);
        lb_hora->setFont(font2);
        lb_hora->setStyleSheet(QString::fromUtf8("color: rgb(211, 211, 211);"));
        lb_hora->setAlignment(Qt::AlignCenter);
        lb_data = new QLabel(fr_lateral);
        lb_data->setObjectName(QString::fromUtf8("lb_data"));
        lb_data->setGeometry(QRect(5, 180, 220, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Comic Sans MS"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        lb_data->setFont(font3);
        lb_data->setStyleSheet(QString::fromUtf8("color: rgb(211, 211, 211);"));
        lb_data->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(fr_lateral);

        tela_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tela_principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 18));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient1.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient2.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient3.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient4.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient5.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QBrush brush7(QColor(120, 120, 120, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient6.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush8(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient7.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush9(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0.3, QColor(119, 119, 119, 255));
        gradient8.setColorAt(0.6, QColor(82, 82, 82, 255));
        QBrush brush10(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        menubar->setPalette(palette);
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        menubar->setFont(font4);
        menubar->setStyleSheet(QString::fromUtf8(" QMenuBar {\n"
"     background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                       stop:0.3 #777777, stop:0.6 #525252); \n"
" }\n"
"\n"
" QMenuBar::item {\n"
"     spacing: 3px; /* spacing between menu bar items */\n"
"     padding: 1px 4px;\n"
"     background: transparent;\n"
"	color: white;\n"
" }\n"
"\n"
" QMenuBar::item:pressed {\n"
"     background: #888888;\n"
" }\n"
"\n"
" QMenu::item:selected {\n"
"     background: rgba(100, 100, 100, 150);\n"
" }"));
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(true);
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuArquivo->setStyleSheet(QString::fromUtf8("background-color: #505050;\n"
"color: #FFFFFF;"));
        menuNovo = new QMenu(menuArquivo);
        menuNovo->setObjectName(QString::fromUtf8("menuNovo"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font5.setPointSize(8);
        font5.setBold(false);
        font5.setWeight(50);
        menuNovo->setFont(font5);
        menuNovo->setStyleSheet(QString::fromUtf8("background-color: #505050;\n"
"color: #FFFFFF;"));
        menuListar = new QMenu(menubar);
        menuListar->setObjectName(QString::fromUtf8("menuListar"));
        menuListar->setStyleSheet(QString::fromUtf8("background-color: #505050;\n"
"color: #FFFFFF;"));
        menuConfigura_oes = new QMenu(menubar);
        menuConfigura_oes->setObjectName(QString::fromUtf8("menuConfigura_oes"));
        menuConfigura_oes->setStyleSheet(QString::fromUtf8(" background-color: #505050;\n"
"color: #FFFFFF;"));
        tela_principal->setMenuBar(menubar);
        barra_de_status = new QStatusBar(tela_principal);
        barra_de_status->setObjectName(QString::fromUtf8("barra_de_status"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Calibri"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(9);
        barra_de_status->setFont(font6);
        barra_de_status->setLayoutDirection(Qt::RightToLeft);
        barra_de_status->setAutoFillBackground(false);
        barra_de_status->setStyleSheet(QString::fromUtf8("background-color: #505050;\n"
"color: #FFFFFF;\n"
"font: 75 10pt \"Calibri\";"));
        tela_principal->setStatusBar(barra_de_status);
        barra_de_menus = new QToolBar(tela_principal);
        barra_de_menus->setObjectName(QString::fromUtf8("barra_de_menus"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri"));
        font7.setPointSize(9);
        barra_de_menus->setFont(font7);
        barra_de_menus->setStyleSheet(QString::fromUtf8("background-color: #505050;\n"
"color: #FFFFFF;"));
        barra_de_menus->setMovable(false);
        barra_de_menus->setIconSize(QSize(40, 40));
        barra_de_menus->setFloatable(false);
        tela_principal->addToolBar(Qt::LeftToolBarArea, barra_de_menus);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuListar->menuAction());
        menubar->addAction(menuConfigura_oes->menuAction());
        menuArquivo->addAction(menuNovo->menuAction());
        menuArquivo->addAction(botao_sair);
        menuNovo->addAction(realizar_venda);
        menuNovo->addAction(Cadastrar_cliente);
        menuNovo->addAction(cadastrar_forncecedor);
        menuNovo->addAction(cadastrar_produto);
        menuListar->addAction(buscar_clientes);
        menuListar->addAction(buscar_produtos);
        menuListar->addAction(buscar_fornecedores);
        menuConfigura_oes->addSeparator();
        menuConfigura_oes->addAction(Cadastro_da_Loja);
        menuConfigura_oes->addAction(Estoque);
        barra_de_menus->addSeparator();
        barra_de_menus->addAction(consultar_caixa);
        barra_de_menus->addAction(consultar_clientes);
        barra_de_menus->addAction(consultar_fornecedores);
        barra_de_menus->addAction(Estoque);

        retranslateUi(tela_principal);

        QMetaObject::connectSlotsByName(tela_principal);
    } // setupUi

    void retranslateUi(QMainWindow *tela_principal)
    {
        tela_principal->setWindowTitle(QApplication::translate("tela_principal", "Sex Shop", 0, QApplication::UnicodeUTF8));
        consultar_clientes->setText(QApplication::translate("tela_principal", "Buscar Clientes", 0, QApplication::UnicodeUTF8));
        consultar_caixa->setText(QApplication::translate("tela_principal", "Caixa", 0, QApplication::UnicodeUTF8));
        consultar_fornecedores->setText(QApplication::translate("tela_principal", "Buscar Forncedores", 0, QApplication::UnicodeUTF8));
        cadastrar_forncecedor->setText(QApplication::translate("tela_principal", "Fornecedor", 0, QApplication::UnicodeUTF8));
        cadastrar_produto->setText(QApplication::translate("tela_principal", "Produto", 0, QApplication::UnicodeUTF8));
        realizar_venda->setText(QApplication::translate("tela_principal", "Venda", 0, QApplication::UnicodeUTF8));
        Cadastrar_cliente->setText(QApplication::translate("tela_principal", "Cliente", 0, QApplication::UnicodeUTF8));
        botao_sair->setText(QApplication::translate("tela_principal", "Sair", 0, QApplication::UnicodeUTF8));
        buscar_clientes->setText(QApplication::translate("tela_principal", "Buscar Clientes", 0, QApplication::UnicodeUTF8));
        buscar_produtos->setText(QApplication::translate("tela_principal", "Produtos", 0, QApplication::UnicodeUTF8));
        buscar_fornecedores->setText(QApplication::translate("tela_principal", "Buscar Fornecedores", 0, QApplication::UnicodeUTF8));
        Cadastro_da_Loja->setText(QApplication::translate("tela_principal", "Cadastro da Loja", 0, QApplication::UnicodeUTF8));
        Estoque->setText(QApplication::translate("tela_principal", "Estoque", 0, QApplication::UnicodeUTF8));
        lb_hora->setText(QApplication::translate("tela_principal", "00:00:00", 0, QApplication::UnicodeUTF8));
        lb_data->setText(QApplication::translate("tela_principal", "Ter\303\247a-feira, 30 de outubro de 2012", 0, QApplication::UnicodeUTF8));
        menuArquivo->setTitle(QApplication::translate("tela_principal", "Arquivo", 0, QApplication::UnicodeUTF8));
        menuNovo->setTitle(QApplication::translate("tela_principal", "Novo", 0, QApplication::UnicodeUTF8));
        menuListar->setTitle(QApplication::translate("tela_principal", "Buscar", 0, QApplication::UnicodeUTF8));
        menuConfigura_oes->setTitle(QApplication::translate("tela_principal", "Visualizar", 0, QApplication::UnicodeUTF8));
        barra_de_menus->setWindowTitle(QApplication::translate("tela_principal", "Barra de menus", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_principal: public Ui_tela_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PRINCIPAL_H
