.PHONY: TESTES BUILD_OBJ CLEAN UNIT

# inicio make clean
clean:
	rm -r bin
# fim make clean

TESTES: UNIT

UNIT: dirs BUILD_OBJ bin/unit-Tabuleiro.o bin/unitMain.o bin/unit-Jogador.o
	g++ -Wextra bin/unitMain.o bin/unit-Tabuleiro.o bin/tabuleiro.o bin/unit-Jogador.o bin/Jogador.o -o bin/exeunit
	./bin/exeunit < input.txt


# inicio Objects classes basicas
BUILD_OBJ: bin/tabuleiro.o bin/Jogador.o

bin/tabuleiro.o: src/tabuleiro.cpp
	g++ -c src/tabuleiro.cpp -o bin/tabuleiro.o -Wextra

bin/Jogador.o: src/Jogador.cpp
	g++ -c src/Jogador.cpp -o bin/Jogador.o -Wextra

# Fim Objects classes basicas

# inicio Diretorios necessarios
dirs: 
	mkdir -p bin

# Fim Diretorios necessarios


# Objects testes unitarios
bin/unit-Tabuleiro.o: test/unitarios/unit-Tabuleiro.cpp
	g++ -c -Wextra test/unitarios/unit-Tabuleiro.cpp -o bin/unit-Tabuleiro.o

bin/unit-Jogador.o:
	g++ -c -Wextra test/unitarios/unit-Jogador.cpp -o bin/unit-Jogador.o

bin/unitMain.o: test/unitarios/main.cpp
	g++ -c -Wextra test/unitarios/main.cpp -o bin/unitMain.o