#ifndef MONTAGEM_HPP
#define MONTAGEM_HPP
#include "automato.hpp"
//arquivo montagem.hpp

void montar_automato_player(automato&);

int obter_energia();
std::string obter_nome();

void distribuir_pontos_player(automato&);
void distribuir_pontos_ia(automato&);

#endif