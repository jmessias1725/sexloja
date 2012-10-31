/********************************************************************************
** Form generated from reading UI file 'tela_comprar.ui'
**
** Created: Wed 31. Oct 17:38:51 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_COMPRAR_H
#define UI_TELA_COMPRAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_tela_comprar
{
public:
    QGroupBox *gb_dados_compra;
    QDateEdit *dateEdit;
    QGroupBox *gb_dados_fornecedor;
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QLabel *lb_razao_social;
    QLineEdit *le_razao_social;
    QLineEdit *le_nome;
    QLabel *lb_nome;
    QLabel *lb_cnpj;
    QLineEdit *le_cnpj;

    void setupUi(QDialog *tela_comprar)
    {
        if (tela_comprar->objectName().isEmpty())
            tela_comprar->setObjectName(QString::fromUtf8("tela_comprar"));
        tela_comprar->resize(800, 468);
        gb_dados_compra = new QGroupBox(tela_comprar);
        gb_dados_compra->setObjectName(QString::fromUtf8("gb_dados_compra"));
        gb_dados_compra->setGeometry(QRect(5, 70, 790, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_dados_compra->setFont(font);
        dateEdit = new QDateEdit(gb_dados_compra);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(10, 20, 91, 22));
        gb_dados_fornecedor = new QGroupBox(tela_comprar);
        gb_dados_fornecedor->setObjectName(QString::fromUtf8("gb_dados_fornecedor"));
        gb_dados_fornecedor->setGeometry(QRect(5, 5, 790, 65));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        gb_dados_fornecedor->setFont(font1);
        gb_dados_fornecedor->setAlignment(Qt::AlignCenter);
        lb_codigo = new QLabel(gb_dados_fornecedor);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(5, 15, 42, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        lb_codigo->setFont(font2);
        le_codigo = new QLineEdit(gb_dados_fornecedor);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(47, 15, 70, 20));
        le_codigo->setFont(font2);
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        lb_razao_social = new QLabel(gb_dados_fornecedor);
        lb_razao_social->setObjectName(QString::fromUtf8("lb_razao_social"));
        lb_razao_social->setGeometry(QRect(122, 15, 75, 20));
        lb_razao_social->setMaximumSize(QSize(100, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        lb_razao_social->setFont(font3);
        le_razao_social = new QLineEdit(gb_dados_fornecedor);
        le_razao_social->setObjectName(QString::fromUtf8("le_razao_social"));
        le_razao_social->setGeometry(QRect(197, 15, 588, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_razao_social->sizePolicy().hasHeightForWidth());
        le_razao_social->setSizePolicy(sizePolicy);
        le_razao_social->setMinimumSize(QSize(450, 20));
        le_razao_social->setMaximumSize(QSize(800, 20));
        le_razao_social->setFont(font3);
        le_razao_social->setMaxLength(100);
        le_razao_social->setReadOnly(true);
        le_nome = new QLineEdit(gb_dados_fornecedor);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(39, 40, 588, 20));
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(450, 20));
        le_nome->setMaximumSize(QSize(800, 20));
        le_nome->setFont(font3);
        le_nome->setMaxLength(32767);
        le_nome->setReadOnly(true);
        lb_nome = new QLabel(gb_dados_fornecedor);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 40, 34, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font3);
        lb_cnpj = new QLabel(gb_dados_fornecedor);
        lb_cnpj->setObjectName(QString::fromUtf8("lb_cnpj"));
        lb_cnpj->setGeometry(QRect(632, 40, 32, 20));
        lb_cnpj->setFont(font2);
        le_cnpj = new QLineEdit(gb_dados_fornecedor);
        le_cnpj->setObjectName(QString::fromUtf8("le_cnpj"));
        le_cnpj->setGeometry(QRect(665, 40, 120, 20));
        le_cnpj->setFont(font2);
        le_cnpj->setReadOnly(true);

        retranslateUi(tela_comprar);

        QMetaObject::connectSlotsByName(tela_comprar);
    } // setupUi

    void retranslateUi(QDialog *tela_comprar)
    {
        tela_comprar->setWindowTitle(QApplication::translate("tela_comprar", "Dialog", 0, QApplication::UnicodeUTF8));
        gb_dados_compra->setTitle(QApplication::translate("tela_comprar", "Dados da compra", 0, QApplication::UnicodeUTF8));
        gb_dados_fornecedor->setTitle(QApplication::translate("tela_comprar", "Dados do Fornecedor", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_comprar", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_comprar", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_razao_social->setText(QApplication::translate("tela_comprar", "Raz\303\243o Social:", 0, QApplication::UnicodeUTF8));
        le_razao_social->setText(QString());
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        lb_nome->setText(QApplication::translate("tela_comprar", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_cnpj->setText(QApplication::translate("tela_comprar", "CNPJ:", 0, QApplication::UnicodeUTF8));
        le_cnpj->setInputMask(QApplication::translate("tela_comprar", "00.000.000/0000-00; ", 0, QApplication::UnicodeUTF8));
        le_cnpj->setText(QApplication::translate("tela_comprar", "../-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_comprar: public Ui_tela_comprar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_COMPRAR_H
