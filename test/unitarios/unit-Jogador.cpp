#include "unit-Jogador.hpp"
#include "../../include/Jogador.hpp"
#include <cassert>

void unit_Jogador::test_realizarJogada(){
    Tabuleiro tab;
    Jogador teste(1);
    assert(teste.realizarJogada(&tab) == true);
}
 
