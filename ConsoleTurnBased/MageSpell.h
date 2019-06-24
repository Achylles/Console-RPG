#ifndef MAGESPELL_H
#define MAGESPELL_H
#include "Spell.h"
#include "SpellEffect.h"
class MageSpell:
	public SpellEffect
	
{


public:
	enum e_mageSpells
	{
		FIREBALL = 101,
		FROSTBOLT = 102
	};
	MageSpell(string spellName, int spellValue, int cooldown, int manaCost);
	~MageSpell();
	void initializeSpell(Unit* caster, Unit* target, e_mageSpells spell);

};

#endif
