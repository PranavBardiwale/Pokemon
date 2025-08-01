#include "Grass.h"
#include"Pokemon.h"

Grass forestGrass = {
	"Forest",
	{{"Pidgey", PokemonType::NORMAL, 40}, {"Caterpie", PokemonType::BUG, 35}},
	70
};

Grass caveGrass = {
	"Cave",
	{{"Zubat", PokemonType::POISON, 30}, {"Geodude", PokemonType::ROCK, 50}},
	80
};