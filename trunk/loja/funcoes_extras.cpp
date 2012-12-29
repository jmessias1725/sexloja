#include "funcoes_extras.h"

int funcoes_extras::converter_para_inteiro(std::string numero){
    int num_aux,numero_final;
    int fator_multiplicador = 1;
    numero_final = 0;
    for (int i = int(numero.size()-1); i>=0;i--){
        if((numero[i]=='0')||(numero[i]=='1')||(numero[i]=='2')||
           (numero[i]=='3')||(numero[i]=='4')||(numero[i]=='5')||
           (numero[i]=='6')||(numero[i]=='7')||(numero[i]=='8')||
           (numero[i]=='9')){
            num_aux = (numero[i]-48);
            num_aux = num_aux*fator_multiplicador;
            numero_final = numero_final+num_aux;
            fator_multiplicador = fator_multiplicador*10;
        }
    }
    return numero_final;
}

int funcoes_extras::retorna_id_estado(std::string uf){
    if(uf == "--"){
        return 0;
    }
    else{
    if(uf == "AC"){
        return 1;
    }
    else{
    if(uf == "AL"){
        return 2;
    }
    else{
    if(uf == "AM"){
        return 3;
    }
    else{
    if(uf == "AP"){
        return 4;
    }
    else{
    if(uf == "BA"){
        return 5;
    }
    else{
    if(uf == "CE"){
        return 6;
    }
    else{
    if(uf == "DF"){
        return 7;
    }
    else{
    if(uf == "ES"){
        return 8;
    }
    else{
    if(uf == "GO"){
        return 9;
    }
    else{
    if(uf == "MA"){
        return 10;
    }
    else{
    if(uf == "MG"){
        return 11;
    }
    else{
    if(uf == "MS"){
        return 12;
    }
    else{
    if(uf == "MT"){
        return 13;
    }
    else{
    if(uf == "PA"){
        return 14;
    }
    else{
    if(uf == "PB"){
        return 15;
    }
    else{
    if(uf == "PE"){
        return 16;
    }
    else{
    if(uf == "PI"){
        return 17;
    }
    else{
    if(uf == "PR"){
        return 18;
    }
    else{
    if(uf == "RJ"){
        return 19;
    }
    else{
    if(uf == "RN"){
        return 20;
    }
    else{
    if(uf == "RO"){
        return 21;
    }
    else{
    if(uf == "RR"){
        return 22;
    }
    else{
    if(uf == "RS"){
        return 23;
    }
    else{
    if(uf == "SC"){
        return 24;
    }
    else{
    if(uf == "SE"){
        return 25;
    }
    else{
    if(uf == "SP"){
        return 26;
    }
    else{
        return 27;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
}

QString funcoes_extras::retorna_nome_imagem_estado(std::string uf){
    if(uf == "--"){
        return ":/bandeiras/badeiras_estados/bandeira_do_brasil.png";
    }
    else{
    if(uf == "AC"){
        return ":/bandeiras/badeiras_estados/acre.png";
    }
    else{
    if(uf == "AL"){
        return ":/bandeiras/badeiras_estados/Alagoas.png";
    }
    else{
    if(uf == "AM"){
        return ":/bandeiras/badeiras_estados/Amazonas.png";
    }
    else{
    if(uf == "AP"){
        return ":/bandeiras/badeiras_estados/Bandeira_do_Amapa.png";
    }
    else{
    if(uf == "BA"){
        return ":/bandeiras/badeiras_estados/Bahia.png";
    }
    else{
    if(uf == "CE"){
        return ":/bandeiras/badeiras_estados/Bandeira_do_Ceara.png";
    }
    else{
    if(uf == "DF"){
        return ":/bandeiras/badeiras_estados/Distrito_Federal.png";
    }
    else{
    if(uf == "ES"){
        return ":/bandeiras/badeiras_estados/Espirito_Santo.png";
    }
    else{
    if(uf == "GO"){
        return ":/bandeiras/badeiras_estados/Goias.png";
    }
    else{
    if(uf == "MA"){
        return ":/bandeiras/badeiras_estados/Maranhao.png";
    }
    else{
    if(uf == "MG"){
        return ":/bandeiras/badeiras_estados/Minas_Gerais.png";
    }
    else{
    if(uf == "MS"){
        return ":/bandeiras/badeiras_estados/Mato_Grosso_do_Sul.png";
    }
    else{
    if(uf == "MT"){
        return ":/bandeiras/badeiras_estados/Mato_Grosso.png";
    }
    else{
    if(uf == "PA"){
        return ":/bandeiras/badeiras_estados/Para.png";
    }
    else{
    if(uf == "PB"){
        return ":/bandeiras/badeiras_estados/Paraiba.png";
    }
    else{
    if(uf == "PE"){
        return ":/bandeiras/badeiras_estados/Pernambuco.png";
    }
    else{
    if(uf == "PI"){
        return ":/bandeiras/badeiras_estados/Piaui.png";
    }
    else{
    if(uf == "PR"){
        return ":/bandeiras/badeiras_estados/Bandeira_do_Parana.png";
    }
    else{
    if(uf == "RJ"){
        return ":/bandeiras/badeiras_estados/Rio_de_Janeiro.png";
    }
    else{
    if(uf == "RN"){
        return ":/bandeiras/badeiras_estados/Rio_Grande_do_Norte.png";
    }
    else{
    if(uf == "RO"){
        return ":/bandeiras/badeiras_estados/Rondonia.png";
    }
    else{
    if(uf == "RR"){
        return ":/bandeiras/badeiras_estados/Roraima.png";
    }
    else{
    if(uf == "RS"){
        return ":/bandeiras/badeiras_estados/Rio_Grande_do_Sul.png";
    }
    else{
    if(uf == "SC"){
        return ":/bandeiras/badeiras_estados/Santa_Catarina.png";
    }
    else{
    if(uf == "SE"){
        return ":/bandeiras/badeiras_estados/Sergipe.png";
    }
    else{
    if(uf == "SP"){
        return ":/bandeiras/badeiras_estados/Sao_Paulo.png";
    }
    else{
        return ":/bandeiras/badeiras_estados/Tocantins.png";
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
}

QIcon funcoes_extras::retorna_icone_operadora(std::string operadora){
    QIcon icon1,icon2,icon3,icon4,icon5,icon6,icon7,icon8;
    icon1.addFile(QString::fromUtf8(":/operadoras/img/LOGO-ALGAR-TELECOM.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon2.addFile(QString::fromUtf8(":/operadoras/img/claro.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon3.addFile(QString::fromUtf8(":/operadoras/img/vivo_boneco.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon4.addFile(QString::fromUtf8(":/operadoras/img/TIM.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon5.addFile(QString::fromUtf8(":/operadoras/img/oi.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon6.addFile(QString::fromUtf8(":/operadoras/img/sercom_tel.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon7.addFile(QString::fromUtf8(":/operadoras/img/nextel-novo.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon8.addFile(QString::fromUtf8(":img/img/telefone.png"), QSize(), QIcon::Normal, QIcon::Off);
        if(operadora=="Algar Telecom"){
           return icon1;
        }
        else{
            if(operadora=="Claro"){
                return icon2;
            }
            else{
                if(operadora=="Vivo"){
                    return icon3;
                }
                else{
                    if(operadora=="TIM"){
                        return icon4;
                    }
                    else{
                        if(operadora=="Oi"){
                            return icon5;
                        }
                        else{
                            if(operadora=="Sercomtel"){
                                return icon6;
                            }
                            else{
                                if(operadora=="Nextel"){
                                    return icon7;
                                }
                                else{
                                    return icon8;
                                }
                            }
                        }
                    }
                }
            }
        }
}

int funcoes_extras::determinar_posicao_caractere(std::string palavra, const char *caractere){
    for(int i = 0; i<int(palavra.size());i++){
        if(palavra[i]==*caractere)
            return i;
    }
    return -1;
}

bool funcoes_extras::verifica_cpf(std::string cpf){
    int soma,resultado1,resultado2,digito1,digito2;

    soma = 0;
    if(cpf.size()>=14)
    {
        cpf = cpf.substr(0,3)+cpf.substr(4,3)+cpf.substr(8,3)+cpf.substr(12,2);
        for (int i = 0; i <9;i++){
            soma = soma+(int(cpf[i]-48)*(10-i));
        }
        resultado1 = soma%11;
        if (resultado1<=1)
            digito1 = 0;
        else
            digito1 = 11-resultado1;

        soma = 0;

        for (int i = 0; i <10;i++){
            soma = soma+(int(cpf[i]-48)*(11-i));
        }

        resultado2 = soma%11;

        if (resultado2<=1)
            digito2 = 0;
        else
            digito2 = 11-resultado2;

        if((digito1 == int(cpf[9]-48))&&(digito2 == int(cpf[10]-48))){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(cpf!="..-"){
            return false;
        }
        else{
            return true;
        }
    }
}

bool funcoes_extras::verifica_cnpj(std::string cnpj){
    int soma, resto_div, dig1, dig2;

    if(cnpj.size()>=18){

        cnpj = cnpj.substr(0,2)+cnpj.substr(3,3)+cnpj.substr(7,3)+cnpj.substr(11,4)+cnpj.substr(16,2);
        soma =((int(cnpj[0]-48) * 5) +
                (int(cnpj[1]-48) * 4) +
                (int(cnpj[2]-48) * 3) +
                (int(cnpj[3]-48) * 2) +
                (int(cnpj[4]-48) * 9) +
                (int(cnpj[5]-48) * 8) +
                (int(cnpj[6]-48) * 7) +
                (int(cnpj[7]-48) * 6) +
                (int(cnpj[8]-48) * 5) +
                (int(cnpj[9]-48) * 4) +
                (int(cnpj[10]-48) * 3) +
                (int(cnpj[11]-48) * 2));

        resto_div = int(soma%11);

        dig1   = (11 - resto_div);
        if (dig1 > 9) dig1 = 0;

        soma = 0;
        resto_div = 0;

        soma = ((int(cnpj[0]-48) * 6) +
                (int(cnpj[1]-48) * 5) +
                (int(cnpj[2]-48) * 4) +
                (int(cnpj[3]-48) * 3) +
                (int(cnpj[4]-48) * 2) +
                (int(cnpj[5]-48) * 9) +
                (int(cnpj[6]-48) * 8) +
                (int(cnpj[7]-48) * 7) +
                (int(cnpj[8]-48) * 6) +
                (int(cnpj[9]-48) * 5) +
                (int(cnpj[10]-48) * 4) +
                (int(cnpj[11]-48) * 3) +
                (dig1 * 2));

        resto_div = int(soma % 11);

        dig2   = (11 - resto_div);
        if (dig2 > 9) dig2 = 0;

        if ((dig1==int(cnpj[12]-48))&&(dig2==int(cnpj[13]-48))){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(cnpj!="../-"){
            return false;
        }
        else{
            return true;
        }
    }
}

const char* funcoes_extras::retorna_extensao_arquivo(QString nome_arquivo){
    std::string aux_nome_arquivo = nome_arquivo.toStdString();
    QString extensao;
    int posicao_do_ponto = 0;
    for(int i = 0; i<int(aux_nome_arquivo.size());i++){
        if(aux_nome_arquivo[i]=='.')
            posicao_do_ponto = i;
    }
    extensao=QString::fromStdString(aux_nome_arquivo.substr((posicao_do_ponto+1),(aux_nome_arquivo.size()-1)));
    extensao = extensao.toUpper();
    return extensao.toStdString().c_str();
}

QString funcoes_extras::retorna_valor_dinheiro(double valor){
    std::stringstream valor_stream;
    std::string valor_final;
    QString aux;
    int posicao;
    int menos;

    valor_stream << std::fixed << valor << std::flush;
    valor_final = valor_stream.str();

    aux = QString::fromStdString(valor_final);
    aux.replace(".",",");
    posicao = funcoes_extras::determinar_posicao_caractere(aux.toStdString(), ",");
    menos = funcoes_extras::determinar_posicao_caractere(aux.toStdString(), "-");
    aux.replace(posicao+3,int(aux.size()-1),"");

    int tamanho = int(aux.size());
    if ((menos!=-1)&&(tamanho<=7)){
        tamanho = tamanho-1;
    }

    if (tamanho>6){
        int i = 6;
        while(i<=tamanho-1){
            aux.insert(((tamanho)-i),".");
            i = i + 3;
        }
    }
    if(aux.toStdString()!=""){
        if (aux.contains(",")||aux.contains(".")){
            valor_final = "R$ "+aux.toStdString();
        }
        else{
            valor_final = "R$ "+valor_final+",00";
        }
    }
    else{
        valor_final = "R$ 0,00";
    }
    return QString::fromStdString(valor_final);
}

double funcoes_extras::converter_para_double(QString numero){
    std::string valor_aux = numero.toStdString();
    std::string valor_final = "";
    double aux;
    for (int i = 0; i< int(valor_aux.size());i++){
        if((valor_aux[i]=='0')||(valor_aux[i]=='1')||(valor_aux[i]=='2')||
           (valor_aux[i]=='3')||(valor_aux[i]=='4')||(valor_aux[i]=='5')||
           (valor_aux[i]=='6')||(valor_aux[i]=='7')||(valor_aux[i]=='8')||
           (valor_aux[i]=='9')/*||(valor_aux[i]==',')||(valor_aux[i]=='.')*/){
            valor_final = valor_final+valor_aux[i];
        }
    }
    aux = QString::fromStdString(valor_final).toDouble();
    int posicao = funcoes_extras::determinar_posicao_caractere(numero.toStdString(), ",");
    int posicao_ponto = funcoes_extras::determinar_posicao_caractere(numero.toStdString(), ".");

    if ((posicao_ponto == numero.size()-3)&&(posicao_ponto!=-1)){
        aux = aux/100.0;
    }
    if (posicao!=-1){
        aux = aux/100.0;
    }
    return aux;
}

int funcoes_extras::retorna_id_tipo(std::string tipo){
    if(tipo == "Acessório"){
        return 0;
    }
    else{
    if(tipo == "Cosmético"){
        return 1;
    }
    else{
    if(tipo == "Decoração"){
        return 2;
    }
    else{
    if(tipo == "Estimulante"){
        return 3;
    }
    else{
    if(tipo == "Fetish"){
        return 4;
    }
    else{
    if(tipo == "Gel"){
        return 5;
    }
    else{
    if(tipo == "Higiene"){
        return 6;
    }
    else{
    if(tipo == "Jogo"){
        return 7;
    }
    else{
    if(tipo == "Kit"){
        return 8;
    }
    else{
    if(tipo == "Lubrificante"){
        return 9;
    }
    else{
    if(tipo == "Perfumaria"){
        return 10;
    }
    else{
    if(tipo == "Preservativo"){
        return 11;
    }
    else{
    if(tipo == "Prótese"){
        return 12;
    }
    else{
    if(tipo == "Vestuário"){
        return 13;
    }
    else{
        return 14;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
}
QString funcoes_extras::converte_numero_origem_nome(int ori){
    if(ori==0)
    {
        return "Avulsa";
    }
    else{
        return "Compra";
    }
}

double funcoes_extras::arredonda_para_duas_casas_decimais(double valor){
    int real;
    int centavos;
    int resto;

    double aux_centavos;

    real = valor;
    resto = (valor-real)*10000;
    centavos = resto/100;
    resto = resto - centavos*100;

    if (resto>=56){
        centavos = centavos+1;
    }
    aux_centavos = centavos;
    valor = real+aux_centavos/100;

    return valor;
}

std::vector< QString > funcoes_extras::determina_parcelas(QDate data_inicial,int dia_vencimento,int numero_parcelas){
    std::vector< QString >  data_das_parcelas;
    QString data;

    int dia,mes,ano;
    std::vector< int > meses;
    std::vector< int > dias;
    std::vector< int > anos;

    dia = data_inicial.day();
    mes = data_inicial.month();
    ano = data_inicial.year();

    for(int i=0;i<numero_parcelas;i++){
        if(i==0){
            if(dia_vencimento!=0){
                if ((dia_vencimento-dia)<9){
                    mes = mes+1;
                    if (mes>12){
                        mes = 1;
                        ano = ano+1;
                        anos.push_back(ano);
                        meses.push_back(mes);
                    }
                    else{
                        meses.push_back(mes);
                        anos.push_back(ano);
                    }
                }
                else{
                    meses.push_back(mes);
                    anos.push_back(ano);
                }
            }
            else{
                meses.push_back(mes);
                anos.push_back(ano);
            }
        }
        else{
        mes = mes+1;
            if (mes>12){
                mes = 1;
                ano = ano+1;
                meses.push_back(mes);
                anos.push_back(ano);
            }
            else{
                meses.push_back(mes);
                anos.push_back(ano);
            }
        }

        if ((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)){
            dias.push_back(dia_vencimento);
        }
        else{
            if (mes==2){
                if (dia_vencimento>28){
                    if ((((ano%4)==0)&&((ano%100)!=0))||((ano%400)==0)){
                        dias.push_back(29);
                    }
                    else{
                        dias.push_back(28);
                    }
                }
                else{
                    dias.push_back(dia_vencimento);
                }
            }
            else{
                if ((mes==4)||(mes==6)||(mes==9)||(mes==11)){
                    if (dia_vencimento>30){
                        dias.push_back(30);
                    }
                    else{
                        dias.push_back(dia_vencimento);
                    }
                }
            }
        }
        QString dia_s = QString::number(dia);
        QString mes_s = QString::number(mes);
        if (dia_s.size()<2)
            dia_s = "0"+dia_s;
        if (mes_s.size()<2)
            mes_s = "0"+mes_s;
        data = dia_s+"/"+mes_s+"/"+QString::number(ano);
        data_das_parcelas.push_back(data);
    }
    return data_das_parcelas;
}

QString funcoes_extras::converte_despesa_numero_origem_nome(int ori){
    if(ori==0)
    {
        return "Cartão";
    }
    else{
    if(ori==1){
        return "Cheque";
    }
    else{
        return "Dinheiro";
    }
    }
}

QString funcoes_extras::converte_despesa_numero_status_nome(int ori){
    if(ori==0)
    {
        return "Aberta";
    }
    else{
    if(ori==1){
        return "Paga";
    }
    else{
        return "Atrasada";
    }
    }
}
