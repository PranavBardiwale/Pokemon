#include<string>
#include"PokemonChoice.h"
#include"PokemonType.h"
#include"utility.h"
using namespace std;
class player
{
public:
	string name;
	Pokemon chosenPokemon;

	player();//default constructor
	player(string p_name, Pokemon p_chosenPokemon);//Parameterized constructor

	void choosePokemon(int choice);//Method to choose pokemon
};

