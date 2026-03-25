#include <iostream>
#include <stdlib.h>
#include "automato.hpp"
#include "montagem.hpp"
using namespace std;

//arquivo main.cpp

int main(){
    automato automato_main_player;

    impressoes_iniciais();

    montar_automato_player(automato_main_player);
    
    automato_main_player.imprimir();

    return 0;
}