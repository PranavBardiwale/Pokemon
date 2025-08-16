#include "Zubat.h"
#include "PokemonType.h"
#include <iostream>

using namespace std;

Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}

void Zubat::attack(Pokemon* target){
	supersonic(target);
    cout << name << " uses Supersonic on " << target.name << "!\n";
    target.TakeDamage(20);
}
