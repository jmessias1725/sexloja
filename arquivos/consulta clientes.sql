SELECT DISTINCT cliente.id_cliente, cliente.nome, cliente.rg, cliente.cpf, cliente.comentario,cliente.cep, cliente.rua, cliente.bairro, cliente.ponto_referencia, cliente.cidade, cliente.uf, cliente.numero, cliente.estado
FROM cliente,tel_cliente WHERE cliente.id_cliente LIKE '%%' AND cliente.nome LIKE '%m%' AND tel_cliente.telefone LIKE '%%' AND tel_cliente.id_cliente = cliente.id_cliente;