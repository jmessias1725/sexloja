/********************************************************************************
** Form generated from reading UI file 'tela_listar_clientes.ui'
**
** Created: Sat 20. Oct 15:24:21 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_LISTAR_CLIENTES_H
#define UI_TELA_LISTAR_CLIENTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_tela_listar_clientes
{
public:
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
    QGroupBox *gb_clientes;
    QTableView *tv_clientes;

    void setupUi(QDialog *tela_listar_clientes)
    {
        if (tela_listar_clientes->objectName().isEmpty())
            tela_listar_clientes->setObjectName(QString::fromUtf8("tela_listar_clientes"));
        tela_listar_clientes->resize(767, 328);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_listar_clientes->setWindowIcon(icon);
        tela_listar_clientes->setModal(true);
        gb_buscar = new QGroupBox(tela_listar_clientes);
        gb_buscar->setObjectName(QString::fromUtf8("gb_buscar"));
        gb_buscar->setGeometry(QRect(5, 0, 756, 78));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_buscar->setFont(font);
        gb_buscar->setAlignment(Qt::AlignCenter);
        lb_codigo = new QLabel(gb_buscar);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(7, 20, 46, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lb_codigo->setFont(font1);
        le_codigo = new QLineEdit(gb_buscar);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(53, 20, 70, 20));
        le_codigo->setFont(font1);
        le_codigo->setCursorPosition(9);
        lb_nome = new QLabel(gb_buscar);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(130, 20, 35, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        lb_nome->setFont(font2);
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
        le_nome->setFont(font2);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(false);
        lb_telefone = new QLabel(gb_buscar);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(602, 20, 50, 20));
        lb_telefone->setFont(font1);
        le_telefone = new QLineEdit(gb_buscar);
        le_telefone->setObjectName(QString::fromUtf8("le_telefone"));
        le_telefone->setGeometry(QRect(652, 20, 97, 20));
        le_telefone->setFont(font1);
        btn_buscar = new QPushButton(gb_buscar);
        btn_buscar->setObjectName(QString::fromUtf8("btn_buscar"));
        btn_buscar->setGeometry(QRect(245, 47, 90, 24));
        btn_buscar->setMinimumSize(QSize(0, 24));
        btn_buscar->setMaximumSize(QSize(90, 24));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        btn_buscar->setFont(font3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/busar_clientes.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_buscar->setIcon(icon1);
        btn_buscar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(gb_buscar);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(445, 47, 90, 24));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        btn_cancelar->setFont(font3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon2);
        btn_cancelar->setIconSize(QSize(18, 18));
        btn_limpar = new QPushButton(gb_buscar);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));
        btn_limpar->setGeometry(QRect(345, 47, 90, 24));
        btn_limpar->setMinimumSize(QSize(0, 24));
        btn_limpar->setMaximumSize(QSize(90, 24));
        btn_limpar->setFont(font3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_limpar->setIcon(icon3);
        btn_limpar->setIconSize(QSize(20, 20));
        gb_clientes = new QGroupBox(tela_listar_clientes);
        gb_clientes->setObjectName(QString::fromUtf8("gb_clientes"));
        gb_clientes->setGeometry(QRect(5, 83, 756, 240));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        gb_clientes->setFont(font4);
        gb_clientes->setAlignment(Qt::AlignCenter);
        tv_clientes = new QTableView(gb_clientes);
        tv_clientes->setObjectName(QString::fromUtf8("tv_clientes"));
        tv_clientes->setGeometry(QRect(7, 15, 742, 218));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setKerning(false);
        tv_clientes->setFont(font5);
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
        QWidget::setTabOrder(le_codigo, le_nome);
        QWidget::setTabOrder(le_nome, le_telefone);
        QWidget::setTabOrder(le_telefone, btn_buscar);
        QWidget::setTabOrder(btn_buscar, btn_limpar);
        QWidget::setTabOrder(btn_limpar, btn_cancelar);
        QWidget::setTabOrder(btn_cancelar, tv_clientes);

        retranslateUi(tela_listar_clientes);
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_codigo, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_nome, SLOT(clear()));
        QObject::connect(btn_limpar, SIGNAL(clicked()), le_telefone, SLOT(clear()));

        QMetaObject::connectSlotsByName(tela_listar_clientes);
    } // setupUi

    void retranslateUi(QDialog *tela_listar_clientes)
    {
        tela_listar_clientes->setWindowTitle(QApplication::translate("tela_listar_clientes", "Selecionar Clientes", 0, QApplication::UnicodeUTF8));
        gb_buscar->setTitle(QApplication::translate("tela_listar_clientes", "Buscar por:", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_listar_clientes", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_listar_clientes", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_nome->setText(QApplication::translate("tela_listar_clientes", "Nome:", 0, QApplication::UnicodeUTF8));
        le_nome->setText(QString());
        lb_telefone->setText(QApplication::translate("tela_listar_clientes", "Telefone:", 0, QApplication::UnicodeUTF8));
        le_telefone->setInputMask(QApplication::translate("tela_listar_clientes", "(00)00000-0000; ", 0, QApplication::UnicodeUTF8));
        le_telefone->setText(QApplication::translate("tela_listar_clientes", "()-", 0, QApplication::UnicodeUTF8));
        btn_buscar->setText(QApplication::translate("tela_listar_clientes", "Buscar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_listar_clientes", "Cancelar", 0, QApplication::UnicodeUTF8));
        btn_limpar->setText(QApplication::translate("tela_listar_clientes", "Limpar", 0, QApplication::UnicodeUTF8));
        gb_clientes->setTitle(QApplication::translate("tela_listar_clientes", "Clientes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_listar_clientes: public Ui_tela_listar_clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_LISTAR_CLIENTES_H
