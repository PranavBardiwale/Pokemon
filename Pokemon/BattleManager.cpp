#include "BattleManager.h"
#include <iostream>
#include "Pokemon.h"
#include "PokemonType.h"
#include "utility.h"
using namespace std;

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
    cout<<"A wild "<< wildPokemon.name << " appeared!\n";
    // Start the battle with the player's chosen Pokémon
    Battle(player.chosenPokemon, wildPokemon);

}
void BattleManager::Battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
        playerPokemon.attack(wildPokemon); // Player attacks first

        if (!wildPokemon.isFainted()) {
            wildPokemon.attack(playerPokemon); // Wild Pokémon attacks back
        }
		//Pause to show battle progress
        Utility::waitForEnter();
    }

    /*if (playerPokemon.isFainted()) {
        cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
    }
    else {
        cout << "You defeated the wild " << wildPokemon.name << "!\\n";
    }*/
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {
    if (playerWon) {
        std::cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else {
        std::cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        std::cout << "Game Over.\n";
    }
}