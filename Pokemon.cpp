#include "Pokemon.hpp"
using namespace std;

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

	{							// default stats
		level = 1;
		maxhp = 20;
		hp = 20;
		speed = 10;
		attack = 10;
		defense = 10;
		spAttack = 10;
		spDefense = 10;
	}
	
	
	{ 							// all pokemon
		if(p == "chimchar") // 	Chimchar
		{
			name = "Chimchar";
			type = fire;
			move[0] = Move("leer");
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
	
	} //pokemon


	{							// get moves
		//Move 1 = random normal attack move
		//Move 4 = random normal other move


		if(type == fire)
		{
			//Move 2 = random fire attack move
			//Move 3 = random fire other

		}
		if(type == water)
		{
			//Move 2 = random water attack move
			//Move 3 = random water other

		}
		if(type == grass)
		{
			//Move 2 = random grass attack move
			//Move 3 = random grass other
			
		}





	}

}

