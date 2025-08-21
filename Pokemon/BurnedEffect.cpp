#include "BurnedEffect.h"
#include "Pokemon.h"
#include <iostream>
#include <string>

void BurnedEffect::applyEffect(Pokemon* target) {
    std::cout << target->name << " is paralyzed and cannot move!\n";
    turnsLeft = rand() % 3 + 1;
}

std::string BurnedEffect::getEffectName() {
    return "Paralyzed";
}

bool BurnedEffect::turnEndEffect(Pokemon* target) {
    if (turnsLeft <= 0) {
        clearEffect(target);
        return true;
    }
    turnsLeft--;

    int burn_chance = rand() % 4;
    if (burn_chance == 0) {
        std::cout << target->name << " is paralyzed, it cannot move!\n";
        return false;
    }

    std::cout << target->name << " shakes off the paralysis momentarily and can move!\n";
    return true;
}

void BurnedEffect::clearEffect(Pokemon* target) {
    std::cout << target->name << " is no longer paralyzed!\n";
    target->clearEffect();

}