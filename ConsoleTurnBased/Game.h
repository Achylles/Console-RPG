#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Enemy.h"
#include <string>
using namespace std;
class Game
{
public:
	void playGame();
	void playerActionMenu();
protected:
	Unit* p1 = new Player;
	Unit* p2 = new Enemy;
	Unit* p3 = new Enemy;
	Unit* p4 = new Enemy;
};

#endif //GAME_H