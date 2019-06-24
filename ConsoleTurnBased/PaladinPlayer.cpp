#include "PaladinPlayer.h"



PaladinPlayer::PaladinPlayer()
{
	m_AtkDamage = 20;
	m_Health = 125;
	m_Mana = 60;
	string name;
	cout << "\nChoose a name for your character: ";
	getline(cin, name);
	m_Name = "Holy " + name;
}


PaladinPlayer::~PaladinPlayer()
{
}
