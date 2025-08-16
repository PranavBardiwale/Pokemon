#include"Pokemon.h"
#pragma once

class Caterpie : public Pokemon
{
public:
	Caterpie();
private:
	void attack(Pokemon* target)override;
};
