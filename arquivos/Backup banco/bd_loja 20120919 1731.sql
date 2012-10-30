-- MySQL Administrator dump 1.4
--
-- ------------------------------------------------------
-- Server version	5.5.27


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


--
-- Create schema bd_loja
--

CREATE DATABASE IF NOT EXISTS bd_loja;
USE bd_loja;

--
-- Definition of table `cliente`
--

DROP TABLE IF EXISTS `cliente`;
CREATE TABLE `cliente` (
  `id_cliente` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `nome` varchar(100) NOT NULL,
  `rg` varchar(20) DEFAULT NULL,
  `cpf` varchar(15) DEFAULT NULL,
  `comentario` varchar(200) DEFAULT NULL,
  `cep` varchar(9) DEFAULT NULL,
  `rua` varchar(100) DEFAULT NULL,
  `bairro` varchar(90) DEFAULT NULL,
  `ponto_referencia` varchar(150) DEFAULT NULL,
  `cidade` varchar(80) DEFAULT NULL,
  `uf` varchar(2) DEFAULT NULL,
  `numero` int(10) unsigned DEFAULT NULL,
  `estado` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`id_cliente`)
) ENGINE=InnoDB AUTO_INCREMENT=29 DEFAULT CHARSET=latin1 ROW_FORMAT=DYNAMIC;

--
-- Dumping data for table `cliente`
--

/*!40000 ALTER TABLE `cliente` DISABLE KEYS */;
INSERT INTO `cliente` (`id_cliente`,`nome`,`rg`,`cpf`,`comentario`,`cep`,`rua`,`bairro`,`ponto_referencia`,`cidade`,`uf`,`numero`,`estado`) VALUES 
 (18,'aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa','11111111111111111111','111.111.111-11','aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa','57057-000','Avenida Fernandes Lima - de 3135 ao fim - lado ímpar','Gruta de Lourdes','aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa','Maceió','AL',1024,'Alagoas'),
 (19,'bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb','22222222222222222222','222.222.222-22','bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb','57057-000','Avenida Fernandes Lima - de 3135 ao fim - lado ímpar','Gruta de Lourdes','bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb','Maceió','AL',222222222,'Alagoas'),
 (20,'cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc','33333333333333333333','333.333.333-33','cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc','57040-005','1ª Travessa Coronel Paranhos','Jacintinho','cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc','Maceió','AL',333333333,'Alagoas'),
 (21,'dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd','44444444444444444444','444.444.444-44','dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd','57057-560','Rua Pedro Oliveira Rocha','Pinheiro','dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd','Maceió','AL',555555555,'Alagoas'),
 (22,'eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee','55555555555555555555','555.555.555-55','eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee','57057-700','Conjunto Fernandes Lima','Pinheiro','eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee','Maceió','AL',555555555,'Alagoas'),
 (23,'gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg','66666666666666666666','666.666.666-66','','-','','','','','--',0,'-------------------'),
 (24,'hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh','','..-','','-','','','','','--',0,'-------------------'),
 (25,'iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii','','..-','','-','','','','','--',0,'-------------------'),
 (26,'José Messias da Silva Sampaio','2002001316367','075.734.894-71','Marido da Mirabel Paula Souza Vieira.	','57040-005','1ª Travessa Coronel Paranhos','Jacintinho','Próximo a 96 FM.','Maceió','AL',555,'Alagoas'),
 (27,'Mirabel Paula Souza Vieira','123456789','555.555.555-55','Mulher do Messias.','57040-005','1ª Travessa Coronel Paranhos','Jacintinho','Próximo a 96FM.','Maceió','AL',555,'Alagoas'),
 (28,'ksdjaksdjadjkajdskadjakdjkajdksajdkajdkadjkadjakdjaskjdaksjd','','..-','','-','','','','','--',0,'-------------------');
/*!40000 ALTER TABLE `cliente` ENABLE KEYS */;


--
-- Definition of table `comprar`
--

DROP TABLE IF EXISTS `comprar`;
CREATE TABLE `comprar` (
  `id_compra` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `data_compra` date NOT NULL,
  `id_fornecedor` int(10) unsigned NOT NULL,
  `id_lista_compra` int(10) unsigned NOT NULL,
  `forma_pagamento` varchar(45) NOT NULL,
  `status` int(1) unsigned NOT NULL,
  PRIMARY KEY (`id_compra`),
  KEY `FK_comprar_lista_compra` (`id_lista_compra`),
  KEY `FK_comprar_fornecedor` (`id_fornecedor`),
  CONSTRAINT `FK_comprar_fornecedor` FOREIGN KEY (`id_fornecedor`) REFERENCES `fornecedor` (`id_fornecedor`) ON DELETE CASCADE,
  CONSTRAINT `FK_comprar_lista_compra` FOREIGN KEY (`id_lista_compra`) REFERENCES `lista_compra` (`id_lista_compra`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `comprar`
--

/*!40000 ALTER TABLE `comprar` DISABLE KEYS */;
/*!40000 ALTER TABLE `comprar` ENABLE KEYS */;


--
-- Definition of table `despesas`
--

DROP TABLE IF EXISTS `despesas`;
CREATE TABLE `despesas` (
  `id_despesas` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `data` date NOT NULL,
  `descricao` varchar(300) NOT NULL,
  `valor` double NOT NULL,
  PRIMARY KEY (`id_despesas`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `despesas`
--

/*!40000 ALTER TABLE `despesas` DISABLE KEYS */;
/*!40000 ALTER TABLE `despesas` ENABLE KEYS */;


--
-- Definition of table `email_cliente`
--

DROP TABLE IF EXISTS `email_cliente`;
CREATE TABLE `email_cliente` (
  `id_cliente` int(10) unsigned NOT NULL,
  `e_mail` varchar(45) NOT NULL DEFAULT '',
  PRIMARY KEY (`id_cliente`,`e_mail`),
  CONSTRAINT `FK_email_cliente` FOREIGN KEY (`id_cliente`) REFERENCES `cliente` (`id_cliente`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `email_cliente`
--

/*!40000 ALTER TABLE `email_cliente` DISABLE KEYS */;
INSERT INTO `email_cliente` (`id_cliente`,`e_mail`) VALUES 
 (18,'a@a.com'),
 (18,'a@a.com.br'),
 (19,'b@b.com'),
 (19,'b@b.com.br'),
 (20,'c@c.com'),
 (20,'c@c.com.br'),
 (21,'d@.com.br'),
 (21,'d@d.com'),
 (22,'e@e.com'),
 (22,'e@e.com.br'),
 (26,'jmessias1725@gmail.com'),
 (26,'jmessias1725@hotmail.com'),
 (27,'mirabelpaula@gmail.com'),
 (27,'mirabelpaula@hotmail.com');
/*!40000 ALTER TABLE `email_cliente` ENABLE KEYS */;


--
-- Definition of table `email_fornecedor`
--

DROP TABLE IF EXISTS `email_fornecedor`;
CREATE TABLE `email_fornecedor` (
  `id_fornecedor` int(10) unsigned NOT NULL,
  `email` varchar(45) NOT NULL,
  PRIMARY KEY (`email`,`id_fornecedor`),
  KEY `FK_email_fornecedor` (`id_fornecedor`),
  CONSTRAINT `FK_email_fornecedor` FOREIGN KEY (`id_fornecedor`) REFERENCES `fornecedor` (`id_fornecedor`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `email_fornecedor`
--

/*!40000 ALTER TABLE `email_fornecedor` DISABLE KEYS */;
/*!40000 ALTER TABLE `email_fornecedor` ENABLE KEYS */;


--
-- Definition of table `fornecedor`
--

DROP TABLE IF EXISTS `fornecedor`;
CREATE TABLE `fornecedor` (
  `id_fornecedor` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `cnpj` int(14) unsigned DEFAULT NULL,
  `razao_social` varchar(50) NOT NULL,
  `nome` varchar(45) NOT NULL,
  `cep` int(8) unsigned DEFAULT NULL,
  `rua` varchar(45) DEFAULT NULL,
  `numero` int(10) unsigned DEFAULT NULL,
  `bairro` varchar(45) DEFAULT NULL,
  `cidade` varchar(45) DEFAULT NULL,
  `estado` varchar(2) DEFAULT NULL,
  `ponto_referencia` varchar(200) DEFAULT NULL,
  `comen_adicionais` varchar(300) DEFAULT NULL,
  PRIMARY KEY (`id_fornecedor`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `fornecedor`
--

/*!40000 ALTER TABLE `fornecedor` DISABLE KEYS */;
/*!40000 ALTER TABLE `fornecedor` ENABLE KEYS */;


--
-- Definition of table `lista_compra`
--

DROP TABLE IF EXISTS `lista_compra`;
CREATE TABLE `lista_compra` (
  `id_lista_compra` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `valor_total` double NOT NULL,
  PRIMARY KEY (`id_lista_compra`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `lista_compra`
--

/*!40000 ALTER TABLE `lista_compra` DISABLE KEYS */;
/*!40000 ALTER TABLE `lista_compra` ENABLE KEYS */;


--
-- Definition of table `lista_itens_comp`
--

DROP TABLE IF EXISTS `lista_itens_comp`;
CREATE TABLE `lista_itens_comp` (
  `id_lista_compra` int(10) unsigned NOT NULL,
  `id_produto` int(10) unsigned NOT NULL,
  `valor_unidade` double NOT NULL,
  `quantidade` int(10) unsigned NOT NULL,
  `valor_soma_prod` double NOT NULL,
  PRIMARY KEY (`id_lista_compra`,`id_produto`),
  KEY `FK_lista_itens_comp_produtos` (`id_produto`),
  CONSTRAINT `FK_lista_itens_comp` FOREIGN KEY (`id_lista_compra`) REFERENCES `lista_compra` (`id_lista_compra`) ON DELETE CASCADE,
  CONSTRAINT `FK_lista_itens_comp_produtos` FOREIGN KEY (`id_produto`) REFERENCES `produto` (`id_produto`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `lista_itens_comp`
--

/*!40000 ALTER TABLE `lista_itens_comp` DISABLE KEYS */;
/*!40000 ALTER TABLE `lista_itens_comp` ENABLE KEYS */;


--
-- Definition of table `lista_itens_venda`
--

DROP TABLE IF EXISTS `lista_itens_venda`;
CREATE TABLE `lista_itens_venda` (
  `id_lista_venda` int(10) unsigned NOT NULL,
  `id_produto` int(10) unsigned NOT NULL,
  `valor_unidade` double NOT NULL,
  `quantidade` int(10) unsigned NOT NULL,
  `valor_soma_produtos` double NOT NULL,
  PRIMARY KEY (`id_lista_venda`,`id_produto`),
  KEY `FK_lista_itens_venda_produtos` (`id_produto`),
  CONSTRAINT `FK_lista_itens_venda` FOREIGN KEY (`id_lista_venda`) REFERENCES `lista_venda` (`id_lista_venda`) ON DELETE CASCADE,
  CONSTRAINT `FK_lista_itens_venda_produtos` FOREIGN KEY (`id_produto`) REFERENCES `produto` (`id_produto`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `lista_itens_venda`
--

/*!40000 ALTER TABLE `lista_itens_venda` DISABLE KEYS */;
/*!40000 ALTER TABLE `lista_itens_venda` ENABLE KEYS */;


--
-- Definition of table `lista_venda`
--

DROP TABLE IF EXISTS `lista_venda`;
CREATE TABLE `lista_venda` (
  `id_lista_venda` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `valor_total` double NOT NULL,
  PRIMARY KEY (`id_lista_venda`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `lista_venda`
--

/*!40000 ALTER TABLE `lista_venda` DISABLE KEYS */;
/*!40000 ALTER TABLE `lista_venda` ENABLE KEYS */;


--
-- Definition of table `loja`
--

DROP TABLE IF EXISTS `loja`;
CREATE TABLE `loja` (
  `id_loja` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `cnpj` int(14) unsigned DEFAULT NULL,
  `razao_social` varchar(50) DEFAULT NULL,
  `nome` varchar(45) NOT NULL,
  `cep` int(8) unsigned NOT NULL,
  `rua` varchar(45) NOT NULL,
  `numero` int(10) unsigned NOT NULL,
  `bairro` varchar(45) NOT NULL,
  `cidade` varchar(45) NOT NULL,
  `estado` varchar(2) NOT NULL,
  PRIMARY KEY (`id_loja`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `loja`
--

/*!40000 ALTER TABLE `loja` DISABLE KEYS */;
INSERT INTO `loja` (`id_loja`,`cnpj`,`razao_social`,`nome`,`cep`,`rua`,`numero`,`bairro`,`cidade`,`estado`) VALUES 
 (1,100,'Messias desenvolvimento de software','MD',57040005,'travessa coronel paranhos',555,'jacintinho','maceió','AL');
/*!40000 ALTER TABLE `loja` ENABLE KEYS */;


--
-- Definition of table `movimentacao`
--

DROP TABLE IF EXISTS `movimentacao`;
CREATE TABLE `movimentacao` (
  `id_mov` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_operacao` int(10) unsigned NOT NULL,
  `flag_tipo_operacao` int(1) unsigned NOT NULL,
  PRIMARY KEY (`id_mov`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `movimentacao`
--

/*!40000 ALTER TABLE `movimentacao` DISABLE KEYS */;
/*!40000 ALTER TABLE `movimentacao` ENABLE KEYS */;


--
-- Definition of table `parcela_compra`
--

DROP TABLE IF EXISTS `parcela_compra`;
CREATE TABLE `parcela_compra` (
  `id_parcela` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_compra` int(10) unsigned NOT NULL,
  `data` date NOT NULL,
  `valor` double NOT NULL,
  `status` int(1) unsigned NOT NULL,
  PRIMARY KEY (`id_parcela`) USING BTREE,
  KEY `FK_parcela_compra` (`id_compra`),
  CONSTRAINT `FK_parcela_compra` FOREIGN KEY (`id_compra`) REFERENCES `comprar` (`id_compra`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `parcela_compra`
--

/*!40000 ALTER TABLE `parcela_compra` DISABLE KEYS */;
/*!40000 ALTER TABLE `parcela_compra` ENABLE KEYS */;


--
-- Definition of table `parcela_venda`
--

DROP TABLE IF EXISTS `parcela_venda`;
CREATE TABLE `parcela_venda` (
  `id_parcela` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_venda` int(10) unsigned NOT NULL,
  `data_venda` date NOT NULL,
  `valor` double NOT NULL,
  `status` int(1) unsigned NOT NULL,
  PRIMARY KEY (`id_parcela`),
  KEY `FK_parcela_venda` (`id_venda`),
  CONSTRAINT `FK_parcela_venda` FOREIGN KEY (`id_venda`) REFERENCES `vender` (`id_venda`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `parcela_venda`
--

/*!40000 ALTER TABLE `parcela_venda` DISABLE KEYS */;
/*!40000 ALTER TABLE `parcela_venda` ENABLE KEYS */;


--
-- Definition of table `produto`
--

DROP TABLE IF EXISTS `produto`;
CREATE TABLE `produto` (
  `id_produto` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `nome` varchar(45) NOT NULL,
  `fabricante` varchar(45) NOT NULL,
  `desc_utilizacao` varchar(300) DEFAULT NULL,
  `valor_venda` double NOT NULL,
  `quant_disponivel` int(10) unsigned NOT NULL,
  `local_foto` varchar(50) NOT NULL,
  PRIMARY KEY (`id_produto`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `produto`
--

/*!40000 ALTER TABLE `produto` DISABLE KEYS */;
/*!40000 ALTER TABLE `produto` ENABLE KEYS */;


--
-- Definition of table `saldo`
--

DROP TABLE IF EXISTS `saldo`;
CREATE TABLE `saldo` (
  `data_mes_ano` date NOT NULL,
  `valor` double NOT NULL,
  PRIMARY KEY (`data_mes_ano`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `saldo`
--

/*!40000 ALTER TABLE `saldo` DISABLE KEYS */;
/*!40000 ALTER TABLE `saldo` ENABLE KEYS */;


--
-- Definition of table `tel_cliente`
--

DROP TABLE IF EXISTS `tel_cliente`;
CREATE TABLE `tel_cliente` (
  `id_cliente` int(10) unsigned NOT NULL,
  `telefone` varchar(15) NOT NULL,
  `operadora` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`id_cliente`,`telefone`),
  CONSTRAINT `FK_tel_cliente` FOREIGN KEY (`id_cliente`) REFERENCES `cliente` (`id_cliente`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1 ROW_FORMAT=DYNAMIC;

--
-- Dumping data for table `tel_cliente`
--

/*!40000 ALTER TABLE `tel_cliente` DISABLE KEYS */;
INSERT INTO `tel_cliente` (`id_cliente`,`telefone`,`operadora`) VALUES 
 (18,'(11)11111-1111','Algar Telecom'),
 (18,'(22)22222-2222','Claro'),
 (18,'(33)33333-3333','Vivo'),
 (18,'(44)44444-4444','Oi'),
 (19,'(14)11111-1111','Outro'),
 (20,'(33)33333-3333','Sercomtel'),
 (21,'(44)44444-4444','Sercomtel'),
 (22,'(11)11111-1111','Algar Telecom'),
 (22,'(22)22222-2222','Claro'),
 (22,'(33)33333-3333','Vivo'),
 (22,'(44)44444-4444','TIM'),
 (22,'(55)55555-5555','Oi'),
 (22,'(66)66666-6666','Sercomtel'),
 (22,'(77)77777-7777','Nextel'),
 (22,'(88)88888-8888','Outro'),
 (23,'(22)22222-2222','Sercomtel'),
 (24,'(33)33333-3333','Outro'),
 (25,'(55)55555-5555','Sercomtel'),
 (26,'(82)9191-2466','Claro'),
 (26,'(82)9932-5138','TIM'),
 (27,'(82)9119-0425','Claro'),
 (28,'(55)55555-5555','Sercomtel');
/*!40000 ALTER TABLE `tel_cliente` ENABLE KEYS */;


--
-- Definition of table `tel_fornecedor`
--

DROP TABLE IF EXISTS `tel_fornecedor`;
CREATE TABLE `tel_fornecedor` (
  `id_fornecedor` int(10) unsigned NOT NULL,
  `telefone` varchar(45) NOT NULL,
  PRIMARY KEY (`id_fornecedor`,`telefone`),
  CONSTRAINT `FK_tel_fornecedor` FOREIGN KEY (`id_fornecedor`) REFERENCES `fornecedor` (`id_fornecedor`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tel_fornecedor`
--

/*!40000 ALTER TABLE `tel_fornecedor` DISABLE KEYS */;
/*!40000 ALTER TABLE `tel_fornecedor` ENABLE KEYS */;


--
-- Definition of table `tel_loja`
--

DROP TABLE IF EXISTS `tel_loja`;
CREATE TABLE `tel_loja` (
  `id_loja` int(10) unsigned NOT NULL,
  `telefone` varchar(15) NOT NULL,
  PRIMARY KEY (`id_loja`,`telefone`) USING BTREE,
  CONSTRAINT `FK_tel_loja` FOREIGN KEY (`id_loja`) REFERENCES `loja` (`id_loja`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tel_loja`
--

/*!40000 ALTER TABLE `tel_loja` DISABLE KEYS */;
/*!40000 ALTER TABLE `tel_loja` ENABLE KEYS */;


--
-- Definition of table `usuario`
--

DROP TABLE IF EXISTS `usuario`;
CREATE TABLE `usuario` (
  `id_usuario` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_loja` int(10) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `cpf` varchar(45) NOT NULL,
  `rg` varchar(45) NOT NULL,
  `login` varchar(50) NOT NULL,
  `senha` varchar(128) NOT NULL,
  PRIMARY KEY (`id_usuario`,`id_loja`),
  KEY `FK_usario_loja` (`id_loja`),
  CONSTRAINT `FK_usario_loja` FOREIGN KEY (`id_loja`) REFERENCES `loja` (`id_loja`) ON DELETE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `usuario`
--

/*!40000 ALTER TABLE `usuario` DISABLE KEYS */;
INSERT INTO `usuario` (`id_usuario`,`id_loja`,`nome`,`cpf`,`rg`,`login`,`senha`) VALUES 
 (1,1,'Messias Sampaio','07573489471','2002001316367','admin','admin');
/*!40000 ALTER TABLE `usuario` ENABLE KEYS */;


--
-- Definition of table `vender`
--

DROP TABLE IF EXISTS `vender`;
CREATE TABLE `vender` (
  `id_venda` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `data_venda` date NOT NULL,
  `id_cliente` int(10) unsigned NOT NULL,
  `id_lista_venda` int(10) unsigned NOT NULL,
  `forma_pagamento` varchar(45) NOT NULL,
  `comentario` varchar(300) DEFAULT NULL,
  `status` int(1) unsigned NOT NULL,
  PRIMARY KEY (`id_venda`),
  KEY `FK_vender_cliente` (`id_cliente`),
  KEY `FK_vender_lista_venda` (`id_lista_venda`),
  CONSTRAINT `FK_vender_cliente` FOREIGN KEY (`id_cliente`) REFERENCES `cliente` (`id_cliente`) ON DELETE CASCADE,
  CONSTRAINT `FK_vender_lista_venda` FOREIGN KEY (`id_lista_venda`) REFERENCES `lista_venda` (`id_lista_venda`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `vender`
--

/*!40000 ALTER TABLE `vender` DISABLE KEYS */;
/*!40000 ALTER TABLE `vender` ENABLE KEYS */;




/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
