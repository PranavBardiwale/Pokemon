#include "Pikachu.h"
#include <iostream>
#include"PokemonType.h"
#include "Move.h"
using namespace std;

Pikachu::Pikachu()
    : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, {
        Move("THUNDER SHOCK", 20),
        Move("QUICK ATTACK", 10),
        Move("THUNDER BOLT", 80)
        }) {
}

void Pikachu::attack(Move selectedMove, Pokemon* target)
{
    if (selectedMove.name == "THUNDER BOLT")
    {
        // 80% chance to hit
        if (rand() % 100 < 80)
        {
            Pokemon::attack(selectedMove, target);
            std::cout << "... and it hit successfully!\n";
        }
        else
            std::cout << "... but it missed!\n";
    }
    else if (selectedMove.name == "THUNDER SHOCK") {
        if (target->canApplyEffect())
            target->applyEffect(StatusEffectType::PARALYZED);
    }
    else {
		Pokemon::attack(selectedMove, target);
    }
        

}