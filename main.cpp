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
	cout << endl << endl << endl;
	cout << "\033[33mWelcome to Pokemon\033[0m" << endl << "Created by Chris Morse" << endl;
	sleep(2);
			cout << endl << endl <<
		"Hello there! What is your name?" << endl;
	
	cin >> username;
	
	sleep(2);
			cout << endl << 
			"Greetings Trainer " << username << "!" << endl << endl;
	sleep(3);
			cout <<
			username << ", it's time to make a very important decision." << endl << endl;
	sleep(2);
			cout << 
			"What starter pokemon would you like?" << endl << endl << endl;
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
	sleep(2);
	cout << endl << "Great choice!" << endl << endl << endl ;
	sleep(2);
	cout << "Would you like to give " << starter.name << " a nickname? Y or N" << endl;
	cin >> yn;
	sleep(1);
	if(yn == 'Y' || yn == 'y')
	{
		cout << "Enter nickname: " << endl;
		cin >> nickname;
		starter.nickname = nickname;
	} 
	else
		starter.nickname = starter.name;
	
	sleep(1);
	cout << endl << endl <<
		"Okay " << username << ", you and " << starter.nickname << " are ready to begin your adventure!" << endl;




}