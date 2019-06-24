#include "SpellEffect.h"



SpellEffect::SpellEffect()
{
}


SpellEffect::~SpellEffect()
{
}

void SpellEffect::returnSpellEffect(Unit * u, e_SpellEffect effect)
{

	switch (effect)
	{
	case 1: //attack
		u->takeDamage(m_SpellValue);
		break; 
	case 2: //Heal
		u->takeDamage(m_SpellValue);
		break;
	case 3: //CC
		//TODO: u->freezeAction(m_SpellValue);
		//for this, just reduce the actions a Unit can perform to zero for X amount of turns.
	case 4: //Shield
		//TODO: u->absorbDamage(m_SpellValue); //add second health bar and while it exists, the target will lose second health instead of first. 
		//Store current health in another variable.
	case 5: //Debuff
		u->setAttackDamage(0.5);
	}
}
