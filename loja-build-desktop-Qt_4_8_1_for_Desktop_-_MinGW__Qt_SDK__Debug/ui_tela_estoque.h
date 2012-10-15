/********************************************************************************
** Form generated from reading UI file 'tela_estoque.ui'
**
** Created: Mon 15. Oct 17:20:02 2012
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
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
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
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_filtrar;
    QLabel *lb_tipo;
    QLineEdit *le_fabricante;
    QLabel *lb_fabricante;
    QLineEdit *le_nome;
    QLineEdit *le_codigo_barras;
    QLabel *lb_nome;
    QComboBox *cb_tipo;
    QLabel *lb_codigo_barras;
    QPushButton *btn_limpar;
    QGroupBox *gb_clientes;
    QVBoxLayout *verticalLayout;
    QTableView *tv_clientes;
    QStatusBar *statusbar;
    QToolBar *tb_principal;

    void setupUi(QMainWindow *tela_estoque)
    {
        if (tela_estoque->objectName().isEmpty())
            tela_estoque->setObjectName(QString::fromUtf8("tela_estoque"));
        tela_estoque->resize(1024, 600);
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
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 0);
        gb_filtrar = new QGroupBox(centralwidget);
        gb_filtrar->setObjectName(QString::fromUtf8("gb_filtrar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(gb_filtrar->sizePolicy().hasHeightForWidth());
        gb_filtrar->setSizePolicy(sizePolicy);
        gb_filtrar->setMinimumSize(QSize(893, 74));
        gb_filtrar->setMaximumSize(QSize(893, 74));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_filtrar->setFont(font);
        lb_tipo = new QLabel(gb_filtrar);
        lb_tipo->setObjectName(QString::fromUtf8("lb_tipo"));
        lb_tipo->setGeometry(QRect(5, 17, 28, 20));
        lb_tipo->setMinimumSize(QSize(28, 20));
        lb_tipo->setMaximumSize(QSize(28, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_tipo->setFont(font1);
        le_fabricante = new QLineEdit(gb_filtrar);
        le_fabricante->setObjectName(QString::fromUtf8("le_fabricante"));
        le_fabricante->setGeometry(QRect(67, 47, 608, 21));
        le_fabricante->setFont(font1);
        le_fabricante->setInputMethodHints(Qt::ImhNone);
        le_fabricante->setMaxLength(60);
        lb_fabricante = new QLabel(gb_filtrar);
        lb_fabricante->setObjectName(QString::fromUtf8("lb_fabricante"));
        lb_fabricante->setGeometry(QRect(5, 47, 63, 20));
        lb_fabricante->setMinimumSize(QSize(63, 20));
        lb_fabricante->setMaximumSize(QSize(63, 20));
        lb_fabricante->setFont(font1);
        le_nome = new QLineEdit(gb_filtrar);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(169, 17, 506, 20));
        le_nome->setMinimumSize(QSize(506, 20));
        le_nome->setMaximumSize(QSize(506, 20));
        le_nome->setFont(font1);
        le_nome->setInputMethodHints(Qt::ImhNone);
        le_nome->setMaxLength(60);
        le_codigo_barras = new QLineEdit(gb_filtrar);
        le_codigo_barras->setObjectName(QString::fromUtf8("le_codigo_barras"));
        le_codigo_barras->setGeometry(QRect(779, 17, 105, 20));
        le_codigo_barras->setMinimumSize(QSize(105, 20));
        le_codigo_barras->setMaximumSize(QSize(105, 20));
        le_codigo_barras->setFont(font1);
        le_codigo_barras->setMaxLength(15);
        lb_nome = new QLabel(gb_filtrar);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(134, 17, 35, 20));
        lb_nome->setMinimumSize(QSize(35, 20));
        lb_nome->setMaximumSize(QSize(35, 20));
        lb_nome->setFont(font1);
        cb_tipo = new QComboBox(gb_filtrar);
        cb_tipo->setObjectName(QString::fromUtf8("cb_tipo"));
        cb_tipo->setGeometry(QRect(32, 17, 95, 20));
        cb_tipo->setMaximumSize(QSize(100, 20));
        cb_tipo->setFont(font1);
        lb_codigo_barras = new QLabel(gb_filtrar);
        lb_codigo_barras->setObjectName(QString::fromUtf8("lb_codigo_barras"));
        lb_codigo_barras->setGeometry(QRect(680, 17, 99, 20));
        lb_codigo_barras->setMinimumSize(QSize(99, 20));
        lb_codigo_barras->setMaximumSize(QSize(99, 20));
        lb_codigo_barras->setFont(font1);
        btn_limpar = new QPushButton(gb_filtrar);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));
        btn_limpar->setGeometry(QRect(680, 45, 80, 24));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        btn_limpar->setFont(font2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_limpar->setIcon(icon4);

        verticalLayout_2->addWidget(gb_filtrar);

        gb_clientes = new QGroupBox(centralwidget);
        gb_clientes->setObjectName(QString::fromUtf8("gb_clientes"));
        gb_clientes->setMinimumSize(QSize(889, 251));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        gb_clientes->setFont(font3);
        gb_clientes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout = new QVBoxLayout(gb_clientes);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 5);
        tv_clientes = new QTableView(gb_clientes);
        tv_clientes->setObjectName(QString::fromUtf8("tv_clientes"));
        tv_clientes->setMinimumSize(QSize(869, 469));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        font4.setKerning(false);
        tv_clientes->setFont(font4);
        tv_clientes->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tv_clientes->setAlternatingRowColors(true);
        tv_clientes->setSortingEnabled(false);
        tv_clientes->horizontalHeader()->setVisible(true);
        tv_clientes->horizontalHeader()->setDefaultSectionSize(450);
        tv_clientes->horizontalHeader()->setMinimumSectionSize(15);
        tv_clientes->horizontalHeader()->setStretchLastSection(true);
        tv_clientes->verticalHeader()->setVisible(false);
        tv_clientes->verticalHeader()->setCascadingSectionResizes(false);
        tv_clientes->verticalHeader()->setDefaultSectionSize(30);
        tv_clientes->verticalHeader()->setMinimumSectionSize(20);
        tv_clientes->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tv_clientes);


        verticalLayout_2->addWidget(gb_clientes);

        tela_estoque->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(tela_estoque);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tela_estoque->setStatusBar(statusbar);
        tb_principal = new QToolBar(tela_estoque);
        tb_principal->setObjectName(QString::fromUtf8("tb_principal"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(9);
        font5.setItalic(false);
        font5.setKerning(false);
        tb_principal->setFont(font5);
        tb_principal->setMovable(false);
        tb_principal->setIconSize(QSize(30, 30));
        tb_principal->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tela_estoque->addToolBar(Qt::LeftToolBarArea, tb_principal);
        QWidget::setTabOrder(cb_tipo, le_nome);
        QWidget::setTabOrder(le_nome, le_codigo_barras);
        QWidget::setTabOrder(le_codigo_barras, le_fabricante);
        QWidget::setTabOrder(le_fabricante, btn_limpar);
        QWidget::setTabOrder(btn_limpar, tv_clientes);

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
        tela_estoque->setWindowTitle(QApplication::translate("tela_estoque", "Estoque", 0, QApplication::UnicodeUTF8));
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
        gb_filtrar->setTitle(QApplication::translate("tela_estoque", "Filtrar por:", 0, QApplication::UnicodeUTF8));
        lb_tipo->setText(QApplication::translate("tela_estoque", "Tipo:", 0, QApplication::UnicodeUTF8));
        le_fabricante->setInputMask(QString());
        le_fabricante->setText(QString());
        lb_fabricante->setText(QApplication::translate("tela_estoque", "Fabricante:", 0, QApplication::UnicodeUTF8));
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        le_codigo_barras->setInputMask(QApplication::translate("tela_estoque", "0 000000 000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo_barras->setText(QString());
        lb_nome->setText(QApplication::translate("tela_estoque", "Nome:", 0, QApplication::UnicodeUTF8));
        cb_tipo->clear();
        cb_tipo->insertItems(0, QStringList()
         << QApplication::translate("tela_estoque", "Acess\303\263rio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Cosm\303\251tico", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Decora\303\247\303\243o", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Estimulante", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Fetish", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Gel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Higiene", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Jogo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Kit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Lubrificante", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Perfumaria", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Preservativo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Pr\303\263tese", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Vestu\303\241rio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_estoque", "Vibrador", 0, QApplication::UnicodeUTF8)
        );
        lb_codigo_barras->setText(QApplication::translate("tela_estoque", "C\303\263digo de Barras:", 0, QApplication::UnicodeUTF8));
        btn_limpar->setText(QApplication::translate("tela_estoque", "Limpar", 0, QApplication::UnicodeUTF8));
        gb_clientes->setTitle(QApplication::translate("tela_estoque", "Lista de Produtos", 0, QApplication::UnicodeUTF8));
        tb_principal->setWindowTitle(QApplication::translate("tela_estoque", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_estoque: public Ui_tela_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_ESTOQUE_H
