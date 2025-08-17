#include"Pokemon.h"
#pragma once

class Charmander : public Pokemon {
public:
    Charmander();
    void attack(Move selectedMove, Pokemon* target) override;
};
