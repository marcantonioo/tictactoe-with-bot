#include <cassert>
#include <iostream>
#include "unit-Tabuleiro.hpp"
#include "../../include/tabuleiro.hpp"
void unit_Tabuleiro::test_tabuleiro_initial(){
    Tabuleiro tabuleiro;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            assert(tabuleiro.getPosicao(i,j) == 0);
        }
    }
}
void unit_Tabuleiro::test_tabuleiro_setPosicao(){
    Tabuleiro tabuleiro;
    tabuleiro.setPosicao(1,1,1);
    assert(tabuleiro.getPosicao(1,1) == 1);
}

void unit_Tabuleiro::test_tabuleiro_verificarVitoria(){
    Tabuleiro tabuleiro;
    tabuleiro.setPosicao(1,1,1);
    tabuleiro.setPosicao(0,1,1);
    tabuleiro.setPosicao(2,1,1);
    assert(tabuleiro.verificarVitoria(1) == true);
}
void unit_Tabuleiro::test_tabuleiro_verificarEmpate(){
    Tabuleiro tabuleiro;
    tabuleiro.setPosicao(1,1,1);
    tabuleiro.setPosicao(0,1,1);
    tabuleiro.setPosicao(2,1,1);
    tabuleiro.setPosicao(1,0,2);
    tabuleiro.setPosicao(0,0,2);
    tabuleiro.setPosicao(2,0,1);
    tabuleiro.setPosicao(1,2,2);
    tabuleiro.setPosicao(0,2,2);
    tabuleiro.setPosicao(2,2,1);
    assert(tabuleiro.verificarEmpate(1) == false);
    assert(tabuleiro.verificarEmpate(2) == false);
    tabuleiro.setPosicao(0,0,1);
    tabuleiro.setPosicao(0,1,2);
    tabuleiro.setPosicao(0,2,2);
    tabuleiro.setPosicao(1,0,2);
    tabuleiro.setPosicao(1,1,1);
    tabuleiro.setPosicao(1,2,1);
    tabuleiro.setPosicao(2,0,1);
    tabuleiro.setPosicao(2,1,1);
    tabuleiro.setPosicao(2,2,2);
    assert(tabuleiro.verificarEmpate(1) == true);
    assert(tabuleiro.verificarEmpate(2) == true);
}
