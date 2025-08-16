#pragma once
#include"Pokemon.h"
class Squirtle: public Pokemon
{
public:
	Squirtle();
private:
	void attack(Pokemon* target)override;
};

