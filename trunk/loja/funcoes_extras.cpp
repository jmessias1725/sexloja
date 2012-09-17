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
