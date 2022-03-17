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
	int num; //RNG
	
	while(playerPokemon.hp > 0 && enemy.hp > 0){

		cout << endl;
		cout << playerPokemon.name << " health: " << playerPokemon.hp << endl << endl;
		cout << enemy.name << " health: " << enemy.hp << endl << endl;;

		cout << "Moves: " << endl;
		cout <<	"1. " << playerPokemon.move[0].name << endl;
		cout << "2. " << playerPokemon.move[1].name << endl;
		cout << "3. " << playerPokemon.move[2].name << endl;
		cout << "4. " << playerPokemon.move[3].name << endl << endl;

		cout << "Enter move 1-4:" << endl;
		cin >> input;
	sleep(1);
		Move userMove = playerPokemon.move[input-1];

		int num = rand() % 4; //randomly picks enemy move
		Move enemyMove = enemy.move[num];
	
		if(playerPokemon.speed > enemy.speed) // Highest speed goes first every time
		{
			doMove(playerPokemon, enemy, userMove);
				if(playerPokemon.hp < 1 || enemy.hp < 1)
					break;
			sleep(1);
			doMove(enemy, playerPokemon, enemyMove);
				if(playerPokemon.hp < 1 || enemy.hp < 1)
					break;
			sleep(1);

		}else if (playerPokemon.speed < enemy.speed)
		{
			doMove(enemy, playerPokemon, enemyMove);
				if(playerPokemon.hp < 1 || enemy.hp < 1)
					break;
			sleep(1);
			doMove(playerPokemon, enemy, userMove);
				if(playerPokemon.hp < 1 || enemy.hp < 1)
					break;
			sleep(1);
		}else
		{
			num = rand() % 2;
			if (num == 1)
			{
				doMove(playerPokemon, enemy, userMove);
					if(playerPokemon.hp < 1 || enemy.hp < 1)
						break;
				sleep(1);
				doMove(enemy, playerPokemon, enemyMove);
					if(playerPokemon.hp < 1 || enemy.hp < 1)
						break;
				sleep(1);
			}
			else
			{
				doMove(enemy, playerPokemon, enemyMove);
					if(playerPokemon.hp < 1 || enemy.hp < 1)
						break;
				sleep(1);
				doMove(playerPokemon, enemy, userMove);
					if(playerPokemon.hp < 1 || enemy.hp < 1)
						break;
				sleep(1);
			}
		}
			

	}//while still alive

	player.myPokemon[0].hp = playerPokemon.hp; //transfer the hp from the battle-tested clone back to the original pokemon

	if(enemy.hp < 1)
	{
		cout << enemy.name << " was defeated by " << player.name << "!" << endl;

	}else
	{

		cout << player.name << " was defeated by " << enemy.name << "!" << endl;
		cout << player.myPokemon[0].name << " health: " << player.myPokemon[0].hp << endl;

	}

	




}




void doMove(Pokemon &attackPoke, Pokemon &defendPoke, Move move)
{
	if(rand()%100 > move.accuracy){
		cout << attackPoke.name << " missed!" << endl;
		return;
	}
		
	cout << attackPoke.nickname << " did " << move.name << "!" << endl << endl;

	
	if(move.moveType == spAttack){
		//Type comparisons, check if attackPoke.type is weak/strong against that move.
		//But for now,
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
	battle(player, wildPokemon);
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


