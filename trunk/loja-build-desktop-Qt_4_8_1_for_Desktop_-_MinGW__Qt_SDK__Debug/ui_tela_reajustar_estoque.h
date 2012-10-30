/********************************************************************************
** Form generated from reading UI file 'tela_reajustar_estoque.ui'
**
** Created: Tue 30. Oct 09:01:13 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_REAJUSTAR_ESTOQUE_H
#define UI_TELA_REAJUSTAR_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_reajustar_estoque
{
public:
    QGroupBox *gb_reajuste;
    QLabel *lb_texto;
    QLabel *lb_tipo;
    QLabel *lb_valor;
    QComboBox *cb_tipo;
    QLineEdit *le_porcentagem;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *tela_reajustar_estoque)
    {
        if (tela_reajustar_estoque->objectName().isEmpty())
            tela_reajustar_estoque->setObjectName(QString::fromUtf8("tela_reajustar_estoque"));
        tela_reajustar_estoque->resize(280, 130);
        gb_reajuste = new QGroupBox(tela_reajustar_estoque);
        gb_reajuste->setObjectName(QString::fromUtf8("gb_reajuste"));
        gb_reajuste->setGeometry(QRect(5, 0, 270, 125));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        gb_reajuste->setFont(font);
        lb_texto = new QLabel(gb_reajuste);
        lb_texto->setObjectName(QString::fromUtf8("lb_texto"));
        lb_texto->setGeometry(QRect(5, 15, 260, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        lb_texto->setFont(font1);
        lb_tipo = new QLabel(gb_reajuste);
        lb_tipo->setObjectName(QString::fromUtf8("lb_tipo"));
        lb_tipo->setGeometry(QRect(20, 68, 28, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        lb_tipo->setFont(font2);
        lb_valor = new QLabel(gb_reajuste);
        lb_valor->setObjectName(QString::fromUtf8("lb_valor"));
        lb_valor->setGeometry(QRect(148, 68, 62, 20));
        lb_valor->setFont(font2);
        cb_tipo = new QComboBox(gb_reajuste);
        cb_tipo->setObjectName(QString::fromUtf8("cb_tipo"));
        cb_tipo->setGeometry(QRect(48, 68, 81, 20));
        cb_tipo->setFont(font2);
        le_porcentagem = new QLineEdit(gb_reajuste);
        le_porcentagem->setObjectName(QString::fromUtf8("le_porcentagem"));
        le_porcentagem->setGeometry(QRect(210, 68, 40, 20));
        le_porcentagem->setFont(font2);
        le_porcentagem->setMaxLength(4);
        le_porcentagem->setCursorPosition(4);
        btn_confirmar = new QPushButton(gb_reajuste);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(35, 95, 100, 24));
        btn_confirmar->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));
        btn_cancelar = new QPushButton(gb_reajuste);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(135, 95, 100, 24));
        btn_cancelar->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));
        QWidget::setTabOrder(cb_tipo, le_porcentagem);
        QWidget::setTabOrder(le_porcentagem, btn_confirmar);
        QWidget::setTabOrder(btn_confirmar, btn_cancelar);

        retranslateUi(tela_reajustar_estoque);

        QMetaObject::connectSlotsByName(tela_reajustar_estoque);
    } // setupUi

    void retranslateUi(QDialog *tela_reajustar_estoque)
    {
        tela_reajustar_estoque->setWindowTitle(QApplication::translate("tela_reajustar_estoque", "Reajustar pre\303\247o dos produtos", 0, QApplication::UnicodeUTF8));
        gb_reajuste->setTitle(QApplication::translate("tela_reajustar_estoque", "Reajuste", 0, QApplication::UnicodeUTF8));
        lb_texto->setText(QApplication::translate("tela_reajustar_estoque", "Digite o valor percetual para definir o aumento\n"
"ou a redu\303\247\303\243o no valor de todos os produtos no\n"
"estoque.", 0, QApplication::UnicodeUTF8));
        lb_tipo->setText(QApplication::translate("tela_reajustar_estoque", "Tipo:", 0, QApplication::UnicodeUTF8));
        lb_valor->setText(QApplication::translate("tela_reajustar_estoque", "Percentual:", 0, QApplication::UnicodeUTF8));
        cb_tipo->clear();
        cb_tipo->insertItems(0, QStringList()
         << QApplication::translate("tela_reajustar_estoque", "Aumentar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_reajustar_estoque", "Reduzir", 0, QApplication::UnicodeUTF8)
        );
        le_porcentagem->setInputMask(QApplication::translate("tela_reajustar_estoque", "000%; ", 0, QApplication::UnicodeUTF8));
        le_porcentagem->setText(QApplication::translate("tela_reajustar_estoque", "%", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_reajustar_estoque", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_reajustar_estoque", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_reajustar_estoque: public Ui_tela_reajustar_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_REAJUSTAR_ESTOQUE_H
