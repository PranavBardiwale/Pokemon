#include<string>
#include<vector>
#include"Pokemon.h"
#include <iostream>
using namespace std;
class Pokemon;

struct Grass {
    std::string environmentType;  // Example: "Forest", "Cave", "Riverbank"
    std::vector<Pokemon*> wildPokemonList;  // List of wild Pokémon in this grass
    int encounterRate;  // Likelihood of encountering a wild Pokémon, out of 100
};

