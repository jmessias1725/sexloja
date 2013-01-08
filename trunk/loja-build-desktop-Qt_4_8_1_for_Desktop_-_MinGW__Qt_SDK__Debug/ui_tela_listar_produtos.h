/********************************************************************************
** Form generated from reading UI file 'tela_listar_produtos.ui'
**
** Created: Tue 8. Jan 09:44:08 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_LISTAR_PRODUTOS_H
#define UI_TELA_LISTAR_PRODUTOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_listar_produtos
{
public:
    QWidget *layoutWidget;
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
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QGroupBox *gb_clientes;
    QVBoxLayout *verticalLayout;
    QTableWidget *tw_produtos;

    void setupUi(QDialog *tela_listar_produtos)
    {
        if (tela_listar_produtos->objectName().isEmpty())
            tela_listar_produtos->setObjectName(QString::fromUtf8("tela_listar_produtos"));
        tela_listar_produtos->setWindowModality(Qt::ApplicationModal);
        tela_listar_produtos->resize(903, 581);
        layoutWidget = new QWidget(tela_listar_produtos);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 903, 581));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gb_filtrar = new QGroupBox(layoutWidget);
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
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_tipo->setFont(font1);
        le_fabricante = new QLineEdit(gb_filtrar);
        le_fabricante->setObjectName(QString::fromUtf8("le_fabricante"));
        le_fabricante->setGeometry(QRect(68, 47, 523, 21));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        le_fabricante->setFont(font2);
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
        le_nome->setGeometry(QRect(318, 17, 569, 20));
        le_nome->setMinimumSize(QSize(506, 20));
        le_nome->setFont(font2);
        le_nome->setInputMethodHints(Qt::ImhNone);
        le_nome->setMaxLength(60);
        le_codigo_barras = new QLineEdit(gb_filtrar);
        le_codigo_barras->setObjectName(QString::fromUtf8("le_codigo_barras"));
        le_codigo_barras->setGeometry(QRect(697, 47, 105, 20));
        le_codigo_barras->setMinimumSize(QSize(105, 20));
        le_codigo_barras->setMaximumSize(QSize(105, 20));
        le_codigo_barras->setFont(font2);
        le_codigo_barras->setMaxLength(15);
        lb_nome = new QLabel(gb_filtrar);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(284, 17, 35, 20));
        lb_nome->setMinimumSize(QSize(35, 20));
        lb_nome->setMaximumSize(QSize(35, 20));
        lb_nome->setFont(font1);
        cb_tipo = new QComboBox(gb_filtrar);
        cb_tipo->setObjectName(QString::fromUtf8("cb_tipo"));
        cb_tipo->setGeometry(QRect(33, 17, 95, 20));
        cb_tipo->setMaximumSize(QSize(100, 20));
        cb_tipo->setFont(font2);
        lb_codigo_barras = new QLabel(gb_filtrar);
        lb_codigo_barras->setObjectName(QString::fromUtf8("lb_codigo_barras"));
        lb_codigo_barras->setGeometry(QRect(598, 47, 99, 20));
        lb_codigo_barras->setMinimumSize(QSize(99, 20));
        lb_codigo_barras->setMaximumSize(QSize(99, 20));
        lb_codigo_barras->setFont(font1);
        btn_limpar = new QPushButton(gb_filtrar);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));
        btn_limpar->setGeometry(QRect(808, 44, 80, 24));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        btn_limpar->setFont(font3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_limpar->setIcon(icon);
        lb_codigo = new QLabel(gb_filtrar);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(135, 17, 42, 20));
        lb_codigo->setFont(font3);
        le_codigo = new QLineEdit(gb_filtrar);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(177, 17, 100, 20));
        le_codigo->setFont(font3);
        le_codigo->setCursorPosition(0);
        le_codigo->setReadOnly(false);

        verticalLayout_2->addWidget(gb_filtrar);

        gb_clientes = new QGroupBox(layoutWidget);
        gb_clientes->setObjectName(QString::fromUtf8("gb_clientes"));
        gb_clientes->setMinimumSize(QSize(889, 251));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        gb_clientes->setFont(font4);
        gb_clientes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout = new QVBoxLayout(gb_clientes);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 5);
        tw_produtos = new QTableWidget(gb_clientes);
        tw_produtos->setObjectName(QString::fromUtf8("tw_produtos"));
        tw_produtos->setMinimumSize(QSize(869, 469));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setKerning(false);
        tw_produtos->setFont(font5);
        tw_produtos->setFrameShape(QFrame::WinPanel);
        tw_produtos->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tw_produtos->setAutoScroll(true);
        tw_produtos->setAlternatingRowColors(true);
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
        tw_produtos->horizontalHeader()->setMinimumSectionSize(120);
        tw_produtos->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_produtos->horizontalHeader()->setStretchLastSection(true);
        tw_produtos->verticalHeader()->setVisible(false);
        tw_produtos->verticalHeader()->setCascadingSectionResizes(false);
        tw_produtos->verticalHeader()->setDefaultSectionSize(20);
        tw_produtos->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout->addWidget(tw_produtos);


        verticalLayout_2->addWidget(gb_clientes);


        retranslateUi(tela_listar_produtos);

        QMetaObject::connectSlotsByName(tela_listar_produtos);
    } // setupUi

    void retranslateUi(QDialog *tela_listar_produtos)
    {
        tela_listar_produtos->setWindowTitle(QApplication::translate("tela_listar_produtos", "Lista de Produtos", 0, QApplication::UnicodeUTF8));
        gb_filtrar->setTitle(QApplication::translate("tela_listar_produtos", "Filtrar por:", 0, QApplication::UnicodeUTF8));
        lb_tipo->setText(QApplication::translate("tela_listar_produtos", "Tipo:", 0, QApplication::UnicodeUTF8));
        le_fabricante->setInputMask(QString());
        le_fabricante->setText(QString());
        lb_fabricante->setText(QApplication::translate("tela_listar_produtos", "Fabricante:", 0, QApplication::UnicodeUTF8));
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        le_codigo_barras->setInputMask(QApplication::translate("tela_listar_produtos", "0 000000 000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo_barras->setText(QString());
        lb_nome->setText(QApplication::translate("tela_listar_produtos", "Nome:", 0, QApplication::UnicodeUTF8));
        cb_tipo->clear();
        cb_tipo->insertItems(0, QStringList()
         << QApplication::translate("tela_listar_produtos", "Todos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Acess\303\263rio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Cosm\303\251tico", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Decora\303\247\303\243o", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Estimulante", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Fetish", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Gel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Higiene", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Jogo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Kit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Lubrificante", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Perfumaria", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Preservativo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Pr\303\263tese", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Vestu\303\241rio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_produtos", "Vibrador", 0, QApplication::UnicodeUTF8)
        );
        lb_codigo_barras->setText(QApplication::translate("tela_listar_produtos", "C\303\263digo de Barras:", 0, QApplication::UnicodeUTF8));
        btn_limpar->setText(QApplication::translate("tela_listar_produtos", "Limpar", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_listar_produtos", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_listar_produtos", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        gb_clientes->setTitle(QApplication::translate("tela_listar_produtos", "Lista de produtos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_listar_produtos: public Ui_tela_listar_produtos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_LISTAR_PRODUTOS_H
