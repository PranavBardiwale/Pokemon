#include"Pokemon.h"
#pragma once

class Pikachu : public Pokemon
{
public:
	Pikachu();

	void thunderShock(Pokemon& target);
};

