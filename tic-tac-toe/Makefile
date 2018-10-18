all: tictactoe

tictactoe: tictactoe.o GameLogic.o Board.o
	g++ -std=c++11 -Wall -o $@ $^ -g

tictactoe.o: tictactoe.cpp GameLogic.h Board.h Util.h
	g++ -c -std=c++11 -Wall -O2 -o $@ $< -g

GameLogic.o: GameLogic.cpp GameLogic.h Board.h Util.h
	g++ -c -std=c++11 -Wall -O2 -o $@ $< -g

Board.o: Board.cpp Board.h Util.h
	g++ -c -std=c++11 -Wall -O2 -o $@ $< -g

clean:
	rm -f tictactoe tictactoe.o GameLogic.o Board.o
