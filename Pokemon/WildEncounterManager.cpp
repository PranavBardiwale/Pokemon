#include "WildEncounterManager.h"
#include "Grass.h" // Assuming the Grass struct is defined here
#include "Pokemon.h" // Assuming the Pokemon class is defined here  
#include <cstdlib> // For rand()
#include <ctime>   // For time()



WildEncounterManager::WildEncounterManager() {
    srand(time(0)); // Seed the random number generator
}

Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
    int randomIndex = rand() % grass.wildPokemonList.size();

    Pokemon* wildPokemon = grass.wildPokemonList[randomIndex];

    return wildPokemon;
}