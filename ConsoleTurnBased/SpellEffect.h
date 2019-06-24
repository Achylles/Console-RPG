#ifndef SPELLEFFECT_H
#define SPELLEFFECT_H
#include "Spell.h"
class SpellEffect:
	public Spell
{
public:
	enum e_SpellEffect
	{
		DAMAGE = 1,
		HEAL = 2,
		CC = 3,
		SHIELD = 4,
		WEAKEN = 5
	};
	SpellEffect();
	~SpellEffect();
	void returnSpellEffect(Unit* u, e_SpellEffect effect);
};
#endif
