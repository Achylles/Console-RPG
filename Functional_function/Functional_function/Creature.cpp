#include "pch.h"
#include "Creature.h"

Creature::Creature(const string& name, int damage, int health) : m_name(name), m_damage(damage), m_health(health)
{
	//m_damage = new int(damage);
}
Creature::~Creature()
{
}
//virtual destructor() { delete m_damage; }
bool Creature::isAlive()
{
	while (m_health > 0)
		return true;
}

void Creature::attack()
{
	
}

int Creature::takeDamage()
{

	return 0;
}
