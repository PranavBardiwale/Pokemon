#include "Caterpie.h"
#include "PokemonType.h"
#include <iostream>
using namespace std;

Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 35) {}

void Caterpie::attack(Pokemon* target) {
	bugBite(target);
    target.TakeDamage(20);
}