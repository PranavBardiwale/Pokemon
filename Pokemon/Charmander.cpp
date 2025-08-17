#include "Charmander.h"
#include "PokemonType.h"
#include "Move.h"
#include "Utility.h"
#include <iostream>
using namespace std;

Charmander::Charmander()
    : Pokemon("Charmander", PokemonType::FIRE, 95, {
        Move("EMBER", 20),
        Move("SCRATCH", 15),
        Move("BLAZING CHARGE", 70)
        }) {
}

void Charmander::attack(Move selectedMove, Pokemon* target)
{
    Pokemon::attack(selectedMove, target);

    if (selectedMove.name == "BLAZING CHARGE")
    {
        // Recoil effect: Charmander takes recoil damage
        this->takeDamage(10); // Fixed recoil damage
        std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
        Utility::Utility::waitForEnter();
    }
}