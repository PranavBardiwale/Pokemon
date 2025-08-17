#pragma once
#include "Pokemon.h"

class Bulbasaur : public Pokemon {
public:
    Bulbasaur();
    void attack(Move selectedMove, Pokemon* target) override;
};

