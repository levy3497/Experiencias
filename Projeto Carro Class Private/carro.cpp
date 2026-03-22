#include "carro.hpp"
#include <iostream>

void carro::imprimir(){
    std::cout << "Seu Veiculo " << carro_nome << ":\n";
    std::cout << "Ano: " << ano << std::endl;
    std::cout << "Valor: " << valor << "R$" << std::endl;
    std::cout << "Kilometragem: " << km << "Km" << std::endl;
}

void carro::setano(int ano){
    this->ano = ano;
}

int carro::getano(){
    return ano;
}

void carro::setanovalor(float valor){
    this->valor = valor;
}

float carro::getvalor(){
    return valor;
}

void carro::setkm(float km){
    this->km = km;
}

float carro::getkm(){
    return km;
}

int obter_ano(){
    int ano;
    std::cout << "digite ano carro: ";
    std::cin >> ano;
    return ano;
}

float obter_valor(){
    float valor;
    std::cout << "digite valor carro: ";
    std::cin >> valor;
    return valor;
}

float obter_km(){
    float km;
    std::cout << "digite Kilometragem carro: ";
    std::cin >> km;
    return km;
}

std::string obter_carro_nome(){
    std::string carro_nome;
    std::cout << "digite o nome do veiculo: ";
    std::cin.ignore();
    getline(std::cin,carro_nome);
    return carro_nome;
}

void carro::setcarro_nome(std::string carro_nome){
    this->carro_nome = carro_nome;
}

std::string carro::getcarro_nome(){
    return carro_nome;   
}