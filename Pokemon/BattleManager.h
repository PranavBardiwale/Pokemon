#include "Pokemon.h"
#include "Player.h"

class BattleManager {
public:
	// Function to handle the battle between player's Pokémon and wild Pokémon
	void startBattle(Player& player, Pokemon& wildPokemon);
private:
	void Battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	void handleBattleOutcome(Player& player, bool playerWon);
};