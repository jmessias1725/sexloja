UPDATE tel_cliente SET telefone='(11)11111-1112' WHERE id_cliente = 18 AND telefone = '(11)11111-1111'

UPDATE cliente SET 	nome = :nome, rg = :rg, cpf = :cpf, comentario = :comentario, cep = :numero_cep, rua = :nome_rua, bairro = :nome_bairro, ponto_referencia = :ponto_referencia, cidade = :nome_cidade, uf = :sigla_estado, numero = :numero_residencia, estado = :nome_estado WHERE id_cliente = '26';
DELETE FROM tel_cliente WHERE id_cliente = :id_cliente AND telefone = :telefone;
DELETE FROM email_cliente WHERE id_cliente = :id_cliente AND email = email;

DELETE FROM tel_cliente(id_cliente,telefone,Operadora) VALUES(:id_cliente, :telefone, :Operadora)

DELETE FROM cliente WHERE id_cliente = :id_cliente
