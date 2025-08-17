#pragma once
#include"Pokemon.h"
class Squirtle : public Pokemon {
public:
    Squirtle();
    void attack(Move selectedMove, Pokemon* target) override;
};


