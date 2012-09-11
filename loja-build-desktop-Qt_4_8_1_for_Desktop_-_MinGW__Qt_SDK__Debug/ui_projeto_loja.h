/********************************************************************************
** Form generated from reading UI file 'projeto_loja.ui'
**
** Created: Fri 24. Aug 21:22:16 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJETO_LOJA_H
#define UI_PROJETO_LOJA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projeto_loja
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *projeto_loja)
    {
        if (projeto_loja->objectName().isEmpty())
            projeto_loja->setObjectName(QString::fromUtf8("projeto_loja"));
        projeto_loja->resize(400, 300);
        menuBar = new QMenuBar(projeto_loja);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        projeto_loja->setMenuBar(menuBar);
        mainToolBar = new QToolBar(projeto_loja);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        projeto_loja->addToolBar(mainToolBar);
        centralWidget = new QWidget(projeto_loja);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        projeto_loja->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(projeto_loja);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        projeto_loja->setStatusBar(statusBar);

        retranslateUi(projeto_loja);

        QMetaObject::connectSlotsByName(projeto_loja);
    } // setupUi

    void retranslateUi(QMainWindow *projeto_loja)
    {
        projeto_loja->setWindowTitle(QApplication::translate("projeto_loja", "projeto_loja", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class projeto_loja: public Ui_projeto_loja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJETO_LOJA_H
