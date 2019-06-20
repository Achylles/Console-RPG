#pragma once
#include <iostream>
#include <array>
#include "Creature.h"
class Level
{
public:
	Level(int level);
	~Level();
	int initialiseLevel();
protected:
	int m_level;
};

