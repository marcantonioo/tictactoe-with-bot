#include "unit-Tabuleiro.hpp"
#include <iostream>

using namespace std;
int main(){
    unit_Tabuleiro tester;
    tester.test_tabuleiro_initial();
    cout << "Testes de inicialização do tabuleiro passaram!" << endl;
    tester.test_tabuleiro_setPosicao();
    cout << "Testes de setPosicao do tabuleiro passaram!" << endl;
    tester.test_tabuleiro_verificarVitoria();
    cout << "Testes de verificar vitoria passaram!" << endl;
    tester.test_tabuleiro_verificarEmpate();
    cout << "Testes de verificar empate passaram!" << endl;
    return 0;
}