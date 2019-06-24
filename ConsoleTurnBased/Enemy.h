#ifndef ENEMY_H
#define ENEMY_H
#include "Unit.h"

enum eCreatureType
{
	RED_ORC=1,
	BLUE_ORC,
	GREEN_ORC,
	ELITE_ORC
};

class Enemy : public Unit
{

public:
	Enemy(eCreatureType type);
protected:
	int m_DropXP;
};
#endif