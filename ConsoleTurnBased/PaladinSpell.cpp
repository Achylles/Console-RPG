#include "PaladinSpell.h"



PaladinSpell::PaladinSpell(string spellName, int spellValue, int cooldown, int manaCost)
{
	m_SpellName = spellName;
	m_SpellValue = spellValue;
	m_Cooldown = cooldown;
	m_ManaCost = manaCost;
}


PaladinSpell::~PaladinSpell()
{
}

void PaladinSpell::initializeSpell(Unit* caster, Unit* target, e_paladinSpells spell)
{
	switch (spell)
	{
	case 201: //Righteous Strike
		new PaladinSpell("Righteous Strike", 30, 3, 40);
		returnSpellEffect(target, e_SpellEffect::DAMAGE);
		break;
	case 202: //Battle Heal
		new PaladinSpell("Battle Heal", -25, 3, 40);
		returnSpellEffect(caster, e_SpellEffect::HEAL);
		break;
	//case 203:
	//default:
	}
	caster->useMana(this->m_ManaCost);
	delete this;
}
