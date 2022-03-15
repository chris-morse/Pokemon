//main.cpp 
//Driver for the entire game
//Created by Chris Morse 3/14/22
#include "Pokedex.hpp"
#include "Player.hpp"
using namespace std;
#define underline "\033[4m"

void displayStats(Pokemon &poke);

int main(){

	Player player;
	Pokemon starter;
	int enter;
	char yn;

	cout << endl << endl << endl;
	cout << "\033[33mWelcome to Pokemon\033[0m" << endl << "Created by Chris Morse" << endl;
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
		starter = Chimchar();
	else if(enter == 2)
		starter = Piplup();
	else if(enter == 3)
		starter = Turtwig();
	
	sleep(1);
	cout << endl << "You chose " << starter.name << endl << endl;
	sleep(1);
	cout << endl << "Great choice!" << endl << endl << endl ;
	sleep(1);
	cout << "Would you like to give your " << starter.name << " a nickname? Y or N" << endl;
	cin >> yn;
	sleep(1);
	if(yn == 'Y' || yn == 'y')
	{
		cout << "Enter nickname: " << endl;
		cin >> starter.nickname;
	} else{
		starter.nickname = starter.name; }
	sleep(1);
	displayStats(starter);
	sleep(1);
	cout << endl << endl << player.name << "'s Bank Account: $" << player.money << endl;
	sleep(5);
	cout << endl << endl <<
		"Okay " << player.name << ", you and " << starter.nickname << " are ready to begin your adventure!" << endl;







}


void displayStats(Pokemon &poke)
{
	cout << endl << endl << 
	"\033[4m" << poke.nickname << ":\033[0m" << "  Level " << poke.level << endl << 
	"Max Hp: " << poke.maxhp << endl <<
	"Speed: " << poke.speed << endl <<
	"Attack: " << poke.attack << endl <<
	"Defense: " << poke.defense << endl <<
	"Special Attack: " << poke.spAttack << endl <<
	"Special Defense: " << poke.spDefense << endl;
}


