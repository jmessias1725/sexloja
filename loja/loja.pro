#-------------------------------------------------
#
# Project created by QtCreator 2012-08-21T16:03:47
#
#-------------------------------------------------

QT       += core gui
QT       += sql

TARGET = loja
TEMPLATE = app


SOURCES += main.cpp\
    conexao_bd.cpp \
    usuario.cpp \
    tela_login.cpp \
    tela_principal.cpp \
    tela_cadastro_cliente.cpp \
    cliente.cpp \
    cep.cpp \
    endereco.cpp \
    funcoes_extras.cpp \
    tela_listar_clientes.cpp \
    tela_editar_cliente.cpp \
    tela_clientes.cpp \
    tela_cadastro_fornecedor.cpp \
    fornecedor.cpp \
    tela_listar_fornecedores.cpp \
    tela_fornecedor.cpp \
    tela_editar_fornecedor.cpp \
    tela_cadastro_loja.cpp \
    imagem.cpp \
    loja.cpp \
    tela_editar_loja.cpp \
    tela_loja.cpp \
    tela_cadastro_produto.cpp \
    produto.cpp \
    valor_produto.cpp \
    tela_estoque.cpp \
    tela_configurar_legenda_estoque.cpp \
    legenda_estoque.cpp \
    tela_produto.cpp \
    tela_editar_produto.cpp \
    tela_restaurar_produto.cpp \
    his_balanco_estoque.cpp \
    his_entradas.cpp \
    his_saidas.cpp \
    tela_reajustar_estoque.cpp \
    tela_comprar.cpp \
    tela_listar_produtos.cpp \
    tela_definir_valor.cpp \
    tela_pagamento.cpp \
    tela_pagamento_dinheiro.cpp \
    tela_pagamento_cartao.cpp \
    tela_pagamento_cheque.cpp \
    lista_compra.cpp \
    cartao.cpp \
    cheque.cpp \
    dinheiro.cpp \
    compra.cpp \
    tela_listar_despesas.cpp \
    despesa.cpp \
    tela_vender.cpp \
    venda.cpp \
    lista_venda.cpp \
    tela_definir_valor_venda.cpp \
    tela_pagamento_cartao_venda.cpp \
    tela_contas.cpp \
    ganho.cpp \
    tela_nota_venda.cpp \
    parcela.cpp \
    tela_ajustar_data_valor.cpp \
    tela_editar_parcela.cpp \
    tela_justificativa_cancelamento.cpp

HEADERS  += \
    conexao_bd.h \
    usuario.h \
    tela_login.h \
    tela_principal.h \
    tela_cadastro_cliente.h \
    cliente.h \
    cep.h \
    endereco.h \
    funcoes_extras.h \
    tela_listar_clientes.h \
    tela_editar_cliente.h \
    tela_clientes.h \
    tela_cadastro_fornecedor.h \
    fornecedor.h \
    tela_listar_fornecedores.h \
    tela_fornecedor.h \
    tela_editar_fornecedor.h \
    tela_cadastro_loja.h \
    imagem.h \
    loja.h \
    tela_editar_loja.h \
    tela_loja.h \
    tela_cadastro_produto.h \
    produto.h \
    valor_produto.h \
    tela_estoque.h \
    tela_configurar_legenda_estoque.h \
    legenda_estoque.h \
    tela_produto.h \
    tela_editar_produto.h \
    tela_restaurar_produto.h \
    his_balanco_estoque.h \
    his_entradas.h \
    his_saidas.h \
    tela_reajustar_estoque.h \
    tela_comprar.h \
    tela_listar_produtos.h \
    tela_definir_valor.h \
    tela_pagamento.h \
    tela_pagamento_dinheiro.h \
    tela_pagamento_cartao.h \
    tela_pagamento_cheque.h \
    lista_compra.h \
    cartao.h \
    cheque.h \
    dinheiro.h \
    compra.h \
    tela_listar_despesas.h \
    despesa.h \
    tela_vender.h \
    venda.h \
    lista_venda.h \
    tela_definir_valor_venda.h \
    tela_pagamento_cartao_venda.h \
    tela_contas.h \
    ganho.h \
    tela_nota_venda.h \
    parcela.h \
    tela_ajustar_data_valor.h \
    tela_editar_parcela.h \
    tela_justificativa_cancelamento.h

FORMS    += \
    tela_login.ui \
    tela_principal.ui \
    tela_cadastro_cliente.ui \
    tela_cadastro_telefone.ui \
    tela_listar_clientes.ui \
    tela_editar_cliente.ui \
    tela_clientes.ui \
    tela_cadastro_fornecedor.ui \
    tela_listar_fornecedores.ui \
    tela_fornecedor.ui \
    tela_editar_fornecedor.ui \
    tela_cadastro_loja.ui \
    tela_editar_loja.ui \
    tela_loja.ui \
    tela_cadastro_produto.ui \
    tela_estoque.ui \
    tela_configurar_legenda_estoque.ui \
    tela_produto.ui \
    tela_editar_produto.ui \
    tela_restaurar_produto.ui \
    tela_reajustar_estoque.ui \
    tela_comprar.ui \
    tela_listar_produtos.ui \
    tela_definir_valor.ui \
    tela_pagamento.ui \
    tela_pagamento_dinheiro.ui \
    tela_pagamento_cartao.ui \
    tela_pagamento_cheque.ui \
    tela_listar_despesas.ui \
    tela_vender.ui \
    tela_definir_valor_venda.ui \
    tela_pagamento_cartao_venda.ui \
    tela_contas.ui \
    tela_nota_venda.ui \
    tela_ajustar_data_valor.ui \
    tela_editar_parcela.ui \
    tela_justificativa_cancelamento.ui

RESOURCES += \
    imagens.qrc
