#ifndef MONTAGEM_HPP
#define MONTAGEM_HPP

#include "automato.hpp"

//arquivo montagem.hpp

void montar_automato_player(automato&);
void montar_automato_ia(automato&, int);

int obter_energia();
std::string obter_nome();

void distribuir_pontos_player(automato&);
void distribuir_pontos_ia(automato&);

int perfis_explicacao();
void perfis_montagem(automato&, int);

std::string banco_de_nomes_ia();

#endif