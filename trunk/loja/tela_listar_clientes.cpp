#include "tela_listar_clientes.h"
#include "ui_tela_listar_clientes.h"

tela_listar_clientes::tela_listar_clientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_listar_clientes)
{
    ui->setupUi(this);
    ui->le_codigo->setCursorPosition(0);
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

        modelo = new QStandardItemModel(int(lista_id.size()),4,this);
        modelo->setHorizontalHeaderItem(0, new QStandardItem(QString("Código:")));
        modelo->setHorizontalHeaderItem(1, new QStandardItem(QString("Nome:")));
        modelo->setHorizontalHeaderItem(2, new QStandardItem(QString("CPF:")));
        modelo->setHorizontalHeaderItem(3, new QStandardItem(QString("RG:")));

        for(int i = 0 ; i<int(lista_id.size());i++){
            modelo->setItem(i,0,new QStandardItem(QString::fromStdString(lista_id[i])));
            modelo->setItem(i,1,new QStandardItem(QString::fromStdString(lista_nomes[i])));
            modelo->setItem(i,2,new QStandardItem(QString::fromStdString(lista_cpfs[i])));
            modelo->setItem(i,3,new QStandardItem(QString::fromStdString(lista_rgs[i])));
        }
        ui->tv_clientes->setModel(modelo);
        ui->tv_clientes->resizeColumnsToContents();
        ui->tv_clientes->horizontalHeader()->setStretchLastSection(true);
        ui->tv_clientes->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tv_clientes->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tv_clientes->setEditTriggers(QAbstractItemView::NoEditTriggers);
    conexao.fechar_conexao();
    }
}

void tela_listar_clientes::on_tv_clientes_doubleClicked(const QModelIndex &index)
{
    tl_cliente.definir_dados_cliente(lista_id[index.row()],lista_nomes[index.row()],lista_rgs[index.row()],lista_cpfs[index.row()],
                                     lista_comentario[index.row()],lista_cep[index.row()],lista_rua[index.row()],lista_bairro[index.row()],
                                     lista_ponto_referencia[index.row()],lista_cidade[index.row()],lista_uf[index.row()],lista_numero[index.row()],
                                     lista_estado[index.row()]);
    tl_cliente.show();
}
