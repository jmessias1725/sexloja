/********************************************************************************
** Form generated from reading UI file 'tela_pagamento_dinheiro.ui'
**
** Created: Mon 31. Dec 14:51:23 2012
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
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_tela_pagamento_dinheiro
{
public:
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QGroupBox *groupBox;
    QLabel *lb_valor;
    QLineEdit *le_valor;
    QLabel *lb_dia;
    QLabel *lb_numero_parcelas;
    QSpinBox *sb_num_parcelas;
    QDateEdit *data;

    void setupUi(QDialog *tela_pagamento_dinheiro)
    {
        if (tela_pagamento_dinheiro->objectName().isEmpty())
            tela_pagamento_dinheiro->setObjectName(QString::fromUtf8("tela_pagamento_dinheiro"));
        tela_pagamento_dinheiro->setWindowModality(Qt::ApplicationModal);
        tela_pagamento_dinheiro->resize(209, 135);
        tela_pagamento_dinheiro->setMinimumSize(QSize(209, 135));
        tela_pagamento_dinheiro->setMaximumSize(QSize(209, 135));
        btn_confirmar = new QPushButton(tela_pagamento_dinheiro);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(14, 105, 90, 25));
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
        btn_cancelar = new QPushButton(tela_pagamento_dinheiro);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(104, 105, 90, 25));
        btn_cancelar->setFont(font);
        btn_cancelar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));
        groupBox = new QGroupBox(tela_pagamento_dinheiro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 0, 199, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setAlignment(Qt::AlignCenter);
        lb_valor = new QLabel(groupBox);
        lb_valor->setObjectName(QString::fromUtf8("lb_valor"));
        lb_valor->setGeometry(QRect(5, 15, 93, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        lb_valor->setFont(font2);
        le_valor = new QLineEdit(groupBox);
        le_valor->setObjectName(QString::fromUtf8("le_valor"));
        le_valor->setGeometry(QRect(99, 15, 95, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        le_valor->setFont(font3);
        lb_dia = new QLabel(groupBox);
        lb_dia->setObjectName(QString::fromUtf8("lb_dia"));
        lb_dia->setGeometry(QRect(5, 65, 94, 30));
        lb_dia->setFont(font2);
        lb_numero_parcelas = new QLabel(groupBox);
        lb_numero_parcelas->setObjectName(QString::fromUtf8("lb_numero_parcelas"));
        lb_numero_parcelas->setGeometry(QRect(5, 40, 114, 20));
        lb_numero_parcelas->setFont(font2);
        sb_num_parcelas = new QSpinBox(groupBox);
        sb_num_parcelas->setObjectName(QString::fromUtf8("sb_num_parcelas"));
        sb_num_parcelas->setGeometry(QRect(120, 40, 74, 20));
        sb_num_parcelas->setFont(font3);
        sb_num_parcelas->setMinimum(1);
        sb_num_parcelas->setMaximum(12);
        sb_num_parcelas->setValue(1);
        data = new QDateEdit(groupBox);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(100, 70, 94, 20));
        data->setFont(font2);
        data->setFrame(true);
        data->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data->setReadOnly(false);
        data->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        data->setAccelerated(false);
        data->setKeyboardTracking(true);
        data->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        data->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        data->setCalendarPopup(true);
        data->setTimeSpec(Qt::LocalTime);

        retranslateUi(tela_pagamento_dinheiro);

        QMetaObject::connectSlotsByName(tela_pagamento_dinheiro);
    } // setupUi

    void retranslateUi(QDialog *tela_pagamento_dinheiro)
    {
        tela_pagamento_dinheiro->setWindowTitle(QApplication::translate("tela_pagamento_dinheiro", "Pagamento", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_pagamento_dinheiro", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_pagamento_dinheiro", "Cancelar", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_pagamento_dinheiro", "Dinheiro", 0, QApplication::UnicodeUTF8));
        lb_valor->setText(QApplication::translate("tela_pagamento_dinheiro", "Valor a ser pago:", 0, QApplication::UnicodeUTF8));
        lb_dia->setText(QApplication::translate("tela_pagamento_dinheiro", "Data de in\303\255cio do\n"
"pagamento:", 0, QApplication::UnicodeUTF8));
        lb_numero_parcelas->setText(QApplication::translate("tela_pagamento_dinheiro", "N\303\272mero de parcelas:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_pagamento_dinheiro: public Ui_tela_pagamento_dinheiro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PAGAMENTO_DINHEIRO_H
