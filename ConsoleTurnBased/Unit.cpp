#include <iostream>
#include "Unit.h"
#include <ctime>
Unit::Unit()
{
}


Unit::~Unit()
{

}

int Unit::attack(Unit* target)
{
	srand(time(0));
	int amount;
	amount = getAtkDamage(); //TODO: Do random damage ;3
	target->takeDamage(amount);
	return amount;
}

void Unit::cast(Unit* target)
{
}

void Unit::initialize(string & name, int atkDamage, int health)
{
	m_Name = name;
	m_AtkDamage = atkDamage;
	m_Health = health;
}

bool Unit::isAlive()
{
	return (m_Health > 0);
	//TODO: Update Game and check if (Unit::isAlive() = false) game.gameOver();
}

void Unit::takeDamage(int amount)
{
	m_Health -= amount;
}