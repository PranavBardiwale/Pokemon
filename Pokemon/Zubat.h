#pragma once
#include"Pokemon.h"
class Zubat : public Pokemon {
public:
    Zubat();
    void attack(Move selectedMove, Pokemon* target) override;
};