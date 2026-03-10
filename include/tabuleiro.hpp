#ifndef TABULEIRO_HPP
#define TABULEIRO_HPP


class Tabuleiro {
private:
    int posicao[3][3];
    void setGame();
    void setPosicao(int i, int j, int valor);

    public:
    Tabuleiro();
    int getPosicao(int i, int j);
    bool realizarJogada(int i, int j, int valor);
    bool verificarVitoria(int valor);

    friend class unit_Tabuleiro;
};
#endif // TABULEIRO_HPP