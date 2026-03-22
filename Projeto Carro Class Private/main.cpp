#include <iostream>
#include "carro.hpp"

using namespace std;

int main(){
    carro fiat;
    
    fiat.setano(obter_ano());
    fiat.setanovalor(obter_valor());
    fiat.setkm(obter_km());
    fiat.setcarro_nome(obter_carro_nome());
    
    fiat.imprimir();
    
    return 0;
}