#include"Pokemon.h"
#pragma once

class Pidgey : public Pokemon {
public:
    Pidgey();
    void attack(Move selectedMove, Pokemon* target) override;
};