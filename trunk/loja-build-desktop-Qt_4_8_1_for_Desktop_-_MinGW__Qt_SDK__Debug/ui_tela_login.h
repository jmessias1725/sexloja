/********************************************************************************
** Form generated from reading UI file 'tela_login.ui'
**
** Created: Fri 26. Oct 08:25:48 2012
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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_login
{
public:
    QWidget *layoutWidget;
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
        tela_login->resize(208, 101);
        tela_login->setMinimumSize(QSize(208, 101));
        tela_login->setMaximumSize(QSize(208, 101));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_login->setWindowIcon(icon);
        tela_login->setWindowOpacity(1);
        tela_login->setModal(true);
        layoutWidget = new QWidget(tela_login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 191, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lb_usuario = new QLabel(layoutWidget);
        lb_usuario->setObjectName(QString::fromUtf8("lb_usuario"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        lb_usuario->setFont(font);

        horizontalLayout->addWidget(lb_usuario);

        le_login = new QLineEdit(layoutWidget);
        le_login->setObjectName(QString::fromUtf8("le_login"));
        le_login->setFont(font);
        le_login->setMaxLength(30);

        horizontalLayout->addWidget(le_login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lb_Senha = new QLabel(layoutWidget);
        lb_Senha->setObjectName(QString::fromUtf8("lb_Senha"));
        lb_Senha->setFont(font);

        horizontalLayout_2->addWidget(lb_Senha);

        le_senha = new QLineEdit(layoutWidget);
        le_senha->setObjectName(QString::fromUtf8("le_senha"));
        le_senha->setFont(font);
        le_senha->setMaxLength(30);
        le_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(le_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_confrimar = new QPushButton(layoutWidget);
        btn_confrimar->setObjectName(QString::fromUtf8("btn_confrimar"));
        btn_confrimar->setMaximumSize(QSize(16777215, 24));
        btn_confrimar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confrimar->setIcon(icon1);
        btn_confrimar->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btn_confrimar);

        btn_cancelar = new QPushButton(layoutWidget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setMaximumSize(QSize(16777215, 24));
        btn_cancelar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon2);
        btn_cancelar->setIconSize(QSize(18, 18));

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
