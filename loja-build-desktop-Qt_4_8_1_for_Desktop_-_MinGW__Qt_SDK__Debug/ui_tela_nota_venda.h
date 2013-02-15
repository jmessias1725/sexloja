/********************************************************************************
** Form generated from reading UI file 'tela_nota_venda.ui'
**
** Created: Fri 15. Feb 14:54:33 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_NOTA_VENDA_H
#define UI_TELA_NOTA_VENDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_nota_venda
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;

    void setupUi(QDialog *tela_nota_venda)
    {
        if (tela_nota_venda->objectName().isEmpty())
            tela_nota_venda->setObjectName(QString::fromUtf8("tela_nota_venda"));
        tela_nota_venda->resize(800, 600);
        scrollArea = new QScrollArea(tela_nota_venda);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 800, 600));
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 798, 598));
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        retranslateUi(tela_nota_venda);

        QMetaObject::connectSlotsByName(tela_nota_venda);
    } // setupUi

    void retranslateUi(QDialog *tela_nota_venda)
    {
        tela_nota_venda->setWindowTitle(QApplication::translate("tela_nota_venda", "Nota de venda;", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_nota_venda: public Ui_tela_nota_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_NOTA_VENDA_H
