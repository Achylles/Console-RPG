#pragma once
#include "Creature.h"
using namespace std;

class Player :
	public Unit
{
public:
	Player(const string& name);
	~Player();
	static int actionsLeft;
	//virtual void takeDamage(int amount);
	void attack(Creature* cr);

	//virtual void cast(Spell& pSpell);
	bool isAlive();
	//TODO: add resistances
	//TODO: add miss chance on attack
	//TODO: add critical hit
protected:
	string m_Name;
	int damage = 15 + 5*(level-1);
	int health = 100 + 25*(level-1);
	int level = 1;
	int xp = 0;
	
};