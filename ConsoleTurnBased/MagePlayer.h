#pragma once
#include "Player.h"
#include "MageSpell.h"
class MagePlayer :
	public Player
{
public:
	MagePlayer();
	~MagePlayer();


protected:
	vector<MageSpell> mageSpells;
};

