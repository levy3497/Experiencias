#include "automato.hpp"
#include <iostream>
#include <random>

//Arquivo automato.cpp

void automato::imprimir() {
    std::cout << "#############################################\n";
    std::cout << "Seu nome e: " << nome << std::endl;
    std::cout << "Total energia de: " << energia << std::endl;
    std::cout << "Total de ataque de: " << ataque << std::endl;
    std::cout << "Total de defesa de: " << defesa << std::endl;
    std::cout << "Sua classe e de: " << classe_nome << std::endl;
    std::cout << "#############################################\n";
}

void impressoes_iniciais() {
    std::cout << "----------------\n";
    std::cout << "AUTOMATO REMAKE\n";
    std::cout << "----------------\n";
}

int gerar_num_aleatorio(int min, int max) {
    int num_aleatorio;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution range(min, max);
    num_aleatorio = range(gen);
    return num_aleatorio;
}

void automato::set_energia(int energia) {
    this->energia = energia;
}

int automato::get_energia() {
    return energia;
}

void automato::set_ataque(int ataque) {
    this->ataque = ataque;
}

int automato::get_ataque() {
    return ataque;
}

void automato::set_defesa(int defesa) {
    this->defesa = defesa;
}

int automato::get_defesa() {
    return defesa;
}