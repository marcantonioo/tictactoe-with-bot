#include "tabuleiro.hpp"
class Jogador {
private:
    int id;
public:
    Jogador(int id);
    virtual bool realizarJogada(Tabuleiro* tabuleiro);
};
