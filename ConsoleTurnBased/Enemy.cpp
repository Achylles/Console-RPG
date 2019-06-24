#include "Player.h"
#include "Enemy.h"


Enemy::Enemy(eCreatureType type)
{
	switch (type)
	{
	case 1: //RED ORC
		m_AtkDamage = 15;
		m_Health = 40;
		break;
	case 2: //GREEN ORC
		m_AtkDamage = 12;
		m_Health = 45;
		break;
	case 3: //BLUE ORC
		m_AtkDamage = 10;
		m_Health = 50;
	case 4: //ELITE ORC
		m_AtkDamage = 25;
		m_Health = 75;
		break;
	}
}
