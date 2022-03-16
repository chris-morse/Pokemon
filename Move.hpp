#ifndef MOVE_HPP
#define MOVE_HPP
#include <iostream>
#include <string>
using namespace std;

enum MOVETYPES {attack, spAttack, attackBuff, speedBuff, defenseBuff, spAttackBuff, spDefenseBuff, attackNerf, speedNerf, spAttackNerf, defenseNerf, spDefenseNerf};

enum TYPES {fire, water, grass, normal, rock, steel, electric, poison, psychic, ice, ground, ghost, flying, fighting, fairy, dragon, dark, bug};

class Move
{
public:

	TYPES type;
	MOVETYPES moveType;

	int modifier; //depending on the movetype, does damage or changes a stat.
	int accuracy;
	string name;
	string description; //description for the move in inventory

	Move();
	Move(string moveName); //much like the pokemon class, moveName will trigger
						   //desired initialization for each move.
	

};
#endif