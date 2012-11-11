/********************************************************************************
** Form generated from reading UI file 'tela_configurar_legenda_estoque.ui'
**
** Created: Fri 9. Nov 17:55:39 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CONFIGURAR_LEGENDA_ESTOQUE_H
#define UI_TELA_CONFIGURAR_LEGENDA_ESTOQUE_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_configurar_legenda_estoque
{
public:
    QGroupBox *alterar_valores;
    QLineEdit *le_ideal;
    QLineEdit *le_zerado;
    QLabel *lb_zerado;
    QLineEdit *le_normal;
    QLabel *lb_minimo;
    QLabel *lb_normal;
    QLabel *lb_ideal;
    QLineEdit *le_minimo;
    QGroupBox *Alterar_cor;
    QPushButton *btn_alterar_cor_zerado;
    QPushButton *btn_alterar_cor_normal;
    QPushButton *btn_alterar_cor_ideal;
    QPushButton *btn_alterar_cor_minimo;
    QGroupBox *Pre_visualizar;
    QTableWidget *tw_legenda;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QPushButton *btn_voltar_padrao;

    void setupUi(QDialog *tela_configurar_legenda_estoque)
    {
        if (tela_configurar_legenda_estoque->objectName().isEmpty())
            tela_configurar_legenda_estoque->setObjectName(QString::fromUtf8("tela_configurar_legenda_estoque"));
        tela_configurar_legenda_estoque->resize(410, 154);
        tela_configurar_legenda_estoque->setMinimumSize(QSize(410, 154));
        tela_configurar_legenda_estoque->setMaximumSize(QSize(410, 154));
        tela_configurar_legenda_estoque->setModal(true);
        alterar_valores = new QGroupBox(tela_configurar_legenda_estoque);
        alterar_valores->setObjectName(QString::fromUtf8("alterar_valores"));
        alterar_valores->setGeometry(QRect(5, 5, 130, 115));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        alterar_valores->setFont(font);
        le_ideal = new QLineEdit(alterar_valores);
        le_ideal->setObjectName(QString::fromUtf8("le_ideal"));
        le_ideal->setGeometry(QRect(100, 85, 25, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        le_ideal->setFont(font1);
        le_ideal->setReadOnly(true);
        le_zerado = new QLineEdit(alterar_valores);
        le_zerado->setObjectName(QString::fromUtf8("le_zerado"));
        le_zerado->setGeometry(QRect(100, 25, 25, 20));
        le_zerado->setFont(font1);
        le_zerado->setReadOnly(true);
        lb_zerado = new QLabel(alterar_valores);
        lb_zerado->setObjectName(QString::fromUtf8("lb_zerado"));
        lb_zerado->setGeometry(QRect(5, 25, 87, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        lb_zerado->setFont(font2);
        le_normal = new QLineEdit(alterar_valores);
        le_normal->setObjectName(QString::fromUtf8("le_normal"));
        le_normal->setGeometry(QRect(100, 65, 25, 20));
        le_normal->setFont(font1);
        lb_minimo = new QLabel(alterar_valores);
        lb_minimo->setObjectName(QString::fromUtf8("lb_minimo"));
        lb_minimo->setGeometry(QRect(5, 45, 91, 20));
        lb_minimo->setFont(font2);
        lb_normal = new QLabel(alterar_valores);
        lb_normal->setObjectName(QString::fromUtf8("lb_normal"));
        lb_normal->setGeometry(QRect(5, 65, 90, 20));
        lb_normal->setFont(font2);
        lb_ideal = new QLabel(alterar_valores);
        lb_ideal->setObjectName(QString::fromUtf8("lb_ideal"));
        lb_ideal->setGeometry(QRect(5, 85, 78, 20));
        lb_ideal->setFont(font2);
        le_minimo = new QLineEdit(alterar_valores);
        le_minimo->setObjectName(QString::fromUtf8("le_minimo"));
        le_minimo->setGeometry(QRect(100, 45, 25, 20));
        le_minimo->setFont(font1);
        Alterar_cor = new QGroupBox(tela_configurar_legenda_estoque);
        Alterar_cor->setObjectName(QString::fromUtf8("Alterar_cor"));
        Alterar_cor->setGeometry(QRect(140, 5, 265, 115));
        Alterar_cor->setFont(font);
        btn_alterar_cor_zerado = new QPushButton(Alterar_cor);
        btn_alterar_cor_zerado->setObjectName(QString::fromUtf8("btn_alterar_cor_zerado"));
        btn_alterar_cor_zerado->setGeometry(QRect(5, 25, 125, 20));
        btn_alterar_cor_zerado->setFont(font1);
        btn_alterar_cor_normal = new QPushButton(Alterar_cor);
        btn_alterar_cor_normal->setObjectName(QString::fromUtf8("btn_alterar_cor_normal"));
        btn_alterar_cor_normal->setGeometry(QRect(5, 65, 125, 20));
        btn_alterar_cor_normal->setFont(font1);
        btn_alterar_cor_ideal = new QPushButton(Alterar_cor);
        btn_alterar_cor_ideal->setObjectName(QString::fromUtf8("btn_alterar_cor_ideal"));
        btn_alterar_cor_ideal->setGeometry(QRect(5, 85, 125, 20));
        btn_alterar_cor_ideal->setFont(font1);
        btn_alterar_cor_minimo = new QPushButton(Alterar_cor);
        btn_alterar_cor_minimo->setObjectName(QString::fromUtf8("btn_alterar_cor_minimo"));
        btn_alterar_cor_minimo->setGeometry(QRect(5, 45, 125, 20));
        btn_alterar_cor_minimo->setFont(font1);
        Pre_visualizar = new QGroupBox(Alterar_cor);
        Pre_visualizar->setObjectName(QString::fromUtf8("Pre_visualizar"));
        Pre_visualizar->setGeometry(QRect(130, 10, 130, 100));
        tw_legenda = new QTableWidget(Pre_visualizar);
        if (tw_legenda->columnCount() < 1)
            tw_legenda->setColumnCount(1);
        if (tw_legenda->rowCount() < 4)
            tw_legenda->setRowCount(4);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(255, 150, 150, 255));
        brush1.setStyle(Qt::SolidPattern);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setKerning(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem->setFont(font3);
        __qtablewidgetitem->setBackground(brush1);
        __qtablewidgetitem->setForeground(brush);
        tw_legenda->setItem(0, 0, __qtablewidgetitem);
        QBrush brush2(QColor(255, 210, 210, 255));
        brush2.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font3);
        __qtablewidgetitem1->setBackground(brush2);
        tw_legenda->setItem(1, 0, __qtablewidgetitem1);
        QBrush brush3(QColor(204, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font3);
        __qtablewidgetitem2->setBackground(brush3);
        tw_legenda->setItem(2, 0, __qtablewidgetitem2);
        QBrush brush4(QColor(0, 253, 126, 255));
        brush4.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font3);
        __qtablewidgetitem3->setBackground(brush4);
        tw_legenda->setItem(3, 0, __qtablewidgetitem3);
        tw_legenda->setObjectName(QString::fromUtf8("tw_legenda"));
        tw_legenda->setGeometry(QRect(5, 15, 120, 78));
        tw_legenda->setMaximumSize(QSize(120, 80));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setBold(true);
        font4.setWeight(75);
        tw_legenda->setFont(font4);
        tw_legenda->setAutoScroll(false);
        tw_legenda->setTabKeyNavigation(false);
        tw_legenda->setProperty("showDropIndicator", QVariant(false));
        tw_legenda->setDragDropOverwriteMode(false);
        tw_legenda->setSelectionMode(QAbstractItemView::NoSelection);
        tw_legenda->setRowCount(4);
        tw_legenda->setColumnCount(1);
        tw_legenda->horizontalHeader()->setVisible(false);
        tw_legenda->horizontalHeader()->setHighlightSections(true);
        tw_legenda->horizontalHeader()->setStretchLastSection(true);
        tw_legenda->verticalHeader()->setVisible(false);
        tw_legenda->verticalHeader()->setDefaultSectionSize(19);
        tw_legenda->verticalHeader()->setStretchLastSection(true);
        widget = new QWidget(tela_configurar_legenda_estoque);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 120, 411, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(35, 5, 35, 5);
        btn_confirmar = new QPushButton(widget);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setMinimumSize(QSize(90, 24));
        btn_confirmar->setMaximumSize(QSize(90, 24));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        btn_confirmar->setFont(font5);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon);
        btn_confirmar->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(btn_confirmar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setMinimumSize(QSize(90, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        btn_cancelar->setFont(font5);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon1);
        btn_cancelar->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(btn_cancelar);

        btn_voltar_padrao = new QPushButton(widget);
        btn_voltar_padrao->setObjectName(QString::fromUtf8("btn_voltar_padrao"));
        btn_voltar_padrao->setMinimumSize(QSize(151, 24));
        btn_voltar_padrao->setMaximumSize(QSize(151, 24));
        btn_voltar_padrao->setFont(font3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_voltar_padrao->setIcon(icon2);
        btn_voltar_padrao->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(btn_voltar_padrao);

        QWidget::setTabOrder(le_zerado, le_normal);
        QWidget::setTabOrder(le_normal, le_minimo);
        QWidget::setTabOrder(le_minimo, le_ideal);
        QWidget::setTabOrder(le_ideal, btn_alterar_cor_zerado);
        QWidget::setTabOrder(btn_alterar_cor_zerado, btn_alterar_cor_minimo);
        QWidget::setTabOrder(btn_alterar_cor_minimo, btn_alterar_cor_normal);
        QWidget::setTabOrder(btn_alterar_cor_normal, btn_alterar_cor_ideal);
        QWidget::setTabOrder(btn_alterar_cor_ideal, btn_confirmar);
        QWidget::setTabOrder(btn_confirmar, btn_cancelar);
        QWidget::setTabOrder(btn_cancelar, btn_voltar_padrao);
        QWidget::setTabOrder(btn_voltar_padrao, tw_legenda);

        retranslateUi(tela_configurar_legenda_estoque);

        QMetaObject::connectSlotsByName(tela_configurar_legenda_estoque);
    } // setupUi

    void retranslateUi(QDialog *tela_configurar_legenda_estoque)
    {
        tela_configurar_legenda_estoque->setWindowTitle(QApplication::translate("tela_configurar_legenda_estoque", "Configurar Legenda", 0, QApplication::UnicodeUTF8));
        alterar_valores->setTitle(QApplication::translate("tela_configurar_legenda_estoque", "Aterar valores", 0, QApplication::UnicodeUTF8));
        le_ideal->setInputMask(QApplication::translate("tela_configurar_legenda_estoque", "000; ", 0, QApplication::UnicodeUTF8));
        le_ideal->setText(QString());
        le_zerado->setInputMask(QApplication::translate("tela_configurar_legenda_estoque", "000; ", 0, QApplication::UnicodeUTF8));
        le_zerado->setText(QApplication::translate("tela_configurar_legenda_estoque", "0", 0, QApplication::UnicodeUTF8));
        lb_zerado->setText(QApplication::translate("tela_configurar_legenda_estoque", "Estoque zerado:", 0, QApplication::UnicodeUTF8));
        le_normal->setInputMask(QApplication::translate("tela_configurar_legenda_estoque", "000; ", 0, QApplication::UnicodeUTF8));
        le_normal->setText(QString());
        lb_minimo->setText(QApplication::translate("tela_configurar_legenda_estoque", "Estoque m\303\255nimo:", 0, QApplication::UnicodeUTF8));
        lb_normal->setText(QApplication::translate("tela_configurar_legenda_estoque", "Estoque normal:", 0, QApplication::UnicodeUTF8));
        lb_ideal->setText(QApplication::translate("tela_configurar_legenda_estoque", "Estoque ideal:", 0, QApplication::UnicodeUTF8));
        le_minimo->setInputMask(QApplication::translate("tela_configurar_legenda_estoque", "000; ", 0, QApplication::UnicodeUTF8));
        le_minimo->setText(QString());
        Alterar_cor->setTitle(QApplication::translate("tela_configurar_legenda_estoque", "Alterar Cores", 0, QApplication::UnicodeUTF8));
        btn_alterar_cor_zerado->setText(QApplication::translate("tela_configurar_legenda_estoque", "Alterar cor (Zerado)", 0, QApplication::UnicodeUTF8));
        btn_alterar_cor_normal->setText(QApplication::translate("tela_configurar_legenda_estoque", "Alterar cor (Normal)", 0, QApplication::UnicodeUTF8));
        btn_alterar_cor_ideal->setText(QApplication::translate("tela_configurar_legenda_estoque", "Alterar cor (Ideal)", 0, QApplication::UnicodeUTF8));
        btn_alterar_cor_minimo->setText(QApplication::translate("tela_configurar_legenda_estoque", "Alterar cor (M\303\255nimo)", 0, QApplication::UnicodeUTF8));
        Pre_visualizar->setTitle(QApplication::translate("tela_configurar_legenda_estoque", "pr\303\251-visualizar", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tw_legenda->isSortingEnabled();
        tw_legenda->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tw_legenda->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("tela_configurar_legenda_estoque", "Zerado", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tw_legenda->item(1, 0);
        ___qtablewidgetitem1->setText(QApplication::translate("tela_configurar_legenda_estoque", "M\303\255nimo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tw_legenda->item(2, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("tela_configurar_legenda_estoque", "Nomal", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tw_legenda->item(3, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("tela_configurar_legenda_estoque", "Ideal", 0, QApplication::UnicodeUTF8));
        tw_legenda->setSortingEnabled(__sortingEnabled);

        btn_confirmar->setText(QApplication::translate("tela_configurar_legenda_estoque", "Confirmar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_configurar_legenda_estoque", "Cancelar", 0, QApplication::UnicodeUTF8));
        btn_voltar_padrao->setText(QApplication::translate("tela_configurar_legenda_estoque", "Configura\303\247\303\243o padr\303\243o", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_configurar_legenda_estoque: public Ui_tela_configurar_legenda_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CONFIGURAR_LEGENDA_ESTOQUE_H
