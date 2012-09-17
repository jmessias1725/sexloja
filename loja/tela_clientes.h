#ifndef TELA_CLIENTES_H
#define TELA_CLIENTES_H

#include <QMainWindow>
#include "tela_cadastro_cliente.h"
#include "funcoes_extras.h"

namespace Ui {
class tela_clientes;
}

class tela_clientes : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tela_clientes(QWidget *parent = 0);
    ~tela_clientes();
    void definir_dados_cliente(std::string id_cliente,std::string nome_cliente,std::string rg_cliente,std::string cpf_cliente,
                               std::string comentario_cliente,std::string cep_cliente,std::string rua_cliente,
                               std::string bairro_cliente,std::string ponto_referencia_cliente,std::string cidade_cliente,
                               std::string uf,std::string numero,std::string estado);
    
private slots:
    void on_actionEditar_Contato_triggered();

    void on_actionAdicionar_Contato_triggered();

private:
    Ui::tela_clientes *ui;
    tela_cadastro_cliente tl_cadastro_clientes;
    funcoes_extras funcoes;
};

#endif // TELA_CLIENTES_H
