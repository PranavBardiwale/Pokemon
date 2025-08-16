#include "Pokemon.h"
#include <iostream>
#include"PokemonType.h"

Pokemon::Pokemon():name("unknown"),type(PokemonType::NORMAL),health(50),attackPower(10){}
// Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health,int p_attackPower): name(p_name),
type(p_type),
health(p_health),
attackPower(p_attackPower){
}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other):name(other.name),type(other.type),health(other.health),attackPower(other.attackPower) {}

// Destructor
Pokemon::~Pokemon() {
    // Destructor message removed
}

/*void Pokemon::attack(Pokemon& target) {
	int damage = attackPower; // Example damage value, could be based on type or other factors
	target.TakeDamage(damage); // Example damage value
	cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
}*/
void Pokemon::TakeDamage(int Damage) {
	health -= Damage;// Reduce health by the damage taken

    if (health < 0) {
		health = 0; // Ensure health doesn't go below 0
    }
}
bool Pokemon::isFainted() const {
	return health <= 0; // Check if health is 0 or less
}

int Pokemon::heal() {
	int healAmount = maxHealth; // Example heal amount
	return health; // Return the new health value
}