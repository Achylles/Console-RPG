#pragma once
#include "Player.h"
#include "Spell.h"
#include "Creature.h"

class PaladinPlayer :
	public Player
{
	PaladinPlayer(string name);
	~PaladinPlayer();
	int heal(int amount);
private:
	int m_attack = 10;
	int m_health = 300;
	int m_mana = 50;
};