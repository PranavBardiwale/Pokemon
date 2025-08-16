#pragma once
#include"Pokemon.h"
class Zubat :public Pokemon
{
public:
	Zubat();
	void attack(Pokemon* target)override;
};