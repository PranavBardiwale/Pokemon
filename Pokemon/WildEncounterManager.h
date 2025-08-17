#include "Pokemon.h"

struct Grass;
class Pokemon;



class WildEncounterManager {
public:
    WildEncounterManager();
    Pokemon* getRandomPokemonFromGrass(const Grass& grass);
};