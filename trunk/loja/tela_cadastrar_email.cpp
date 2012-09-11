#include "tl_cadastrar_email.h"
#include "ui_tl_cadastrar_email.h"

tl_cadastrar_email::tl_cadastrar_email(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tl_cadastrar_email)
{
    ui->setupUi(this);
}

tl_cadastrar_email::~tl_cadastrar_email()
{
    delete ui;
}
