//Pokemon.hpp 
//Created by Chris Morse 3/14/22
#ifndef POKEMON_HPP
#define POKEMON_HPP
#include "Move.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;


// types probably will only work/will work best as classes

class Pokemon
{
public:

    int level;
	int maxhp;
	int hp;
	int speed;
	int attack;
	int defense;
	int spAttack;
	int spDefense;

	TYPES type;

    string name;
    string nickname;
    
	Move move[4]; //Assign 4 moves in constructor. Varies for each pokemon type

	Pokemon();
	Pokemon(string);
};


#endif