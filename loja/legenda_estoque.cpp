#include "legenda_estoque.h"

legenda_estoque::legenda_estoque()
{
    conexao_bd conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","legenda_estoque::legenda_estoque")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar_zerado(bd);
        QSqlQuery consultar_minimo(bd);
        QSqlQuery consultar_normal(bd);
        QSqlQuery consultar_ideal(bd);

        //realiza a consulta
        consultar_zerado.exec("SELECT id_definicao,valor,vermelho,verde,azul FROM definicoes_estoque WHERE legenda = 'Zerado';");
        if(consultar_zerado.last()){
            id_zerado = consultar_zerado.value(0).toInt();
            zerado_valor = consultar_zerado.value(1).toInt();
            z_cor_vermelho = consultar_zerado.value(2).toInt();
            z_cor_verde = consultar_zerado.value(3).toInt();
            z_cor_azul = consultar_zerado.value(4).toInt();
        }

        consultar_minimo.exec("SELECT id_definicao,valor,vermelho,verde,azul FROM definicoes_estoque WHERE legenda = 'Mínimo';");
        if(consultar_minimo.last()){
            id_minimo = consultar_minimo.value(0).toInt();
            minimo_valor = consultar_minimo.value(1).toInt();
            m_cor_vermelho = consultar_minimo.value(2).toInt();
            m_cor_verde = consultar_minimo.value(3).toInt();
            m_cor_azul = consultar_minimo.value(4).toInt();
        }

        consultar_normal.exec("SELECT id_definicao,valor,vermelho,verde,azul FROM definicoes_estoque WHERE legenda = 'Nomal';");
        if(consultar_normal.last()){
            id_normal = consultar_normal.value(0).toInt();
            normal_valor = consultar_normal.value(1).toInt();
            n_cor_vermelho = consultar_normal.value(2).toInt();
            n_cor_verde = consultar_normal.value(3).toInt();
            n_cor_azul = consultar_normal.value(4).toInt();
        }

        consultar_ideal.exec("SELECT id_definicao,valor,vermelho,verde,azul FROM definicoes_estoque WHERE legenda = 'Ideal';");
        if(consultar_ideal.last()){
            id_ideal = consultar_ideal.value(0).toInt();
            ideal_valor = consultar_ideal.value(1).toInt();
            i_cor_vermelho = consultar_ideal.value(2).toInt();
            i_cor_verde = consultar_ideal.value(3).toInt();
            i_cor_azul = consultar_ideal.value(4).toInt();
        }
    }
    //Fecha a conexão com o banco de dados
    bd.close();
    conexao.fechar_conexao();
}

void legenda_estoque::definir_icone_janela(QPixmap logo){
    logomarca = logo;
}

int legenda_estoque::retorna_zerado_valor(void){
    return zerado_valor;
}

int legenda_estoque::retorna_z_cor_vermelho(void){
    return z_cor_vermelho;
}

int legenda_estoque::retorna_z_cor_verde(void){
    return z_cor_verde;
}

int legenda_estoque::retorna_z_cor_azul(void){
    return z_cor_azul;
}

int legenda_estoque::retorna_minimo_valor(void){
    return minimo_valor;
}

int legenda_estoque::retorna_m_cor_vermelho(void){
    return m_cor_vermelho;
}

int legenda_estoque::retorna_m_cor_verde(void){
    return m_cor_verde;
}

int legenda_estoque::retorna_m_cor_azul(void){
    return m_cor_azul;
}

int legenda_estoque::retorna_normal_valor(void){
    return normal_valor;
}

int legenda_estoque::retorna_n_cor_vermelho(void){
    return n_cor_vermelho;
}

int legenda_estoque::retorna_n_cor_verde(void){
    return n_cor_verde;
}

int legenda_estoque::retorna_n_cor_azul(void){
    return n_cor_azul;
}

int legenda_estoque::retorna_ideal_valor(void){
    return ideal_valor;
}

int legenda_estoque::retorna_i_cor_vermelho(void){
    return i_cor_vermelho;
}

int legenda_estoque::retorna_i_cor_verde(void){
    return i_cor_verde;
}

int legenda_estoque::retorna_i_cor_azul(void){
    return i_cor_azul;
}

void legenda_estoque::alterar_configuracao_estoque(int zer_valor,int z_cor_verm,int z_cor_ver,int z_cor_az,
                                                int min_valor,int m_cor_verm,int m_cor_ver,int m_cor_az,
                                                int nor_valor,int n_cor_verm,int n_cor_ver,int n_cor_az,
                                                int ide_valor,int i_cor_verm,int i_cor_ver,int i_cor_az){
    zerado_valor = zer_valor;
    z_cor_vermelho = z_cor_verm;
    z_cor_verde = z_cor_ver;
    z_cor_azul = z_cor_az;

    minimo_valor = min_valor;
    m_cor_vermelho = m_cor_verm;
    m_cor_verde = m_cor_ver;
    m_cor_azul = m_cor_az;

    normal_valor = nor_valor;
    n_cor_vermelho = n_cor_verm;
    n_cor_verde = n_cor_ver;
    n_cor_azul = n_cor_az;

    ideal_valor = ide_valor;
    i_cor_vermelho = i_cor_verm;
    i_cor_verde = i_cor_ver;
    i_cor_azul = i_cor_az;
}

bool legenda_estoque::salvar_alteracao_configuracao_estoque(){
    conexao_bd conexao;
    QSqlDatabase bd;
    QString campos;

    //realiza conexão ao banco de dados

    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","legenda_estoque::salvar_alteracao_configuracao_estoque")){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Inicia a transaçao
        bd.transaction();

        //Declara as variáves que irão inserir os dados no banco de dados.
        QSqlQuery alterar_dados_zerado(bd);
        QSqlQuery alterar_dados_minimo(bd);
        QSqlQuery alterar_dados_normal(bd);
        QSqlQuery alterar_dados_ideal(bd);

        campos = "valor=:valor,vermelho=:vermelho,verde=:verde,azul=:azul";

        //Altera os dados no cadastro da configuraçao zerado
        alterar_dados_zerado.prepare("UPDATE definicoes_estoque SET "+campos+" WHERE id_definicao = '"+QString::number(id_zerado)+"';");
        alterar_dados_zerado.bindValue(":valor",zerado_valor);
        alterar_dados_zerado.bindValue(":vermelho",z_cor_vermelho);
        alterar_dados_zerado.bindValue(":verde",z_cor_verde);
        alterar_dados_zerado.bindValue(":azul",z_cor_azul);
        alterar_dados_zerado.exec();

        //Altera os dados no cadastro da configuraçao zerado
        alterar_dados_minimo.prepare("UPDATE definicoes_estoque SET "+campos+" WHERE id_definicao = '"+QString::number(id_minimo)+"';");
        alterar_dados_minimo.bindValue(":valor",minimo_valor);
        alterar_dados_minimo.bindValue(":vermelho",m_cor_vermelho);
        alterar_dados_minimo.bindValue(":verde",m_cor_verde);
        alterar_dados_minimo.bindValue(":azul",m_cor_azul);
        alterar_dados_minimo.exec();

        //Altera os dados no cadastro da configuraçao zerado
        alterar_dados_normal.prepare("UPDATE definicoes_estoque SET "+campos+" WHERE id_definicao = '"+QString::number(id_normal)+"';");
        alterar_dados_normal.bindValue(":valor",normal_valor);
        alterar_dados_normal.bindValue(":vermelho",n_cor_vermelho);
        alterar_dados_normal.bindValue(":verde",n_cor_verde);
        alterar_dados_normal.bindValue(":azul",n_cor_azul);
        alterar_dados_normal.exec();

        //Altera os dados no cadastro da configuraçao zerado
        alterar_dados_ideal.prepare("UPDATE definicoes_estoque SET "+campos+" WHERE id_definicao = '"+QString::number(id_ideal)+"';");
        alterar_dados_ideal.bindValue(":valor",ideal_valor);
        alterar_dados_ideal.bindValue(":vermelho",i_cor_vermelho);
        alterar_dados_ideal.bindValue(":verde",i_cor_verde);
        alterar_dados_ideal.bindValue(":azul",i_cor_azul);
        alterar_dados_ideal.exec();

        //Verifica se os dados podem ser salvos, caso sim realiza o Commite, do contrário o Rollback.
        if((alterar_dados_zerado.lastError().number()<=0)&&(alterar_dados_minimo.lastError().number()<=0)&&
           (alterar_dados_normal.lastError().number()<=0)&&(alterar_dados_ideal.lastError().number()<=0)){

            //Finaliza a inserçao dos dados.
            bd.commit();

            //Gera mensagem de que tudo ocorreu direito.
            QPixmap icone_janela(":img/img/arquivo_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Configuraçao");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nAlteração feita com sucesso!!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            bd.close();
            conexao.fechar_conexao();
            return true;
        }
        else{

            //Desfaz as alterações no banco de dados.
            bd.rollback();

            //Gera a mensagem de erro.
            QPixmap icone_janela(":img/img/arquivo_erro_50.png");
            QMessageBox msg(0);
            msg.setIconPixmap(icone_janela);
            msg.setWindowIcon(logomarca);
            msg.setWindowTitle("Configuraçao");
            msg.addButton("OK", QMessageBox::AcceptRole);
            msg.setFont(QFont ("Calibri", 11,QFont::Normal, false));
            msg.setText("\nNão salvar alteração!!!");
            msg.exec();

            //Fecha a conexão com o banco de dados
            bd.close();
            conexao.fechar_conexao();
            return false;
        }
    }
    else{
        return false;
    }
}
