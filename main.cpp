//Pokemon main.cpp
// just getting things started right now
#include "Pokedex.hpp"

using namespace std;

int main(){

	Pokemon starter;
	string username;
	string nickname;
	int enter;
	char yn;

	cout << "Welcome to Pokemon" << endl << "Created by Chris Morse" << endl;
	cout << "What is your name?" << endl;
	
	cin >> username;
	cout << endl << 
			"Hello Trainer " << username << "." << endl <<
			"What starter pokemon would you like?" << endl << endl <<
			"Name		Type		Enter" << endl <<
			"Chimchar	Fire		1" << endl <<
		  	"Piplup		Water		2" << endl <<
			"Turtwig		Grass		3" << endl;
	cin >> enter;

	if(enter == 1)
		starter = Chimchar();
	else if(enter == 2)
		starter = Piplup();
	else if(enter == 3)
		starter = Turtwig();


	cout << "You chose " << starter.name << endl;
	cout << "Would you like to give " << starter.name << " a nickname? Y or N" << endl;
	cin >> yn;
	if(yn == 'Y' || yn == 'y')
	{
		cout << "Enter nickname: " << endl;
		cin >> nickname;
		starter.nickname = nickname;
	} 
	else
		starter.nickname = starter.name;

	cout << "Okay " << username << ". You and " << starter.nickname << " are ready to begin your adventure!" << endl;




}