/********************************************************************************
** Form generated from reading UI file 'tela_principal.ui'
**
** Created: Fri 26. Oct 08:25:48 2012
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
#include <QtGui/QHeaderView>
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
        tela_principal->resize(1024, 500);
        tela_principal->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_principal->setWindowIcon(icon);
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
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(8);
        realizar_venda->setFont(font);
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
        tela_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tela_principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuNovo = new QMenu(menuArquivo);
        menuNovo->setObjectName(QString::fromUtf8("menuNovo"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        menuNovo->setFont(font1);
        menuListar = new QMenu(menubar);
        menuListar->setObjectName(QString::fromUtf8("menuListar"));
        menuConfigura_oes = new QMenu(menubar);
        menuConfigura_oes->setObjectName(QString::fromUtf8("menuConfigura_oes"));
        tela_principal->setMenuBar(menubar);
        barra_de_status = new QStatusBar(tela_principal);
        barra_de_status->setObjectName(QString::fromUtf8("barra_de_status"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(false);
        barra_de_status->setFont(font2);
        barra_de_status->setLayoutDirection(Qt::RightToLeft);
        tela_principal->setStatusBar(barra_de_status);
        barra_de_menus = new QToolBar(tela_principal);
        barra_de_menus->setObjectName(QString::fromUtf8("barra_de_menus"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(9);
        barra_de_menus->setFont(font3);
        barra_de_menus->setMovable(false);
        barra_de_menus->setIconSize(QSize(40, 40));
        barra_de_menus->setFloatable(false);
        tela_principal->addToolBar(Qt::LeftToolBarArea, barra_de_menus);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuListar->menuAction());
        menubar->addAction(menuConfigura_oes->menuAction());
        menuArquivo->addSeparator();
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
