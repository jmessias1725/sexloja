/********************************************************************************
** Form generated from reading UI file 'tela_editar_parcela.ui'
**
** Created: Thu 4. Apr 17:43:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_EDITAR_PARCELA_H
#define UI_TELA_EDITAR_PARCELA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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

class Ui_tela_editar_parcela
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_dia;
    QDateEdit *data;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lb_valor;
    QLineEdit *le_valor;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lb_status;
    QComboBox *cb_status;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *tela_editar_parcela)
    {
        if (tela_editar_parcela->objectName().isEmpty())
            tela_editar_parcela->setObjectName(QString::fromUtf8("tela_editar_parcela"));
        tela_editar_parcela->resize(405, 65);
        tela_editar_parcela->setMinimumSize(QSize(405, 65));
        tela_editar_parcela->setMaximumSize(QSize(405, 65));
        verticalLayout = new QVBoxLayout(tela_editar_parcela);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lb_dia = new QLabel(tela_editar_parcela);
        lb_dia->setObjectName(QString::fromUtf8("lb_dia"));
        lb_dia->setMinimumSize(QSize(30, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lb_dia->setFont(font);

        horizontalLayout->addWidget(lb_dia);

        data = new QDateEdit(tela_editar_parcela);
        data->setObjectName(QString::fromUtf8("data"));
        data->setMinimumSize(QSize(94, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        data->setFont(font1);
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

        lb_valor = new QLabel(tela_editar_parcela);
        lb_valor->setObjectName(QString::fromUtf8("lb_valor"));
        lb_valor->setMinimumSize(QSize(33, 20));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        lb_valor->setFont(font2);

        horizontalLayout->addWidget(lb_valor);

        le_valor = new QLineEdit(tela_editar_parcela);
        le_valor->setObjectName(QString::fromUtf8("le_valor"));
        le_valor->setMinimumSize(QSize(95, 20));
        le_valor->setMaximumSize(QSize(95, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        le_valor->setFont(font3);

        horizontalLayout->addWidget(le_valor);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lb_status = new QLabel(tela_editar_parcela);
        lb_status->setObjectName(QString::fromUtf8("lb_status"));
        lb_status->setMinimumSize(QSize(33, 20));
        lb_status->setFont(font2);

        horizontalLayout->addWidget(lb_status);

        cb_status = new QComboBox(tela_editar_parcela);
        cb_status->setObjectName(QString::fromUtf8("cb_status"));
        cb_status->setMinimumSize(QSize(81, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        cb_status->setFont(font4);

        horizontalLayout->addWidget(cb_status);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_confirmar = new QPushButton(tela_editar_parcela);
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

        btn_cancelar = new QPushButton(tela_editar_parcela);
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


        retranslateUi(tela_editar_parcela);

        QMetaObject::connectSlotsByName(tela_editar_parcela);
    } // setupUi

    void retranslateUi(QDialog *tela_editar_parcela)
    {
        tela_editar_parcela->setWindowTitle(QApplication::translate("tela_editar_parcela", "Editar valores", 0, QApplication::UnicodeUTF8));
        lb_dia->setText(QApplication::translate("tela_editar_parcela", "Data:", 0, QApplication::UnicodeUTF8));
        lb_valor->setText(QApplication::translate("tela_editar_parcela", "Valor:", 0, QApplication::UnicodeUTF8));
        lb_status->setText(QApplication::translate("tela_editar_parcela", "Status:", 0, QApplication::UnicodeUTF8));
        cb_status->clear();
        cb_status->insertItems(0, QStringList()
         << QApplication::translate("tela_editar_parcela", "Paga", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_editar_parcela", "Aberta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_editar_parcela", "Atrasada", 0, QApplication::UnicodeUTF8)
        );
        btn_confirmar->setText(QApplication::translate("tela_editar_parcela", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_editar_parcela", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_editar_parcela: public Ui_tela_editar_parcela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_EDITAR_PARCELA_H
