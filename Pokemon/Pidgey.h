#include"Pokemon.h"
#pragma once

class Pidgey : public Pokemon
{
public:
	Pidgey();
private:
	void attack(Pokemon* target)override;
};
