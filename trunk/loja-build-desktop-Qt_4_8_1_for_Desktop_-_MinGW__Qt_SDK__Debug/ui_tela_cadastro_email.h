/********************************************************************************
** Form generated from reading UI file 'tela_cadastro_email.ui'
**
** Created: Tue 28. Aug 22:57:45 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CADASTRO_EMAIL_H
#define UI_TELA_CADASTRO_EMAIL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_cadastro_email
{
public:
    QLineEdit *le_cadastro_email;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;

    void setupUi(QWidget *tela_cadastro_email)
    {
        if (tela_cadastro_email->objectName().isEmpty())
            tela_cadastro_email->setObjectName(QString::fromUtf8("tela_cadastro_email"));
        tela_cadastro_email->setWindowModality(Qt::ApplicationModal);
        tela_cadastro_email->resize(500, 68);
        tela_cadastro_email->setMaximumSize(QSize(500, 68));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_cadastro_email->setWindowIcon(icon);
        le_cadastro_email = new QLineEdit(tela_cadastro_email);
        le_cadastro_email->setObjectName(QString::fromUtf8("le_cadastro_email"));
        le_cadastro_email->setGeometry(QRect(10, 10, 480, 20));
        btn_confirmar = new QPushButton(tela_cadastro_email);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(155, 35, 90, 24));
        btn_confirmar->setMinimumSize(QSize(0, 24));
        btn_confirmar->setMaximumSize(QSize(90, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        btn_confirmar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon1);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(tela_cadastro_email);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(255, 35, 90, 24));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        btn_cancelar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon2);
        btn_cancelar->setIconSize(QSize(20, 200));

        retranslateUi(tela_cadastro_email);

        QMetaObject::connectSlotsByName(tela_cadastro_email);
    } // setupUi

    void retranslateUi(QWidget *tela_cadastro_email)
    {
        tela_cadastro_email->setWindowTitle(QApplication::translate("tela_cadastro_email", "E-mail", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_cadastro_email", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_cadastro_email", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_cadastro_email: public Ui_tela_cadastro_email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CADASTRO_EMAIL_H
