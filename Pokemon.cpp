//Pokemon.cpp
//Pokemon class implementation

#include "Pokemon.hpp"

Pokemon::Pokemon()
{
	level = 1;
	hp = 10;
	speed = 10;
	attack = 10;
	defense = 10;
	spAttack = 10;
	spDefense = 10;

}

void Pokemon::setName(string n)
{
	name = n;
}

int Pokemon::getHealth() const
{
	return hp;
}
