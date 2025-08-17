#pragma once
#include <string>
#include "Pokemon.h"

using namespace std;


class Player {
public:
    string name;
    Pokemon* chosenPokemon;

    Player(); // Default constructor
    Player(string p_name); // Parameterized constructor

    void choosePokemon(int choice); // Method to choose a Pokemon
};
