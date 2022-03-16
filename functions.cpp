#include "Move.hpp"
#include "Pokemon.hpp"
#include "Player.hpp"
using namespace std;


void displayStats(Pokemon poke);
Pokemon getPokemon();
void hunt(Player player);
void PokeCenter(Player player);

void hunt(Player player)
{

	cout << "You begin searching for wild pokemon" << endl;

	Pokemon wildPokemon = getPokemon();

	cout << "You encountered a wild " << wildPokemon.name << "." << endl << 
			"Time to battle!" << endl;
	
	//battle(wildPokemon);

}

Pokemon getPokemon(){

	Pokemon newPoke;
	srand(time(0));

	//percentages will be changed. 

	int num = rand() % 100;

	if(num >= 0 && num < 11){
		newPoke = Pokemon("chimchar");
	}
	else if(num >= 11 && num < 21){
		newPoke = Pokemon("piplup");
	}
	else if(num >= 21 && num < 31){
		newPoke = Pokemon("turtwig");
	}
	else if(num >= 31 && num < 34){
		newPoke = Pokemon("pikachu");
	}
	else if(num >= 31 && num < 34){
		newPoke = Pokemon("pikachu");
	}
	else if(num >= 34 && num < 44){
		newPoke = Pokemon("bidoof");
	}
	else if(num >= 44 && num < 54){
		newPoke = Pokemon("cranidos");
	}
	else if(num >= 54 && num < 64){
		newPoke = Pokemon("buizel");
	}
	else if(num >= 64 && num < 74){
		newPoke = Pokemon("starly");
	}
	else if(num >= 84 && num < 94){
		newPoke = Pokemon("ralts");
	}

	return newPoke;
}

void PokeCenter(Player player){
	char yn;
	cout << endl << "Welcome to the PokeCenter. Would you like to heal your pokemon?" << endl;
	cin >> yn;

	if(yn == 'Y' || yn == 'y')
	{
		sleep(1);
		cout << "Okay. Healing your Pokemon for you now..." << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << ". ";
			cout.flush();
			sleep(1);
			player.myPokemon[i].hp = player.myPokemon[i].maxhp; 
			
		}
		cout << endl << "Pokemon healed. Have a great day Trainer " << player.name << "!";
		
	} else{
		cout << "Goodbye." << endl;
	}

}

void displayStats(Pokemon poke)
{
	cout << endl << endl << 
	"\033[4m" << poke.nickname << ":\033[0m" << "  Level " << poke.level << endl << 
	"Max Hp: " << poke.maxhp << endl <<
	"Speed: " << poke.speed << endl <<
	"Attack: " << poke.attack << endl <<
	"Defense: " << poke.defense << endl <<
	"Special Attack: " << poke.spAttack << endl <<
	"Special Defense: " << poke.spDefense << endl <<
	"Move 1: " << poke.move[0].name << endl << 
	"Description: " << poke.move[0].description << endl ;


}


