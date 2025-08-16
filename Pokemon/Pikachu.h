#include"Pokemon.h"
#pragma once

class Pikachu : public Pokemon
{
public:
	Pikachu();
private:
	void attack(Pokemon* target)override;
};

