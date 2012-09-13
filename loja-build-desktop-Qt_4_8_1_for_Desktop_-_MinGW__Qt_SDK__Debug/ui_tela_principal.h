/********************************************************************************
** Form generated from reading UI file 'tela_principal.ui'
**
** Created: Thu 13. Sep 11:36:05 2012
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
    QAction *consultar_estoque;
    QAction *cadastrar_forncecedor;
    QAction *cadastrar_produto;
    QAction *realizaar_venda;
    QAction *Cadastrar_cliente;
    QAction *botao_sair;
    QAction *listar_clientes;
    QAction *listar_produtos;
    QAction *listar_fornecedores;
    QAction *listar_estoque;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuNovo;
    QMenu *menuListar;
    QStatusBar *statusbar;
    QToolBar *barra_de_menus;

    void setupUi(QMainWindow *tela_principal)
    {
        if (tela_principal->objectName().isEmpty())
            tela_principal->setObjectName(QString::fromUtf8("tela_principal"));
        tela_principal->resize(1024, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_principal->setWindowIcon(icon);
        consultar_clientes = new QAction(tela_principal);
        consultar_clientes->setObjectName(QString::fromUtf8("consultar_clientes"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/Usuario.png"), QSize(), QIcon::Normal, QIcon::Off);
        consultar_clientes->setIcon(icon1);
        consultar_caixa = new QAction(tela_principal);
        consultar_caixa->setObjectName(QString::fromUtf8("consultar_caixa"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/caixa.png"), QSize(), QIcon::Normal, QIcon::Off);
        consultar_caixa->setIcon(icon2);
        consultar_fornecedores = new QAction(tela_principal);
        consultar_fornecedores->setObjectName(QString::fromUtf8("consultar_fornecedores"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/fornecedor.png"), QSize(), QIcon::Normal, QIcon::Off);
        consultar_fornecedores->setIcon(icon3);
        consultar_estoque = new QAction(tela_principal);
        consultar_estoque->setObjectName(QString::fromUtf8("consultar_estoque"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/estoque2.png"), QSize(), QIcon::Normal, QIcon::Off);
        consultar_estoque->setIcon(icon4);
        cadastrar_forncecedor = new QAction(tela_principal);
        cadastrar_forncecedor->setObjectName(QString::fromUtf8("cadastrar_forncecedor"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/cadastrar_fornecedor.png"), QSize(), QIcon::Normal, QIcon::Off);
        cadastrar_forncecedor->setIcon(icon5);
        cadastrar_produto = new QAction(tela_principal);
        cadastrar_produto->setObjectName(QString::fromUtf8("cadastrar_produto"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/cadastrar_produto.png"), QSize(), QIcon::Normal, QIcon::Off);
        cadastrar_produto->setIcon(icon6);
        realizaar_venda = new QAction(tela_principal);
        realizaar_venda->setObjectName(QString::fromUtf8("realizaar_venda"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/vender.png"), QSize(), QIcon::Normal, QIcon::Off);
        realizaar_venda->setIcon(icon7);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        realizaar_venda->setFont(font);
        Cadastrar_cliente = new QAction(tela_principal);
        Cadastrar_cliente->setObjectName(QString::fromUtf8("Cadastrar_cliente"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/adiciona_clientes.png"), QSize(), QIcon::Normal, QIcon::Off);
        Cadastrar_cliente->setIcon(icon8);
        botao_sair = new QAction(tela_principal);
        botao_sair->setObjectName(QString::fromUtf8("botao_sair"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/img/sair.png"), QSize(), QIcon::Normal, QIcon::Off);
        botao_sair->setIcon(icon9);
        listar_clientes = new QAction(tela_principal);
        listar_clientes->setObjectName(QString::fromUtf8("listar_clientes"));
        listar_clientes->setIcon(icon1);
        listar_produtos = new QAction(tela_principal);
        listar_produtos->setObjectName(QString::fromUtf8("listar_produtos"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/img/produto.png"), QSize(), QIcon::Normal, QIcon::Off);
        listar_produtos->setIcon(icon10);
        listar_fornecedores = new QAction(tela_principal);
        listar_fornecedores->setObjectName(QString::fromUtf8("listar_fornecedores"));
        listar_fornecedores->setIcon(icon3);
        listar_estoque = new QAction(tela_principal);
        listar_estoque->setObjectName(QString::fromUtf8("listar_estoque"));
        listar_estoque->setIcon(icon4);
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
        tela_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(tela_principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tela_principal->setStatusBar(statusbar);
        barra_de_menus = new QToolBar(tela_principal);
        barra_de_menus->setObjectName(QString::fromUtf8("barra_de_menus"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(9);
        barra_de_menus->setFont(font2);
        barra_de_menus->setIconSize(QSize(40, 40));
        tela_principal->addToolBar(Qt::TopToolBarArea, barra_de_menus);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuListar->menuAction());
        menuArquivo->addSeparator();
        menuArquivo->addAction(menuNovo->menuAction());
        menuArquivo->addAction(botao_sair);
        menuNovo->addAction(realizaar_venda);
        menuNovo->addAction(Cadastrar_cliente);
        menuNovo->addAction(cadastrar_forncecedor);
        menuNovo->addAction(cadastrar_produto);
        menuListar->addAction(listar_clientes);
        menuListar->addAction(listar_produtos);
        menuListar->addAction(listar_fornecedores);
        menuListar->addAction(listar_estoque);
        barra_de_menus->addSeparator();
        barra_de_menus->addAction(consultar_caixa);
        barra_de_menus->addAction(consultar_clientes);
        barra_de_menus->addAction(consultar_fornecedores);
        barra_de_menus->addAction(consultar_estoque);

        retranslateUi(tela_principal);

        QMetaObject::connectSlotsByName(tela_principal);
    } // setupUi

    void retranslateUi(QMainWindow *tela_principal)
    {
        tela_principal->setWindowTitle(QApplication::translate("tela_principal", "Sex Shop", 0, QApplication::UnicodeUTF8));
        consultar_clientes->setText(QApplication::translate("tela_principal", "Clientes", 0, QApplication::UnicodeUTF8));
        consultar_caixa->setText(QApplication::translate("tela_principal", "Caixa", 0, QApplication::UnicodeUTF8));
        consultar_fornecedores->setText(QApplication::translate("tela_principal", "Forncedores", 0, QApplication::UnicodeUTF8));
        consultar_estoque->setText(QApplication::translate("tela_principal", "Estoque", 0, QApplication::UnicodeUTF8));
        cadastrar_forncecedor->setText(QApplication::translate("tela_principal", "Fornecedor", 0, QApplication::UnicodeUTF8));
        cadastrar_produto->setText(QApplication::translate("tela_principal", "Produto", 0, QApplication::UnicodeUTF8));
        realizaar_venda->setText(QApplication::translate("tela_principal", "Venda", 0, QApplication::UnicodeUTF8));
        Cadastrar_cliente->setText(QApplication::translate("tela_principal", "Cliente", 0, QApplication::UnicodeUTF8));
        botao_sair->setText(QApplication::translate("tela_principal", "Sair", 0, QApplication::UnicodeUTF8));
        listar_clientes->setText(QApplication::translate("tela_principal", "Clientes", 0, QApplication::UnicodeUTF8));
        listar_produtos->setText(QApplication::translate("tela_principal", "Produtos", 0, QApplication::UnicodeUTF8));
        listar_fornecedores->setText(QApplication::translate("tela_principal", "Fornecedores", 0, QApplication::UnicodeUTF8));
        listar_estoque->setText(QApplication::translate("tela_principal", "Estoque", 0, QApplication::UnicodeUTF8));
        menuArquivo->setTitle(QApplication::translate("tela_principal", "Arquivo", 0, QApplication::UnicodeUTF8));
        menuNovo->setTitle(QApplication::translate("tela_principal", "Novo", 0, QApplication::UnicodeUTF8));
        menuListar->setTitle(QApplication::translate("tela_principal", "Listar", 0, QApplication::UnicodeUTF8));
        barra_de_menus->setWindowTitle(QApplication::translate("tela_principal", "Barra de menus", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_principal: public Ui_tela_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PRINCIPAL_H
