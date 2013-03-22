/********************************************************************************
** Form generated from reading UI file 'tela_justificativa_cancelamento.ui'
**
** Created: Fri 22. Mar 15:40:39 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_JUSTIFICATIVA_CANCELAMENTO_H
#define UI_TELA_JUSTIFICATIVA_CANCELAMENTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tela_justificativa_cancelamento
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *tela_justificativa_cancelamento)
    {
        if (tela_justificativa_cancelamento->objectName().isEmpty())
            tela_justificativa_cancelamento->setObjectName(QString::fromUtf8("tela_justificativa_cancelamento"));
        tela_justificativa_cancelamento->resize(320, 200);
        tela_justificativa_cancelamento->setMinimumSize(QSize(320, 200));
        tela_justificativa_cancelamento->setMaximumSize(QSize(320, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        tela_justificativa_cancelamento->setFont(font);
        verticalLayout = new QVBoxLayout(tela_justificativa_cancelamento);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tela_justificativa_cancelamento);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(tela_justificativa_cancelamento);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setOverwriteMode(false);

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_confirmar = new QPushButton(tela_justificativa_cancelamento);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setMinimumSize(QSize(0, 24));
        btn_confirmar->setMaximumSize(QSize(90, 24));
        btn_confirmar->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(btn_confirmar);

        btn_cancelar = new QPushButton(tela_justificativa_cancelamento);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        btn_cancelar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(btn_cancelar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(tela_justificativa_cancelamento);

        QMetaObject::connectSlotsByName(tela_justificativa_cancelamento);
    } // setupUi

    void retranslateUi(QDialog *tela_justificativa_cancelamento)
    {
        tela_justificativa_cancelamento->setWindowTitle(QApplication::translate("tela_justificativa_cancelamento", "Justificativa", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tela_justificativa_cancelamento", "Digite a justificativa para efetuar o cancelamento.", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_justificativa_cancelamento", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_justificativa_cancelamento", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_justificativa_cancelamento: public Ui_tela_justificativa_cancelamento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_JUSTIFICATIVA_CANCELAMENTO_H
