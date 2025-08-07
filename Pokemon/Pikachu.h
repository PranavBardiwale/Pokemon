#include"Pokemon.h"
#pragma once

class Pikachu : public Pokemon
{
public:
	Pikachu();
private:
	void thunderShock(Pokemon& target);
};

