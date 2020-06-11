#pragma once
#include "EnemyList.h"
#include "Player.h"
class Level
{
public:
	void LoadLevel(int id)
	{
		std::unique_ptr<Player> p1;
		id = p1->getCurrZone();
		PlayIntroLore();
		ReadXMLData();
		enemylist->SpawnEnemy();
	}
	void PlayIntroLore();
	void ReadXMLData();


private:
	int m_id;
	std::string name;
	std::unique_ptr<EnemyList> enemylist;
};