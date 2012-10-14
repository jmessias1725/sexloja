#include "tela_principal.h"
#include "ui_tela_principal.h"

tela_principal::tela_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tela_principal)
{
    ui->setupUi(this);
}

tela_principal::~tela_principal()
{
    delete ui;
}

void tela_principal::on_consultar_clientes_triggered()
{
    tl_listar_clientes.definir_icone_janela(logomarca);
    tl_listar_clientes.show();
}

void tela_principal::on_buscar_clientes_triggered()
{
    tl_listar_clientes.definir_icone_janela(logomarca);
    tl_listar_clientes.show();
}

void tela_principal::on_botao_sair_triggered()
{
    this->close();
}

void tela_principal::on_Cadastrar_cliente_triggered()
{
    tl_cadastro_clientes.definir_icone_janela(logomarca);
    tl_cadastro_clientes.show();
}

void tela_principal::on_cadastrar_forncecedor_triggered()
{
    tl_cadastro_fornecedor.definir_icone_janela(logomarca);
    tl_cadastro_fornecedor.show();
}

void tela_principal::on_buscar_fornecedores_triggered()
{
    tl_listar_fornecedores.definir_icone_janela(logomarca);
    tl_listar_fornecedores.show();
}

void tela_principal::on_consultar_fornecedores_triggered()
{
    tl_listar_fornecedores.definir_icone_janela(logomarca);
    tl_listar_fornecedores.show();
}

void tela_principal::on_Cadastro_da_Loja_triggered()
{
    tl_loja.definir_icone_janela(logomarca);
    tl_loja.definir_dados_loja(informacao_loja);
    if(!tl_loja.exec()){
        informacao_loja = tl_loja.retorna_novo_cadastro();
        tela_principal::dados_loja(informacao_loja);
    }
}

void  tela_principal::dados_loja(loja * info_loja){
    informacao_loja = info_loja;
    logomarca = informacao_loja->retorna_QPixmap_imagem();
    this->setWindowIcon(logomarca);
}

void tela_principal::on_cadastrar_produto_triggered()
{
    tl_cadastro_produto.definir_icone_janela(logomarca);
    tl_cadastro_produto.show();
}

void tela_principal::on_Estoque_triggered()
{
    tl_estoque.show();
}
