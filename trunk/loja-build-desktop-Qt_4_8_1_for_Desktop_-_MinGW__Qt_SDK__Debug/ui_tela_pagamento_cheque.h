/********************************************************************************
** Form generated from reading UI file 'tela_pagamento_cheque.ui'
**
** Created: Sun 3. Mar 01:01:04 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PAGAMENTO_CHEQUE_H
#define UI_TELA_PAGAMENTO_CHEQUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_pagamento_cheque
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_codigo_banco;
    QLineEdit *le_agencia;
    QLineEdit *le_conta;
    QLineEdit *le_numero_cheque;
    QLineEdit *le_valor;
    QLineEdit *le_nome_banco;
    QLabel *label_6;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QGroupBox *gb_para;
    QCheckBox *cb_inserir_caixa_hoje;
    QDateEdit *data;
    QCheckBox *cb_a_vista;

    void setupUi(QDialog *tela_pagamento_cheque)
    {
        if (tela_pagamento_cheque->objectName().isEmpty())
            tela_pagamento_cheque->setObjectName(QString::fromUtf8("tela_pagamento_cheque"));
        tela_pagamento_cheque->resize(423, 185);
        tela_pagamento_cheque->setMinimumSize(QSize(423, 185));
        tela_pagamento_cheque->setMaximumSize(QSize(423, 185));
        groupBox = new QGroupBox(tela_pagamento_cheque);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 0, 413, 181));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(5, 15, 35, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(52, 15, 44, 20));
        label_2->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(139, 15, 33, 20));
        label_3->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(226, 15, 56, 20));
        label_4->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(313, 15, 29, 20));
        label_5->setFont(font1);
        le_codigo_banco = new QLineEdit(groupBox);
        le_codigo_banco->setObjectName(QString::fromUtf8("le_codigo_banco"));
        le_codigo_banco->setGeometry(QRect(5, 35, 40, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        le_codigo_banco->setFont(font2);
        le_agencia = new QLineEdit(groupBox);
        le_agencia->setObjectName(QString::fromUtf8("le_agencia"));
        le_agencia->setGeometry(QRect(52, 35, 80, 20));
        le_agencia->setFont(font2);
        le_agencia->setMaxLength(10);
        le_conta = new QLineEdit(groupBox);
        le_conta->setObjectName(QString::fromUtf8("le_conta"));
        le_conta->setGeometry(QRect(139, 35, 80, 20));
        le_conta->setFont(font2);
        le_conta->setMaxLength(10);
        le_numero_cheque = new QLineEdit(groupBox);
        le_numero_cheque->setObjectName(QString::fromUtf8("le_numero_cheque"));
        le_numero_cheque->setGeometry(QRect(226, 35, 80, 20));
        le_numero_cheque->setFont(font2);
        le_numero_cheque->setMaxLength(10);
        le_valor = new QLineEdit(groupBox);
        le_valor->setObjectName(QString::fromUtf8("le_valor"));
        le_valor->setGeometry(QRect(313, 35, 95, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        le_valor->setFont(font3);
        le_nome_banco = new QLineEdit(groupBox);
        le_nome_banco->setObjectName(QString::fromUtf8("le_nome_banco"));
        le_nome_banco->setGeometry(QRect(5, 80, 403, 20));
        le_nome_banco->setFont(font2);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(5, 60, 89, 20));
        label_6->setFont(font1);
        btn_confirmar = new QPushButton(groupBox);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(286, 120, 120, 25));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setWeight(50);
        btn_confirmar->setFont(font4);
        btn_confirmar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(groupBox);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(286, 150, 120, 25));
        btn_cancelar->setFont(font4);
        btn_cancelar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));
        gb_para = new QGroupBox(groupBox);
        gb_para->setObjectName(QString::fromUtf8("gb_para"));
        gb_para->setGeometry(QRect(5, 130, 274, 45));
        gb_para->setFont(font2);
        gb_para->setFlat(false);
        gb_para->setCheckable(true);
        gb_para->setChecked(true);
        cb_inserir_caixa_hoje = new QCheckBox(gb_para);
        cb_inserir_caixa_hoje->setObjectName(QString::fromUtf8("cb_inserir_caixa_hoje"));
        cb_inserir_caixa_hoje->setEnabled(true);
        cb_inserir_caixa_hoje->setGeometry(QRect(112, 20, 157, 20));
        cb_inserir_caixa_hoje->setFont(font2);
        data = new QDateEdit(gb_para);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(5, 20, 100, 20));
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
        cb_a_vista = new QCheckBox(groupBox);
        cb_a_vista->setObjectName(QString::fromUtf8("cb_a_vista"));
        cb_a_vista->setGeometry(QRect(13, 105, 60, 20));
        cb_a_vista->setFont(font2);
        QWidget::setTabOrder(le_codigo_banco, le_agencia);
        QWidget::setTabOrder(le_agencia, le_conta);
        QWidget::setTabOrder(le_conta, le_numero_cheque);
        QWidget::setTabOrder(le_numero_cheque, le_valor);
        QWidget::setTabOrder(le_valor, le_nome_banco);
        QWidget::setTabOrder(le_nome_banco, cb_a_vista);
        QWidget::setTabOrder(cb_a_vista, gb_para);
        QWidget::setTabOrder(gb_para, data);
        QWidget::setTabOrder(data, cb_inserir_caixa_hoje);
        QWidget::setTabOrder(cb_inserir_caixa_hoje, btn_confirmar);
        QWidget::setTabOrder(btn_confirmar, btn_cancelar);

        retranslateUi(tela_pagamento_cheque);

        QMetaObject::connectSlotsByName(tela_pagamento_cheque);
    } // setupUi

    void retranslateUi(QDialog *tela_pagamento_cheque)
    {
        tela_pagamento_cheque->setWindowTitle(QApplication::translate("tela_pagamento_cheque", "Pagamento", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_pagamento_cheque", "Dados do Cheque", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tela_pagamento_cheque", "Banco", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("tela_pagamento_cheque", "Ag\303\252ncia", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("tela_pagamento_cheque", "Conta", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("tela_pagamento_cheque", "N\302\272 cheque", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("tela_pagamento_cheque", "valor", 0, QApplication::UnicodeUTF8));
        le_codigo_banco->setText(QString());
        le_agencia->setText(QString());
        le_conta->setText(QString());
        le_numero_cheque->setInputMask(QApplication::translate("tela_pagamento_cheque", "0000000000; ", 0, QApplication::UnicodeUTF8));
        le_numero_cheque->setText(QString());
        le_valor->setText(QString());
        label_6->setText(QApplication::translate("tela_pagamento_cheque", "Nome do  banco", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_pagamento_cheque", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_pagamento_cheque", "Cancelar", 0, QApplication::UnicodeUTF8));
        gb_para->setTitle(QApplication::translate("tela_pagamento_cheque", "Para o dia", 0, QApplication::UnicodeUTF8));
        cb_inserir_caixa_hoje->setText(QApplication::translate("tela_pagamento_cheque", "Inserir no caixa de hoje.", 0, QApplication::UnicodeUTF8));
        cb_a_vista->setText(QApplication::translate("tela_pagamento_cheque", "A vista", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_pagamento_cheque: public Ui_tela_pagamento_cheque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PAGAMENTO_CHEQUE_H
