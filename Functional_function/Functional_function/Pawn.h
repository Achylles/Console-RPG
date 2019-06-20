#pragma once
#include "Spell.h"

class Unit
{
public:
	Unit();
	virtual ~Unit();
	bool isAlive();
	void attack(Unit* target);
	void cast(Unit* target);
protected:
	string m_Name;
	int m_Health;
	int m_Damage;
};