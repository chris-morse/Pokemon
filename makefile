# makefile
# Pokemon
# created: 3/15/22

all: game
    
game: main.o Pokemon.o
	g++ -o game main.o Pokemon.o
    
main.o: main.cpp Pokemon.hpp
	g++ -c main.cpp
    
Pokemon.o: Pokemon.cpp Pokemon.hpp
	g++ -c Pokemon.cpp
    
clean:
	rm Pokemon.o main.o game