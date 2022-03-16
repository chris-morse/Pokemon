# makefile
# Pokemon
# created: 3/15/22

all: game
    
game: main.o
	g++ -o game main.o
    
main.o: main.cpp Pokemon.hpp Player.hpp
	g++ -c main.cpp
    
clean:
	rm main.o game