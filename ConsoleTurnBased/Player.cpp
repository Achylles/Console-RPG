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
	if (m_Health > 0)
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



double Player::assumeDefPosition()
{
	m_DmgTaken = 0.5;
	return m_DmgTaken;
}





