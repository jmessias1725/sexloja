/********************************************************************************
** Form generated from reading UI file 'tela_pagamento.ui'
**
** Created: Mon 12. Nov 08:34:51 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PAGAMENTO_H
#define UI_TELA_PAGAMENTO_H

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
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_tela_pagamento
{
public:
    QGroupBox *gb_forma_pagamento;
    QToolButton *btn_dinheiro;
    QToolButton *btn_cartao;
    QToolButton *btn_cheque;
    QLineEdit *le_dinheiro;
    QLineEdit *le_cartao;
    QLineEdit *le_cheque;
    QPushButton *btn_cancelar;
    QPushButton *btn_confirmar;
    QFrame *frame;
    QLineEdit *le_total_pagar;
    QLineEdit *le_total_pago;
    QLineEdit *le_troco;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *la;

    void setupUi(QDialog *tela_pagamento)
    {
        if (tela_pagamento->objectName().isEmpty())
            tela_pagamento->setObjectName(QString::fromUtf8("tela_pagamento"));
        tela_pagamento->setWindowModality(Qt::ApplicationModal);
        tela_pagamento->resize(270, 225);
        tela_pagamento->setMinimumSize(QSize(270, 225));
        tela_pagamento->setMaximumSize(QSize(270, 225));
        tela_pagamento->setStyleSheet(QString::fromUtf8(""));
        gb_forma_pagamento = new QGroupBox(tela_pagamento);
        gb_forma_pagamento->setObjectName(QString::fromUtf8("gb_forma_pagamento"));
        gb_forma_pagamento->setGeometry(QRect(5, 0, 260, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_forma_pagamento->setFont(font);
        gb_forma_pagamento->setStyleSheet(QString::fromUtf8(""));
        gb_forma_pagamento->setAlignment(Qt::AlignCenter);
        btn_dinheiro = new QToolButton(gb_forma_pagamento);
        btn_dinheiro->setObjectName(QString::fromUtf8("btn_dinheiro"));
        btn_dinheiro->setGeometry(QRect(5, 20, 90, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        btn_dinheiro->setFont(font1);
        btn_dinheiro->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/dinheiro_geral.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_dinheiro->setIcon(icon);
        btn_dinheiro->setIconSize(QSize(18, 18));
        btn_dinheiro->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_dinheiro->setAutoRaise(false);
        btn_cartao = new QToolButton(gb_forma_pagamento);
        btn_cartao->setObjectName(QString::fromUtf8("btn_cartao"));
        btn_cartao->setGeometry(QRect(5, 50, 90, 25));
        btn_cartao->setFont(font1);
        btn_cartao->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/cartao_credito3.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cartao->setIcon(icon1);
        btn_cartao->setIconSize(QSize(18, 18));
        btn_cartao->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_cartao->setAutoRaise(false);
        btn_cheque = new QToolButton(gb_forma_pagamento);
        btn_cheque->setObjectName(QString::fromUtf8("btn_cheque"));
        btn_cheque->setGeometry(QRect(5, 80, 90, 25));
        btn_cheque->setFont(font1);
        btn_cheque->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/Cheque1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cheque->setIcon(icon2);
        btn_cheque->setIconSize(QSize(18, 18));
        btn_cheque->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_cheque->setAutoRaise(false);
        le_dinheiro = new QLineEdit(gb_forma_pagamento);
        le_dinheiro->setObjectName(QString::fromUtf8("le_dinheiro"));
        le_dinheiro->setGeometry(QRect(100, 20, 155, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        le_dinheiro->setFont(font2);
        le_dinheiro->setStyleSheet(QString::fromUtf8("background-color: none;"));
        le_dinheiro->setInputMethodHints(Qt::ImhNone);
        le_dinheiro->setMaxLength(32767);
        le_dinheiro->setReadOnly(true);
        le_cartao = new QLineEdit(gb_forma_pagamento);
        le_cartao->setObjectName(QString::fromUtf8("le_cartao"));
        le_cartao->setGeometry(QRect(100, 50, 155, 25));
        le_cartao->setFont(font2);
        le_cartao->setStyleSheet(QString::fromUtf8("background-color: none;"));
        le_cartao->setInputMethodHints(Qt::ImhNone);
        le_cartao->setMaxLength(32767);
        le_cartao->setReadOnly(true);
        le_cheque = new QLineEdit(gb_forma_pagamento);
        le_cheque->setObjectName(QString::fromUtf8("le_cheque"));
        le_cheque->setGeometry(QRect(100, 80, 155, 25));
        le_cheque->setFont(font2);
        le_cheque->setStyleSheet(QString::fromUtf8("background-color: none;"));
        le_cheque->setInputMethodHints(Qt::ImhNone);
        le_cheque->setMaxLength(32767);
        le_cheque->setReadOnly(true);
        btn_cancelar = new QPushButton(tela_pagamento);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(137, 195, 90, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        btn_cancelar->setFont(font3);
        btn_cancelar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon3);
        btn_cancelar->setIconSize(QSize(18, 18));
        btn_confirmar = new QPushButton(tela_pagamento);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(42, 195, 90, 25));
        btn_confirmar->setFont(font3);
        btn_confirmar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon4);
        btn_confirmar->setIconSize(QSize(20, 20));
        frame = new QFrame(tela_pagamento);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 110, 270, 80));
        frame->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        le_total_pagar = new QLineEdit(frame);
        le_total_pagar->setObjectName(QString::fromUtf8("le_total_pagar"));
        le_total_pagar->setGeometry(QRect(105, 3, 155, 24));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setKerning(false);
        le_total_pagar->setFont(font4);
        le_total_pagar->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        le_total_pagar->setInputMethodHints(Qt::ImhNone);
        le_total_pagar->setMaxLength(32767);
        le_total_pagar->setReadOnly(true);
        le_total_pago = new QLineEdit(frame);
        le_total_pago->setObjectName(QString::fromUtf8("le_total_pago"));
        le_total_pago->setGeometry(QRect(105, 28, 155, 24));
        le_total_pago->setFont(font4);
        le_total_pago->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        le_total_pago->setInputMethodHints(Qt::ImhNone);
        le_total_pago->setMaxLength(32767);
        le_total_pago->setReadOnly(true);
        le_troco = new QLineEdit(frame);
        le_troco->setObjectName(QString::fromUtf8("le_troco"));
        le_troco->setGeometry(QRect(105, 53, 155, 24));
        le_troco->setFont(font4);
        le_troco->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        le_troco->setInputMethodHints(Qt::ImhNone);
        le_troco->setMaxLength(32767);
        le_troco->setReadOnly(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(32, 30, 78, 18));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 55, 49, 18));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color:none;"));
        la = new QLabel(frame);
        la->setObjectName(QString::fromUtf8("la"));
        la->setGeometry(QRect(15, 5, 95, 18));
        la->setFont(font);
        la->setStyleSheet(QString::fromUtf8("background-color:none;"));

        retranslateUi(tela_pagamento);

        QMetaObject::connectSlotsByName(tela_pagamento);
    } // setupUi

    void retranslateUi(QDialog *tela_pagamento)
    {
        tela_pagamento->setWindowTitle(QApplication::translate("tela_pagamento", "Pagamento", 0, QApplication::UnicodeUTF8));
        gb_forma_pagamento->setTitle(QApplication::translate("tela_pagamento", "Forma de Pagamento", 0, QApplication::UnicodeUTF8));
        btn_dinheiro->setText(QApplication::translate("tela_pagamento", "Dinheiro", 0, QApplication::UnicodeUTF8));
        btn_cartao->setText(QApplication::translate("tela_pagamento", "Cart\303\243o", 0, QApplication::UnicodeUTF8));
        btn_cheque->setText(QApplication::translate("tela_pagamento", "Cheque", 0, QApplication::UnicodeUTF8));
        le_dinheiro->setInputMask(QString());
        le_dinheiro->setText(QString());
        le_cartao->setInputMask(QString());
        le_cartao->setText(QString());
        le_cheque->setInputMask(QString());
        le_cheque->setText(QString());
        btn_cancelar->setText(QApplication::translate("tela_pagamento", "Cancelar", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_pagamento", "Confirmar", 0, QApplication::UnicodeUTF8));
        le_total_pagar->setInputMask(QString());
        le_total_pagar->setText(QString());
        le_total_pago->setInputMask(QString());
        le_total_pago->setText(QString());
        le_troco->setInputMask(QString());
        le_troco->setText(QString());
        label_2->setText(QApplication::translate("tela_pagamento", "Total pago:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("tela_pagamento", "Troco :", 0, QApplication::UnicodeUTF8));
        la->setText(QApplication::translate("tela_pagamento", "Total a pagar:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_pagamento: public Ui_tela_pagamento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PAGAMENTO_H
