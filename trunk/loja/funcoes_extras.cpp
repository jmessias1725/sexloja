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
