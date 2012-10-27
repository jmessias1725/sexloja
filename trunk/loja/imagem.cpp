#include "imagem.h"

imagem::imagem(){
}

imagem::imagem(QByteArray vetor_bytes_img, std::string img_extensao){
    vetor_bytes_imagem = vetor_bytes_img;
    extensao = img_extensao;
}

imagem::imagem(QString nome_arquivo,int largura, int altura)
{
    QPixmap malha_pixels;
    nome_imagem = nome_arquivo;
    extensao = funcao.retorna_extensao_arquivo(nome_arquivo);
    QBuffer buffer_imagem(&vetor_bytes_imagem);

    malha_pixels = QPixmap(nome_arquivo);
    malha_pixels = malha_pixels.scaled(QSize(largura,altura), Qt::KeepAspectRatio);
    buffer_imagem.open(QIODevice::WriteOnly);
    QImage(malha_pixels.toImage()).save(&buffer_imagem,extensao.c_str());
}

QPixmap imagem::retorna_QPixmap_imagem(){
    QPixmap malha_pixels;
    QImage imagem;
    malha_pixels = QPixmap();
    imagem.loadFromData(vetor_bytes_imagem,extensao.c_str());
    malha_pixels = malha_pixels.fromImage(imagem);
    return malha_pixels;
}

QByteArray imagem::retorna_vetor_bytes_imagem(void){
    return vetor_bytes_imagem;
}

QString imagem::retorna_extensao(void){
    return QString::fromStdString(extensao);
}

void imagem::alterar_imagem(QString nome_arquivo,int largura, int altura){
    if(nome_arquivo.toStdString()!=""){
        if(int(vetor_bytes_imagem.size())>0){
            vetor_bytes_imagem.clear();
        }
        QPixmap malha_pixels;
        nome_imagem = nome_arquivo;
        extensao = funcao.retorna_extensao_arquivo(nome_arquivo);
        QBuffer buffer_imagem(&vetor_bytes_imagem);

        malha_pixels = QPixmap(nome_arquivo);
        malha_pixels = malha_pixels.scaled(QSize(largura,altura), Qt::KeepAspectRatio);
        buffer_imagem.open(QIODevice::WriteOnly);
        QImage(malha_pixels.toImage()).save(&buffer_imagem,extensao.c_str());
    }
}

void imagem::buscar_imagem(int id){
    conexao_bd conexao;
    QSqlDatabase bd;

    //realiza conexão ao banco de dados
    if (conexao.conetar_bd("localhost",3306,"bd_loja","root","tiger270807","imagem::buscar_imagem")){

        //Retorna o banco de dados
        bd = conexao.retorna_bd();

        //Declara a variável que irá fazer a consulta
        QSqlQuery consultar_imagem(bd);

        //realiza a consulta
        consultar_imagem.exec("SELECT imagem,extensao FROM imagem WHERE id_imagem = "+QString::number(id)+";");
        while(consultar_imagem.next()){
            vetor_bytes_imagem = consultar_imagem.value(0).toByteArray();
            extensao = consultar_imagem.value(1).toString().toStdString();
        }
        consultar_imagem.clear();
        bd.close();
        conexao.fechar_conexao();
    }
}

