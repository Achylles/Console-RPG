#include "MagePlayer.h"



MagePlayer::MagePlayer()
{
	m_AtkDamage = 15;
	m_Health = 115;
	m_Mana = 100;
	string name;
	cout << "\nChoose a name for your character: ";
	getline(cin, name);
	m_Name = "Miraculous " + name;
	cout << "\nWelcome, " << m_Name;
}


MagePlayer::~MagePlayer()
{
}




//player chooses spell from a list. The list should be initialised from vectors
//vector<string> spellNamesVec; for(