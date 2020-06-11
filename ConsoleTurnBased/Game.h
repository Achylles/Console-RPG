#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "EnemyList.h"
#include <string>
using namespace std;
class Game
{
public:
	void playGame();
	void playerActionMenu();
protected:
	std::unique_ptr<Player> player;
	EnemyList* enemylist;
};

#endif //GAME_H