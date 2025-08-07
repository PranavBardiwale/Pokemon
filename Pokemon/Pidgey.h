#include"Pokemon.h"
#pragma once

class Pidgey : public Pokemon
{
public:
	Pidgey();
private:
	void wingAttack(Pokemon& target);
};
