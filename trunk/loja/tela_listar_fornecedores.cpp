#include "tela_listar_fornecedores.h"
#include "ui_tela_listar_fornecedores.h"

tela_listar_fornecedores::tela_listar_fornecedores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_listar_fornecedores)
{
    ui->setupUi(this);
    ui->le_codigo->setCursorPosition(0);
    modelo = new QStandardItemModel();
    editar = true;
    fornecedor_atual = new fornecedor();
}

tela_listar_fornecedores::~tela_listar_fornecedores()
{
    delete ui;
}

void tela_listar_fornecedores::definir_icone_janela(QPixmap logo){
    logomarca = logo;
    this->setWindowIcon(logomarca);
}

void tela_listar_fornecedores::on_le_telefone_editingFinished()
{
    std::string telefone;
    telefone = ui->le_telefone->text().toStdString();
    int posicao_traco=0;
    int i=0;

    if(telefone.size()>=12){
       while ((posicao_traco==0)&&(i<=9)){
            if (telefone[i]=='-'){
                posicao_traco = i;
                telefone = telefone.substr(0,i)+ telefone.substr(i+1,5);
            }
            i++;
        }

        if (telefone.size()>=13){
            ui->le_telefone->setInputMask(QApplication::translate("tela_listar_fornecedores", "(00)00000-0000; ", 0, QApplication::UnicodeUTF8));
            ui->le_telefone->setText(QApplication::translate("tela_listar_fornecedores", "", 0, QApplication::UnicodeUTF8));
            ui->le_telefone->setText(QString::fromStdString((telefone.substr(0,9)+"-"+telefone.substr(9,4))));
        }
        else{
            if (telefone.size()>=12){
                ui->le_telefone->setInputMask(QApplication::translate("tela_listar_fornecedores", "(00)0000-00000; ", 0, QApplication::UnicodeUTF8));
                ui->le_telefone->setText(QApplication::translate("tela_listar_fornecedores", "", 0, QApplication::UnicodeUTF8));
                ui->le_telefone->setText(QString::fromStdString((telefone.substr(0,8)+"-"+telefone.substr(8,4))));
            }
        }
    }
}

void tela_listar_fornecedores::on_btn_cancelar_clicked()
{
    this->reject();
    this->close();
}

void tela_listar_fornecedores::on_btn_buscar_clicked()
{
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    funcoes_extras funcao;
    std::vector< std::string > lista_id;
    std::vector< std::string > lista_cnpj;
    std::vector< std::string > lista_razao_social;
    std::vector< std::string > lista_nome;
    std::vector< std::string > lista_comentario;
    std::vector< std::string > lista_cep;
    std::vector< std::string > lista_rua;
    std::vector< std::string > lista_bairro;
    std::vector< std::string > lista_ponto_referencia;
    std::vector< std::string > lista_cidade;
    std::vector< std::string > lista_uf;
    std::vector< std::string > lista_numero;
    std::vector< std::string > lista_estado;
    std::vector< std::string > aux_lista_email;
    std::vector< std::string > aux_lista_telefone;
    std::vector< std::string > aux_lista_operadora;

    QString campos_consulta;
    std::string id;
    std::string nome;
    std::string telefone;
    std::string razao_social;
    std::string cnpj;
    int ta_string_telefone;
    int ta_string_cnpj;

    id = ui->le_codigo->text().toStdString();
    nome = ui->le_nome->text().toStdString();
    telefone = ui->le_telefone->text().toStdString();
    razao_social = ui->le_razao_social->text().toStdString();
    cnpj = ui->le_cnpj->text().toStdString();
    lista_fornecedores.clear();

    if (((id!="")&&(id!=" "))||((nome!="")&&(nome!=" "))||(telefone!="()-")||((razao_social!="")&&(razao_social!=" "))||(cnpj!="../-")){
        campos_consulta = "f.id_fornecedor, f.cnpj, f.razao_social, f.nome, f.comentario, f.cep, f.rua, f.bairro,f.ponto_referencia, f.cidade, f.uf, f.numero, f.estado";

        if(telefone == "()-"){
           telefone = "";
        }
        else{
            ta_string_telefone = telefone.size();
            if(int(ta_string_telefone) < 11){
                if(ta_string_telefone <= 5){
                    telefone = telefone.substr(0,ta_string_telefone-1);
                    telefone = telefone.substr(0,ta_string_telefone-2);
                }
                else{
                    if((funcao.determinar_posicao_caractere(telefone,"-")+1)==ta_string_telefone){
                       telefone = telefone.substr(0,ta_string_telefone-1);
                    }
                }
            }
        }
        if(cnpj == "../-"){
            cnpj = "";
        }
        else{
            ta_string_cnpj = cnpj.size();
            if(ta_string_cnpj<=16){
                if (ta_string_cnpj<=3){
                    cnpj = cnpj.substr(0,ta_string_cnpj-1);
                    cnpj = cnpj.substr(0,ta_string_cnpj-2);
                    cnpj = cnpj.substr(0,ta_string_cnpj-3);
                    cnpj = cnpj.substr(0,ta_string_cnpj-4);
                }
                else{
                    if ((ta_string_cnpj>3)&&(ta_string_cnpj<=7)){
                        cnpj = cnpj.substr(0,ta_string_cnpj-1);
                        cnpj = cnpj.substr(0,ta_string_cnpj-2);
                        cnpj = cnpj.substr(0,ta_string_cnpj-3);
                    }else{
                        if ((ta_string_cnpj>7)&&(ta_string_cnpj<=11)){
                            cnpj = cnpj.substr(0,ta_string_cnpj-1);
                            cnpj = cnpj.substr(0,ta_string_cnpj-2);
                        }
                        else{
                            cnpj = cnpj.substr(0,ta_string_cnpj-1);
                        }
                    }
                }
            }
        }

        //realiza conexão ao banco de dados
        verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","tela_listar_fornecedores::on_btn_buscar_clicked()");
        if (verifica_conexao){
            //Retorna o banco de dados
            bd = conexao.retorna_bd();

            //Declara a variável que irá fazer a consulta
            QSqlQuery consultar(bd);

            //realiza a consulta
            consultar.exec("SELECT DISTINCT "+campos_consulta+" FROM fornecedor f, tel_fornecedor tf WHERE f.id_fornecedor LIKE '%"+QString::fromStdString(id)+"%' AND f.cnpj LIKE '%"+QString::fromStdString(cnpj)+"%' AND f.razao_social LIKE '%"+QString::fromStdString(razao_social)+"%' AND f.nome LIKE '%"+QString::fromStdString(nome)+"%' AND tf.telefone LIKE '%"+QString::fromStdString(telefone)+"%' AND tf.id_fornecedor = f.id_fornecedor ORDER BY f.nome ASC;");
            while(consultar.next()){
                lista_id.push_back(consultar.value(0).toString().toStdString());
                lista_cnpj.push_back(consultar.value(1).toString().toStdString());
                lista_razao_social.push_back(consultar.value(2).toString().toStdString());
                lista_nome.push_back(consultar.value(3).toString().toStdString());
                lista_comentario.push_back(consultar.value(4).toString().toStdString());
                lista_cep.push_back(consultar.value(5).toString().toStdString());
                lista_rua.push_back(consultar.value(6).toString().toStdString());
                lista_bairro.push_back(consultar.value(7).toString().toStdString());
                lista_ponto_referencia.push_back(consultar.value(8).toString().toStdString());
                lista_cidade.push_back(consultar.value(9).toString().toStdString());
                lista_uf.push_back(consultar.value(10).toString().toStdString());
                lista_numero.push_back(consultar.value(11).toString().toStdString());
                lista_estado.push_back(consultar.value(12).toString().toStdString());
            }

            modelo = new QStandardItemModel(int(lista_id.size()),5,this);
            modelo->clear();
            modelo->setHorizontalHeaderItem(0, new QStandardItem(QString("Código:")));
            modelo->setHorizontalHeaderItem(1, new QStandardItem(QString("Nome:")));
            modelo->setHorizontalHeaderItem(2, new QStandardItem(QString("Razão Social:")));
            modelo->setHorizontalHeaderItem(3, new QStandardItem(QString("CNPJ:")));
            modelo->setHorizontalHeaderItem(4, new QStandardItem(QString("Telefone:")));
            for (int i=0;i<int(lista_id.size());i++){
                consultar.exec("SELECT telefone,operadora FROM tel_fornecedor WHERE id_fornecedor = "+QString::fromStdString(lista_id[i])+";");
                while(consultar.next()){
                    aux_lista_telefone.push_back(consultar.value(0).toString().toStdString());
                    aux_lista_operadora.push_back(consultar.value(1).toString().toStdString());
                }
                consultar.exec("SELECT e_mail FROM email_fornecedor WHERE id_fornecedor = "+QString::fromStdString(lista_id[i])+";");
                while(consultar.next()){
                    aux_lista_email.push_back(consultar.value(0).toString().toStdString());
                }

                lista_fornecedores.push_back(new fornecedor(QString::fromStdString(lista_id[i]).toInt(),QString::fromStdString(lista_cnpj[i]),
                                                            QString::fromStdString(lista_razao_social[i]),QString::fromStdString(lista_nome[i]),
                                                            QString::fromStdString(lista_comentario[i]),aux_lista_email,aux_lista_telefone,
                                                            aux_lista_operadora,QString::fromStdString(lista_uf[i]),QString::fromStdString(lista_estado[i]),
                                                            QString::fromStdString(lista_cidade[i]),QString::fromStdString(lista_bairro[i]),
                                                            QString::fromStdString(lista_rua[i]),QString::fromStdString(lista_cep[i]),
                                                            QString::fromStdString(lista_numero[i]).toInt(),QString::fromStdString(lista_ponto_referencia[i])));

                modelo->setItem(i,0,new QStandardItem(QString::number(lista_fornecedores[i]->retornar_id())));
                modelo->setItem(i,1,new QStandardItem(lista_fornecedores[i]->retornar_nome()));
                modelo->setItem(i,2,new QStandardItem(lista_fornecedores[i]->retornar_razao_social()));
                modelo->setItem(i,3,new QStandardItem(lista_fornecedores[i]->retornar_cnpj()));
                modelo->setItem(i,4,new QStandardItem(QString::fromStdString(aux_lista_telefone[aux_lista_telefone.size()-1]+" "+aux_lista_operadora[aux_lista_operadora.size()-1])));

                aux_lista_telefone.clear();
                aux_lista_operadora.clear();
                aux_lista_email.clear();
            }
            ui->tv_fornecedores->setSelectionMode(QAbstractItemView::SingleSelection);
            ui->tv_fornecedores->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tv_fornecedores->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tv_fornecedores->setModel(modelo);
            ui->tv_fornecedores->resizeColumnToContents(0);
            ui->tv_fornecedores->resizeColumnToContents(3);
            ui->tv_fornecedores->resizeColumnToContents(4);
            bd.close();
            conexao.fechar_conexao();
        }
    }
}

void tela_listar_fornecedores::on_tv_fornecedores_doubleClicked(const QModelIndex &index)
{
    int posicao_remover,i;
    posicao_remover = -1;
    i=0;
    if(editar){
        tl_fornecedor.definir_icone_janela(logomarca);
        tl_fornecedor.definir_dados_fornecedor(lista_fornecedores[index.row()]);
        lista_fornecedores[index.row()] = tl_fornecedor.retorna_novo_cadastro();

        if(!tl_fornecedor.exec()){
            //If que verifica se é para remover o fornecedor, para isso seu id será -1
            if(lista_fornecedores[index.row()]->retornar_id()==-1){
                while((lista_fornecedores[i]->retornar_id()!=-1)&&(i<=(int(lista_fornecedores.size())-1))){
                    i++;
                }
                for (int j = i; j<(int(lista_fornecedores.size())); j++){
                    //Remove o ultimo telefone
                    if ((j+1)>=(int(lista_fornecedores.size()))){
                        lista_fornecedores.pop_back();
                    }
                    else{
                        lista_fornecedores[j]=lista_fornecedores[j+1];
                    }
                }
            }
        }

        std::vector< std::string > aux_lista_email;
        std::vector< std::string > aux_lista_telefone;
        std::vector< std::string > aux_lista_operadora;

        modelo = new QStandardItemModel(int(lista_fornecedores.size()),5,this);
        modelo->clear();
        modelo->setHorizontalHeaderItem(0, new QStandardItem(QString("Código:")));
        modelo->setHorizontalHeaderItem(1, new QStandardItem(QString("Nome:")));
        modelo->setHorizontalHeaderItem(2, new QStandardItem(QString("Razão Social:")));
        modelo->setHorizontalHeaderItem(3, new QStandardItem(QString("CNPJ:")));
        modelo->setHorizontalHeaderItem(4, new QStandardItem(QString("Telefone:")));
        for (int i=0;i<int(lista_fornecedores.size());i++){
            aux_lista_email=lista_fornecedores[i]->retorna_lista_email();
            aux_lista_telefone=lista_fornecedores[i]->retorna_lista_telefone();
            aux_lista_operadora=lista_fornecedores[i]->retorna_lista_operadora();

            modelo->setItem(i,0,new QStandardItem(QString::number(lista_fornecedores[i]->retornar_id())));
            modelo->setItem(i,1,new QStandardItem(lista_fornecedores[i]->retornar_nome()));
            modelo->setItem(i,2,new QStandardItem(lista_fornecedores[i]->retornar_razao_social()));
            modelo->setItem(i,3,new QStandardItem(lista_fornecedores[i]->retornar_cnpj()));
            modelo->setItem(i,4,new QStandardItem(QString::fromStdString(aux_lista_telefone[aux_lista_telefone.size()-1]+" "+aux_lista_operadora[aux_lista_operadora.size()-1])));

            aux_lista_telefone.clear();
            aux_lista_operadora.clear();
            aux_lista_email.clear();
        }
        ui->tv_fornecedores->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tv_fornecedores->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tv_fornecedores->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tv_fornecedores->setModel(modelo);
        ui->tv_fornecedores->resizeColumnToContents(0);
        ui->tv_fornecedores->resizeColumnToContents(3);
        ui->tv_fornecedores->resizeColumnToContents(4);
    }
    else{
        //fornecedor_atual = new fornecedor();
        fornecedor_atual = lista_fornecedores[index.row()];
        this->close();
    }
}

void tela_listar_fornecedores::on_btn_limpar_clicked()
{
    modelo->clear();
}

void tela_listar_fornecedores::closeEvent(QCloseEvent *event){
    modelo->clear();
    ui->le_codigo->clear();
    ui->le_nome->clear();
    ui->le_cnpj->clear();
    ui->le_razao_social->clear();
    ui->le_telefone->clear();
    this->reject();
}

void tela_listar_fornecedores::alterar_editar(bool edit){
    editar = edit;
}

fornecedor * tela_listar_fornecedores::retorna_fornecedor(void){
    return fornecedor_atual;
}

void tela_listar_fornecedores::on_btn_adicionar_fornecedor_clicked()
{
    tl_cadastro_fornecedor.definir_icone_janela(logomarca);
    tl_cadastro_fornecedor.show();
}
