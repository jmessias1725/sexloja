/********************************************************************************
** Form generated from reading UI file 'tela_listar_despesas.ui'
**
** Created: Sat 29. Dec 20:07:18 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_LISTAR_DESPESAS_H
#define UI_TELA_LISTAR_DESPESAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_listar_despesas
{
public:
    QGroupBox *gb_buscar;
    QLabel *lb_nome;
    QPushButton *btn_buscar;
    QDateEdit *data_inicial;
    QLabel *lb_a;
    QDateEdit *data_final;
    QTableWidget *tw_despesas;
    QGroupBox *gb_filtrar;
    QPushButton *btn_filtrar;
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QLabel *lb_status;
    QComboBox *cb_status;
    QPushButton *btn_cancelar;
    QPushButton *btn_limpar;

    void setupUi(QDialog *tela_listar_despesas)
    {
        if (tela_listar_despesas->objectName().isEmpty())
            tela_listar_despesas->setObjectName(QString::fromUtf8("tela_listar_despesas"));
        tela_listar_despesas->resize(750, 500);
        gb_buscar = new QGroupBox(tela_listar_despesas);
        gb_buscar->setObjectName(QString::fromUtf8("gb_buscar"));
        gb_buscar->setGeometry(QRect(5, 0, 390, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_buscar->setFont(font);
        gb_buscar->setAlignment(Qt::AlignCenter);
        lb_nome = new QLabel(gb_buscar);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 17, 62, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_nome->setFont(font1);
        btn_buscar = new QPushButton(gb_buscar);
        btn_buscar->setObjectName(QString::fromUtf8("btn_buscar"));
        btn_buscar->setGeometry(QRect(295, 15, 90, 24));
        btn_buscar->setMinimumSize(QSize(0, 24));
        btn_buscar->setMaximumSize(QSize(90, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        btn_buscar->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/buscar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_buscar->setIcon(icon);
        btn_buscar->setIconSize(QSize(20, 20));
        data_inicial = new QDateEdit(gb_buscar);
        data_inicial->setObjectName(QString::fromUtf8("data_inicial"));
        data_inicial->setGeometry(QRect(67, 17, 100, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        data_inicial->setFont(font3);
        data_inicial->setFrame(true);
        data_inicial->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data_inicial->setReadOnly(false);
        data_inicial->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        data_inicial->setAccelerated(false);
        data_inicial->setKeyboardTracking(true);
        data_inicial->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        data_inicial->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        data_inicial->setCalendarPopup(true);
        data_inicial->setTimeSpec(Qt::LocalTime);
        lb_a = new QLabel(gb_buscar);
        lb_a->setObjectName(QString::fromUtf8("lb_a"));
        lb_a->setGeometry(QRect(174, 17, 7, 20));
        lb_a->setFont(font1);
        data_final = new QDateEdit(gb_buscar);
        data_final->setObjectName(QString::fromUtf8("data_final"));
        data_final->setGeometry(QRect(188, 17, 100, 20));
        data_final->setFont(font3);
        data_final->setFrame(true);
        data_final->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        data_final->setReadOnly(false);
        data_final->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        data_final->setAccelerated(false);
        data_final->setKeyboardTracking(true);
        data_final->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        data_final->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        data_final->setCalendarPopup(true);
        data_final->setTimeSpec(Qt::LocalTime);
        tw_despesas = new QTableWidget(tela_listar_despesas);
        tw_despesas->setObjectName(QString::fromUtf8("tw_despesas"));
        tw_despesas->setGeometry(QRect(5, 79, 740, 416));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(9);
        tw_despesas->setFont(font4);
        tw_despesas->setAlternatingRowColors(true);
        tw_despesas->setRowCount(0);
        tw_despesas->setColumnCount(0);
        tw_despesas->horizontalHeader()->setDefaultSectionSize(380);
        tw_despesas->horizontalHeader()->setHighlightSections(true);
        tw_despesas->horizontalHeader()->setMinimumSectionSize(60);
        tw_despesas->horizontalHeader()->setStretchLastSection(true);
        tw_despesas->verticalHeader()->setVisible(false);
        tw_despesas->verticalHeader()->setDefaultSectionSize(20);
        tw_despesas->verticalHeader()->setMinimumSectionSize(20);
        gb_filtrar = new QGroupBox(tela_listar_despesas);
        gb_filtrar->setObjectName(QString::fromUtf8("gb_filtrar"));
        gb_filtrar->setGeometry(QRect(400, 0, 344, 45));
        gb_filtrar->setFont(font);
        gb_filtrar->setAlignment(Qt::AlignCenter);
        btn_filtrar = new QPushButton(gb_filtrar);
        btn_filtrar->setObjectName(QString::fromUtf8("btn_filtrar"));
        btn_filtrar->setGeometry(QRect(249, 15, 90, 24));
        btn_filtrar->setMinimumSize(QSize(0, 24));
        btn_filtrar->setMaximumSize(QSize(90, 24));
        btn_filtrar->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/filtrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_filtrar->setIcon(icon1);
        btn_filtrar->setIconSize(QSize(20, 20));
        lb_codigo = new QLabel(gb_filtrar);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(5, 17, 42, 20));
        lb_codigo->setFont(font3);
        le_codigo = new QLineEdit(gb_filtrar);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(47, 17, 70, 20));
        le_codigo->setFont(font3);
        le_codigo->setCursorPosition(9);
        lb_status = new QLabel(gb_filtrar);
        lb_status->setObjectName(QString::fromUtf8("lb_status"));
        lb_status->setGeometry(QRect(124, 17, 38, 20));
        lb_status->setFont(font3);
        cb_status = new QComboBox(gb_filtrar);
        cb_status->setObjectName(QString::fromUtf8("cb_status"));
        cb_status->setGeometry(QRect(162, 17, 80, 20));
        cb_status->setFont(font3);
        btn_cancelar = new QPushButton(tela_listar_despesas);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(380, 50, 90, 24));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        btn_cancelar->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon2);
        btn_cancelar->setIconSize(QSize(18, 18));
        btn_limpar = new QPushButton(tela_listar_despesas);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));
        btn_limpar->setGeometry(QRect(280, 50, 90, 24));
        btn_limpar->setMinimumSize(QSize(0, 24));
        btn_limpar->setMaximumSize(QSize(90, 24));
        btn_limpar->setFont(font2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_limpar->setIcon(icon3);
        btn_limpar->setIconSize(QSize(20, 20));
        QWidget::setTabOrder(data_inicial, data_final);
        QWidget::setTabOrder(data_final, btn_buscar);
        QWidget::setTabOrder(btn_buscar, btn_limpar);
        QWidget::setTabOrder(btn_limpar, btn_cancelar);
        QWidget::setTabOrder(btn_cancelar, tw_despesas);

        retranslateUi(tela_listar_despesas);

        QMetaObject::connectSlotsByName(tela_listar_despesas);
    } // setupUi

    void retranslateUi(QDialog *tela_listar_despesas)
    {
        tela_listar_despesas->setWindowTitle(QApplication::translate("tela_listar_despesas", "Despesas", 0, QApplication::UnicodeUTF8));
        gb_buscar->setTitle(QApplication::translate("tela_listar_despesas", "Buscar", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_listar_despesas", "Per\303\255odo de:", 0, QApplication::UnicodeUTF8));
        btn_buscar->setText(QApplication::translate("tela_listar_despesas", "Buscar", 0, QApplication::UnicodeUTF8));
        lb_a->setText(QApplication::translate("tela_listar_despesas", "a", 0, QApplication::UnicodeUTF8));
        gb_filtrar->setTitle(QApplication::translate("tela_listar_despesas", "Filtrar", 0, QApplication::UnicodeUTF8));
        btn_filtrar->setText(QApplication::translate("tela_listar_despesas", "Filtrar", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_listar_despesas", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_listar_despesas", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_status->setText(QApplication::translate("tela_listar_despesas", "Status:", 0, QApplication::UnicodeUTF8));
        cb_status->clear();
        cb_status->insertItems(0, QStringList()
         << QApplication::translate("tela_listar_despesas", "Todos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_despesas", "Aberta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_despesas", "Atrasada", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_listar_despesas", "Paga", 0, QApplication::UnicodeUTF8)
        );
        btn_cancelar->setText(QApplication::translate("tela_listar_despesas", "Cancelar", 0, QApplication::UnicodeUTF8));
        btn_limpar->setText(QApplication::translate("tela_listar_despesas", "Limpar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_listar_despesas: public Ui_tela_listar_despesas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_LISTAR_DESPESAS_H
