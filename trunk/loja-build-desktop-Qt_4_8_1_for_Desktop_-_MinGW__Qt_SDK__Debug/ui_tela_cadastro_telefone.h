/********************************************************************************
** Form generated from reading UI file 'tela_cadastro_telefone.ui'
**
** Created: Thu 14. Feb 11:07:22 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CADASTRO_TELEFONE_H
#define UI_TELA_CADASTRO_TELEFONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_cadastro_telefone
{
public:
    QLabel *lb_telefone;
    QLineEdit *le_telefone;
    QComboBox *cb_operadora;
    QLabel *lb_operadora;
    QPushButton *btn_confrimar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *tela_cadastro_telefone)
    {
        if (tela_cadastro_telefone->objectName().isEmpty())
            tela_cadastro_telefone->setObjectName(QString::fromUtf8("tela_cadastro_telefone"));
        tela_cadastro_telefone->setWindowModality(Qt::ApplicationModal);
        tela_cadastro_telefone->resize(370, 76);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/logo_sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        tela_cadastro_telefone->setWindowIcon(icon);
        lb_telefone = new QLabel(tela_cadastro_telefone);
        lb_telefone->setObjectName(QString::fromUtf8("lb_telefone"));
        lb_telefone->setGeometry(QRect(10, 10, 51, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        lb_telefone->setFont(font);
        le_telefone = new QLineEdit(tela_cadastro_telefone);
        le_telefone->setObjectName(QString::fromUtf8("le_telefone"));
        le_telefone->setGeometry(QRect(60, 10, 95, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setKerning(false);
        le_telefone->setFont(font1);
        le_telefone->setMaxLength(4);
        le_telefone->setEchoMode(QLineEdit::Normal);
        cb_operadora = new QComboBox(tela_cadastro_telefone);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/operadoras/LOGO-ALGAR-TELECOM.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_operadora->addItem(icon1, QString());
        cb_operadora->addItem(QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/operadoras/claro.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_operadora->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/operadoras/vivo_boneco.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_operadora->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/operadoras/TIM.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_operadora->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/operadoras/oi.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_operadora->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/operadoras/sercom_tel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_operadora->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/operadoras/nextel-novo.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_operadora->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/telefone.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb_operadora->addItem(icon8, QString());
        cb_operadora->setObjectName(QString::fromUtf8("cb_operadora"));
        cb_operadora->setGeometry(QRect(238, 10, 122, 22));
        cb_operadora->setFont(font1);
        lb_operadora = new QLabel(tela_cadastro_telefone);
        lb_operadora->setObjectName(QString::fromUtf8("lb_operadora"));
        lb_operadora->setGeometry(QRect(170, 10, 68, 20));
        lb_operadora->setFont(font);
        btn_confrimar = new QPushButton(tela_cadastro_telefone);
        btn_confrimar->setObjectName(QString::fromUtf8("btn_confrimar"));
        btn_confrimar->setGeometry(QRect(86, 40, 94, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(9);
        btn_confrimar->setFont(font2);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confrimar->setIcon(icon9);
        btn_confrimar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(tela_cadastro_telefone);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(190, 40, 94, 24));
        btn_cancelar->setFont(font2);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon10);
        btn_cancelar->setIconSize(QSize(18, 18));

        retranslateUi(tela_cadastro_telefone);

        QMetaObject::connectSlotsByName(tela_cadastro_telefone);
    } // setupUi

    void retranslateUi(QDialog *tela_cadastro_telefone)
    {
        tela_cadastro_telefone->setWindowTitle(QApplication::translate("tela_cadastro_telefone", "Telefone", 0, QApplication::UnicodeUTF8));
        lb_telefone->setText(QApplication::translate("tela_cadastro_telefone", "Telefone:", 0, QApplication::UnicodeUTF8));
        le_telefone->setInputMask(QApplication::translate("tela_cadastro_telefone", "(00); ", 0, QApplication::UnicodeUTF8));
        le_telefone->setText(QApplication::translate("tela_cadastro_telefone", "()", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(0, QApplication::translate("tela_cadastro_telefone", "Algar Telecom", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(1, QApplication::translate("tela_cadastro_telefone", "--------------------", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(2, QApplication::translate("tela_cadastro_telefone", "Claro", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(3, QApplication::translate("tela_cadastro_telefone", "Vivo", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(4, QApplication::translate("tela_cadastro_telefone", "TIM", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(5, QApplication::translate("tela_cadastro_telefone", "Oi", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(6, QApplication::translate("tela_cadastro_telefone", "Sercomtel", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(7, QApplication::translate("tela_cadastro_telefone", "Nextel", 0, QApplication::UnicodeUTF8));
        cb_operadora->setItemText(8, QApplication::translate("tela_cadastro_telefone", "Outro", 0, QApplication::UnicodeUTF8));

        lb_operadora->setText(QApplication::translate("tela_cadastro_telefone", "Operadora:", 0, QApplication::UnicodeUTF8));
        btn_confrimar->setText(QApplication::translate("tela_cadastro_telefone", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_cadastro_telefone", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_cadastro_telefone: public Ui_tela_cadastro_telefone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CADASTRO_TELEFONE_H
