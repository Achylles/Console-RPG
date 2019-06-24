#pragma once
#include "Player.h"
#include "PaladinSpell.h"
class PaladinPlayer :
	public Player
{
public:
	PaladinPlayer();
	~PaladinPlayer();
protected:
	vector<PaladinSpell> paladinSpells;
};

