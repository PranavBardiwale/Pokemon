#pragma once
#include "IStatusEffect.h"
class Pokemon;
class BurnedEffect : public IStatusEffect
{
private:
	int turnsLeft;
public:
	void applyEffect(Pokemon* target)override;
	std::string getEffectName()override;
	bool turnEndEffect(Pokemon* target)override;
	void clearEffect(Pokemon* target)override;
};

