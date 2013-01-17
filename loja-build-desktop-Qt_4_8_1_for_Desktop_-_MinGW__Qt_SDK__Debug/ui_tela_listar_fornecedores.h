/********************************************************************************
** Form generated from reading UI file 'tela_listar_fornecedores.ui'
**
** Created: Thu 17. Jan 14:26:33 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_LISTAR_FORNECEDORES_H
#define UI_TELA_LISTAR_FORNECEDORES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_tela_listar_fornecedores
{
public:
    QGroupBox *gb_fornecedores;
    QTableView *tv_fornecedores;
    QGroupBox *gb_buscar;
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QLabel *lb_nome;
    QLineEdit *le_nome;
    QLabel *lb_telefone;
    QLineEdit *le_telefone;
    QPushButton *btn_buscar;
    QPushButton *btn_cancelar;
    QPushButton *btn_limpar;
    QLineEdit *le_razao_social;
    QLabel *lb_razao_social;
    QLineEdit *le_cnpj;
    QLabel *lb_cnpj;
    QFrame *frame;
    QToolButton *btn_adicionar_fornecedor;

    void setupUi(QDialog *tela_listar_fornecedores)
    {
        if (tela_listar_fornecedores->objectName().isEmpty())
            tela_listar_fornecedores->setObjectName(QString::fromUtf8("tela_listar_fornecedores"));
        tela_listar_fornecedores->resize(767, 410);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_listar_fornecedores->setWindowIcon(icon);
        tela_listar_fornecedores->setModal(true);
        gb_fornecedores = new QGroupBox(tela_listar_fornecedores);
        gb_fornecedores->setObjectName(QString::fromUtf8("gb_fornecedores"));
        gb_fornecedores->setGeometry(QRect(5, 164, 756, 240));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_fornecedores->setFont(font);
        gb_fornecedores->setAlignment(Qt::AlignCenter);
        tv_fornecedores = new QTableView(gb_fornecedores);
        tv_fornecedores->setObjectName(QString::fromUtf8("tv_fornecedores"));
        tv_fornecedores->setGeometry(QRect(7, 15, 742, 218));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setKerning(false);
        tv_fornecedores->setFont(font1);
        tv_fornecedores->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tv_fornecedores->setAlternatingRowColors(true);
        tv_fornecedores->setSortingEnabled(false);
        tv_fornecedores->horizontalHeader()->setVisible(false);
        tv_fornecedores->horizontalHeader()->setDefaultSectionSize(390);
        tv_fornecedores->horizontalHeader()->setMinimumSectionSize(15);
        tv_fornecedores->horizontalHeader()->setStretchLastSection(true);
        tv_fornecedores->verticalHeader()->setVisible(false);
        tv_fornecedores->verticalHeader()->setCascadingSectionResizes(false);
        tv_fornecedores->verticalHeader()->setDefaultSectionSize(30);
        tv_fornecedores->verticalHeader()->setMinimumSectionSize(20);
        tv_fornecedores->verticalHeader()->setStretchLastSection(false);
        gb_buscar = new QGroupBox(tela_listar_fornecedores);
        gb_buscar->setObjectName(QString::fromUtf8("gb_buscar"));
        gb_buscar->setGeometry(QRect(5, 54, 756, 108));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(false);
        gb_buscar->setFont(font2);
        gb_buscar->setAlignment(Qt::AlignCenter);
        lb_codigo = new QLabel(gb_buscar);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(7, 20, 46, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        lb_codigo->setFont(font3);
        le_codigo = new QLineEdit(gb_buscar);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(53, 20, 70, 20));
        le_codigo->setFont(font3);
        le_codigo->setCursorPosition(9);
        lb_nome = new QLabel(gb_buscar);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(130, 20, 35, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(false);
        lb_nome->setFont(font4);
        le_nome = new QLineEdit(gb_buscar);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(165, 20, 430, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(410, 20));
        le_nome->setMaximumSize(QSize(500, 20));
        le_nome->setFont(font4);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(false);
        lb_telefone = new QLabel(gb_buscar);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(602, 20, 50, 20));
        lb_telefone->setFont(font3);
        le_telefone = new QLineEdit(gb_buscar);
        le_telefone->setObjectName(QString::fromUtf8("le_telefone"));
        le_telefone->setGeometry(QRect(652, 20, 97, 20));
        le_telefone->setFont(font3);
        btn_buscar = new QPushButton(gb_buscar);
        btn_buscar->setObjectName(QString::fromUtf8("btn_buscar"));
        btn_buscar->setGeometry(QRect(233, 76, 90, 24));
        btn_buscar->setMinimumSize(QSize(0, 24));
        btn_buscar->setMaximumSize(QSize(90, 24));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        btn_buscar->setFont(font5);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/busar_clientes.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_buscar->setIcon(icon1);
        btn_buscar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(gb_buscar);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(433, 76, 90, 24));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        btn_cancelar->setFont(font5);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon2);
        btn_cancelar->setIconSize(QSize(18, 18));
        btn_limpar = new QPushButton(gb_buscar);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));
        btn_limpar->setGeometry(QRect(333, 76, 90, 24));
        btn_limpar->setMinimumSize(QSize(0, 24));
        btn_limpar->setMaximumSize(QSize(90, 24));
        btn_limpar->setFont(font5);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_limpar->setIcon(icon3);
        btn_limpar->setIconSize(QSize(20, 20));
        le_razao_social = new QLineEdit(gb_buscar);
        le_razao_social->setObjectName(QString::fromUtf8("le_razao_social"));
        le_razao_social->setGeometry(QRect(82, 50, 500, 20));
        sizePolicy.setHeightForWidth(le_razao_social->sizePolicy().hasHeightForWidth());
        le_razao_social->setSizePolicy(sizePolicy);
        le_razao_social->setMinimumSize(QSize(450, 20));
        le_razao_social->setMaximumSize(QSize(800, 20));
        le_razao_social->setFont(font4);
        le_razao_social->setMaxLength(100);
        le_razao_social->setReadOnly(false);
        lb_razao_social = new QLabel(gb_buscar);
        lb_razao_social->setObjectName(QString::fromUtf8("lb_razao_social"));
        lb_razao_social->setGeometry(QRect(7, 50, 75, 20));
        lb_razao_social->setMaximumSize(QSize(100, 20));
        lb_razao_social->setFont(font4);
        le_cnpj = new QLineEdit(gb_buscar);
        le_cnpj->setObjectName(QString::fromUtf8("le_cnpj"));
        le_cnpj->setGeometry(QRect(621, 50, 128, 20));
        le_cnpj->setFont(font3);
        lb_cnpj = new QLabel(gb_buscar);
        lb_cnpj->setObjectName(QString::fromUtf8("lb_cnpj"));
        lb_cnpj->setGeometry(QRect(588, 50, 40, 20));
        lb_cnpj->setFont(font3);
        frame = new QFrame(tela_listar_fornecedores);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 50));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.1 #777777, stop:0.9 #525252);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        btn_adicionar_fornecedor = new QToolButton(frame);
        btn_adicionar_fornecedor->setObjectName(QString::fromUtf8("btn_adicionar_fornecedor"));
        btn_adicionar_fornecedor->setGeometry(QRect(10, 2, 45, 45));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/fornecedor_cadastrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_adicionar_fornecedor->setIcon(icon4);
        btn_adicionar_fornecedor->setIconSize(QSize(40, 40));
        btn_adicionar_fornecedor->setAutoRaise(true);
        QWidget::setTabOrder(le_codigo, le_nome);
        QWidget::setTabOrder(le_nome, le_telefone);
        QWidget::setTabOrder(le_telefone, le_razao_social);
        QWidget::setTabOrder(le_razao_social, le_cnpj);
        QWidget::setTabOrder(le_cnpj, btn_buscar);
        QWidget::setTabOrder(btn_buscar, btn_limpar);
        QWidget::setTabOrder(btn_limpar, btn_cancelar);
        QWidget::setTabOrder(btn_cancelar, tv_fornecedores);

        retranslateUi(tela_listar_fornecedores);
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_codigo, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_nome, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_telefone, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_razao_social, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_cnpj, SLOT(clear()));

        QMetaObject::connectSlotsByName(tela_listar_fornecedores);
    } // setupUi

    void retranslateUi(QDialog *tela_listar_fornecedores)
    {
        tela_listar_fornecedores->setWindowTitle(QApplication::translate("tela_listar_fornecedores", "Selecionar Fornecedores", 0, QApplication::UnicodeUTF8));
        gb_fornecedores->setTitle(QApplication::translate("tela_listar_fornecedores", "Fornecedores", 0, QApplication::UnicodeUTF8));
        gb_buscar->setTitle(QApplication::translate("tela_listar_fornecedores", "Buscar por:", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_listar_fornecedores", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_listar_fornecedores", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_nome->setText(QApplication::translate("tela_listar_fornecedores", "Nome:", 0, QApplication::UnicodeUTF8));
        le_nome->setText(QString());
        lb_telefone->setText(QApplication::translate("tela_listar_fornecedores", "Telefone:", 0, QApplication::UnicodeUTF8));
        le_telefone->setInputMask(QApplication::translate("tela_listar_fornecedores", "(00)00000-0000; ", 0, QApplication::UnicodeUTF8));
        le_telefone->setText(QApplication::translate("tela_listar_fornecedores", "()-", 0, QApplication::UnicodeUTF8));
        btn_buscar->setText(QApplication::translate("tela_listar_fornecedores", "Buscar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_listar_fornecedores", "Cancelar", 0, QApplication::UnicodeUTF8));
        btn_limpar->setText(QApplication::translate("tela_listar_fornecedores", "Limpar", 0, QApplication::UnicodeUTF8));
        le_razao_social->setText(QString());
        lb_razao_social->setText(QApplication::translate("tela_listar_fornecedores", "Raz\303\243o Social:", 0, QApplication::UnicodeUTF8));
        le_cnpj->setInputMask(QApplication::translate("tela_listar_fornecedores", "00.000.000/0000-00; ", 0, QApplication::UnicodeUTF8));
        le_cnpj->setText(QApplication::translate("tela_listar_fornecedores", "../-", 0, QApplication::UnicodeUTF8));
        lb_cnpj->setText(QApplication::translate("tela_listar_fornecedores", "CNPJ:", 0, QApplication::UnicodeUTF8));
        btn_adicionar_fornecedor->setText(QApplication::translate("tela_listar_fornecedores", "Adicionar Fornecedor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_listar_fornecedores: public Ui_tela_listar_fornecedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_LISTAR_FORNECEDORES_H
