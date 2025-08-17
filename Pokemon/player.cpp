#include "Game.h"
#include "BattleManager.h"
#include "WildEncounterManager.h"
#include "Player.h"
#include "Caterpie.h"
#include "Pidgey.h"
#include "Zubat.h"
#include "Utility.h"
#include <iostream>
#include"PokemonChoice.h"
#include "PokemonType.h"
#include "Charmander.h"
#include "Bulbasaur.h"
#include "Squirtle.h"
#include "Pikachu.h"
#include <iostream>
using namespace std;



Game::Game() {
    // Create a sample grass environment with actual Pokemon objects
    forestGrass = { "Forest", {new Pidgey(), new Caterpie(), new Zubat()}, 70 };
}

Player::Player() {
    name = "Trainer";
}

Player::Player(std::string p_name) {
    name = p_name;
}

void Player::choosePokemon(int choice) {
    switch ((PokemonChoice)choice) {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = new Charmander();
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = new Bulbasaur();
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = new Squirtle();
        break;
    default:
        chosenPokemon = new Pikachu();
        break;
    }
    std::cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
    Utility::waitForEnter(); // Wait for user to press Enter before
    // proceeding
}