#include"Pokemon.h"
#pragma once

class Charmander : public Pokemon
{
public:
	Charmander();
private:
	void flameThrower(Pokemon& target);
};
