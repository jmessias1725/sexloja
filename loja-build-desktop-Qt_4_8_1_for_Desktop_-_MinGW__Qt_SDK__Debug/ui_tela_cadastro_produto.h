/********************************************************************************
** Form generated from reading UI file 'tela_cadastro_produto.ui'
**
** Created: Tue 9. Oct 17:21:27 2012
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
#include <QtGui/QComboBox>
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
    QGraphicsView *gv_imagem_produto;
    QPushButton *btn_cancelar;
    QPushButton *btn_confirmar;
    QLabel *lb_tipo;
    QComboBox *cb_tipo;
    QPushButton *btn_adicionar_imagem;

    void setupUi(QDialog *tela_cadastro_produto)
    {
        if (tela_cadastro_produto->objectName().isEmpty())
            tela_cadastro_produto->setObjectName(QString::fromUtf8("tela_cadastro_produto"));
        tela_cadastro_produto->setWindowModality(Qt::ApplicationModal);
        tela_cadastro_produto->resize(615, 275);
        gb_dados_produto = new QGroupBox(tela_cadastro_produto);
        gb_dados_produto->setObjectName(QString::fromUtf8("gb_dados_produto"));
        gb_dados_produto->setGeometry(QRect(5, 5, 605, 265));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_dados_produto->setFont(font);
        gb_dados_produto->setAlignment(Qt::AlignCenter);
        gb_dados_produto->setFlat(false);
        gb_dados_produto->setCheckable(false);
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
        le_codigo_barras->setGeometry(QRect(104, 80, 105, 20));
        le_codigo_barras->setFont(font1);
        le_codigo_barras->setMaxLength(15);
        le_quantidade = new QLineEdit(gb_dados_produto);
        le_quantidade->setObjectName(QString::fromUtf8("le_quantidade"));
        le_quantidade->setGeometry(QRect(292, 80, 80, 20));
        le_quantidade->setFont(font1);
        le_quantidade->setMaxLength(10);
        lb_quantidade = new QLabel(gb_dados_produto);
        lb_quantidade->setObjectName(QString::fromUtf8("lb_quantidade"));
        lb_quantidade->setGeometry(QRect(224, 80, 67, 20));
        lb_quantidade->setFont(font1);
        te_comentario = new QTextEdit(gb_dados_produto);
        te_comentario->setObjectName(QString::fromUtf8("te_comentario"));
        te_comentario->setGeometry(QRect(5, 160, 410, 100));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        te_comentario->setFont(font2);
        te_comentario->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        te_comentario->setReadOnly(false);
        lb_comentario = new QLabel(gb_dados_produto);
        lb_comentario->setObjectName(QString::fromUtf8("lb_comentario"));
        lb_comentario->setGeometry(QRect(5, 140, 133, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        lb_comentario->setFont(font3);
        gv_imagem_produto = new QGraphicsView(gb_dados_produto);
        gv_imagem_produto->setObjectName(QString::fromUtf8("gv_imagem_produto"));
        gv_imagem_produto->setGeometry(QRect(420, 20, 180, 180));
        gv_imagem_produto->setMinimumSize(QSize(150, 150));
        gv_imagem_produto->setMaximumSize(QSize(200, 200));
        btn_cancelar = new QPushButton(gb_dados_produto);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(510, 236, 90, 24));
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
        btn_confirmar->setGeometry(QRect(420, 236, 90, 24));
        btn_confirmar->setMinimumSize(QSize(0, 24));
        btn_confirmar->setMaximumSize(QSize(90, 24));
        btn_confirmar->setFont(font4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/1345902916_camera_test.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_confirmar->setIcon(icon1);
        btn_confirmar->setIconSize(QSize(20, 20));
        lb_tipo = new QLabel(gb_dados_produto);
        lb_tipo->setObjectName(QString::fromUtf8("lb_tipo"));
        lb_tipo->setGeometry(QRect(10, 110, 28, 20));
        lb_tipo->setFont(font1);
        cb_tipo = new QComboBox(gb_dados_produto);
        cb_tipo->setObjectName(QString::fromUtf8("cb_tipo"));
        cb_tipo->setGeometry(QRect(40, 110, 101, 20));
        cb_tipo->setFont(font1);
        btn_adicionar_imagem = new QPushButton(gb_dados_produto);
        btn_adicionar_imagem->setObjectName(QString::fromUtf8("btn_adicionar_imagem"));
        btn_adicionar_imagem->setGeometry(QRect(455, 205, 110, 23));
        btn_adicionar_imagem->setFont(font2);

        retranslateUi(tela_cadastro_produto);
        QObject::connect(btn_cancelar, SIGNAL(clicked()), le_nome, SLOT(clear()));
        QObject::connect(btn_cancelar, SIGNAL(clicked()), le_fabricante, SLOT(clear()));
        QObject::connect(btn_cancelar, SIGNAL(clicked()), le_codigo_barras, SLOT(clear()));
        QObject::connect(btn_cancelar, SIGNAL(clicked()), le_quantidade, SLOT(clear()));
        QObject::connect(btn_cancelar, SIGNAL(clicked()), te_comentario, SLOT(clear()));

        QMetaObject::connectSlotsByName(tela_cadastro_produto);
    } // setupUi

    void retranslateUi(QDialog *tela_cadastro_produto)
    {
        tela_cadastro_produto->setWindowTitle(QApplication::translate("tela_cadastro_produto", "Cadastrar Produto", 0, QApplication::UnicodeUTF8));
        gb_dados_produto->setTitle(QApplication::translate("tela_cadastro_produto", "Dados do produto", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_cadastro_produto", "Nome:", 0, QApplication::UnicodeUTF8));
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        le_fabricante->setInputMask(QString());
        le_fabricante->setText(QString());
        lb_fabricante->setText(QApplication::translate("tela_cadastro_produto", "Fabricante:", 0, QApplication::UnicodeUTF8));
        lb_codigo_barras->setText(QApplication::translate("tela_cadastro_produto", "C\303\263digo de Barras:", 0, QApplication::UnicodeUTF8));
        le_codigo_barras->setInputMask(QApplication::translate("tela_cadastro_produto", "0 000000 000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo_barras->setText(QString());
        le_quantidade->setInputMask(QApplication::translate("tela_cadastro_produto", "0000000000; ", 0, QApplication::UnicodeUTF8));
        le_quantidade->setText(QString());
        lb_quantidade->setText(QApplication::translate("tela_cadastro_produto", "Quantidade:", 0, QApplication::UnicodeUTF8));
        te_comentario->setHtml(QApplication::translate("tela_cadastro_produto", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Calibri'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_comentario->setText(QApplication::translate("tela_cadastro_produto", "Descri\303\247\303\243o da utiliza\303\247\303\243o:", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("tela_cadastro_produto", "Cancelar", 0, QApplication::UnicodeUTF8));
        btn_confirmar->setText(QApplication::translate("tela_cadastro_produto", "Confirmar", 0, QApplication::UnicodeUTF8));
        lb_tipo->setText(QApplication::translate("tela_cadastro_produto", "Tipo:", 0, QApplication::UnicodeUTF8));
        cb_tipo->clear();
        cb_tipo->insertItems(0, QStringList()
         << QApplication::translate("tela_cadastro_produto", "Acess\303\263rio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Cosm\303\251tico", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Decora\303\247\303\243o", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Estimulante", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Fetish", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Gel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Higiene", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Jogo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Kit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Lubrificante", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Perfumaria", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Preservativo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Pr\303\263tese", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Vestu\303\241rio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("tela_cadastro_produto", "Vibrador", 0, QApplication::UnicodeUTF8)
        );
        btn_adicionar_imagem->setText(QApplication::translate("tela_cadastro_produto", "Adicionar imagem", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_cadastro_produto: public Ui_tela_cadastro_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CADASTRO_PRODUTO_H
