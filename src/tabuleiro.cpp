#include "../include/tabuleiro.hpp"

void Tabuleiro::setGame() {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            posicao[i][j] = 0;
        }
    }
}
int Tabuleiro::getPosicao(int i, int j) {
    return posicao[i][j];
}
void Tabuleiro::setPosicao(int i, int j, int valor) {
    posicao[i][j] = valor;
}
Tabuleiro::Tabuleiro() {
    setGame();
}
bool Tabuleiro::verificarVitoria(int valor){
    for(int i = 0; i < 3; i++){
        if (posicao[i][0] == valor && posicao[i][1] == valor && posicao[i][2] == valor)
            return true;
    }
    for (int i = 0; i < 3; i++){
        if (posicao[0][i] == valor && posicao[1][i] == valor && posicao[2][i] == valor)
            return true;
    }
    if (posicao[0][0] == valor && posicao[1][1] == valor && posicao[2][2] == valor)
        return true;
    if (posicao[0][2] == valor && posicao[1][1] == valor && posicao[2][0] == valor)
        return true;
    return false;
}

bool Tabuleiro::verificarEmpate(int time){
    int flag = 0;
    if(!verificarVitoria(1) && !verificarVitoria(2))
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (posicao[i][j] != 0)
                flag++;
        }
    }
    if(flag == 9)
        return true;
    return false;
}