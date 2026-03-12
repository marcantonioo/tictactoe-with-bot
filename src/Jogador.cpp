#include "../include/Jogador.hpp"
#include "../include/tabuleiro.hpp"
#include <iostream>

Jogador::Jogador(int id): id(id){}

bool Jogador::realizarJogada(Tabuleiro* tabuleiro){
    int i = 4, j = 4;
    while((i > 2 || i < 0) || (j > 2 || j < 0)){
        std::cout << "Jogador " << id << "escreva a coluna e a linha da sua jogada ";
        std::cin >> i >> j;
        if ((i > 2 || i < 0) || (j > 2 || j < 0))
            std::cout << "jogue dentro dos valores do jogo!" << std::endl;
    }
    tabuleiro->setPosicao(i, j, id);
    return true;
}