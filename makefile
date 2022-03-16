# makefile
# Pokemon
# created: 3/15/22

all: game
    
game: main.o Pokemon.o Move.o functions.o
	g++ -o game Pokemon.o Move.o main.o 
    
main.o: main.cpp Player.hpp Pokemon.hpp functions.hpp
	g++ -c main.cpp

Pokemon.o: Pokemon.cpp Pokemon.hpp Move.hpp
	g++ -c Pokemon.cpp

Move.o: Move.cpp Move.hpp
	g++ -c Move.cpp

clean:
	rm main.o Pokemon.o Move.o game