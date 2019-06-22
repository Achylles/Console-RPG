#ifndef ENEMY_H
#define ENEMY_H

#include <vector>
#include "Unit.h"

enum EnemyType
{
	RED_ORC,
	BLUE_ORC,
	GREEN_ORC,
	ELITE_ORC
};

class Enemy : public Unit
{

public:
	Enemy();
protected:
	int m_DropXP;
};
#endif