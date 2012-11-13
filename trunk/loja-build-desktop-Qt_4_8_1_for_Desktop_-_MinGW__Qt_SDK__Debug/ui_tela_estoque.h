/********************************************************************************
** Form generated from reading UI file 'tela_estoque.ui'
**
** Created: Tue 13. Nov 08:46:06 2012
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
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_estoque
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QFrame *fr_menu_lateral;
    QVBoxLayout *verticalLayout_3;
    QToolButton *btn_adicionar_produto;
    QToolButton *btn_restaurar_produto;
    QToolButton *btn_entrada_produto;
    QToolButton *btn_saida_produto;
    QToolButton *btn_reajustar_estoque;
    QSpacerItem *verticalSpacer;
    QTableWidget *tw_legenda;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_filtrar;
    QLabel *lb_nome;
    QLabel *lb_codigo_barras;
    QLineEdit *le_nome;
    QComboBox *cb_tipo;
    QPushButton *btn_limpar;
    QLabel *lb_fabricante;
    QLabel *lb_tipo;
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QLineEdit *le_codigo_barras;
    QLineEdit *le_fabricante;
    QGroupBox *gb_clientes;
    QVBoxLayout *verticalLayout;
    QTableWidget *tw_produtos;
    QStatusBar *barra_de_status;

    void setupUi(QMainWindow *tela_estoque)
    {
        if (tela_estoque->objectName().isEmpty())
            tela_estoque->setObjectName(QString::fromUtf8("tela_estoque"));
        tela_estoque->setWindowModality(Qt::ApplicationModal);
        tela_estoque->resize(1026, 600);
        tela_estoque->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(tela_estoque);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        fr_menu_lateral = new QFrame(centralwidget);
        fr_menu_lateral->setObjectName(QString::fromUtf8("fr_menu_lateral"));
        fr_menu_lateral->setMinimumSize(QSize(120, 480));
        fr_menu_lateral->setMaximumSize(QSize(120, 16777215));
        fr_menu_lateral->setAutoFillBackground(false);
        fr_menu_lateral->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.3 #777777, stop:0.6 #525252);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        fr_menu_lateral->setFrameShape(QFrame::StyledPanel);
        fr_menu_lateral->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(fr_menu_lateral);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 0, 0);
        btn_adicionar_produto = new QToolButton(fr_menu_lateral);
        btn_adicionar_produto->setObjectName(QString::fromUtf8("btn_adicionar_produto"));
        btn_adicionar_produto->setMinimumSize(QSize(110, 50));
        btn_adicionar_produto->setMaximumSize(QSize(110, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(9);
        font.setKerning(false);
        btn_adicionar_produto->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/cadastrar_produto.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_adicionar_produto->setIcon(icon);
        btn_adicionar_produto->setIconSize(QSize(30, 30));
        btn_adicionar_produto->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_adicionar_produto->setAutoRaise(true);

        verticalLayout_3->addWidget(btn_adicionar_produto);

        btn_restaurar_produto = new QToolButton(fr_menu_lateral);
        btn_restaurar_produto->setObjectName(QString::fromUtf8("btn_restaurar_produto"));
        btn_restaurar_produto->setMinimumSize(QSize(110, 50));
        btn_restaurar_produto->setMaximumSize(QSize(110, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        btn_restaurar_produto->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/produto_restaurar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_restaurar_produto->setIcon(icon1);
        btn_restaurar_produto->setIconSize(QSize(30, 30));
        btn_restaurar_produto->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_restaurar_produto->setAutoRaise(true);

        verticalLayout_3->addWidget(btn_restaurar_produto);

        btn_entrada_produto = new QToolButton(fr_menu_lateral);
        btn_entrada_produto->setObjectName(QString::fromUtf8("btn_entrada_produto"));
        btn_entrada_produto->setMinimumSize(QSize(110, 50));
        btn_entrada_produto->setMaximumSize(QSize(110, 50));
        btn_entrada_produto->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/estoque_entrada_produto2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_entrada_produto->setIcon(icon2);
        btn_entrada_produto->setIconSize(QSize(30, 30));
        btn_entrada_produto->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_entrada_produto->setAutoRaise(true);

        verticalLayout_3->addWidget(btn_entrada_produto);

        btn_saida_produto = new QToolButton(fr_menu_lateral);
        btn_saida_produto->setObjectName(QString::fromUtf8("btn_saida_produto"));
        btn_saida_produto->setMinimumSize(QSize(110, 50));
        btn_saida_produto->setMaximumSize(QSize(110, 50));
        btn_saida_produto->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/estoque_saida_produto2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_saida_produto->setIcon(icon3);
        btn_saida_produto->setIconSize(QSize(30, 30));
        btn_saida_produto->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_saida_produto->setAutoRaise(true);

        verticalLayout_3->addWidget(btn_saida_produto);

        btn_reajustar_estoque = new QToolButton(fr_menu_lateral);
        btn_reajustar_estoque->setObjectName(QString::fromUtf8("btn_reajustar_estoque"));
        btn_reajustar_estoque->setMinimumSize(QSize(110, 50));
        btn_reajustar_estoque->setMaximumSize(QSize(110, 50));
        btn_reajustar_estoque->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/estoque_reajuste.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_reajustar_estoque->setIcon(icon4);
        btn_reajustar_estoque->setIconSize(QSize(40, 30));
        btn_reajustar_estoque->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_reajustar_estoque->setAutoRaise(true);

        verticalLayout_3->addWidget(btn_reajustar_estoque);

        verticalSpacer = new QSpacerItem(20, 220, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addWidget(fr_menu_lateral);

        tw_legenda = new QTableWidget(centralwidget);
        if (tw_legenda->columnCount() < 1)
            tw_legenda->setColumnCount(1);
        if (tw_legenda->rowCount() < 4)
            tw_legenda->setRowCount(4);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(255, 150, 150, 255));
        brush1.setStyle(Qt::SolidPattern);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setKerning(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem->setFont(font2);
        __qtablewidgetitem->setBackground(brush1);
        __qtablewidgetitem->setForeground(brush);
        tw_legenda->setItem(0, 0, __qtablewidgetitem);
        QBrush brush2(QColor(255, 210, 210, 255));
        brush2.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font2);
        __qtablewidgetitem1->setBackground(brush2);
        tw_legenda->setItem(1, 0, __qtablewidgetitem1);
        QBrush brush3(QColor(204, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font2);
        __qtablewidgetitem2->setBackground(brush3);
        tw_legenda->setItem(2, 0, __qtablewidgetitem2);
        QBrush brush4(QColor(0, 253, 126, 255));
        brush4.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font2);
        __qtablewidgetitem3->setBackground(brush4);
        tw_legenda->setItem(3, 0, __qtablewidgetitem3);
        tw_legenda->setObjectName(QString::fromUtf8("tw_legenda"));
        tw_legenda->setMaximumSize(QSize(120, 80));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setBold(true);
        font3.setWeight(75);
        tw_legenda->setFont(font3);
        tw_legenda->setAutoScroll(false);
        tw_legenda->setTabKeyNavigation(false);
        tw_legenda->setProperty("showDropIndicator", QVariant(false));
        tw_legenda->setDragDropOverwriteMode(false);
        tw_legenda->setSelectionMode(QAbstractItemView::NoSelection);
        tw_legenda->setRowCount(4);
        tw_legenda->setColumnCount(1);
        tw_legenda->horizontalHeader()->setVisible(false);
        tw_legenda->horizontalHeader()->setHighlightSections(true);
        tw_legenda->horizontalHeader()->setStretchLastSection(true);
        tw_legenda->verticalHeader()->setVisible(false);
        tw_legenda->verticalHeader()->setDefaultSectionSize(19);
        tw_legenda->verticalHeader()->setStretchLastSection(true);

        verticalLayout_4->addWidget(tw_legenda);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(120, 20));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(false);
        pushButton->setFont(font4);

        verticalLayout_4->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 5, -1);
        gb_filtrar = new QGroupBox(centralwidget);
        gb_filtrar->setObjectName(QString::fromUtf8("gb_filtrar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(gb_filtrar->sizePolicy().hasHeightForWidth());
        gb_filtrar->setSizePolicy(sizePolicy);
        gb_filtrar->setMinimumSize(QSize(893, 74));
        gb_filtrar->setMaximumSize(QSize(893, 74));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        gb_filtrar->setFont(font5);
        gb_filtrar->setStyleSheet(QString::fromUtf8(""));
        gb_filtrar->setFlat(false);
        gb_filtrar->setCheckable(false);
        lb_nome = new QLabel(gb_filtrar);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(284, 20, 35, 20));
        lb_nome->setMinimumSize(QSize(35, 20));
        lb_nome->setMaximumSize(QSize(35, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Calibri"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        font6.setKerning(false);
        lb_nome->setFont(font6);
        lb_codigo_barras = new QLabel(gb_filtrar);
        lb_codigo_barras->setObjectName(QString::fromUtf8("lb_codigo_barras"));
        lb_codigo_barras->setGeometry(QRect(598, 50, 99, 20));
        lb_codigo_barras->setMinimumSize(QSize(99, 20));
        lb_codigo_barras->setMaximumSize(QSize(99, 20));
        lb_codigo_barras->setFont(font6);
        le_nome = new QLineEdit(gb_filtrar);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(318, 20, 569, 20));
        le_nome->setMinimumSize(QSize(506, 20));
        le_nome->setFont(font4);
        le_nome->setInputMethodHints(Qt::ImhNone);
        le_nome->setMaxLength(60);
        cb_tipo = new QComboBox(gb_filtrar);
        cb_tipo->setObjectName(QString::fromUtf8("cb_tipo"));
        cb_tipo->setGeometry(QRect(33, 20, 95, 20));
        cb_tipo->setMaximumSize(QSize(100, 20));
        cb_tipo->setFont(font6);
        btn_limpar = new QPushButton(gb_filtrar);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));
        btn_limpar->setGeometry(QRect(808, 47, 80, 24));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri"));
        font7.setPointSize(10);
        font7.setBold(false);
        font7.setWeight(50);
        btn_limpar->setFont(font7);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_limpar->setIcon(icon5);
        lb_fabricante = new QLabel(gb_filtrar);
        lb_fabricante->setObjectName(QString::fromUtf8("lb_fabricante"));
        lb_fabricante->setGeometry(QRect(5, 50, 63, 20));
        lb_fabricante->setMinimumSize(QSize(63, 20));
        lb_fabricante->setMaximumSize(QSize(63, 20));
        lb_fabricante->setFont(font6);
        lb_tipo = new QLabel(gb_filtrar);
        lb_tipo->setObjectName(QString::fromUtf8("lb_tipo"));
        lb_tipo->setGeometry(QRect(5, 20, 28, 20));
        lb_tipo->setMinimumSize(QSize(28, 20));
        lb_tipo->setMaximumSize(QSize(28, 20));
        lb_tipo->setFont(font6);
        lb_tipo->setFrameShape(QFrame::NoFrame);
        lb_codigo = new QLabel(gb_filtrar);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(135, 20, 42, 20));
        lb_codigo->setFont(font7);
        le_codigo = new QLineEdit(gb_filtrar);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(177, 20, 100, 20));
        QFont font8;
        font8.setBold(false);
        font8.setWeight(50);
        le_codigo->setFont(font8);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(false);
        le_codigo_barras = new QLineEdit(gb_filtrar);
        le_codigo_barras->setObjectName(QString::fromUtf8("le_codigo_barras"));
        le_codigo_barras->setGeometry(QRect(697, 50, 105, 20));
        le_codigo_barras->setMinimumSize(QSize(105, 20));
        le_codigo_barras->setMaximumSize(QSize(105, 20));
        le_codigo_barras->setFont(font4);
        le_codigo_barras->setMaxLength(15);
        le_fabricante = new QLineEdit(gb_filtrar);
        le_fabricante->setObjectName(QString::fromUtf8("le_fabricante"));
        le_fabricante->setGeometry(QRect(68, 50, 523, 21));
        le_fabricante->setFont(font4);
        le_fabricante->setInputMethodHints(Qt::ImhNone);
        le_fabricante->setMaxLength(60);

        verticalLayout_2->addWidget(gb_filtrar);

        gb_clientes = new QGroupBox(centralwidget);
        gb_clientes->setObjectName(QString::fromUtf8("gb_clientes"));
        gb_clientes->setMinimumSize(QSize(889, 251));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Calibri"));
        font9.setPointSize(10);
        font9.setBold(true);
        font9.setWeight(75);
        gb_clientes->setFont(font9);
        gb_clientes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gb_clientes->setFlat(false);
        verticalLayout = new QVBoxLayout(gb_clientes);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 5);
        tw_produtos = new QTableWidget(gb_clientes);
        tw_produtos->setObjectName(QString::fromUtf8("tw_produtos"));
        tw_produtos->setMinimumSize(QSize(869, 469));
        tw_produtos->setFont(font2);
        tw_produtos->setStyleSheet(QString::fromUtf8(""));
        tw_produtos->setFrameShape(QFrame::WinPanel);
        tw_produtos->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tw_produtos->setAutoScroll(true);
        tw_produtos->setAlternatingRowColors(false);
        tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_produtos->setShowGrid(true);
        tw_produtos->setGridStyle(Qt::SolidLine);
        tw_produtos->setSortingEnabled(false);
        tw_produtos->setWordWrap(true);
        tw_produtos->setCornerButtonEnabled(true);
        tw_produtos->setRowCount(0);
        tw_produtos->setColumnCount(0);
        tw_produtos->horizontalHeader()->setVisible(true);
        tw_produtos->horizontalHeader()->setCascadingSectionResizes(false);
        tw_produtos->horizontalHeader()->setDefaultSectionSize(450);
        tw_produtos->horizontalHeader()->setMinimumSectionSize(100);
        tw_produtos->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_produtos->horizontalHeader()->setStretchLastSection(true);
        tw_produtos->verticalHeader()->setVisible(false);
        tw_produtos->verticalHeader()->setCascadingSectionResizes(false);
        tw_produtos->verticalHeader()->setDefaultSectionSize(20);
        tw_produtos->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout->addWidget(tw_produtos);


        verticalLayout_2->addWidget(gb_clientes);


        horizontalLayout->addLayout(verticalLayout_2);

        tela_estoque->setCentralWidget(centralwidget);
        barra_de_status = new QStatusBar(tela_estoque);
        barra_de_status->setObjectName(QString::fromUtf8("barra_de_status"));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Calibri"));
        font10.setPointSize(10);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        barra_de_status->setFont(font10);
        barra_de_status->setLayoutDirection(Qt::RightToLeft);
        barra_de_status->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #FFFFFF;\n"
"	font: 75 9pt \"Calibri\";\n"
"}\n"
"\n"
"QStatusBar{\n"
"	 background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                       stop:0.3 #777777, stop:0.6 #525252); \n"
"	border: none;\n"
"}\n"
""));
        tela_estoque->setStatusBar(barra_de_status);
        QWidget::setTabOrder(le_codigo, le_nome);
        QWidget::setTabOrder(le_nome, le_fabricante);
        QWidget::setTabOrder(le_fabricante, le_codigo_barras);
        QWidget::setTabOrder(le_codigo_barras, btn_limpar);
        QWidget::setTabOrder(btn_limpar, btn_adicionar_produto);
        QWidget::setTabOrder(btn_adicionar_produto, btn_restaurar_produto);
        QWidget::setTabOrder(btn_restaurar_produto, btn_entrada_produto);
        QWidget::setTabOrder(btn_entrada_produto, btn_saida_produto);
        QWidget::setTabOrder(btn_saida_produto, btn_reajustar_estoque);
        QWidget::setTabOrder(btn_reajustar_estoque, pushButton);
        QWidget::setTabOrder(pushButton, tw_produtos);
        QWidget::setTabOrder(tw_produtos, cb_tipo);
        QWidget::setTabOrder(cb_tipo, tw_legenda);

        retranslateUi(tela_estoque);
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_codigo_barras, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_fabricante, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_nome, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_codigo, SLOT(clear()));

        QMetaObject::connectSlotsByName(tela_estoque);
    } // setupUi

    void retranslateUi(QMainWindow *tela_estoque)
    {
        tela_estoque->setWindowTitle(QApplication::translate("tela_estoque", "Estoque", 0, QApplication::UnicodeUTF8));
        btn_adicionar_produto->setText(QApplication::translate("tela_estoque", "Adicionar Produto", 0, QApplication::UnicodeUTF8));
        btn_restaurar_produto->setText(QApplication::translate("tela_estoque", "Restaurar Produto", 0, QApplication::UnicodeUTF8));
        btn_entrada_produto->setText(QApplication::translate("tela_estoque", "Entrada de Produto", 0, QApplication::UnicodeUTF8));
        btn_saida_produto->setText(QApplication::translate("tela_estoque", "Sa\303\255da de Produto", 0, QApplication::UnicodeUTF8));
        btn_reajustar_estoque->setText(QApplication::translate("tela_estoque", "Reajustar Estoque", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tw_legenda->isSortingEnabled();
        tw_legenda->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tw_legenda->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("tela_estoque", "Zerado", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tw_legenda->item(1, 0);
        ___qtablewidgetitem1->setText(QApplication::translate("tela_estoque", "M\303\255nimo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tw_legenda->item(2, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("tela_estoque", "Nomal", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tw_legenda->item(3, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("tela_estoque", "Ideal", 0, QApplication::UnicodeUTF8));
        tw_legenda->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("tela_estoque", "Configurar legenda", 0, QApplication::UnicodeUTF8));
        gb_filtrar->setTitle(QApplication::translate("tela_estoque", "Filtrar por:", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_estoque", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_codigo_barras->setText(QApplication::translate("tela_estoque", "C\303\263digo de Barras:", 0, QApplication::UnicodeUTF8));
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        cb_tipo->clear();
        cb_tipo->insertItems(0, QStringList()
         << QApplication::translate("tela_estoque", "Todos", 0, QApplication::UnicodeUTF8)
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
        btn_limpar->setText(QApplication::translate("tela_estoque", "Limpar", 0, QApplication::UnicodeUTF8));
        lb_fabricante->setText(QApplication::translate("tela_estoque", "Fabricante:", 0, QApplication::UnicodeUTF8));
        lb_tipo->setText(QApplication::translate("tela_estoque", "Tipo:", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_estoque", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_estoque", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        le_codigo_barras->setInputMask(QApplication::translate("tela_estoque", "0 000000 000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo_barras->setText(QString());
        le_fabricante->setInputMask(QString());
        le_fabricante->setText(QString());
        gb_clientes->setTitle(QApplication::translate("tela_estoque", "Lista de Produtos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        barra_de_status->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class tela_estoque: public Ui_tela_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_ESTOQUE_H
