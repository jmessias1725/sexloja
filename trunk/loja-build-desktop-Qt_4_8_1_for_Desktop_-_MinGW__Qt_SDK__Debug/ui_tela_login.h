/********************************************************************************
** Form generated from reading UI file 'tela_login.ui'
**
** Created: Sun 26. Aug 10:45:56 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_LOGIN_H
#define UI_TELA_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tela_login
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_usuario;
    QLineEdit *le_login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_Senha;
    QLineEdit *le_senha;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_confrimar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *tela_login)
    {
        if (tela_login->objectName().isEmpty())
            tela_login->setObjectName(QString::fromUtf8("tela_login"));
        tela_login->resize(214, 110);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_login->setWindowIcon(icon);
        tela_login->setWindowOpacity(1);
        tela_login->setModal(true);
        verticalLayout = new QVBoxLayout(tela_login);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lb_usuario = new QLabel(tela_login);
        lb_usuario->setObjectName(QString::fromUtf8("lb_usuario"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        lb_usuario->setFont(font);

        horizontalLayout->addWidget(lb_usuario);

        le_login = new QLineEdit(tela_login);
        le_login->setObjectName(QString::fromUtf8("le_login"));
        le_login->setFont(font);
        le_login->setMaxLength(30);

        horizontalLayout->addWidget(le_login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lb_Senha = new QLabel(tela_login);
        lb_Senha->setObjectName(QString::fromUtf8("lb_Senha"));
        lb_Senha->setFont(font);

        horizontalLayout_2->addWidget(lb_Senha);

        le_senha = new QLineEdit(tela_login);
        le_senha->setObjectName(QString::fromUtf8("le_senha"));
        le_senha->setFont(font);
        le_senha->setMaxLength(30);
        le_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(le_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_confrimar = new QPushButton(tela_login);
        btn_confrimar->setObjectName(QString::fromUtf8("btn_confrimar"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(9);
        btn_confrimar->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confrimar->setIcon(icon1);
        btn_confrimar->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btn_confrimar);

        btn_cancelar = new QPushButton(tela_login);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setFont(font1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon2);
        btn_cancelar->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(tela_login);

        QMetaObject::connectSlotsByName(tela_login);
    } // setupUi

    void retranslateUi(QDialog *tela_login)
    {
        tela_login->setWindowTitle(QApplication::translate("tela_login", "Login", 0, QApplication::UnicodeUTF8));
        lb_usuario->setText(QApplication::translate("tela_login", "Usu\303\241rio:", 0, QApplication::UnicodeUTF8));
        lb_Senha->setText(QApplication::translate("tela_login", "Senha:", 0, QApplication::UnicodeUTF8));
        btn_confrimar->setText(QApplication::translate("tela_login", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_login", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_login: public Ui_tela_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_LOGIN_H