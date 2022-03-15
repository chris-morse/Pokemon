#ifndef POKEDEX_HPP
#define POKEDEX_HPP

#include "Pokemon.hpp"
using namespace std;

class Chimchar : public Pokemon
{

public:

	Chimchar() : Pokemon()
	{
		name = "Chimchar";
		type = fire;
	}

};

class Turtwig : public Pokemon
{

public:

	Turtwig() : Pokemon()
	{
		name = "Turtwig";
		type = grass;
	}

};

class Piplup : public Pokemon
{

public:

	Piplup() : Pokemon()
	{
		name = "Piplup";
		type = water;
	}


};

#endif