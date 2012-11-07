/********************************************************************************
** Form generated from reading UI file 'tela_definir_valor.ui'
**
** Created: Tue 6. Nov 20:28:52 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_DEFINIR_VALOR_H
#define UI_TELA_DEFINIR_VALOR_H

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

class Ui_tela_definir_valor
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *lb_valorvenda;
    QLineEdit *le_custo_medio;
    QLineEdit *le_quantidade;
    QLabel *lb_valor_compra;
    QLabel *lb_quantidade;
    QLineEdit *le_valor_venda;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *tela_definir_valor)
    {
        if (tela_definir_valor->objectName().isEmpty())
            tela_definir_valor->setObjectName(QString::fromUtf8("tela_definir_valor"));
        tela_definir_valor->setWindowModality(Qt::ApplicationModal);
        tela_definir_valor->resize(202, 160);
        tela_definir_valor->setMinimumSize(QSize(202, 160));
        tela_definir_valor->setMaximumSize(QSize(202, 160));
        groupBox = new QGroupBox(tela_definir_valor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 0, 192, 125));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 15, 176, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label->setFont(font1);
        lb_valorvenda = new QLabel(groupBox);
        lb_valorvenda->setObjectName(QString::fromUtf8("lb_valorvenda"));
        lb_valorvenda->setGeometry(QRect(10, 50, 86, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        lb_valorvenda->setFont(font2);
        le_custo_medio = new QLineEdit(groupBox);
        le_custo_medio->setObjectName(QString::fromUtf8("le_custo_medio"));
        le_custo_medio->setGeometry(QRect(50, 75, 85, 20));
        le_custo_medio->setFont(font2);
        le_custo_medio->setInputMethodHints(Qt::ImhNone);
        le_custo_medio->setMaxLength(12);
        le_custo_medio->setReadOnly(false);
        le_quantidade = new QLineEdit(groupBox);
        le_quantidade->setObjectName(QString::fromUtf8("le_quantidade"));
        le_quantidade->setGeometry(QRect(79, 100, 80, 20));
        le_quantidade->setFont(font2);
        le_quantidade->setMaxLength(10);
        le_quantidade->setReadOnly(false);
        lb_valor_compra = new QLabel(groupBox);
        lb_valor_compra->setObjectName(QString::fromUtf8("lb_valor_compra"));
        lb_valor_compra->setGeometry(QRect(10, 75, 38, 20));
        lb_valor_compra->setFont(font2);
        lb_quantidade = new QLabel(groupBox);
        lb_quantidade->setObjectName(QString::fromUtf8("lb_quantidade"));
        lb_quantidade->setGeometry(QRect(10, 100, 67, 20));
        lb_quantidade->setFont(font2);
        le_valor_venda = new QLineEdit(groupBox);
        le_valor_venda->setObjectName(QString::fromUtf8("le_valor_venda"));
        le_valor_venda->setGeometry(QRect(100, 50, 85, 20));
        le_valor_venda->setFont(font2);
        le_valor_venda->setInputMethodHints(Qt::ImhNone);
        le_valor_venda->setMaxLength(12);
        le_valor_venda->setReadOnly(false);
        btn_confirmar = new QPushButton(tela_definir_valor);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(6, 130, 90, 25));
        btn_confirmar->setMinimumSize(QSize(0, 25));
        btn_confirmar->setMaximumSize(QSize(90, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        btn_confirmar->setFont(font3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(tela_definir_valor);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(104, 130, 90, 25));
        btn_cancelar->setMinimumSize(QSize(0, 25));
        btn_cancelar->setMaximumSize(QSize(90, 25));
        btn_cancelar->setFont(font3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));
        QWidget::setTabOrder(le_valor_venda, le_custo_medio);
        QWidget::setTabOrder(le_custo_medio, le_quantidade);
        QWidget::setTabOrder(le_quantidade, btn_confirmar);
        QWidget::setTabOrder(btn_confirmar, btn_cancelar);

        retranslateUi(tela_definir_valor);

        QMetaObject::connectSlotsByName(tela_definir_valor);
    } // setupUi

    void retranslateUi(QDialog *tela_definir_valor)
    {
        tela_definir_valor->setWindowTitle(QApplication::translate("tela_definir_valor", "Valores", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tela_definir_valor", "Produto", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tela_definir_valor", "Defina o valor de venda, o custo\n"
"e quantidade comprada. ", 0, QApplication::UnicodeUTF8));
        lb_valorvenda->setText(QApplication::translate("tela_definir_valor", "Valor de venda:", 0, QApplication::UnicodeUTF8));
        le_custo_medio->setInputMask(QApplication::translate("tela_definir_valor", "R$ xxxxxxxxx; ", 0, QApplication::UnicodeUTF8));
        le_custo_medio->setText(QApplication::translate("tela_definir_valor", "R$ ", 0, QApplication::UnicodeUTF8));
        le_quantidade->setInputMask(QApplication::translate("tela_definir_valor", "0000000000; ", 0, QApplication::UnicodeUTF8));
        le_quantidade->setText(QString());
        lb_valor_compra->setText(QApplication::translate("tela_definir_valor", "Custo :", 0, QApplication::UnicodeUTF8));
        lb_quantidade->setText(QApplication::translate("tela_definir_valor", "Quantidade:", 0, QApplication::UnicodeUTF8));
        le_valor_venda->setInputMask(QApplication::translate("tela_definir_valor", "R$ xxxxxxxxx; ", 0, QApplication::UnicodeUTF8));
        le_valor_venda->setText(QApplication::translate("tela_definir_valor", "R$ ", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_definir_valor", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_definir_valor", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_definir_valor: public Ui_tela_definir_valor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_DEFINIR_VALOR_H
