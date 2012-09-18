#include "tela_listar_clientes.h"
#include "ui_tela_listar_clientes.h"

tela_listar_clientes::tela_listar_clientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_listar_clientes)
{
    ui->setupUi(this);
    ui->le_codigo->setCursorPosition(0);
    modelo = new QStandardItemModel();
}

tela_listar_clientes::~tela_listar_clientes()
{
    delete ui;
}

void tela_listar_clientes::on_le_telefone_editingFinished()
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
            ui->le_telefone->setInputMask(QApplication::translate("tela_listar_clientes", "(00)00000-0000; ", 0, QApplication::UnicodeUTF8));
            ui->le_telefone->setText(QApplication::translate("tela_listar_clientes", "", 0, QApplication::UnicodeUTF8));
            ui->le_telefone->setText(QString::fromStdString((telefone.substr(0,9)+"-"+telefone.substr(9,4))));
        }
        else{
            if (telefone.size()>=12){
                ui->le_telefone->setInputMask(QApplication::translate("tela_listar_clientes", "(00)0000-00000; ", 0, QApplication::UnicodeUTF8));
                ui->le_telefone->setText(QApplication::translate("tela_listar_clientes", "", 0, QApplication::UnicodeUTF8));
                ui->le_telefone->setText(QString::fromStdString((telefone.substr(0,8)+"-"+telefone.substr(8,4))));
            }
        }
    }
}

void tela_listar_clientes::on_btn_cancelar_clicked()
{
    this->close();
}

void tela_listar_clientes::on_btn_buscar_clicked()
{
    conexao_bd conexao;
    bool verifica_conexao;
    QSqlDatabase bd;
    std::vector< std::string > lista_id;
    std::vector< std::string > lista_nomes;
    std::vector< std::string > lista_cpfs;
    std::vector< std::string > lista_rgs;
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

    //realiza conexão ao banco de dados
    verifica_conexao = conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807");

    if (verifica_conexao){
        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar(bd);

        //realiza a consulta
        consultar.exec("SELECT id_cliente,nome,rg,cpf,comentario,cep,rua,bairro,ponto_referencia,cidade,uf,numero,estado FROM cliente");
        while(consultar.next()){
            lista_id.push_back(consultar.value(0).toString().toStdString());
            lista_nomes.push_back(consultar.value(1).toString().toStdString());
            lista_rgs.push_back(consultar.value(2).toString().toStdString());
            lista_cpfs.push_back(consultar.value(3).toString().toStdString());
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

        modelo = new QStandardItemModel(int(lista_id.size()),3,this);
        modelo->clear();
        modelo->setHorizontalHeaderItem(0, new QStandardItem(QString("Código:")));
        modelo->setHorizontalHeaderItem(1, new QStandardItem(QString("Nome:")));
        modelo->setHorizontalHeaderItem(2, new QStandardItem(QString("Telefone:")));
        for (int i=0;i<int(lista_id.size());i++){
            consultar.exec("SELECT telefone,operadora FROM tel_cliente WHERE id_cliente = "+QString::fromStdString(lista_id[i])+";");
            while(consultar.next()){
                aux_lista_telefone.push_back(consultar.value(0).toString().toStdString());
                aux_lista_operadora.push_back(consultar.value(1).toString().toStdString());
            }
            consultar.exec("SELECT e_mail FROM email_cliente WHERE id_cliente = "+QString::fromStdString(lista_id[i])+";");
            while(consultar.next()){
                aux_lista_email.push_back(consultar.value(0).toString().toStdString());
            }

            lista_clientes.push_back(new cliente(QString::fromStdString(lista_id[i]).toInt(),QString::fromStdString(lista_nomes[i]),QString::fromStdString(lista_rgs[i]),
                                                 QString::fromStdString(lista_cpfs[i]),QString::fromStdString(lista_comentario[i]),aux_lista_email,aux_lista_telefone,
                                                 aux_lista_operadora,QString::fromStdString(lista_uf[i]),QString::fromStdString(lista_estado[i]),QString::fromStdString(lista_cidade[i]),
                                                 QString::fromStdString(lista_bairro[i]),QString::fromStdString(lista_rua[i]),QString::fromStdString(lista_cep[i]),
                                                 QString::fromStdString(lista_numero[i]).toInt(),QString::fromStdString(lista_ponto_referencia[i])));

            modelo->setItem(i,0,new QStandardItem(QString::fromStdString(lista_id[i])));
            modelo->setItem(i,1,new QStandardItem(QString::fromStdString(lista_nomes[i])));
            modelo->setItem(i,2,new QStandardItem(QString::fromStdString(aux_lista_telefone[aux_lista_telefone.size()-1]+" "+aux_lista_operadora[aux_lista_operadora.size()-1])));

            aux_lista_telefone.clear();
            aux_lista_operadora.clear();
            aux_lista_email.clear();
        }
        ui->tv_clientes->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tv_clientes->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tv_clientes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tv_clientes->setModel(modelo);
        ui->tv_clientes->resizeColumnsToContents();
    conexao.fechar_conexao();
    }
}

void tela_listar_clientes::on_tv_clientes_doubleClicked(const QModelIndex &index)
{
    tl_cliente.definir_dados_cliente(lista_clientes[index.row()]);
    tl_cliente.show();
}

void tela_listar_clientes::on_btn_limpar_clicked()
{
    modelo->clear();
}

void tela_listar_clientes::closeEvent(QCloseEvent *event){
    modelo->clear();
    ui->le_codigo->clear();
    ui->le_nome->clear();
    ui->le_telefone->clear();
}
