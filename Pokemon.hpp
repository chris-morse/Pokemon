//Pokemon.hpp 
//Created by Chris Morse 3/14/22
#ifndef POKEMON_HPP
#define POKEMON_HPP
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

enum TYPES {fire, water, grass, normal, rock, steel, electric, poison, psychic, ice, ground, ghost, flying, fighting, fairy, dragon, dark, bug};
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
    
	Pokemon();
	Pokemon(string);
};
#endif

Pokemon::Pokemon(){

	level = 1;
	maxhp = 20;
	hp = 20;
	speed = 10;
	attack = 10;
	defense = 10;
	spAttack = 10;
	spDefense = 10;

}

Pokemon::Pokemon(string p){

	level = 1;
	maxhp = 20;
	hp = 20;
	speed = 10;
	attack = 10;
	defense = 10;
	spAttack = 10;
	spDefense = 10;

	if(p == "chimchar") // 	Chimchar
	{
		name = "Chimchar";
		type = fire;
	}
	if(p == "turtwig") // 	Turtwig
	{
		name = "Turtwig";
		type = grass;
	}
	if(p == "piplup") // 	Piplup
	{
		name = "Piplup";
		type = water;
	}
	if(p == "pikachu")  // 	Pikachu
	{
		name = "Pikachu";
		type = electric;
	}

	if(p == "bidoof") // 	Bidoof
	{
		name = "Bidoof";
		type = normal;
	}
	if(p == "cranidos") //	Cranidos
	{
		name = "Cranidos";
		type = rock;
	}
	if(p == "buizel") //	Buizel
	{
		name = "Buizel";
		type = water;
	}

	if(p == "starly") //	Starly
	{
		name = "Starly";
		type = flying;
	}

	if(p == "ralts") //		Ralts
	{
		name = "Ralts";
		type = psychic;
	}
}