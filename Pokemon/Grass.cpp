#include "Grass.h"
#include "PokemonType.h"
#include "Move.h"

Grass forestGrass = {
    "Forest",
    {
        new Pokemon("Pidgey", PokemonType::NORMAL, 40, {Move("GUST", 15), Move("TACKLE", 10)}),
        new Pokemon("Caterpie", PokemonType::BUG, 35, {Move("TACKLE", 10), Move("STRING SHOT", 5)})
    },
    70
};

Grass caveGrass = {
    "Cave",
    {
        new Pokemon("Zubat", PokemonType::POISON, 30, {Move("BITE", 12), Move("WING ATTACK", 10)}),
        new Pokemon("Geodude", PokemonType::ROCK, 50, {Move("TACKLE", 10), Move("DEFENSE CURL", 5)})
    },
    80
};