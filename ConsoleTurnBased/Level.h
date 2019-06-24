#ifdef LEVEL_H
#define LEVEL_H
#endif // LEVEL_H

#include "Player.h"
#include "Enemy.h"
using namespace std;
class Level
{
public:
	Level();
	~Level();

	inline int getLevel() { return m_Level; }
	void loadLevel();
	//initialise level
	//load all enemies and units
	// vector<Level*> levels;
	//levels[0]->initialise();
	//
protected:
	int m_Level;
};

