/********************************************************************************
** Form generated from reading UI file 'tela_cadastrar_email.ui'
**
** Created: Tue 28. Aug 22:34:52 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CADASTRAR_EMAIL_H
#define UI_TELA_CADASTRAR_EMAIL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tl_cadastrar_email
{
public:
    QLineEdit *lineEdit;
    QPushButton *btn_confirmar;
    QPushButton *pushButton;

    void setupUi(QWidget *tl_cadastrar_email)
    {
        if (tl_cadastrar_email->objectName().isEmpty())
            tl_cadastrar_email->setObjectName(QString::fromUtf8("tl_cadastrar_email"));
        tl_cadastrar_email->setWindowModality(Qt::WindowModal);
        tl_cadastrar_email->resize(510, 59);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        tl_cadastrar_email->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tl_cadastrar_email->setWindowIcon(icon);
        lineEdit = new QLineEdit(tl_cadastrar_email);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 490, 20));
        btn_confirmar = new QPushButton(tl_cadastrar_email);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(160, 30, 90, 24));
        btn_confirmar->setMinimumSize(QSize(0, 24));
        btn_confirmar->setMaximumSize(QSize(90, 24));
        btn_confirmar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon1);
        btn_confirmar->setIconSize(QSize(20, 20));
        pushButton = new QPushButton(tl_cadastrar_email);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 30, 90, 24));
        pushButton->setMinimumSize(QSize(0, 24));
        pushButton->setMaximumSize(QSize(90, 24));
        pushButton->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(20, 200));

        retranslateUi(tl_cadastrar_email);

        QMetaObject::connectSlotsByName(tl_cadastrar_email);
    } // setupUi

    void retranslateUi(QWidget *tl_cadastrar_email)
    {
        tl_cadastrar_email->setWindowTitle(QApplication::translate("tl_cadastrar_email", "Form", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tl_cadastrar_email", "Confirmar", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("tl_cadastrar_email", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tl_cadastrar_email: public Ui_tl_cadastrar_email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CADASTRAR_EMAIL_H
