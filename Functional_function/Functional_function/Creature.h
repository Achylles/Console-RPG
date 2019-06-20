#pragma once
#ifndef CREATURE_H
#define CREATURE_H

#include "Unit.h"
#include "Spell.h"
class Creature :
	public Unit
{
public:
	enum type {RED_ORC, BLUE_ORC, GREEN_ORC, ELITE_ORC};
	Creature(const string& name, int damage, int health);
	~Creature();
	bool isAlive();
	void attack();
	int takeDamage();

	inline const string getName() const { return m_Name; }
	inline int getDamage() const { return m_Damage; }
	inline int getHealth() const { return m_Health; }

private:
	string m_name;
	type m_type;
	int m_health;
	int m_damage;
};

#endif