#ifndef PALADINSPELL_H
#define PALADINSPELL_H
#include "Spell.h"
#include "SpellEffect.h"
class PaladinSpell:
	public SpellEffect
{

public:
	enum e_paladinSpells
	{
		RIGHTEOUS_STRIKE = 201,
		HEAL = 202,
		SHIELD = 203
	};
	PaladinSpell(string spellName, int spellValue, int cooldown, int manaCost);
	~PaladinSpell();
	void initializeSpell(Unit* caster, Unit* target, e_paladinSpells spell);

protected:

};
#endif
