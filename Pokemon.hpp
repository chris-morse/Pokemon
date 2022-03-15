#ifndef POKEMON_HPP
#define POKEMON_HPP
#include <string>
#include <iostream>
using namespace std;


class Pokemon
{
      
private:
	
	int hp;
	int speed;
	int attack;
	int defense;
	int spAttack;
	int spDefense;

public:
       
    string name;
    string nickname;
       
    int getHealth() const;
  






};
#endif