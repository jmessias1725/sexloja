/********************************************************************************
** Form generated from reading UI file 'tela_estoque.ui'
**
** Created: Sun 14. Oct 16:22:56 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_ESTOQUE_H
#define UI_TELA_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_estoque
{
public:
    QAction *actionNovo_Produto;
    QAction *actionEntrada_de_Produto;
    QAction *actionSaida_de_Produto;
    QAction *actionReajustar_Estoque;
    QWidget *centralwidget;
    QMenuBar *mb_lateral;
    QStatusBar *statusbar;
    QToolBar *tb_principal;

    void setupUi(QMainWindow *tela_estoque)
    {
        if (tela_estoque->objectName().isEmpty())
            tela_estoque->setObjectName(QString::fromUtf8("tela_estoque"));
        tela_estoque->resize(800, 600);
        actionNovo_Produto = new QAction(tela_estoque);
        actionNovo_Produto->setObjectName(QString::fromUtf8("actionNovo_Produto"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/cadastrar_produto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo_Produto->setIcon(icon);
        actionEntrada_de_Produto = new QAction(tela_estoque);
        actionEntrada_de_Produto->setObjectName(QString::fromUtf8("actionEntrada_de_Produto"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/estoque_entrada_produto2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEntrada_de_Produto->setIcon(icon1);
        actionSaida_de_Produto = new QAction(tela_estoque);
        actionSaida_de_Produto->setObjectName(QString::fromUtf8("actionSaida_de_Produto"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/estoque_saida_produto2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaida_de_Produto->setIcon(icon2);
        actionReajustar_Estoque = new QAction(tela_estoque);
        actionReajustar_Estoque->setObjectName(QString::fromUtf8("actionReajustar_Estoque"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/estoque_reajuste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReajustar_Estoque->setIcon(icon3);
        centralwidget = new QWidget(tela_estoque);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tela_estoque->setCentralWidget(centralwidget);
        mb_lateral = new QMenuBar(tela_estoque);
        mb_lateral->setObjectName(QString::fromUtf8("mb_lateral"));
        mb_lateral->setGeometry(QRect(0, 0, 800, 21));
        tela_estoque->setMenuBar(mb_lateral);
        statusbar = new QStatusBar(tela_estoque);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tela_estoque->setStatusBar(statusbar);
        tb_principal = new QToolBar(tela_estoque);
        tb_principal->setObjectName(QString::fromUtf8("tb_principal"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setKerning(false);
        tb_principal->setFont(font);
        tb_principal->setMovable(false);
        tb_principal->setIconSize(QSize(40, 40));
        tb_principal->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tela_estoque->addToolBar(Qt::LeftToolBarArea, tb_principal);

        tb_principal->addSeparator();
        tb_principal->addAction(actionNovo_Produto);
        tb_principal->addAction(actionEntrada_de_Produto);
        tb_principal->addAction(actionSaida_de_Produto);
        tb_principal->addAction(actionReajustar_Estoque);

        retranslateUi(tela_estoque);

        QMetaObject::connectSlotsByName(tela_estoque);
    } // setupUi

    void retranslateUi(QMainWindow *tela_estoque)
    {
        tela_estoque->setWindowTitle(QApplication::translate("tela_estoque", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNovo_Produto->setText(QApplication::translate("tela_estoque", "Novo Produto", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNovo_Produto->setToolTip(QApplication::translate("tela_estoque", "Clique para adicionar um novo produto.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEntrada_de_Produto->setText(QApplication::translate("tela_estoque", "Entrada de Produto", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEntrada_de_Produto->setToolTip(QApplication::translate("tela_estoque", "Clique para dar entrada dos produtos no estoque.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaida_de_Produto->setText(QApplication::translate("tela_estoque", "Sa\303\255da de Produto", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaida_de_Produto->setToolTip(QApplication::translate("tela_estoque", "Clique para dar sa\303\255da dos produtos do estoque.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionReajustar_Estoque->setText(QApplication::translate("tela_estoque", "Reajustar Estoque", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReajustar_Estoque->setToolTip(QApplication::translate("tela_estoque", "Clique para reajustar percentualmente todos os produtos.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tb_principal->setWindowTitle(QApplication::translate("tela_estoque", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_estoque: public Ui_tela_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_ESTOQUE_H
