#ifndef TELA_CADASTRO_LOJA_H
#define TELA_CADASTRO_LOJA_H

#include <QDialog>
#include <QFileDialog>
#include <QSqlTableModel>
#include <QTableView>
#include <QSqlRecord>
#include <QFileInfo>
#include <QByteArray>
#include <QBuffer>
#include <QFile>
#include <QImage>
#include <iostream>

#include "funcoes_extras.h"

namespace Ui {
class tela_cadastro_loja;
}

class tela_cadastro_loja : public QDialog
{
    Q_OBJECT
    
public:
    explicit tela_cadastro_loja(QWidget *parent = 0);
    ~tela_cadastro_loja();
    
private slots:
    void on_btn_adicionar_logo_clicked();

private:
    Ui::tela_cadastro_loja *ui;
    QImage logo_imagem;
    funcoes_extras funcao;
};

#endif // TELA_CADASTRO_LOJA_H
