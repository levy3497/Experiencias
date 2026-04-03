#ifndef AUTOMATO_HPP
#define AUTOMATO_HPP

#include <string>

//arquivo automato.hpp

class automato {
    public:
        std::string classe_nome;
        std::string nome_automato;
        std::string nome_humano;
        int vitorias;
        int derrotas;

        void imprimir();

        void set_energia(int energia);
        int get_energia();

        void set_ataque(int ataque);
        int get_ataque();

        void set_defesa(int defesa);
        int get_defesa();

    private:
        int energia;
        int ataque;
        int defesa;
};

void impressoes_iniciais();
void impressoes_historia();

int gerar_num_aleatorio(int min, int max);

#endif