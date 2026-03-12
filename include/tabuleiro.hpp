#ifndef TABULEIRO_HPP
#define TABULEIRO_HPP


class Tabuleiro {
private:
    int posicao[3][3];
    void setGame();

    public:
    Tabuleiro();
    void setPosicao(int i, int j, int valor);
    int getPosicao(int i, int j);
    bool verificarVitoria(int valor);
    bool verificarEmpate(int time);

    friend class unit_Tabuleiro;
};
#endif // TABULEIRO_HPP