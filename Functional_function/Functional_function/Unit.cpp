#include "Unit.h"
#include "pch.h"


Unit::Unit()
{

}


Unit::~Unit()
{

}

bool Unit::isAlive()
{
	return (m_Health > 0);
}

int Unit::attack(Unit * target)
{
	target->takeDamage(target->getDamage());
	return getDamage();
}

void Unit::cast(Unit * target)
{

}

void Unit::takeDamage(int amount)
{
	m_Health -= amount;
}


