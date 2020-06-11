#pragma once
#include"Enemy.h"
class EnemyList : public Enemy
{
public:
	void SpawnEnemy(std::unique_ptr<Enemy> enemy)
	{
		EnemyList.emplace_back(enemy);

	}

	void DestroyEnemy(std::vector<std::unique_ptr<Enemy>>::const_iterator iter)
	{
		if ((*iter)->getHealth() <= 0)
		{
			EnemyList.erase(iter);
		}
	}

private:
	std::vector<std::unique_ptr<Enemy>> EnemyList;
};