/********************************************************************************
** Form generated from reading UI file 'tela_pagamento_dinheiro.ui'
**
** Created: Tue 20. Nov 19:30:12 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PAGAMENTO_DINHEIRO_H
#define UI_TELA_PAGAMENTO_DINHEIRO_H

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

QT_BEGIN_NAMESPACE

class Ui_tela_pagamento_dinheiro
{
public:
    QGroupBox *groupBox;
    QLabel *lb_valor;
    QLineEdit *le_valor;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *tela_pagamento_dinheiro)
    {
        if (tela_pagamento_dinheiro->objectName().isEmpty())
            tela_pagamento_dinheiro->setObjectName(QString::fromUtf8("tela_pagamento_dinheiro"));
        tela_pagamento_dinheiro->setWindowModality(Qt::ApplicationModal);
        tela_pagamento_dinheiro->resize(190, 105);
        tela_pagamento_dinheiro->setMinimumSize(QSize(190, 105));
        tela_pagamento_dinheiro->setMaximumSize(QSize(190, 105));
        groupBox = new QGroupBox(tela_pagamento_dinheiro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 0, 180, 70));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignCenter);
        lb_valor = new QLabel(groupBox);
        lb_valor->setObjectName(QString::fromUtf8("lb_valor"));
        lb_valor->setGeometry(QRect(5, 15, 170, 30));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lb_valor->setFont(font1);
        le_valor = new QLineEdit(groupBox);
        le_valor->setObjectName(QString::fromUtf8("le_valor"));
        le_valor->setGeometry(QRect(5, 45, 170, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        le_valor->setFont(font2);
        btn_confirmar = new QPushButton(tela_pagamento_dinheiro);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(5, 75, 90, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        btn_confirmar->setFont(font3);
        btn_confirmar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(tela_pagamento_dinheiro);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(95, 75, 90, 25));
        btn_cancelar->setFont(font3);
        btn_cancelar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));

        retranslateUi(tela_pagamento_dinheiro);

        QMetaObject::connectSlotsByName(tela_pagamento_dinheiro);
    } // setupUi

    void retranslateUi(QDialog *tela_pagamento_dinheiro)
    {
        tela_pagamento_dinheiro->setWindowTitle(QApplication::translate("tela_pagamento_dinheiro", "Pagamento", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_pagamento_dinheiro", "Dinheiro", 0, QApplication::UnicodeUTF8));
        lb_valor->setText(QApplication::translate("tela_pagamento_dinheiro", "Defina o valor que vai ser pago\n"
"em dinheiro.", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_pagamento_dinheiro", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_pagamento_dinheiro", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_pagamento_dinheiro: public Ui_tela_pagamento_dinheiro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PAGAMENTO_DINHEIRO_H
