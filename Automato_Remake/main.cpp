#include <iostream>
#include <stdlib.h>
#include "automato.hpp"
#include "montagem.hpp"

#define MINIAUDIO_IMPLEMENTATION
#include "miniaudio.h"

using namespace std;

int main() {
    ma_engine engine;
    ma_engine_init(NULL, &engine);
    ma_engine_play_sound(&engine, "audio_fundo.mp3", NULL);

    automato automato_main_player;
    automato automato_main_ia;

    impressoes_iniciais();

    montar_automato_player(automato_main_player);
    montar_automato_ia(automato_main_ia, automato_main_player.get_energia());

    automato_main_player.imprimir();
    automato_main_ia.imprimir();

    cout << "\nPressione ENTER para encerrar...";
    cin.ignore(); 
    cin.get();

    ma_engine_uninit(&engine);
    return 0;
}

/*
--------------------------------------------------------------------------------
AVISO DE AUTORIA:
Todo o sistema de áudio e integração da biblioteca miniaudio.h foi projetado 
e implementado via vibe coding com o modelo de IA Gemini da Google.
--------------------------------------------------------------------------------
*/
