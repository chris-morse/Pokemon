#include "Move.hpp"
#include "Pokemon.hpp"
#include "Player.hpp"
using namespace std;

void displayStats(Pokemon poke);
Pokemon getPokemon();
void hunt(Player &player);
void PokeCenter(Player &player);
void battle(Player &player, Pokemon &enemy);
void doMove(Pokemon &offensePoke, Pokemon &defensePoke, Move move);

void battle(Player &player, Pokemon &enemy){

	Pokemon playerPokemon = player.myPokemon[0]; //duplicate so that stats can be boosted 
												//temporarily during fights with buff/nerf moves

	int input;
	cout << "You are battling " << enemy.name << "!" << endl;
	
	cout << playerPokemon.name << " health: " << playerPokemon.hp << endl << endl;
	cout << enemy.name << " health: " << enemy.hp << endl << endl;;

	cout << "Moves: " << endl;
	cout << playerPokemon.move[0].name << endl;
	cout << playerPokemon.move[1].name << endl;
	cout << playerPokemon.move[2].name << endl;
	cout << playerPokemon.move[3].name << endl << endl;

	bool doesWork;
	int num; //RNG
	while(playerPokemon.hp > 0 && enemy.hp > 0){
		cout << "Enter your move: (1-4)" << endl;
		cin >> input;
		
		Move userMove = playerPokemon.move[input-1];

		int num = rand() % 4; //randomly picks enemy move
		Move enemyMove = enemy.move[num];
	
		if(playerPokemon.speed > enemy.speed)
		{
			doMove(playerPokemon, enemy, playerPokemon.move[num]);

		}else if (playerPokemon.speed < enemy.speed)
		{
			doMove(enemy, playerPokemon, enemy.move[num]);
		}else{
			num = rand() % 2;
			if (num = 1)
				doMove(playerPokemon, enemy, playerPokemon.move[num]);
			else
				doMove(enemy, playerPokemon, enemy.move[num]);
			}
			
	}





}




void doMove(Pokemon &attackPoke, Pokemon &defendPoke, Move move)
{
	if(rand()%100 > move.accuracy){
		cout << attackPoke.name << " missed!" << endl;
		return;
	}
		
	cout << attackPoke.nickname << " did " << move.name << "!";
	
	if(move.moveType == spAttack){
		//Type comparisons, check if attackPoke.type is weak/strong against that move.
		defendPoke.hp -= move.modifier; 

	}

	if(move.moveType == attack)
		defendPoke.hp -= move.modifier;

	if(move.moveType == attackBuff)
		attackPoke.attack += move.modifier;

	if(move.moveType == speedBuff)
		attackPoke.speed += move.modifier;
	
	if(move.moveType == defenseBuff)
		attackPoke.defense += move.modifier;

	if(move.moveType == spAttackBuff)
		attackPoke.spAttack += move.modifier;

	if(move.moveType == spDefenseBuff)
		attackPoke.spDefense += move.modifier;

	if(move.moveType == attackNerf)
		defendPoke.attack -= move.modifier;

	if(move.moveType == defenseNerf)
		defendPoke.defense -= move.modifier;

	if(move.moveType == speedNerf)
		defendPoke.speed -= move.modifier;

	if(move.moveType == spAttackNerf)
		defendPoke.spAttack -= move.modifier;

	if(move.moveType == spDefenseNerf)
		defendPoke.spDefense -= move.modifier;

}







//Search the area for wild pokemon.
void hunt(Player &player)
{
sleep(1);
	cout << endl << "You begin searching for wild pokemon" << endl;
	sleep(1);
	for (int i = 0; i < 3; i++){
		
		cout << ". ";	
		cout.flush();
		sleep(1);
	}
	
	Pokemon wildPokemon = getPokemon();

	cout << endl << endl << "You encountered a wild " << wildPokemon.name << "!" << endl;
sleep(2);
	cout << "Time to battle!" << endl;
sleep(1);
	cout << endl << "-battle here-" << endl << endl;
	//battle(wildPokemon);
}

//Generate a random Pokemon
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

//Visit the PokeCenter and heal pokemon
void PokeCenter(Player &player){
	char yn;
	cout << endl << "Welcome to the PokeCenter. Would you like to heal your pokemon?" << endl;
	cin >> yn;
	if(yn == 'Y' || yn == 'y')
	{
		sleep(1);
		cout << "Okay. Healing your Pokemon for you now." << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << ". ";
			cout.flush();
			sleep(1);
			player.myPokemon[i].hp = player.myPokemon[i].maxhp; 
		}
		cout << endl << "Pokemon healed. Have a great day Trainer " << player.name << "!";
		
	} else{
		cout << "Thank you for visiting the PokeCenter!" << endl;
	}
}

//Display a Pokemon's stats
void displayStats(Pokemon poke)
{
	cout << endl << endl << 
	"\033[4m" << poke.nickname << "\033[0m" << "  (" << poke.name << ")  Level " << poke.level << endl << 
	"Max Hp: " << poke.maxhp << endl <<
	"Speed: " << poke.speed << endl <<
	"Attack: " << poke.attack << endl <<
	"Defense: " << poke.defense << endl <<
	"Special Attack: " << poke.spAttack << endl <<
	"Special Defense: " << poke.spDefense << endl <<
	"Move 1: " << poke.move[0].name << endl << 
	"Description: " << poke.move[0].description << endl ;

}


