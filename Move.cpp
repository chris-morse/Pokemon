#include "Move.hpp"

Move::Move(){

	name = "undefined move";

}

Move::Move(string moveName) {											
	// all moves
	if (moveName == "pound") 
	{
		name = "Pound";
		description = "Fiercely strikes the opponent";
		type = "normal";
		accuracy = 90;
		modifiers = {
			{"power", 40},
			{"nerfAttack",10}
		};
	}

	if (moveName == "pound")
	{
		name = "Pound";
		description = "Fiercely strikes the opponent";
		type = "normal";
		accuracy = 90;
	}
	if (moveName == "leer") 
	{
		name = "Leer";
		description = "Sizes up the opponent, causing them to lower their guard";
		type = "normal";
		accuracy = 100;
	}
	if (moveName == "fireSpray")
	{
		name = "Fire Spray";
		description = "Executes firey shit out your asshole.";
		type = "fire";
		accuracy = 90;
	}
}


