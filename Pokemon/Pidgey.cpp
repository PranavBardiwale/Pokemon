#include "Pidgey.h"
#include<iostream>
#include "PokemonType.h"
using namespace std;

Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}

void Pidgey::attack(Pokemon* target) {
	wingAttack(target);
	cout << name << " uses Vine Whip on " << target.name << "!\n";
	target.TakeDamage(20);
}