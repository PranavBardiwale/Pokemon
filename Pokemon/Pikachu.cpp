#include "Pikachu.h"
#include <iostream>
#include"PokemonType.h"
using namespace std;

Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}

void Pikachu::thunderShock(Pokemon& target) {
	cout << name << "uses Tunder shock on " << target.name << "\n";
	target.TakeDamage(20);
}