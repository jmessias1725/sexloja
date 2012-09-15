/********************************************************************************
** Form generated from reading UI file 'tela_listar_clientes.ui'
**
** Created: Sat 15. Sep 11:40:26 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_LISTAR_CLIENTES_H
#define UI_TELA_LISTAR_CLIENTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_listar_clientes
{
public:
    QGroupBox *gb_buscar;
    QLabel *lb_codigo;
    QLineEdit *le_codigo;
    QLabel *lb_rg;
    QLabel *lb_nome;
    QLabel *lb_cpf;
    QLineEdit *le_rg;
    QLineEdit *le_nome;
    QLineEdit *le_cpf;
    QLabel *lb_telefone;
    QLabel *lb_email;
    QLineEdit *le_telefone;
    QLineEdit *le_email;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *tela_listar_clientes)
    {
        if (tela_listar_clientes->objectName().isEmpty())
            tela_listar_clientes->setObjectName(QString::fromUtf8("tela_listar_clientes"));
        tela_listar_clientes->resize(623, 373);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_listar_clientes->setWindowIcon(icon);
        gb_buscar = new QGroupBox(tela_listar_clientes);
        gb_buscar->setObjectName(QString::fromUtf8("gb_buscar"));
        gb_buscar->setGeometry(QRect(5, 5, 611, 105));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_buscar->setFont(font);
        lb_codigo = new QLabel(gb_buscar);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(10, 23, 46, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lb_codigo->setFont(font1);
        le_codigo = new QLineEdit(gb_buscar);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(53, 23, 70, 20));
        le_codigo->setFont(font1);
        lb_rg = new QLabel(gb_buscar);
        lb_rg->setObjectName(QString::fromUtf8("lb_rg"));
        lb_rg->setGeometry(QRect(10, 77, 20, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        lb_rg->setFont(font2);
        lb_nome = new QLabel(gb_buscar);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(133, 23, 40, 20));
        lb_nome->setMaximumSize(QSize(40, 20));
        lb_nome->setFont(font2);
        lb_cpf = new QLabel(gb_buscar);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setGeometry(QRect(192, 77, 26, 20));
        lb_cpf->setFont(font2);
        le_rg = new QLineEdit(gb_buscar);
        le_rg->setObjectName(QString::fromUtf8("le_rg"));
        le_rg->setGeometry(QRect(36, 77, 150, 20));
        le_rg->setMinimumSize(QSize(120, 20));
        le_rg->setMaximumSize(QSize(200, 20));
        le_rg->setFont(font2);
        le_rg->setMaxLength(20);
        le_rg->setCursorPosition(20);
        le_rg->setReadOnly(false);
        le_nome = new QLineEdit(gb_buscar);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(169, 23, 430, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nome->sizePolicy().hasHeightForWidth());
        le_nome->setSizePolicy(sizePolicy);
        le_nome->setMinimumSize(QSize(410, 20));
        le_nome->setMaximumSize(QSize(500, 20));
        le_nome->setFont(font2);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(false);
        le_cpf = new QLineEdit(gb_buscar);
        le_cpf->setObjectName(QString::fromUtf8("le_cpf"));
        le_cpf->setGeometry(QRect(220, 77, 100, 20));
        sizePolicy.setHeightForWidth(le_cpf->sizePolicy().hasHeightForWidth());
        le_cpf->setSizePolicy(sizePolicy);
        le_cpf->setMinimumSize(QSize(100, 20));
        le_cpf->setMaximumSize(QSize(100, 20));
        le_cpf->setFont(font2);
        le_cpf->setMaxLength(14);
        le_cpf->setReadOnly(false);
        lb_telefone = new QLabel(gb_buscar);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(10, 50, 50, 20));
        lb_telefone->setFont(font1);
        lb_email = new QLabel(gb_buscar);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setGeometry(QRect(170, 50, 46, 20));
        lb_email->setFont(font1);
        le_telefone = new QLineEdit(gb_buscar);
        le_telefone->setObjectName(QString::fromUtf8("le_telefone"));
        le_telefone->setGeometry(QRect(62, 50, 97, 20));
        le_telefone->setFont(font1);
        le_email = new QLineEdit(gb_buscar);
        le_email->setObjectName(QString::fromUtf8("le_email"));
        le_email->setGeometry(QRect(209, 50, 390, 20));
        le_email->setFont(font1);
        le_email->setMaxLength(60);
        btn_confirmar = new QPushButton(gb_buscar);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(360, 75, 90, 24));
        btn_confirmar->setMinimumSize(QSize(0, 24));
        btn_confirmar->setMaximumSize(QSize(90, 24));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        btn_confirmar->setFont(font3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon1);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(gb_buscar);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(480, 75, 90, 24));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        btn_cancelar->setFont(font3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon2);
        btn_cancelar->setIconSize(QSize(18, 18));

        retranslateUi(tela_listar_clientes);

        QMetaObject::connectSlotsByName(tela_listar_clientes);
    } // setupUi

    void retranslateUi(QDialog *tela_listar_clientes)
    {
        tela_listar_clientes->setWindowTitle(QApplication::translate("tela_listar_clientes", "Selecionar Clientes", 0, QApplication::UnicodeUTF8));
        gb_buscar->setTitle(QApplication::translate("tela_listar_clientes", "Buscar por:", 0, QApplication::UnicodeUTF8));
        lb_codigo->setText(QApplication::translate("tela_listar_clientes", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        le_codigo->setInputMask(QApplication::translate("tela_listar_clientes", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_rg->setText(QApplication::translate("tela_listar_clientes", "RG:", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_listar_clientes", "Nome:", 0, QApplication::UnicodeUTF8));
        lb_cpf->setText(QApplication::translate("tela_listar_clientes", "CPF:", 0, QApplication::UnicodeUTF8));
        le_rg->setInputMask(QApplication::translate("tela_listar_clientes", "00000000000000000000; ", 0, QApplication::UnicodeUTF8));
        le_rg->setText(QString());
        le_nome->setText(QString());
        le_cpf->setInputMask(QApplication::translate("tela_listar_clientes", "000.000.000-00; ", 0, QApplication::UnicodeUTF8));
        le_cpf->setText(QApplication::translate("tela_listar_clientes", "..-", 0, QApplication::UnicodeUTF8));
        lb_telefone->setText(QApplication::translate("tela_listar_clientes", "Telefone:", 0, QApplication::UnicodeUTF8));
        lb_email->setText(QApplication::translate("tela_listar_clientes", "E-mail:", 0, QApplication::UnicodeUTF8));
        le_telefone->setInputMask(QApplication::translate("tela_listar_clientes", "(00)00000-0000; ", 0, QApplication::UnicodeUTF8));
        le_telefone->setText(QApplication::translate("tela_listar_clientes", "()-", 0, QApplication::UnicodeUTF8));
        le_email->setText(QString());
        btn_confirmar->setText(QApplication::translate("tela_listar_clientes", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_listar_clientes", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_listar_clientes: public Ui_tela_listar_clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_LISTAR_CLIENTES_H
