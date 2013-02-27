/********************************************************************************
** Form generated from reading UI file 'tela_pagamento_cartao_venda.ui'
**
** Created: Tue 26. Feb 11:38:59 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PAGAMENTO_CARTAO_VENDA_H
#define UI_TELA_PAGAMENTO_CARTAO_VENDA_H

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
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_tela_pagamento_cartao_venda
{
public:
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QGroupBox *groupBox;
    QLabel *lb_valor;
    QLineEdit *le_valor;
    QLabel *lb_numero_parcelas;
    QSpinBox *sb_num_parcelas;

    void setupUi(QDialog *tela_pagamento_cartao_venda)
    {
        if (tela_pagamento_cartao_venda->objectName().isEmpty())
            tela_pagamento_cartao_venda->setObjectName(QString::fromUtf8("tela_pagamento_cartao_venda"));
        tela_pagamento_cartao_venda->resize(185, 100);
        tela_pagamento_cartao_venda->setMaximumSize(QSize(185, 100));
        btn_confirmar = new QPushButton(tela_pagamento_cartao_venda);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(5, 70, 87, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        btn_confirmar->setFont(font);
        btn_confirmar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(tela_pagamento_cartao_venda);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(93, 70, 87, 25));
        btn_cancelar->setFont(font);
        btn_cancelar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));
        groupBox = new QGroupBox(tela_pagamento_cartao_venda);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 0, 175, 65));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setAlignment(Qt::AlignCenter);
        lb_valor = new QLabel(groupBox);
        lb_valor->setObjectName(QString::fromUtf8("lb_valor"));
        lb_valor->setGeometry(QRect(5, 15, 33, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        lb_valor->setFont(font2);
        le_valor = new QLineEdit(groupBox);
        le_valor->setObjectName(QString::fromUtf8("le_valor"));
        le_valor->setGeometry(QRect(38, 15, 132, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        le_valor->setFont(font3);
        lb_numero_parcelas = new QLabel(groupBox);
        lb_numero_parcelas->setObjectName(QString::fromUtf8("lb_numero_parcelas"));
        lb_numero_parcelas->setGeometry(QRect(5, 40, 114, 20));
        lb_numero_parcelas->setFont(font2);
        sb_num_parcelas = new QSpinBox(groupBox);
        sb_num_parcelas->setObjectName(QString::fromUtf8("sb_num_parcelas"));
        sb_num_parcelas->setGeometry(QRect(120, 40, 50, 20));
        sb_num_parcelas->setFont(font3);
        sb_num_parcelas->setMinimum(1);
        sb_num_parcelas->setMaximum(12);
        sb_num_parcelas->setValue(1);

        retranslateUi(tela_pagamento_cartao_venda);

        QMetaObject::connectSlotsByName(tela_pagamento_cartao_venda);
    } // setupUi

    void retranslateUi(QDialog *tela_pagamento_cartao_venda)
    {
        tela_pagamento_cartao_venda->setWindowTitle(QApplication::translate("tela_pagamento_cartao_venda", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_pagamento_cartao_venda", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_pagamento_cartao_venda", "Cancelar", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_pagamento_cartao_venda", "Cart\303\243o", 0, QApplication::UnicodeUTF8));
        lb_valor->setText(QApplication::translate("tela_pagamento_cartao_venda", "Valor:", 0, QApplication::UnicodeUTF8));
        lb_numero_parcelas->setText(QApplication::translate("tela_pagamento_cartao_venda", "N\303\272mero de parcelas:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_pagamento_cartao_venda: public Ui_tela_pagamento_cartao_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PAGAMENTO_CARTAO_VENDA_H
