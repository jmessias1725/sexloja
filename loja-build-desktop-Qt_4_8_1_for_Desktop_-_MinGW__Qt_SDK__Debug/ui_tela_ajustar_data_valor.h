/********************************************************************************
** Form generated from reading UI file 'tela_ajustar_data_valor.ui'
**
** Created: Sun 10. Mar 12:16:28 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_AJUSTAR_DATA_VALOR_H
#define UI_TELA_AJUSTAR_DATA_VALOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tela_ajustar_data_valor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_dia;
    QDateEdit *data;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lb_valor;
    QLineEdit *le_valor;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *tela_ajustar_data_valor)
    {
        if (tela_ajustar_data_valor->objectName().isEmpty())
            tela_ajustar_data_valor->setObjectName(QString::fromUtf8("tela_ajustar_data_valor"));
        tela_ajustar_data_valor->resize(274, 64);
        tela_ajustar_data_valor->setMinimumSize(QSize(274, 64));
        tela_ajustar_data_valor->setMaximumSize(QSize(274, 64));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        tela_ajustar_data_valor->setFont(font);
        verticalLayout = new QVBoxLayout(tela_ajustar_data_valor);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lb_dia = new QLabel(tela_ajustar_data_valor);
        lb_dia->setObjectName(QString::fromUtf8("lb_dia"));
        lb_dia->setMinimumSize(QSize(30, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lb_dia->setFont(font1);

        horizontalLayout->addWidget(lb_dia);

        data = new QDateEdit(tela_ajustar_data_valor);
        data->setObjectName(QString::fromUtf8("data"));
        data->setMinimumSize(QSize(94, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
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

        horizontalLayout->addWidget(data);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lb_valor = new QLabel(tela_ajustar_data_valor);
        lb_valor->setObjectName(QString::fromUtf8("lb_valor"));
        lb_valor->setMinimumSize(QSize(33, 20));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        lb_valor->setFont(font3);

        horizontalLayout->addWidget(lb_valor);

        le_valor = new QLineEdit(tela_ajustar_data_valor);
        le_valor->setObjectName(QString::fromUtf8("le_valor"));
        le_valor->setMinimumSize(QSize(95, 20));
        le_valor->setMaximumSize(QSize(16777215, 95));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(false);
        le_valor->setFont(font4);

        horizontalLayout->addWidget(le_valor);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_confirmar = new QPushButton(tela_ajustar_data_valor);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setMinimumSize(QSize(90, 25));
        btn_confirmar->setMaximumSize(QSize(90, 25));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(8);
        font5.setBold(false);
        font5.setWeight(50);
        btn_confirmar->setFont(font5);
        btn_confirmar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(btn_confirmar);

        btn_cancelar = new QPushButton(tela_ajustar_data_valor);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setMinimumSize(QSize(90, 25));
        btn_cancelar->setMaximumSize(QSize(90, 25));
        btn_cancelar->setFont(font5);
        btn_cancelar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btn_cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(tela_ajustar_data_valor);

        QMetaObject::connectSlotsByName(tela_ajustar_data_valor);
    } // setupUi

    void retranslateUi(QDialog *tela_ajustar_data_valor)
    {
        tela_ajustar_data_valor->setWindowTitle(QApplication::translate("tela_ajustar_data_valor", "Reajustar Datas e Valores ", 0, QApplication::UnicodeUTF8));
        lb_dia->setText(QApplication::translate("tela_ajustar_data_valor", "Data:", 0, QApplication::UnicodeUTF8));
        lb_valor->setText(QApplication::translate("tela_ajustar_data_valor", "Valor:", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_ajustar_data_valor", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_ajustar_data_valor", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_ajustar_data_valor: public Ui_tela_ajustar_data_valor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_AJUSTAR_DATA_VALOR_H
