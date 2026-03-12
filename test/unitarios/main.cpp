#include "unit-Tabuleiro.hpp"
#include "unit-Jogador.hpp"
#include <iostream>

using namespace std;
int main(){
    unit_Tabuleiro TabTester;
    unit_Jogador JogadorTester;
    TabTester.test_tabuleiro_initial();
    cout << "Testes de inicialização do tabuleiro passaram!" << endl;
    TabTester.test_tabuleiro_setPosicao();
    cout << "Testes de setPosicao do tabuleiro passaram!" << endl;
    TabTester.test_tabuleiro_verificarVitoria();
    cout << "Testes de verificar vitoria passaram!" << endl;
    TabTester.test_tabuleiro_verificarEmpate();
    cout << "Testes de verificar empate passaram!" << endl << endl;
    JogadorTester.test_realizarJogada();
    cout << "Testes realizarJogada passaram!";
    return 0;
}