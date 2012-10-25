#include "his_entradas.h"

his_entradas::his_entradas()
{

}

bool his_entradas::salvar_his_entradas(int id_pro,int quant, float val_compra, float val_venda){
    QDate aux_data = QDate::currentDate();
    QTime aux_hora = QTime::currentTime();

    id_produto = id_pro;
    quantidade = quant;
    valor_compra = val_compra;
    valor_venda = val_venda;
    data = aux_data.toString(Qt::SystemLocaleShortDate);;
    hora = aux_hora.toString();

    conexao_bd conexao;
    QSqlDatabase bd;

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807")){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery his_entradas(bd);

        //Insere os dados no cadastro de histórico de valores e quantidades do produto
        his_entradas.prepare("INSERT INTO his_entradas(id_produto,quantidade,valor_compra,valor_venda,data,hora) VALUES(:id_produto,:quantidade,:valor_compra,:valor_venda,:data,:hora);");
        his_entradas.bindValue(":id_produto", id_produto);
        his_entradas.bindValue(":quantidade", quantidade);
        his_entradas.bindValue(":valor_compra", valor_compra);
        his_entradas.bindValue(":valor_venda", valor_venda);
        his_entradas.bindValue(":data", data);
        his_entradas.bindValue(":hora", hora);
        his_entradas.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((his_entradas.lastError().number()<=0)){

            //Finaliza a inserçao dos dados.
            bd.commit();

            //Fecha a conexão com o banco de dados
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Fecha a conexão com o banco de dados
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }

}
