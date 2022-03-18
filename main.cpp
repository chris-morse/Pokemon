//main.cpp 
//Driver for the Pokemon game
//Chris Morse & Quinn Carmack 
//Created 3/14/22
//Current 3/15/22
#include <cmath>
#include <ctime>
#include <random>
#include "Move.hpp"
#include "Pokemon.hpp"
#include "Player.hpp"
#include "functions.hpp"

using namespace std;
#define underline "\033[4m"

int main(){

	cout << "\x1B[2J\x1B[H";

	Player player;
	char yn;
	player.myPokemon[0] = Pokemon();

	int enter;

{	// testing
	



	// end testing
}

	cout << endl << endl << endl;
	cout << "\033[33mWelcome to Pokemon\033[0m" << endl << "Created by Chris Morse and Quinnito" << endl;
	cout << endl << endl << "Hello Trainer! What is your name?" << endl << endl;
	cin >> player.name;
	cout << endl << "Greetings Trainer " << player.name << "!" << endl << endl;
	cout <<	"It's time to make a very important decision." << endl << endl;
	cout << "What starter pokemon would you like?" << endl << endl << endl;
	cout <<
			"Name		Type		\033[5mEnter:\033[0m" << endl << endl <<
			"\033[31mChimchar\033[0m	\033[41;1m Fire \033[0m		  1" << endl << endl <<
		  	"\033[34mPiplup\033[0m		\033[44;1m Water \033[0m		  2" << endl << endl <<
			"\033[32mTurtwig\033[0m		\033[42;1m Grass \033[0m		  3" << endl << endl <<
			"Enter: " ;
			cin >> enter;
	if(enter == 1)
		player.myPokemon[0] = Pokemon("chimchar");
	else if(enter == 2)
		player.myPokemon[0] = Pokemon("piplup");
	else if(enter == 3)
		player.myPokemon[0] = Pokemon("turtwig");
	cout << "\x1B[2J\x1B[H";
	cout << endl << "You chose " << player.myPokemon[0].name << endl << endl;
	cout << endl << "Great choice!" << endl << endl << endl ;
	cout << "Would you like to give your " << player.myPokemon[0].name << " a nickname? Y or N" << endl;
	cin >> yn;
	if(yn == 'Y' || yn == 'y')
	{
		cout << endl << "Enter nickname: " << endl;
		cin >> player.myPokemon[0].nickname;
	}
	displayStats(player.myPokemon[0]);
	cout << endl << endl << player.name << "'s Bank Account: $" << player.money << endl;
	cout << endl << endl <<
		"Okay " << player.name << ", you and " << player.myPokemon[0].nickname << " are ready to begin your adventure!" << endl << endl;
	cout << "Let's begin by searching around the woods for pokemon." << endl;
	hunt(player);
	cout << "\x1B[2J\x1B[H";
	cout << "Now, let's visit the PokeCenter to heal your Pokemon!" << endl;
	PokeCenter(player);

}
