#ifndef CARRO_HPP
#define CARRO_HPP
#include <string>

class carro{
    private:
        int ano;
        float valor,km;
        std::string carro_nome;

    public:
        void imprimir();

        void setano(int ano);

        int getano();

        void setanovalor(float valor);
        
        float getvalor();

        void setkm(float km);

        float getkm();

        std::string getcarro_nome();

        void setcarro_nome(std::string carro_nome);

};

int obter_ano();

float obter_valor();

float obter_km();

std::string obter_carro_nome();


#endif