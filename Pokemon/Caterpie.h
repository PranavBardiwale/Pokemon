#include"Pokemon.h"
#pragma once

class Caterpie : public Pokemon {
public:
    Caterpie();
    void attack(Move selectedMove, Pokemon* target) override;
};
