#include "Charmander.h"
#include "PokemonType.h"
#include <iostream>
using namespace std;

Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

void Charmander::flameThrower(Pokemon& target) {
    cout << name << " uses Flame Thrower on " << target.name << "!\n";
    target.TakeDamage(20);
}