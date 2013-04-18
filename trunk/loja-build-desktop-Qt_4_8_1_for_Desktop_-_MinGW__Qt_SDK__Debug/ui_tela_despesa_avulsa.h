/********************************************************************************
** Form generated from reading UI file 'tela_despesa_avulsa.ui'
**
** Created: Tue 16. Apr 10:39:20 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_DESPESA_AVULSA_H
#define UI_TELA_DESPESA_AVULSA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tela_despesa_avulsa
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gb_dados_despesa;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_dia;
    QDateEdit *data;
    QSpacerItem *horizontalSpacer;
    QLabel *lb_valor;
    QLineEdit *le_valor;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lb_status;
    QComboBox *cb_status;
    QGroupBox *gb_descricao;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *te_descricao;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *tela_despesa_avulsa)
    {
        if (tela_despesa_avulsa->objectName().isEmpty())
            tela_despesa_avulsa->setObjectName(QString::fromUtf8("tela_despesa_avulsa"));
        tela_despesa_avulsa->resize(405, 230);
        tela_despesa_avulsa->setMinimumSize(QSize(405, 230));
        tela_despesa_avulsa->setMaximumSize(QSize(405, 230));
        verticalLayout = new QVBoxLayout(tela_despesa_avulsa);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 3, 5, 5);
        gb_dados_despesa = new QGroupBox(tela_despesa_avulsa);
        gb_dados_despesa->setObjectName(QString::fromUtf8("gb_dados_despesa"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_dados_despesa->setFont(font);
        horizontalLayout = new QHBoxLayout(gb_dados_despesa);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 0, 5, 5);
        lb_dia = new QLabel(gb_dados_despesa);
        lb_dia->setObjectName(QString::fromUtf8("lb_dia"));
        lb_dia->setMinimumSize(QSize(30, 20));
        lb_dia->setFont(font);

        horizontalLayout->addWidget(lb_dia);

        data = new QDateEdit(gb_dados_despesa);
        data->setObjectName(QString::fromUtf8("data"));
        data->setMinimumSize(QSize(90, 20));
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

        horizontalSpacer = new QSpacerItem(7, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lb_valor = new QLabel(gb_dados_despesa);
        lb_valor->setObjectName(QString::fromUtf8("lb_valor"));
        lb_valor->setMinimumSize(QSize(33, 20));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        lb_valor->setFont(font2);

        horizontalLayout->addWidget(lb_valor);

        le_valor = new QLineEdit(gb_dados_despesa);
        le_valor->setObjectName(QString::fromUtf8("le_valor"));
        le_valor->setMinimumSize(QSize(95, 20));
        le_valor->setMaximumSize(QSize(95, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        le_valor->setFont(font3);

        horizontalLayout->addWidget(le_valor);

        horizontalSpacer_2 = new QSpacerItem(7, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lb_status = new QLabel(gb_dados_despesa);
        lb_status->setObjectName(QString::fromUtf8("lb_status"));
        lb_status->setMinimumSize(QSize(33, 20));
        lb_status->setFont(font2);

        horizontalLayout->addWidget(lb_status);

        cb_status = new QComboBox(gb_dados_despesa);
        cb_status->setObjectName(QString::fromUtf8("cb_status"));
        cb_status->setMinimumSize(QSize(81, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        cb_status->setFont(font4);

        horizontalLayout->addWidget(cb_status);


        verticalLayout->addWidget(gb_dados_despesa);

        gb_descricao = new QGroupBox(tela_despesa_avulsa);
        gb_descricao->setObjectName(QString::fromUtf8("gb_descricao"));
        gb_descricao->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(gb_descricao);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 0, 5, 5);
        te_descricao = new QTextEdit(gb_descricao);
        te_descricao->setObjectName(QString::fromUtf8("te_descricao"));
        te_descricao->setFont(font1);

        horizontalLayout_2->addWidget(te_descricao);


        verticalLayout->addWidget(gb_descricao);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_confirmar = new QPushButton(tela_despesa_avulsa);
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

        horizontalLayout_3->addWidget(btn_confirmar);

        btn_cancelar = new QPushButton(tela_despesa_avulsa);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setMinimumSize(QSize(90, 25));
        btn_cancelar->setMaximumSize(QSize(90, 25));
        btn_cancelar->setFont(font5);
        btn_cancelar->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));

        horizontalLayout_3->addWidget(btn_cancelar);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(tela_despesa_avulsa);

        QMetaObject::connectSlotsByName(tela_despesa_avulsa);
    } // setupUi

    void retranslateUi(QDialog *tela_despesa_avulsa)
    {
        tela_despesa_avulsa->setWindowTitle(QApplication::translate("tela_despesa_avulsa", "Cadastrar despesa", 0, QApplication::UnicodeUTF8));
        gb_dados_despesa->setTitle(QApplication::translate("tela_despesa_avulsa", "Dados da despesa", 0, QApplication::UnicodeUTF8));
        lb_dia->setText(QApplication::translate("tela_despesa_avulsa", "Data:", 0, QApplication::UnicodeUTF8));
        lb_valor->setText(QApplication::translate("tela_despesa_avulsa", "Valor:", 0, QApplication::UnicodeUTF8));
        lb_status->setText(QApplication::translate("tela_despesa_avulsa", "Status:", 0, QApplication::UnicodeUTF8));
        cb_status->clear();
        cb_status->insertItems(0, QStringList()
         << QApplication::translate("tela_despesa_avulsa", "Paga", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_despesa_avulsa", "Aberta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_despesa_avulsa", "Atrasada", 0, QApplication::UnicodeUTF8)
        );
        gb_descricao->setTitle(QApplication::translate("tela_despesa_avulsa", "Descri\303\247\303\243o", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_despesa_avulsa", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_despesa_avulsa", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_despesa_avulsa: public Ui_tela_despesa_avulsa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_DESPESA_AVULSA_H
