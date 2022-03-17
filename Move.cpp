#include "Move.hpp"

Move::Move(){

	name = "undefined move";

}

Move::Move(string moveName){

	{												// all moves
		if (moveName == "pound") // 	pound
		{	//Decreases opponent's hp
			name = "Pound";
			description = "Fiercely strikes the opponent";
			type = normal;
			moveType = attack;
			modifier = 6;
			accuracy = 90;
		}

		if (moveName == "pound") // 	pound
		{	//Decreases opponent's hp
			name = "Pound";
			description = "Fiercely strikes the opponent";
			type = normal;
			moveType = attack;
			modifier = 6;
			accuracy = 90;
		}



		if (moveName == "leer") // 		leer
		{	//Decreases opponent's defense
			name = "Leer";
			description = "Sizes up the opponent, causing them to lower their guard";
			type = normal;
			moveType = defenseNerf;
			modifier = 8;
			accuracy = 100;
			
		}



		//continue for every move


	}
	


}