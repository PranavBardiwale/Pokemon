#include "Bulbasaur.h"
#include<iostream>
#include "PokemonType.h"
using namespace std;

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 100, 35) {}

void Bulbasaur::attack(Pokemon* target) {
	vineWhip(target);
	cout << name << " uses Vine Whip on " << target.name << "!\n";
	target.TakeDamage(20);
}