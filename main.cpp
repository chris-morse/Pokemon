//main.cpp 
//Driver for the Pokemon game
//Chris Morse & Quinn Carmack 
//Created 3/14/22
//Current 3/15/22
#include "Player.hpp"
#include <cmath>
#include <ctime>
#include <random>

using namespace std;
#define underline "\033[4m"

void displayStats(Pokemon poke);

Pokemon getPokemon();

void hunt();

void PokeCenter();


Player player;

int main(){

	char yn;
	player.myPokemon[0] = Pokemon();

	int enter;

	cout << endl << endl << endl;
	cout << "\033[33mWelcome to Pokemon\033[0m" << endl << "Created by Chris Morse and Quinnito" << endl;
sleep(2);
	cout << endl << endl << "Hello there! What is your name?" << endl;
	cin >> player.name;
sleep(1);
	cout << endl << "Greetings Trainer " << player.name << "!" << endl << endl;
sleep(2);
	cout <<	"It's time to make a very important decision." << endl << endl;
sleep(2);
	cout << "What starter pokemon would you like?" << endl << endl << endl;
sleep(2);
	cout <<
			"Name		Type		\033[5mEnter:\033[0m" << endl << endl <<
			"\033[31mChimchar\033[0m	\033[41;1m Fire \033[0m		  1" << endl << endl <<
		  	"\033[34mPiplup\033[0m		\033[44;1m Water \033[0m		  2" << endl << endl <<
			"\033[32mTurtwig\033[0m		\033[42;1m Grass \033[0m		  3" << endl << endl;
			cin >> enter;
	if(enter == 1)
		player.myPokemon[0] = Pokemon("chimchar");
	else if(enter == 2)
		player.myPokemon[0] = Pokemon("piplup");
	else if(enter == 3)
		player.myPokemon[0] = Pokemon("turtwig");
	
sleep(1);
	cout << endl << "You chose " << player.myPokemon[0].name << endl << endl;
sleep(1);
	cout << endl << "Great choice!" << endl << endl << endl ;
sleep(1);
	cout << "Would you like to give your " << player.myPokemon[0].name << " a nickname? Y or N" << endl;
	cin >> yn;
sleep(1);
	if(yn == 'Y' || yn == 'y')
	{
		cout << "Enter nickname: " << endl;
		cin >> player.myPokemon[0].nickname;
	} else{
		player.myPokemon[0].nickname = player.myPokemon[0].name; }
sleep(1);
	displayStats(player.myPokemon[0]);
sleep(2);
	cout << endl << endl << player.name << "'s Bank Account: $" << player.money << endl;
sleep(3);
	cout << endl << endl <<
		"Okay " << player.name << ", you and " << player.myPokemon[0].nickname << " are ready to begin your adventure!" << endl;


	cout << "Let's begin by searching around the woods for pokemon.";
	hunt();

	cout << "Now, let's visit the PokeCenter to heal your Pokemon!" << endl;
	PokeCenter();

}


void hunt()
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

void PokeCenter(){
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


