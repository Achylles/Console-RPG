#include "Player.h"
#include "pch.h"



Player::Player(const string & name) : m_Name(name)
{
}

Player::~Player()
{

}

int Player::actionsLeft = 0;



void Player::attack(Creature* cr)
{
	cout << "\nSelect your target:";
	
	//displayTargets();
	//selectTarget();
	//target.DealDamage(
}



bool Player::isAlive()
{
	return (health > 0);
}

