#include"Pokemon.h"
#pragma once

class Pikachu : public Pokemon {
public:
    Pikachu();
    void attack(Move selectedMove, Pokemon* target) override;
};