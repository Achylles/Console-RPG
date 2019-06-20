#pragma once
#include "Player.h"

using namespace std;

class Game
{
public:
	Game();
	~Game();
	void playGame();
	void printIntro();
	void printOptionsMenu();

private:
	Player * p;
	Creature * c;
	vector<Creature*> m_Creatures;
};
