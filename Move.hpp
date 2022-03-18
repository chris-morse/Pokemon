#ifndef MOVE_HPP
#define MOVE_HPP
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Move
{
public:

	string type;
	string name;
	string description;
	int accuracy;
	int power;
	map<string, int> modifiers;

	Move();
	Move(string moveName);

};
#endif