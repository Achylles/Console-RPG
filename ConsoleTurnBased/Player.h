#ifndef PLAYER_H
#define PLAYER_H

#include "Unit.h"
#include "Spell.h"

class Player : public Unit
{
public:
	Player();
	bool isAlive();
	void levelUp();
	void playerActionMenu();
	int playerActionChoice();
	inline int getExperience() const {	return m_Experience;}
	void playerTurn();
	double assumeDefPosition();
	int getCurrZone()
	{
		return currZone;
	}
	//levelup function
	//dying function
	//getXP function
	//actions function
private:
	unsigned int m_Level;
	unsigned int m_Experience;
	unsigned int m_ExperienceToNextLevel;
	int m_ActionsLeft;
	double m_DmgTaken;
	int currZone;
};
#endif //PLAYER_H