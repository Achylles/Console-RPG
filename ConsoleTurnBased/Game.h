#ifndef GAME_H
#define GAME_H
#include "PaladinPlayer.h"
#include "MagePlayer.h"
#include "Enemy.h"
#include <string>
#include <windows.h>
using namespace std;
class Game
{
public:
	void mainMenu();
	int characterCreationMenu();
	void playerIntro();
	void playGame();
	int playerActionMenu();
	void EnemyCombat();
protected:
	Player *player;
	Enemy *enemy;
	vector<Enemy*> enemyList;
	PaladinSpell* paladinSpell;
	MageSpell* mageSpell;
private:
	string m_GameName="Dark Age";
};

#endif //GAME_H