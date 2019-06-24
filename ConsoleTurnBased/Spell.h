#ifndef SPELL_H
#define SPELL_H
#include "Player.h"
#include "SpellEffect.h"
#include <vector>
#include <string>
using namespace std;
class Spell
{

public:

	//getters here
	string getSpellName() const { return m_SpellName; }
	int getSpellValue() const { return m_SpellValue; }
	int getCooldown() const { return m_Cooldown; }
	int getManaCost() const { return m_ManaCost; }
protected:
	string m_SpellName;
	int m_SpellValue;
	int m_Cooldown;
	int m_ManaCost;
};
#endif

