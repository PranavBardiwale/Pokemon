#include "BattleManager.h"
#include <iostream>
#include "Pokemon.h"
#include "PokemonType.h"
#include "player.h"
#include "utility.h"
#include "BattleState.h"
using namespace std;

BattleState BattleManager::battleState;

void BattleManager::startBattle(Player* player, Pokemon* wildPokemon) {
    battleState.playerPokemon = player->chosenPokemon;
    battleState.wildPokemon = wildPokemon;
    battleState.playerTurn = true;
    battleState.battleOngoing = true;

    cout << "A wild " << wildPokemon->name << " appeared!\n";
    Utility::waitForEnter();

    battle();
}

void BattleManager::stopBattle() { battleState.battleOngoing = false; }

void BattleManager::battle() {
    while (battleState.battleOngoing)
    {
        if (battleState.playerTurn && battleState.playerPokemon->canAttack())
            battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
		else if (!battleState.playerTurn && battleState.wildPokemon->canAttack())
            battleState.wildPokemon->selectAndUseMove(battleState.playerPokemon);

        updateBattleState();
        battleState.playerTurn = !battleState.playerTurn;
        Utility::waitForEnter();
    }

    handleBattleOutcome();
}

void BattleManager::updateBattleState() {
    if (battleState.playerPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
}

void BattleManager::handleBattleOutcome() {
    if (battleState.playerPokemon->isFainted()) {
        cout << battleState.playerPokemon->name
            << " has fainted! You lose the battle.\n";
    }
    else {
        cout << "You defeated the wild " << battleState.wildPokemon->name << "!\n";
    }
}