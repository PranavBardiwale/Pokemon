#include "player.h"
#include<iostream>

// Default constructor
player::player() {
    name = "Trainer";
    chosenPokemon = Pokemon(); // Using the default Pokemon constructor
}

// Parameterized constructor
player::player(string p_name, Pokemon p_chosenPokemon) {
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

void player::choosePokemon(int choice) {
    switch ((PokemonChoice)choice) {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
        break;
    default:
        chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
        break;
    }
    cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    utility::waitForEnter(); // Wait for user to press Enter before proceeding
}