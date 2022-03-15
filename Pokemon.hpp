#ifndef POKEMON_HPP
#define POKEMON_HPP
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

enum TYPES {fire, water, grass, normal, rock, steel, electric, poison, psychic, ice, ground, ghost, flying, fighting, fairy, dragon, dark, bug};

class Pokemon
{
public:

    int level;
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
	void setName(string);


};

#endif