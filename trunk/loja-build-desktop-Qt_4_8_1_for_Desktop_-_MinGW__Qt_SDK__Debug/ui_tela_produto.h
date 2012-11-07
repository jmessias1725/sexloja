/********************************************************************************
** Form generated from reading UI file 'tela_produto.ui'
**
** Created: Wed 7. Nov 08:02:24 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PRODUTO_H
#define UI_TELA_PRODUTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_produto
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
    QTextEdit *te_des_utilizacao;
    QLabel *lb_comentario;
    QGraphicsView *gv_imagem_produto;
    QLabel *lb_tipo;
    QLabel *lb_valorvenda;
    QLabel *lb_valor_compra;
    QLineEdit *le_valor_venda;
    QLineEdit *le_custo_medio;
    QLineEdit *le_tipo;
    QLineEdit *le_codigo;
    QLabel *lb_codigo;
    QFrame *frame;
    QToolButton *btn_editar_produto;
    QToolButton *btn_adicionar_produto;
    QToolButton *btn_remover_produto;
    QGroupBox *gb_balanco_pro_estoque;
    QTableWidget *tw_historico_estoque;
    QTabWidget *tabw_historico_ent_sai;
    QWidget *entradas;
    QTableWidget *tw_historico_entradas;
    QWidget *saidas;
    QTableWidget *tw_historico_saidas;

    void setupUi(QDialog *tela_produto)
    {
        if (tela_produto->objectName().isEmpty())
            tela_produto->setObjectName(QString::fromUtf8("tela_produto"));
        tela_produto->setWindowModality(Qt::ApplicationModal);
        tela_produto->resize(846, 466);
        tela_produto->setMinimumSize(QSize(846, 466));
        tela_produto->setMaximumSize(QSize(846, 466));
        tela_produto->setModal(true);
        gb_dados_produto = new QGroupBox(tela_produto);
        gb_dados_produto->setObjectName(QString::fromUtf8("gb_dados_produto"));
        gb_dados_produto->setGeometry(QRect(5, 55, 836, 206));
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
        lb_nome->setGeometry(QRect(258, 20, 35, 20));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lb_nome->setFont(font1);
        le_nome = new QLineEdit(gb_dados_produto);
        le_nome->setObjectName(QString::fromUtf8("le_nome"));
        le_nome->setGeometry(QRect(293, 20, 538, 20));
        le_nome->setFont(font1);
        le_nome->setInputMethodHints(Qt::ImhNone);
        le_nome->setMaxLength(60);
        le_nome->setReadOnly(true);
        le_fabricante = new QLineEdit(gb_dados_produto);
        le_fabricante->setObjectName(QString::fromUtf8("le_fabricante"));
        le_fabricante->setGeometry(QRect(68, 50, 347, 20));
        le_fabricante->setFont(font1);
        le_fabricante->setInputMethodHints(Qt::ImhNone);
        le_fabricante->setMaxLength(60);
        le_fabricante->setReadOnly(true);
        lb_fabricante = new QLabel(gb_dados_produto);
        lb_fabricante->setObjectName(QString::fromUtf8("lb_fabricante"));
        lb_fabricante->setGeometry(QRect(5, 50, 63, 20));
        lb_fabricante->setFont(font1);
        lb_codigo_barras = new QLabel(gb_dados_produto);
        lb_codigo_barras->setObjectName(QString::fromUtf8("lb_codigo_barras"));
        lb_codigo_barras->setGeometry(QRect(422, 50, 99, 20));
        lb_codigo_barras->setFont(font1);
        le_codigo_barras = new QLineEdit(gb_dados_produto);
        le_codigo_barras->setObjectName(QString::fromUtf8("le_codigo_barras"));
        le_codigo_barras->setGeometry(QRect(521, 50, 105, 20));
        le_codigo_barras->setFont(font1);
        le_codigo_barras->setMaxLength(15);
        le_codigo_barras->setReadOnly(true);
        le_quantidade = new QLineEdit(gb_dados_produto);
        le_quantidade->setObjectName(QString::fromUtf8("le_quantidade"));
        le_quantidade->setGeometry(QRect(72, 80, 80, 20));
        le_quantidade->setFont(font1);
        le_quantidade->setMaxLength(10);
        le_quantidade->setReadOnly(true);
        lb_quantidade = new QLabel(gb_dados_produto);
        lb_quantidade->setObjectName(QString::fromUtf8("lb_quantidade"));
        lb_quantidade->setGeometry(QRect(5, 80, 67, 20));
        lb_quantidade->setFont(font1);
        te_des_utilizacao = new QTextEdit(gb_dados_produto);
        te_des_utilizacao->setObjectName(QString::fromUtf8("te_des_utilizacao"));
        te_des_utilizacao->setGeometry(QRect(5, 128, 621, 72));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        te_des_utilizacao->setFont(font2);
        te_des_utilizacao->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        te_des_utilizacao->setReadOnly(true);
        lb_comentario = new QLabel(gb_dados_produto);
        lb_comentario->setObjectName(QString::fromUtf8("lb_comentario"));
        lb_comentario->setGeometry(QRect(5, 108, 133, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(false);
        lb_comentario->setFont(font3);
        gv_imagem_produto = new QGraphicsView(gb_dados_produto);
        gv_imagem_produto->setObjectName(QString::fromUtf8("gv_imagem_produto"));
        gv_imagem_produto->setGeometry(QRect(631, 50, 200, 150));
        gv_imagem_produto->setMinimumSize(QSize(150, 150));
        gv_imagem_produto->setMaximumSize(QSize(200, 200));
        lb_tipo = new QLabel(gb_dados_produto);
        lb_tipo->setObjectName(QString::fromUtf8("lb_tipo"));
        lb_tipo->setGeometry(QRect(124, 20, 28, 20));
        lb_tipo->setFont(font1);
        lb_valorvenda = new QLabel(gb_dados_produto);
        lb_valorvenda->setObjectName(QString::fromUtf8("lb_valorvenda"));
        lb_valorvenda->setGeometry(QRect(337, 80, 86, 20));
        lb_valorvenda->setFont(font1);
        lb_valor_compra = new QLabel(gb_dados_produto);
        lb_valor_compra->setObjectName(QString::fromUtf8("lb_valor_compra"));
        lb_valor_compra->setGeometry(QRect(164, 80, 72, 20));
        lb_valor_compra->setFont(font1);
        le_valor_venda = new QLineEdit(gb_dados_produto);
        le_valor_venda->setObjectName(QString::fromUtf8("le_valor_venda"));
        le_valor_venda->setGeometry(QRect(424, 80, 85, 20));
        le_valor_venda->setFont(font1);
        le_valor_venda->setInputMethodHints(Qt::ImhNone);
        le_valor_venda->setMaxLength(12);
        le_valor_venda->setReadOnly(true);
        le_custo_medio = new QLineEdit(gb_dados_produto);
        le_custo_medio->setObjectName(QString::fromUtf8("le_custo_medio"));
        le_custo_medio->setGeometry(QRect(237, 80, 85, 20));
        le_custo_medio->setFont(font1);
        le_custo_medio->setInputMethodHints(Qt::ImhNone);
        le_custo_medio->setMaxLength(12);
        le_custo_medio->setReadOnly(true);
        le_tipo = new QLineEdit(gb_dados_produto);
        le_tipo->setObjectName(QString::fromUtf8("le_tipo"));
        le_tipo->setGeometry(QRect(151, 20, 100, 20));
        le_tipo->setFont(font1);
        le_tipo->setReadOnly(true);
        le_codigo = new QLineEdit(gb_dados_produto);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setGeometry(QRect(47, 20, 70, 20));
        le_codigo->setFont(font2);
        le_codigo->setStyleSheet(QString::fromUtf8(""));
        le_codigo->setCursorPosition(9);
        le_codigo->setReadOnly(true);
        lb_codigo = new QLabel(gb_dados_produto);
        lb_codigo->setObjectName(QString::fromUtf8("lb_codigo"));
        lb_codigo->setGeometry(QRect(5, 20, 42, 20));
        lb_codigo->setFont(font2);
        frame = new QFrame(tela_produto);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 846, 50));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: qlineargradient(x1:0, y1:1, x0:1, y0:0,\n"
"                                       stop:0.1 #777777, stop:0.9 #525252);\n"
"	border: none;\n"
"}\n"
"\n"
"QToolButton{\n"
"	color:#FFFFFF\n"
"}"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        btn_editar_produto = new QToolButton(frame);
        btn_editar_produto->setObjectName(QString::fromUtf8("btn_editar_produto"));
        btn_editar_produto->setGeometry(QRect(10, 2, 45, 45));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/produto_editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_editar_produto->setIcon(icon);
        btn_editar_produto->setIconSize(QSize(40, 40));
        btn_editar_produto->setAutoRaise(true);
        btn_adicionar_produto = new QToolButton(frame);
        btn_adicionar_produto->setObjectName(QString::fromUtf8("btn_adicionar_produto"));
        btn_adicionar_produto->setGeometry(QRect(60, 2, 45, 45));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/produto_cadastrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_adicionar_produto->setIcon(icon1);
        btn_adicionar_produto->setIconSize(QSize(40, 40));
        btn_adicionar_produto->setAutoRaise(true);
        btn_remover_produto = new QToolButton(frame);
        btn_remover_produto->setObjectName(QString::fromUtf8("btn_remover_produto"));
        btn_remover_produto->setGeometry(QRect(110, 2, 45, 45));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/produto_remover.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_remover_produto->setIcon(icon2);
        btn_remover_produto->setIconSize(QSize(40, 40));
        btn_remover_produto->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_remover_produto->setAutoRaise(true);
        gb_balanco_pro_estoque = new QGroupBox(tela_produto);
        gb_balanco_pro_estoque->setObjectName(QString::fromUtf8("gb_balanco_pro_estoque"));
        gb_balanco_pro_estoque->setGeometry(QRect(515, 260, 326, 202));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setKerning(false);
        gb_balanco_pro_estoque->setFont(font4);
        tw_historico_estoque = new QTableWidget(gb_balanco_pro_estoque);
        tw_historico_estoque->setObjectName(QString::fromUtf8("tw_historico_estoque"));
        tw_historico_estoque->setGeometry(QRect(5, 17, 316, 180));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setKerning(false);
        tw_historico_estoque->setFont(font5);
        tw_historico_estoque->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tw_historico_estoque->horizontalHeader()->setDefaultSectionSize(100);
        tw_historico_estoque->horizontalHeader()->setMinimumSectionSize(20);
        tw_historico_estoque->horizontalHeader()->setStretchLastSection(true);
        tw_historico_estoque->verticalHeader()->setVisible(false);
        tw_historico_estoque->verticalHeader()->setDefaultSectionSize(20);
        tabw_historico_ent_sai = new QTabWidget(tela_produto);
        tabw_historico_ent_sai->setObjectName(QString::fromUtf8("tabw_historico_ent_sai"));
        tabw_historico_ent_sai->setGeometry(QRect(5, 265, 508, 197));
        tabw_historico_ent_sai->setFont(font);
        tabw_historico_ent_sai->setTabPosition(QTabWidget::North);
        tabw_historico_ent_sai->setTabShape(QTabWidget::Triangular);
        tabw_historico_ent_sai->setElideMode(Qt::ElideNone);
        entradas = new QWidget();
        entradas->setObjectName(QString::fromUtf8("entradas"));
        tw_historico_entradas = new QTableWidget(entradas);
        tw_historico_entradas->setObjectName(QString::fromUtf8("tw_historico_entradas"));
        tw_historico_entradas->setGeometry(QRect(-1, -1, 504, 177));
        tw_historico_entradas->setFont(font5);
        tw_historico_entradas->horizontalHeader()->setDefaultSectionSize(98);
        tw_historico_entradas->horizontalHeader()->setMinimumSectionSize(20);
        tw_historico_entradas->horizontalHeader()->setStretchLastSection(false);
        tw_historico_entradas->verticalHeader()->setVisible(false);
        tw_historico_entradas->verticalHeader()->setDefaultSectionSize(20);
        tabw_historico_ent_sai->addTab(entradas, QString());
        saidas = new QWidget();
        saidas->setObjectName(QString::fromUtf8("saidas"));
        tw_historico_saidas = new QTableWidget(saidas);
        tw_historico_saidas->setObjectName(QString::fromUtf8("tw_historico_saidas"));
        tw_historico_saidas->setGeometry(QRect(-1, -1, 504, 177));
        tabw_historico_ent_sai->addTab(saidas, QString());

        retranslateUi(tela_produto);

        tabw_historico_ent_sai->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tela_produto);
    } // setupUi

    void retranslateUi(QDialog *tela_produto)
    {
        tela_produto->setWindowTitle(QApplication::translate("tela_produto", "Produto", 0, QApplication::UnicodeUTF8));
        gb_dados_produto->setTitle(QApplication::translate("tela_produto", "Dados do produto", 0, QApplication::UnicodeUTF8));
        lb_nome->setText(QApplication::translate("tela_produto", "Nome:", 0, QApplication::UnicodeUTF8));
        le_nome->setInputMask(QString());
        le_nome->setText(QString());
        le_fabricante->setInputMask(QString());
        le_fabricante->setText(QString());
        lb_fabricante->setText(QApplication::translate("tela_produto", "Fabricante:", 0, QApplication::UnicodeUTF8));
        lb_codigo_barras->setText(QApplication::translate("tela_produto", "C\303\263digo de Barras:", 0, QApplication::UnicodeUTF8));
        le_codigo_barras->setInputMask(QApplication::translate("tela_produto", "0 000000 000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo_barras->setText(QString());
        le_quantidade->setInputMask(QApplication::translate("tela_produto", "0000000000; ", 0, QApplication::UnicodeUTF8));
        le_quantidade->setText(QString());
        lb_quantidade->setText(QApplication::translate("tela_produto", "Quantidade:", 0, QApplication::UnicodeUTF8));
        te_des_utilizacao->setHtml(QApplication::translate("tela_produto", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Calibri'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_comentario->setText(QApplication::translate("tela_produto", "Descri\303\247\303\243o da utiliza\303\247\303\243o:", 0, QApplication::UnicodeUTF8));
        lb_tipo->setText(QApplication::translate("tela_produto", "Tipo:", 0, QApplication::UnicodeUTF8));
        lb_valorvenda->setText(QApplication::translate("tela_produto", "Valor de venda:", 0, QApplication::UnicodeUTF8));
        lb_valor_compra->setText(QApplication::translate("tela_produto", "Custo m\303\251dio:", 0, QApplication::UnicodeUTF8));
        le_valor_venda->setInputMask(QApplication::translate("tela_produto", "R$ xxxxxxxxx; ", 0, QApplication::UnicodeUTF8));
        le_valor_venda->setText(QApplication::translate("tela_produto", "R$ ", 0, QApplication::UnicodeUTF8));
        le_custo_medio->setInputMask(QApplication::translate("tela_produto", "R$ xxxxxxxxx; ", 0, QApplication::UnicodeUTF8));
        le_custo_medio->setText(QApplication::translate("tela_produto", "R$ ", 0, QApplication::UnicodeUTF8));
        le_tipo->setText(QString());
        le_codigo->setInputMask(QApplication::translate("tela_produto", "000000000; ", 0, QApplication::UnicodeUTF8));
        le_codigo->setText(QString());
        lb_codigo->setText(QApplication::translate("tela_produto", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        btn_editar_produto->setText(QApplication::translate("tela_produto", "Editar Produto", 0, QApplication::UnicodeUTF8));
        btn_adicionar_produto->setText(QApplication::translate("tela_produto", "Adiconar Produto", 0, QApplication::UnicodeUTF8));
        btn_remover_produto->setText(QApplication::translate("tela_produto", "Remover Produto", 0, QApplication::UnicodeUTF8));
        gb_balanco_pro_estoque->setTitle(QApplication::translate("tela_produto", "Balan\303\247o do produto no estoque.", 0, QApplication::UnicodeUTF8));
        tabw_historico_ent_sai->setTabText(tabw_historico_ent_sai->indexOf(entradas), QApplication::translate("tela_produto", "Hist\303\263rico de entradas", 0, QApplication::UnicodeUTF8));
        tabw_historico_ent_sai->setTabText(tabw_historico_ent_sai->indexOf(saidas), QApplication::translate("tela_produto", "Hist\303\263rico de sa\303\255das", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tela_produto: public Ui_tela_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PRODUTO_H
