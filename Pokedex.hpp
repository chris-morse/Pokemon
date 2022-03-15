//Pokedex.hpp 
//Stores class declarations of every pokemon in the game
//Created by Chris Morse 3/14/22
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

class Pikachu : public Pokemon
{
public:

	Pikachu() : Pokemon()
	{
		name = "Pikachu";
		type = electric;
	}

};

class Bidoof : public Pokemon
{
public:

	Bidoof() : Pokemon()
	{
		name = "Bidoof";
		type = normal;
	}

};

class Cranidos : public Pokemon
{
public:

	Cranidos() : Pokemon()
	{
		name = "Cranidos";
		type = rock;
	}

};

class Buizel : public Pokemon
{
public:

	Buizel() : Pokemon()
	{
		name = "Buizel";
		type = water;
	}

};

class Starly : public Pokemon
{
public:

	Starly() : Pokemon()
	{
		name = "Starly";
		type = flying;
	}

};

class Ralts : public Pokemon
{
public:

	Ralts() : Pokemon()
	{
		name = "Ralts";
		type = psychic;
	}

};


//insert as many pokemon as desired


#endif