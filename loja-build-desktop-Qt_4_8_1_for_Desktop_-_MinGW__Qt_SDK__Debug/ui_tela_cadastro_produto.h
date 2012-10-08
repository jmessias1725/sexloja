/********************************************************************************
** Form generated from reading UI file 'tela_cadastro_produto.ui'
**
** Created: Mon 8. Oct 17:32:14 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CADASTRO_PRODUTO_H
#define UI_TELA_CADASTRO_PRODUTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_tela_cadastro_produto
{
public:
    QGroupBox *gb_dados_produto;
    QLabel *lb_nome;
    QLineEdit *le_nome;
    QLineEdit *le_fabricante;
    QLabel *lb_fabricante;
    QLabel *lb_codigo_barras;
    QLineEdit *le_codigo_barras;
    QLineEdit *le_quantidade;
    QLabel *lb_quantidade;
    QTextEdit *te_comentario;
    QLabel *lb_comentario;
    QGraphicsView *gv_logo;
    QPushButton *btn_adicionar_imagem_produto;
    QPushButton *btn_cancelar;
    QPushButton *btn_confirmar;

    void setupUi(QDialog *tela_cadastro_produto)
    {
        if (tela_cadastro_produto->objectName().isEmpty())
            tela_cadastro_produto->setObjectName(QString::fromUtf8("tela_cadastro_produto"));
        tela_cadastro_produto->resize(615, 279);
        gb_dados_produto = new QGroupBox(tela_cadastro_produto);
        gb_dados_produto->setObjectName(QString::fromUtf8("gb_dados_produto"));
        gb_dados_produto->setGeometry(QRect(5, 5, 605, 269));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_dados_produto->setFont(font);
        lb_nome = new QLabel(gb_dados_produto);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(5, 20, 35, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_nome->setFont(font1);
        le_nome = new QLineEdit(gb_dados_produto);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(40, 20, 375, 20));
        le_nome->setFont(font1);
        le_nome->setMaxLength(60);
        le_fabricante = new QLineEdit(gb_dados_produto);
        le_fabricante->setObjectName(QString::fromUtf8("le_fabricante"));
        le_fabricante->setGeometry(QRect(68, 50, 347, 20));
        le_fabricante->setFont(font1);
        le_fabricante->setMaxLength(60);
        lb_fabricante = new QLabel(gb_dados_produto);
        lb_fabricante->setObjectName(QString::fromUtf8("lb_fabricante"));
        lb_fabricante->setGeometry(QRect(5, 50, 63, 20));
        lb_fabricante->setFont(font1);
        lb_codigo_barras = new QLabel(gb_dados_produto);
        lb_codigo_barras->setObjectName(QString::fromUtf8("lb_codigo_barras"));
        lb_codigo_barras->setGeometry(QRect(5, 80, 99, 20));
        lb_codigo_barras->setFont(font1);
        le_codigo_barras = new QLineEdit(gb_dados_produto);
        le_codigo_barras->setObjectName(QString::fromUtf8("le_codigo_barras"));
        le_codigo_barras->setGeometry(QRect(104, 80, 101, 20));
        le_codigo_barras->setFont(font1);
        le_codigo_barras->setMaxLength(60);
        le_quantidade = new QLineEdit(gb_dados_produto);
        le_quantidade->setObjectName(QString::fromUtf8("le_quantidade"));
        le_quantidade->setGeometry(QRect(283, 80, 81, 20));
        le_quantidade->setFont(font1);
        le_quantidade->setMaxLength(10);
        lb_quantidade = new QLabel(gb_dados_produto);
        lb_quantidade->setObjectName(QString::fromUtf8("lb_quantidade"));
        lb_quantidade->setGeometry(QRect(215, 80, 68, 20));
        lb_quantidade->setFont(font1);
        te_comentario = new QTextEdit(gb_dados_produto);
        te_comentario->setObjectName(QString::fromUtf8("te_comentario"));
        te_comentario->setGeometry(QRect(5, 130, 410, 100));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        te_comentario->setFont(font2);
        te_comentario->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        te_comentario->setReadOnly(false);
        lb_comentario = new QLabel(gb_dados_produto);
        lb_comentario->setObjectName(QString::fromUtf8("lb_comentario"));
        lb_comentario->setGeometry(QRect(5, 110, 133, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        lb_comentario->setFont(font3);
        gv_logo = new QGraphicsView(gb_dados_produto);
        gv_logo->setObjectName(QString::fromUtf8("gv_logo"));
        gv_logo->setGeometry(QRect(420, 20, 180, 180));
        gv_logo->setMinimumSize(QSize(150, 150));
        gv_logo->setMaximumSize(QSize(200, 200));
        btn_adicionar_imagem_produto = new QPushButton(gb_dados_produto);
        btn_adicionar_imagem_produto->setObjectName(QString::fromUtf8("btn_adicionar_imagem_produto"));
        btn_adicionar_imagem_produto->setGeometry(QRect(450, 207, 125, 23));
        btn_adicionar_imagem_produto->setFont(font2);
        btn_cancelar = new QPushButton(gb_dados_produto);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(307, 240, 90, 24));
        btn_cancelar->setMinimumSize(QSize(0, 24));
        btn_cancelar->setMaximumSize(QSize(90, 24));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        btn_cancelar->setFont(font4);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/1345902747_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancelar->setIcon(icon);
        btn_cancelar->setIconSize(QSize(18, 18));
        btn_confirmar = new QPushButton(gb_dados_produto);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));
        btn_confirmar->setGeometry(QRect(207, 240, 90, 24));
        btn_confirmar->setMinimumSize(QSize(0, 24));
        btn_confirmar->setMaximumSize(QSize(90, 24));
        btn_confirmar->setFont(font4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon1);
        btn_confirmar->setIconSize(QSize(20, 20));

        retranslateUi(tela_cadastro_produto);

        QMetaObject::connectSlotsByName(tela_cadastro_produto);
    } // setupUi

    void retranslateUi(QDialog *tela_cadastro_produto)
    {
        tela_cadastro_produto->setWindowTitle(QApplication::translate("tela_cadastro_produto", "Dialog", 0, QApplication::UnicodeUTF8));
        gb_dados_produto->setTitle(QApplication::translate("tela_cadastro_produto", "Dados do produto", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_cadastro_produto", "Nome:", 0, QApplication::UnicodeUTF8));
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        le_fabricante->setInputMask(QString());
        le_fabricante->setText(QString());
        lb_fabricante->setText(QApplication::translate("tela_cadastro_produto", "Fabricante:", 0, QApplication::UnicodeUTF8));
        lb_codigo_barras->setText(QApplication::translate("tela_cadastro_produto", "C\303\263digo de Barras:", 0, QApplication::UnicodeUTF8));
        le_codigo_barras->setInputMask(QString());
        le_codigo_barras->setText(QString());
        le_quantidade->setInputMask(QApplication::translate("tela_cadastro_produto", "0000000000; ", 0, QApplication::UnicodeUTF8));
        le_quantidade->setText(QString());
        lb_quantidade->setText(QApplication::translate("tela_cadastro_produto", "Quantidade:", 0, QApplication::UnicodeUTF8));
        te_comentario->setHtml(QApplication::translate("tela_cadastro_produto", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Calibri'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa</p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_comentario->setText(QApplication::translate("tela_cadastro_produto", "Descri\303\247\303\243o da utiliza\303\247\303\243o:", 0, QApplication::UnicodeUTF8));
        btn_adicionar_imagem_produto->setText(QApplication::translate("tela_cadastro_produto", "Adicionar imagem", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_cadastro_produto", "Cancelar", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_cadastro_produto", "Confirmar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_cadastro_produto: public Ui_tela_cadastro_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CADASTRO_PRODUTO_H
