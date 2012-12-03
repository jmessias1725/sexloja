SELECT DISTINCT c.id_cliente, c.nome, c.rg, c.cpf, c.comentario,c.cep, c.rua, c.bairro, c.ponto_referencia, c.cidade, c.uf, c.numero, c.estado
FROM cliente c, tel_cliente tc WHERE c.id_cliente LIKE '%%' AND c.nome LIKE '%m%' AND tc.telefone LIKE '%%' AND tc.id_cliente = c.id_cliente;

SELECT DISTINCT fornecedor.id_fornecedor, 
				fornecedor.cnpj, 
				fornecedor.razao_social, 
				fornecedor.nome, 
				fornecedor.comentario,
				fornecedor.cep, 
				fornecedor.rua, 
				fornecedor.bairro, 
				fornecedor.ponto_referencia, 
				fornecedor.cidade, 
				fornecedor.uf, 
				fornecedor.numero, 
				fornecedor.estado
FROM fornecedor,tel_fornecedor 
WHERE fornecedor.id_fornecedor LIKE '%%' 
AND fornecedor.cnpj LIKE '%%' 
AND fornecedor.razao_social LIKE '%%' 
AND fornecedor.nome LIKE '%%' 
AND tel_fornecedor.telefone LIKE '%%' 
AND tel_fornecedor.id_fornecedor = fornecedor.id_fornecedor;

SELECT DISTINCT 
f.id_fornecedor, f.cnpj, f.razao_social, f.nome, f.comentario, f.cep, f.rua, f.bairro,f.ponto_referencia, f.cidade, f.uf, f.numero, f.estado
FROM fornecedor f, tel_fornecedor tf
WHERE f.id_fornecedor LIKE '%%' 
AND f.cnpj LIKE '%%' 
AND f.razao_social LIKE '%%' 
AND f.nome LIKE '%%' 
AND tf.telefone LIKE '%%' 
AND tf.id_fornecedor = f.id_fornecedor ORDER BY f.nome ASC;


UPDATE tel_cliente SET telefone='(11)11111-1112' WHERE id_cliente = 18 AND telefone = '(11)11111-1111'

UPDATE cliente SET 	nome = :nome, rg = :rg, cpf = :cpf, comentario = :comentario, cep = :numero_cep, rua = :nome_rua, bairro = :nome_bairro, ponto_referencia = :ponto_referencia, cidade = :nome_cidade, uf = :sigla_estado, numero = :numero_residencia, estado = :nome_estado WHERE id_cliente = '26';
DELETE FROM tel_cliente WHERE id_cliente = :id_cliente AND telefone = :telefone;
DELETE FROM email_cliente WHERE id_cliente = :id_cliente AND email = email;

DELETE FROM tel_cliente(id_cliente,telefone,Operadora) VALUES(:id_cliente, :telefone, :Operadora)

DELETE FROM cliente WHERE id_cliente = :id_cliente

SELECT 
cnpj,razao_social,nome,cep,rua,numero,bairro,cidade,uf,estado,logomarca,extensao FROM loja;


cnpj=:cnpj, 
razao_social=:razao_social, 
nome=:nome, 
cep=:numero_cep, 
rua=:nome_rua, 
bairro = :nome_bairro, 
ponto_referencia = :ponto_referencia, 
cidade = :nome_cidade, 
uf = :sigla_estado, 
numero = :numero_residencia, 
estado = :nome_estado , 
logomarca = :logomarca , 
extensao = :formato_logo

SELECT * FROM produto WHERE id_produto LIKE '%%' AND nome LIKE '%%' AND fabricante LIKE '%%' AND cod_barras  LIKE '%%' AND tipo LIKE '%%' GROUP BY nome;

SELECT SUM(total_disponivel) FROM his_balanco_estoque WHERE id_produto = 2

SELECT * FROM despesas WHERE STR_TO_DATE(data, '%d/%m/%Y') BETWEEN '2012-11-26' AND '2013-4-26'
