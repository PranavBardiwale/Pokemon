#include"Pokemon.h"
#pragma once

class Caterpie : public Pokemon
{
public:
	Caterpie();
private:
	void bugBite(Pokemon& target);
};
