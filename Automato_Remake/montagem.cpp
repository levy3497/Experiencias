#include <stdlib.h>
#include <iostream>
#include "automato.hpp"
#include "montagem.hpp"

//Arquivo montagem.cpp

void montar_automato_player(automato &automato_function){
    automato_function.nome = obter_nome();
    automato_function.set_energia(obter_energia());
    distribuir_pontos_player(automato_function);
}

int obter_energia(){
    int energia;
    std::cout << "Digite Energia (Inimigo tera mesma quantidade): ";
    std::cin >> energia;
    return energia;
}

std::string obter_nome(){
    std::string nome;
    std::cout << "Digite nome: ";
    std::getline(std::cin,nome);
    return nome;
}


void distribuir_pontos_player(automato &automato_function){
    int ataque;
    int defesa;
    while (true){
        std::cout << "Digite Total de Ataque e Defesa\n";
        std::cout << "Seu total de energia e de: " << automato_function.get_energia() << std::endl;
        std::cout << "Ataque: ";
        std::cin >> ataque;
        std::cout << "Defesa: ";
        std::cin >> defesa;
        if (ataque + defesa == automato_function.get_energia()){
            automato_function.set_ataque(ataque);
            automato_function.set_defesa(defesa);
            system("clear||cls");
            std::cout << "Operacao Montagem bem sucedida\n";
            break;
        }
        system("clear||cls");
        std::cout << "Digite Novamente\n";
    }
}

void distribuir_pontos_ia(automato &automato_function){

}