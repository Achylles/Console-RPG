#include "Player.h"
#include "Enemy.h"

Player::Player()
{
	m_Level = 1;
	m_Experience = 0;
	m_ExperienceToNextLevel = 100 + 20 * (m_Level - 1);
    m_DmgTaken = 1.0;
}


bool Player::isAlive()
{
	while (m_Health > 0)
		return true;
	if (m_Health <= 0)
	{
		cout << "\n---YOU HAVE DIED---" << endl;
		return false;
	}
}

void Player::levelUp()
{
	if (m_ExperienceToNextLevel == 0)
		m_Level++;
}

void Player::playerActionMenu()
{
	cout << "Choose your move:" << endl
		<< "1) Attack" << endl
		<< "2) Assume defensive position." << endl
		<< "3) Cast a spell." << endl;
}

int Player::playerActionChoice()
{

	m_DmgTaken = 1.0;
	Unit target;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		attack(&target);
		break;
	case 2:
		assumeDefPosition();
		break;
	default:
		attack(&target);
	}
	m_ActionsLeft--;
	return choice;
}

void Player::playerTurn()
{
	if (isAlive())
	{
		m_ActionsLeft++;
		playerActionMenu();
		playerActionChoice();
	}
}

double Player::assumeDefPosition()
{
	m_DmgTaken = 0.5;
	return m_DmgTaken;
}
