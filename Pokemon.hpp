#ifndef POKEMON_HPP
#define POKEMON_HPP
#include <iostream>
#include <string>
using namespace std;

class Pokemon
{


private:

	int level;
	int hp;
	int speed;
	int attack;
	int defense;
	int spAttack;
	int spDefense;
	

public:
    

    string name;
    string nickname;
       
	Pokemon();
	int getHealth() const;
	void setName(string);




};

#endif