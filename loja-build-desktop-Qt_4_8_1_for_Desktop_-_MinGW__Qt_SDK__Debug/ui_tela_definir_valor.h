/********************************************************************************
** Form generated from reading UI file 'tela_definir_valor.ui'
**
** Created: Thu 4. Apr 10:57:11 2013
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_definir_valor
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_valorvenda;
    QLineEdit *le_valor_venda;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_valor_compra;
    QLineEdit *le_custo_medio;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lb_quantidade;
    QLineEdit *le_quantidade;
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
        groupBox->setGeometry(QRect(5, 0, 192, 121));
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 191, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lb_valorvenda = new QLabel(layoutWidget);
        lb_valorvenda->setObjectName(QString::fromUtf8("lb_valorvenda"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        lb_valorvenda->setFont(font2);

        horizontalLayout_2->addWidget(lb_valorvenda);

        le_valor_venda = new QLineEdit(layoutWidget);
        le_valor_venda->setObjectName(QString::fromUtf8("le_valor_venda"));
        le_valor_venda->setFont(font2);
        le_valor_venda->setInputMethodHints(Qt::ImhNone);
        le_valor_venda->setMaxLength(32767);
        le_valor_venda->setReadOnly(false);

        horizontalLayout_2->addWidget(le_valor_venda);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lb_valor_compra = new QLabel(layoutWidget);
        lb_valor_compra->setObjectName(QString::fromUtf8("lb_valor_compra"));
        lb_valor_compra->setFont(font2);

        horizontalLayout->addWidget(lb_valor_compra);

        le_custo_medio = new QLineEdit(layoutWidget);
        le_custo_medio->setObjectName(QString::fromUtf8("le_custo_medio"));
        le_custo_medio->setFont(font2);
        le_custo_medio->setInputMethodHints(Qt::ImhNone);
        le_custo_medio->setMaxLength(32767);
        le_custo_medio->setReadOnly(false);

        horizontalLayout->addWidget(le_custo_medio);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lb_quantidade = new QLabel(layoutWidget);
        lb_quantidade->setObjectName(QString::fromUtf8("lb_quantidade"));
        lb_quantidade->setFont(font2);

        horizontalLayout_3->addWidget(lb_quantidade);

        le_quantidade = new QLineEdit(layoutWidget);
        le_quantidade->setObjectName(QString::fromUtf8("le_quantidade"));
        le_quantidade->setFont(font2);
        le_quantidade->setMaxLength(32767);
        le_quantidade->setReadOnly(false);

        horizontalLayout_3->addWidget(le_quantidade);


        verticalLayout->addLayout(horizontalLayout_3);

        btn_confirmar = new QPushButton(tela_definir_valor);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(7, 130, 90, 25));
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
        btn_cancelar->setGeometry(QRect(105, 130, 90, 25));
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
        le_valor_venda->setInputMask(QString());
        le_valor_venda->setText(QString());
        lb_valor_compra->setText(QApplication::translate("tela_definir_valor", "Custo :", 0, QApplication::UnicodeUTF8));
        le_custo_medio->setText(QString());
        lb_quantidade->setText(QApplication::translate("tela_definir_valor", "Quantidade:", 0, QApplication::UnicodeUTF8));
        le_quantidade->setInputMask(QString());
        le_quantidade->setText(QString());
        btn_confirmar->setText(QApplication::translate("tela_definir_valor", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_definir_valor", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_definir_valor: public Ui_tela_definir_valor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_DEFINIR_VALOR_H
