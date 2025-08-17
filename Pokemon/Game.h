#pragma once
#include "Player.h"
#include "Grass.h"

// class Player;

class Game {
private:
    Grass forestGrass;
    Pokemon* wildPokemon;

public:
    Game();
    ~Game();
    void gameLoop(Player* player);
    void visitPokeCenter(Player* player);
};
