//Pokemon main.cpp
// just getting things started right now
#include "Pokemon.hpp"
using namespace std;

int main(){

	Pokemon starter;
	string username;
	int enter;

	cout << "Welcome to Pokemon" << endl << "Created by Chris Morse" << endl;
	cout << "What is your name?" << endl;
	
	cin >> username;
	cout << "Hello " << username << ". What starter pokemon would you like?\n";
	cout << "Starter Pokemon are:" << endl << 
			"Chimchar	Type: Fire" << endl <<
		  	"Piplup		Type: Water" << endl <<
			"Turtwig	Type: Grass" << endl;
	cout << "Enter 1 for Chimchar, 2 for Piplup, or 3 for Turtwig" << endl;
	cin >> enter;

	if(enter == 1)
		starter.setName("Chimchar");
	else if(enter == 2)
		starter.setName("Piplup");
	else if(enter == 2)
		starter.setName("Turtwig");


	cout << "You chose " << starter.name << endl;




}