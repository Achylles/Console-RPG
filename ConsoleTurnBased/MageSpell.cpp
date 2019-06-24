#include "MageSpell.h"


MageSpell::MageSpell(string spellName, int spellValue, int cooldown, int manaCost)
{
	m_SpellName = spellName;
	m_SpellValue = spellValue;
	m_Cooldown = cooldown;
	m_ManaCost = manaCost;
	
}


MageSpell::~MageSpell()
{
}

void MageSpell::initializeSpell(Unit* caster, Unit* target, e_mageSpells spell)
{

	
}

