//Player.hpp 
//Created by Chris Morse 3/15/22
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
using namespace std;

class Player
{

public:

	string name;
	double money;
	double wins;
	
	Player() : money(6.34), wins(0) {}

};

#endif