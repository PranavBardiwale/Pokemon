#include "Squirtle.h"
#include <iostream>
#include "PokemonType.h"

using namespace std;

Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 35) {}

void Squirtle::attack(Pokemon* target) {
	WaterSplash(target);
	cout << name << " uses Water Splash on " << target.name << "!\n";
	target.TakeDamage(20);
}