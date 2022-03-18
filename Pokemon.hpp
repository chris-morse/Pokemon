//Pokemon.hpp 
//Created by Chris Morse 3/14/22
/**
 * This file stores the logisitics for the Pokemon object. 
 */
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
	int experience;
	int hp;
	int maxHp;
	string type;

	////// Base stats ////
	int speed;
	int attack;
	int defense;
	int specialAttack;
	int specialDefense;
	//////////////////////

    string name;
    string nickname;
    
	Move move[4]; //Assign 4 moves in constructor. Varies for each pokemon type

	Pokemon();
	Pokemon(string);
};

#endif