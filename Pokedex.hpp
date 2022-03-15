#ifndef POKEDEX_HPP
#define POKEDEX_HPP

#include "Pokemon.hpp"

class Chimchar : public Pokemon
{

public:

	string name = "Chimchar";
	TYPES type = fire;

	Chimchar();

};

class Turtwig : public Pokemon
{

public:

	string name = "Turtwig";
	TYPES type = grass;

	Turtwig();

};

class Piplup : public Pokemon
{

public:

	string name = "Piplup";
	TYPES type = water;

	Piplup();

};
#endif

