#pragma once
#include "Spell.h"
#include "Unit.h"
class DamageSpell :
	public Spell
{
public:
	DamageSpell();
	~DamageSpell();
	int damageEffect(Unit& target);
};

