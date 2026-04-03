#include <stdlib.h>
#include <iostream>
#include "automato.hpp"
#include "montagem.hpp"

//Arquivo montagem.cpp

void montar_automato_player(automato &automato_function) {
    automato_function.nome = obter_nome();
    automato_function.set_energia(obter_energia());
    distribuir_pontos_player(automato_function);
}

void montar_automato_ia(automato &automato_function, int energia) {
    automato_function.nome = banco_de_nomes_ia();
    automato_function.set_energia(energia);
    distribuir_pontos_ia(automato_function);
}

std::string obter_nome() {
    std::string nome;
    std::cout << "Digite nome: ";
    std::getline(std::cin, nome);
    return nome;
}

int obter_energia() {
    int energia;
    std::cout << "Digite Energia (Inimigo tera mesma quantidade): ";
    std::cin >> energia;
    return energia;
}

void distribuir_pontos_player(automato &automato_function) {
    bool escolha;
    std::cout << "Se quiser um perfil e sua explicacao digite 1 se nao 0: ";
    std::cin >> escolha;

    if (escolha == 1) {
        int escolha_retorno = perfis_explicacao();

        if (escolha_retorno == 1 || escolha_retorno == 2 || escolha_retorno == 3) {
            perfis_montagem(automato_function, escolha_retorno);
            system("clear||cls");
            std::cout << "Operacao Montagem bem sucedida\n";
            return;
        } else {
            std::cout << "Numero repassado invalido, insira manualmente\n";
        }
    }

    int ataque;
    int defesa;
    while (true) {
        std::cout << "Digite Total de Ataque e Defesa\n";
        std::cout << "Seu total de energia e de: " << automato_function.get_energia() << std::endl;

        std::cout << "Ataque: ";
        std::cin >> ataque;

        std::cout << "Defesa: ";
        std::cin >> defesa;

        if (ataque + defesa == automato_function.get_energia()) {
            automato_function.set_ataque(ataque);
            automato_function.set_defesa(defesa);
            std::cout << "Defina o nome de sua classe: ";
            std::cin.ignore();
            std::getline(std::cin, automato_function.classe_nome);
            std::cout << "Operacao Montagem bem sucedida\n";
            system("clear||cls");
            break;
        }

        system("clear||cls");
        std::cout << "Digite Novamente\n";
    }
}

void distribuir_pontos_ia(automato &automato_function) {
    int numero_perfil = gerar_num_aleatorio(1,3);
    perfis_montagem(automato_function, numero_perfil);
}

int perfis_explicacao() {
    int escolha_perfil;
    system("clear||cls");
    std::cout << "Perfis e uma nova forma de expressar seus pontos de uma forma melhorada!\n";
    std::cout << "Atualmente voce pode escolher entre as opcoes listadas abaixo:\n";
    std::cout << "1)Cavalheiro 2)Tank 3)Mutante\n";

    std::cin >> escolha_perfil;

    return escolha_perfil;
}

void perfis_montagem(automato &automato_function, int escolha_perfil) {
    if (escolha_perfil == 1) {
        int energia = automato_function.get_energia();
        int ataque = energia / 2;
        int defesa = energia - ataque;

        automato_function.set_ataque(ataque);
        automato_function.set_defesa(defesa);
        automato_function.classe_nome = "Cavalheiro";

    } else if (escolha_perfil == 2) {
        int energia = automato_function.get_energia();
        int defesa = energia * 65 / 100;
        int ataque = energia - defesa;

        automato_function.set_defesa(defesa);
        automato_function.set_ataque(ataque);
        automato_function.classe_nome = "Tank";

    } else if (escolha_perfil == 3) {
        int energia = automato_function.get_energia();
        int ataque = energia * 65 / 100;
        int defesa = energia - ataque;

        automato_function.set_defesa(defesa);
        automato_function.set_ataque(ataque);
        automato_function.classe_nome = "Mutante";
    }
}

std::string banco_de_nomes_ia() {
    std::string nomes[] = {
        "Ferro", "Nexus", "Kron", "Vex", "Titan",
        "Orion", "Raze", "Volt", "Cipher", "Drex",
        "Axon", "Pulse", "Zerk", "Nova", "Grim",
        "Slate", "Blitz", "Core", "Havoc", "Dusk",
        "Flux"
    };

    int nome_aleatorio = gerar_num_aleatorio(0, 20);
    return nomes[nome_aleatorio];
}