.PHONY: TESTES BUILD_OBJ CLEAN UNIT

TESTES: UNIT

UNIT: BUILD_OBJ bin/unit-Tabuleiro.o bin/unitMain.o 
	g++ -Wextra bin/unitMain.o bin/unit-Tabuleiro.o bin/tabuleiro.o -o bin/exeunit
	./bin/exeunit

bin/unit-Tabuleiro.o: test/unitarios/unit-Tabuleiro.cpp
	g++ -c -Wextra test/unitarios/unit-Tabuleiro.cpp -o bin/unit-Tabuleiro.o

bin/unitMain.o: test/unitarios/main.cpp
	g++ -c -Wextra test/unitarios/main.cpp -o bin/unitMain.o

BUILD_OBJ: bin/tabuleiro.o

bin/tabuleiro.o: src/tabuleiro.cpp
	g++ -c src/tabuleiro.cpp -o bin/tabuleiro.o -Wextra
