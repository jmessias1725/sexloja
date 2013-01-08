/********************************************************************************
** Form generated from reading UI file 'tela_contas.ui'
**
** Created: Tue 8. Jan 14:15:48 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CONTAS_H
#define UI_TELA_CONTAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_contas
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tbw_geral;
    QWidget *tab_fluxo_caixa;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tw_fluxo_caixa;
    QWidget *tab_contas_pagar;
    QWidget *tab_contas_receber;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tela_contas)
    {
        if (tela_contas->objectName().isEmpty())
            tela_contas->setObjectName(QString::fromUtf8("tela_contas"));
        tela_contas->setWindowModality(Qt::ApplicationModal);
        tela_contas->resize(800, 600);
        centralwidget = new QWidget(tela_contas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tbw_geral = new QTabWidget(centralwidget);
        tbw_geral->setObjectName(QString::fromUtf8("tbw_geral"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        tbw_geral->setFont(font);
        tbw_geral->setAutoFillBackground(false);
        tbw_geral->setTabShape(QTabWidget::Rounded);
        tbw_geral->setElideMode(Qt::ElideMiddle);
        tbw_geral->setDocumentMode(false);
        tbw_geral->setTabsClosable(false);
        tbw_geral->setMovable(false);
        tab_fluxo_caixa = new QWidget();
        tab_fluxo_caixa->setObjectName(QString::fromUtf8("tab_fluxo_caixa"));
        horizontalLayout_2 = new QHBoxLayout(tab_fluxo_caixa);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tw_fluxo_caixa = new QTableWidget(tab_fluxo_caixa);
        tw_fluxo_caixa->setObjectName(QString::fromUtf8("tw_fluxo_caixa"));
        tw_fluxo_caixa->setRowCount(0);
        tw_fluxo_caixa->setColumnCount(0);
        tw_fluxo_caixa->horizontalHeader()->setMinimumSectionSize(95);
        tw_fluxo_caixa->horizontalHeader()->setStretchLastSection(true);
        tw_fluxo_caixa->verticalHeader()->setVisible(false);
        tw_fluxo_caixa->verticalHeader()->setDefaultSectionSize(20);
        tw_fluxo_caixa->verticalHeader()->setMinimumSectionSize(20);

        horizontalLayout_2->addWidget(tw_fluxo_caixa);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/caixa.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbw_geral->addTab(tab_fluxo_caixa, icon, QString());
        tab_contas_pagar = new QWidget();
        tab_contas_pagar->setObjectName(QString::fromUtf8("tab_contas_pagar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/ganho.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbw_geral->addTab(tab_contas_pagar, icon1, QString());
        tab_contas_receber = new QWidget();
        tab_contas_receber->setObjectName(QString::fromUtf8("tab_contas_receber"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/despesa.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbw_geral->addTab(tab_contas_receber, icon2, QString());

        verticalLayout->addWidget(tbw_geral);

        tela_contas->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(tela_contas);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tela_contas->setStatusBar(statusbar);

        retranslateUi(tela_contas);

        tbw_geral->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tela_contas);
    } // setupUi

    void retranslateUi(QMainWindow *tela_contas)
    {
        tela_contas->setWindowTitle(QApplication::translate("tela_contas", "Contas", 0, QApplication::UnicodeUTF8));
        tbw_geral->setTabText(tbw_geral->indexOf(tab_fluxo_caixa), QApplication::translate("tela_contas", "Fluxo de caixa", 0, QApplication::UnicodeUTF8));
        tbw_geral->setTabText(tbw_geral->indexOf(tab_contas_pagar), QApplication::translate("tela_contas", "Contas a Receber", 0, QApplication::UnicodeUTF8));
        tbw_geral->setTabText(tbw_geral->indexOf(tab_contas_receber), QApplication::translate("tela_contas", "Contas a Pagar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_contas: public Ui_tela_contas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CONTAS_H
