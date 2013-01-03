/********************************************************************************
** Form generated from reading UI file 'tela_definir_valor_venda.ui'
**
** Created: Wed 2. Jan 10:39:29 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_DEFINIR_VALOR_VENDA_H
#define UI_TELA_DEFINIR_VALOR_VENDA_H

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

class Ui_tela_definir_valor_venda
{
public:
    QPushButton *btn_confirmar;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *lb_valorvenda;
    QLineEdit *le_valor_venda;
    QLabel *lb_quantidade;
    QLineEdit *le_quantidade;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *tela_definir_valor_venda)
    {
        if (tela_definir_valor_venda->objectName().isEmpty())
            tela_definir_valor_venda->setObjectName(QString::fromUtf8("tela_definir_valor_venda"));
        tela_definir_valor_venda->resize(202, 135);
        tela_definir_valor_venda->setMinimumSize(QSize(202, 135));
        tela_definir_valor_venda->setMaximumSize(QSize(202, 135));
        btn_confirmar = new QPushButton(tela_definir_valor_venda);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(7, 105, 90, 25));
        btn_confirmar->setMinimumSize(QSize(0, 25));
        btn_confirmar->setMaximumSize(QSize(90, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        btn_confirmar->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));
        groupBox = new QGroupBox(tela_definir_valor_venda);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 0, 192, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 15, 176, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        label->setFont(font2);
        lb_valorvenda = new QLabel(groupBox);
        lb_valorvenda->setObjectName(QString::fromUtf8("lb_valorvenda"));
        lb_valorvenda->setGeometry(QRect(6, 50, 86, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        lb_valorvenda->setFont(font3);
        le_valor_venda = new QLineEdit(groupBox);
        le_valor_venda->setObjectName(QString::fromUtf8("le_valor_venda"));
        le_valor_venda->setGeometry(QRect(92, 50, 93, 20));
        le_valor_venda->setFont(font3);
        le_valor_venda->setInputMethodHints(Qt::ImhNone);
        le_valor_venda->setMaxLength(32767);
        le_valor_venda->setReadOnly(false);
        lb_quantidade = new QLabel(groupBox);
        lb_quantidade->setObjectName(QString::fromUtf8("lb_quantidade"));
        lb_quantidade->setGeometry(QRect(6, 76, 68, 20));
        lb_quantidade->setFont(font3);
        le_quantidade = new QLineEdit(groupBox);
        le_quantidade->setObjectName(QString::fromUtf8("le_quantidade"));
        le_quantidade->setGeometry(QRect(74, 76, 111, 20));
        le_quantidade->setFont(font3);
        le_quantidade->setMaxLength(32767);
        le_quantidade->setReadOnly(false);
        btn_cancelar = new QPushButton(tela_definir_valor_venda);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(105, 105, 90, 25));
        btn_cancelar->setMinimumSize(QSize(0, 25));
        btn_cancelar->setMaximumSize(QSize(90, 25));
        btn_cancelar->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));

        retranslateUi(tela_definir_valor_venda);

        QMetaObject::connectSlotsByName(tela_definir_valor_venda);
    } // setupUi

    void retranslateUi(QDialog *tela_definir_valor_venda)
    {
        tela_definir_valor_venda->setWindowTitle(QApplication::translate("tela_definir_valor_venda", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_definir_valor_venda", "Confirmar", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_definir_valor_venda", "Produto", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tela_definir_valor_venda", "Defina o valor de venda,e a \n"
"quantidade. ", 0, QApplication::UnicodeUTF8));
        lb_valorvenda->setText(QApplication::translate("tela_definir_valor_venda", "Valor de venda:", 0, QApplication::UnicodeUTF8));
        le_valor_venda->setInputMask(QString());
        le_valor_venda->setText(QString());
        lb_quantidade->setText(QApplication::translate("tela_definir_valor_venda", "Quantidade:", 0, QApplication::UnicodeUTF8));
        le_quantidade->setInputMask(QString());
        le_quantidade->setText(QString());
        btn_cancelar->setText(QApplication::translate("tela_definir_valor_venda", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_definir_valor_venda: public Ui_tela_definir_valor_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_DEFINIR_VALOR_VENDA_H
