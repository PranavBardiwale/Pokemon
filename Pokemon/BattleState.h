#include "Pokemon.h"

struct BattleState {
	Pokemon* playerPokemon; // Pointer to the player's Pokémon
	Pokemon* wildPokemon;   // Pointer to the wild Pokémon
	bool playerTurn; // True if it's the player's turn, false if it's the wild Pokémon's turn
	bool battleOngoing; // True if the battle is ongoing, false if the battle has ended
};